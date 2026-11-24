@ Thumb-1 switches dispatched through out-of-line case helpers, the calling
@ convention gcc uses for a switch on ARMv6-M or at -Os: `bl helper` with the
@ case table right after the call; the helper reads the entry for the index in
@ r0 and returns into the case.  disp_<kind> dispatches through case_<kind>
@ (byte, halfword or word table, unsigned or signed).  The helpers are written
@ out instruction for instruction as libgcc's lib1funcs.S has them.
@
@ Build (clang 20, ld.lld):
@   clang --target=thumbv6m-none-eabi -c thumb1case_le32.s -o thumb1case_le32.o
@   ld.lld -e _start --build-id=none -o thumb1case_le32.elf thumb1case_le32.o
@   llvm-strip --strip-all -o thumb1case_le32 thumb1case_le32.elf
	.syntax unified
	.cpu cortex-m0
	.thumb
	.text

@ Cortex-M vector table: initial stack pointer, then the reset handler.
	.p2align 2
vectors:
	.word	0x20001000
	.word	_start

	.p2align 1
	.global _start
	.type _start, %function
	.thumb_func
_start:
	movs	r0, #1
	bl	disp_uqi
	movs	r0, #1
	bl	disp_sqi
	movs	r0, #1
	bl	disp_uhi
	movs	r0, #1
	bl	disp_shi
	movs	r0, #1
	bl	disp_si
	b	_start
	.size _start, .-_start

	.p2align 1
	.global disp_uqi
	.type disp_uqi, %function
	.thumb_func
disp_uqi:
	push	{lr}
	cmp	r0, #4
	bhi	.Ldisp_uqi_def
	bl	case_uqi
.Ldisp_uqi_tab:
	.byte	(.Ldisp_uqi_0-.Ldisp_uqi_tab)/2
	.byte	(.Ldisp_uqi_1-.Ldisp_uqi_tab)/2
	.byte	(.Ldisp_uqi_2-.Ldisp_uqi_tab)/2
	.byte	(.Ldisp_uqi_3-.Ldisp_uqi_tab)/2
	.byte	(.Ldisp_uqi_4-.Ldisp_uqi_tab)/2
	.p2align 1
.Ldisp_uqi_0:
	movs	r0, #10
	pop	{pc}
.Ldisp_uqi_1:
	movs	r0, #11
	pop	{pc}
.Ldisp_uqi_2:
	movs	r0, #12
	pop	{pc}
.Ldisp_uqi_3:
	movs	r0, #13
	pop	{pc}
.Ldisp_uqi_4:
	movs	r0, #14
	pop	{pc}
.Ldisp_uqi_def:
	movs	r0, #0
	pop	{pc}
	.size disp_uqi, .-disp_uqi

	.p2align 1
	.global disp_sqi
	.type disp_sqi, %function
	.thumb_func
disp_sqi:
	push	{lr}
	b	.Ldisp_sqi_entry
.Ldisp_sqi_0:
	movs	r0, #20
	pop	{pc}
.Ldisp_sqi_entry:
	cmp	r0, #3
	bhi	.Ldisp_sqi_def
	bl	case_sqi
.Ldisp_sqi_tab:
	.byte	(.Ldisp_sqi_0-.Ldisp_sqi_tab)/2
	.byte	(.Ldisp_sqi_1-.Ldisp_sqi_tab)/2
	.byte	(.Ldisp_sqi_2-.Ldisp_sqi_tab)/2
	.byte	(.Ldisp_sqi_3-.Ldisp_sqi_tab)/2
	.p2align 1
.Ldisp_sqi_1:
	movs	r0, #21
	pop	{pc}
.Ldisp_sqi_2:
	movs	r0, #22
	pop	{pc}
.Ldisp_sqi_3:
	movs	r0, #23
	pop	{pc}
.Ldisp_sqi_def:
	movs	r0, #0
	pop	{pc}
	.size disp_sqi, .-disp_sqi

	.p2align 1
	.global disp_uhi
	.type disp_uhi, %function
	.thumb_func
disp_uhi:
	push	{lr}
	cmp	r0, #3
	bhi	.Ldisp_uhi_def
	bl	case_uhi
.Ldisp_uhi_tab:
	.2byte	(.Ldisp_uhi_0-.Ldisp_uhi_tab)/2
	.2byte	(.Ldisp_uhi_1-.Ldisp_uhi_tab)/2
	.2byte	(.Ldisp_uhi_2-.Ldisp_uhi_tab)/2
	.2byte	(.Ldisp_uhi_3-.Ldisp_uhi_tab)/2
	.p2align 1
