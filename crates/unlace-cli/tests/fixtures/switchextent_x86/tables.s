	.text
	.globl	bytesel
	.type	bytesel, @function
# A byte selector with no range check (csplit's regcomp shape): its table ends where the
# function's second table starts.
bytesel:
	movzbl	(%rdi), %eax
	leaq	.Lt1(%rip), %rdx
	movslq	(%rdx,%rax,4), %rax
	addq	%rdx, %rax
	jmp	*%rax
.La0:	movl	$10, %eax
	ret
.La1:	movl	$11, %eax
	ret
.La2:	movzbl	1(%rdi), %eax
	cmpl	$2, %eax
	ja	.Ldef
	leaq	.Lt2(%rip), %rdx
	movslq	(%rdx,%rax,4), %rax
	addq	%rdx, %rax
	jmp	*%rax
.Lb0:	movl	$20, %eax
	ret
.Lb1:	movl	$21, %eax
	ret
.Lb2:	movl	$22, %eax
	ret
.Ldef:	movl	$-1, %eax
	ret
	.size	bytesel, .-bytesel

	.globl	lastsel
	.type	lastsel, @function
# An OCaml-style dispatch: the selector is a byte, the table is the function's last, and the
# next function's table follows it.
lastsel:
	movzbl	(%rdi), %eax
	leaq	.Lt3(%rip), %rdx
	movslq	(%rdx,%rax,4), %rax
	addq	%rdx, %rax
	jmp	*%rax
.Lc0:	movl	$30, %eax
	ret
.Lc1:	movl	$31, %eax
	ret
.Lc2:	movl	$32, %eax
	ret
.Lc3:	movl	$33, %eax
	ret
	.size	lastsel, .-lastsel

	.globl	nextfn
	.type	nextfn, @function
nextfn:
	cmpl	$3, %edi
	ja	.Ld2
	movl	%edi, %eax
	leaq	.Lt4(%rip), %rdx
	movslq	(%rdx,%rax,4), %rax
	addq	%rdx, %rax
	jmp	*%rax
.Ld0:	movl	$40, %eax
	ret
.Ld1:	movl	$41, %eax
	ret
.Ld2:	movl	$42, %eax
	ret
	.size	nextfn, .-nextfn

	.section	.rodata
	.align 4
.Lt1:	.long	.La0-.Lt1, .La1-.Lt1, .La2-.Lt1
.Lt2:	.long	.Lb0-.Lt2, .Lb1-.Lt2, .Lb2-.Lt2
.Lt3:	.long	.Lc0-.Lt3, .Lc1-.Lt3, .Lc2-.Lt3, .Lc3-.Lt3
.Lt4:	.long	.Ld0-.Lt4, .Ld1-.Lt4, .Ld2-.Lt4, .Ld2-.Lt4
# Readable data after the tables, as in a real .rodata: a 256-row read reaches it.
	.fill	256, 4, 0
