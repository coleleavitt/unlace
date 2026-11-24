	.text
	.globl	unlace_pick
	.type	unlace_pick,@function
	.p2align	4
unlace_pick:
	testl	%edi, %edi
	jne	.Lshared
	xorl	%eax, %eax
	retq
	.size	unlace_pick, .-unlace_pick

	.globl	unlace_alloc
	.type	unlace_alloc,@function
	.p2align	4
unlace_alloc:
	pushq	%rbx
.Lshared:
	movl	$64, %edi
	callq	swift_task_alloc@PLT
	movq	%rax, 0x10(%r14)
	popq	%rbx
	retq
	.size	unlace_alloc, .-unlace_alloc
	.section	.note.GNU-stack,"",@progbits