.Ldisp_uhi_0:
	movs	r0, #30
	pop	{pc}
.Ldisp_uhi_1:
	movs	r0, #31
	pop	{pc}
.Ldisp_uhi_2:
	movs	r0, #32
	pop	{pc}
.Ldisp_uhi_3:
	movs	r0, #33
	pop	{pc}
.Ldisp_uhi_def:
	movs	r0, #0
	pop	{pc}
	.size disp_uhi, .-disp_uhi

	.p2align 1
	.global disp_shi
	.type disp_shi, %function
	.thumb_func
disp_shi:
	push	{lr}
	b	.Ldisp_shi_entry
.Ldisp_shi_0:
	movs	r0, #40
	pop	{pc}
.Ldisp_shi_entry:
	cmp	r0, #2
	bhi	.Ldisp_shi_def
	bl	case_shi
.Ldisp_shi_tab:
	.2byte	(.Ldisp_shi_0-.Ldisp_shi_tab)/2
	.2byte	(.Ldisp_shi_1-.Ldisp_shi_tab)/2
	.2byte	(.Ldisp_shi_2-.Ldisp_shi_tab)/2
	.p2align 1
.Ldisp_shi_1:
	movs	r0, #41
	pop	{pc}
.Ldisp_shi_2:
	movs	r0, #42
	pop	{pc}
.Ldisp_shi_def:
	movs	r0, #0
	pop	{pc}
	.size disp_shi, .-disp_shi

	.p2align 1
	.global disp_si
	.type disp_si, %function
	.thumb_func
disp_si:
	push	{lr}
	cmp	r0, #2
	bhi	.Ldisp_si_def
	bl	case_si
	.p2align 2
.Ldisp_si_tab:
	.word	.Ldisp_si_0-.Ldisp_si_tab
	.word	.Ldisp_si_1-.Ldisp_si_tab
	.word	.Ldisp_si_2-.Ldisp_si_tab
	.p2align 1
.Ldisp_si_0:
	movs	r0, #50
	pop	{pc}
.Ldisp_si_1:
	movs	r0, #51
	pop	{pc}
.Ldisp_si_2:
	movs	r0, #52
	pop	{pc}
.Ldisp_si_def:
	movs	r0, #0
	pop	{pc}
	.size disp_si, .-disp_si

	.p2align 1
	.type case_uqi, %function
	.thumb_func
case_uqi:
	push	{r1}
	mov	r1, lr
	lsrs	r1, r1, #1
	lsls	r1, r1, #1
	ldrb	r1, [r1, r0]
	lsls	r1, r1, #1
	add	lr, lr, r1
	pop	{r1}
	bx	lr
	.size case_uqi, .-case_uqi

	.p2align 1
	.type case_sqi, %function
	.thumb_func
case_sqi:
	push	{r1}
	mov	r1, lr
	lsrs	r1, r1, #1
	lsls	r1, r1, #1
	ldrsb	r1, [r1, r0]
	lsls	r1, r1, #1
	add	lr, lr, r1
	pop	{r1}
	bx	lr
	.size case_sqi, .-case_sqi

	.p2align 1
	.type case_uhi, %function
	.thumb_func
case_uhi:
	push	{r0, r1}
	mov	r1, lr
	lsrs	r1, r1, #1
	lsls	r0, r0, #1
	lsls	r1, r1, #1
	ldrh	r1, [r1, r0]
	lsls	r1, r1, #1
	add	lr, lr, r1
	pop	{r0, r1}
	bx	lr
	.size case_uhi, .-case_uhi

	.p2align 1
	.type case_shi, %function
	.thumb_func
case_shi:
	push	{r0, r1}
	mov	r1, lr
	lsrs	r1, r1, #1
	lsls	r0, r0, #1
	lsls	r1, r1, #1
	ldrsh	r1, [r1, r0]
	lsls	r1, r1, #1
	add	lr, lr, r1
	pop	{r0, r1}
	bx	lr
	.size case_shi, .-case_shi

	.p2align 1
	.type case_si, %function
	.thumb_func
case_si:
	push	{r0, r1}
	mov	r1, lr
	adds	r1, #2
	lsrs	r1, r1, #2
	lsls	r0, r0, #2
	lsls	r1, r1, #2
	ldr	r0, [r1, r0]
	adds	r0, r0, r1
	mov	lr, r0
	pop	{r0, r1}
	mov	pc, lr
	.size case_si, .-case_si
