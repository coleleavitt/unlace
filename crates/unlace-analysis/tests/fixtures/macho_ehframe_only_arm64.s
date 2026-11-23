// Source for the `macho_ehframe_only_arm64` fixture: the `machoehframe` witness.
//
// clang -S output of three unexported, uncalled `eh_*` functions plus `_main`,
// with `.cfi_escape 0x2e, 0x00` (DW_CFA_GNU_args_size) after each eh_* start so
// compact unwind cannot describe them and the assembler emits a __TEXT,__eh_frame
// FDE for each. The link drops LC_FUNCTION_STARTS and the local symbols, so only
// the FDEs (and __unwind_info, which points at them) still record the three starts.
//
//   clang -target arm64-apple-macos11 -c macho_ehframe_only_arm64.s -o t.o
//   ld64.lld -arch arm64 -platform_version macos 11.0 11.0 \
//       -no_function_starts -x -e _main -o macho_ehframe_only_arm64 t.o
	.build_version macos, 11, 0
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	2                               ; -- Begin function eh_alpha
_eh_alpha:                              ; @eh_alpha
	.cfi_startproc
	.cfi_escape 0x2e, 0x00
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	mov	x8, #0                          ; =0x0
	mov	x9, sp
LBB0_1:                                 ; =>This Inner Loop Header: Depth=1
	strb	w0, [x9, x8]
	add	x8, x8, #1
	add	w0, w0, #1
	cmp	x8, #16
	b.ne	LBB0_1
; %bb.2:
	mov	x8, #0                          ; =0x0
	mov	w0, #0                          ; =0x0
	mov	x9, sp
LBB0_3:                                 ; =>This Inner Loop Header: Depth=1
	ldrsb	w10, [x9, x8]
	add	w0, w0, w10
	add	x8, x8, #1
	cmp	x8, #16
	b.ne	LBB0_3
; %bb.4:
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function eh_beta
_eh_beta:                               ; @eh_beta
	.cfi_startproc
	.cfi_escape 0x2e, 0x00
; %bb.0:
	sub	sp, sp, #64
	.cfi_def_cfa_offset 64
	mov	x8, #0                          ; =0x0
	mov	x9, sp
LBB1_1:                                 ; =>This Inner Loop Header: Depth=1
	eor	w10, w0, w8
	strb	w10, [x9, x8]
	add	x8, x8, #1
	cmp	x8, #64
	b.ne	LBB1_1
; %bb.2:
	mov	x8, #0                          ; =0x0
	mov	w0, #0                          ; =0x0
	mov	x9, sp
LBB1_3:                                 ; =>This Inner Loop Header: Depth=1
	ldrsb	w10, [x9, x8]
	add	w0, w0, w10
	add	x8, x8, #1
	cmp	x8, #64
	b.ne	LBB1_3
; %bb.4:
	add	sp, sp, #64
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function eh_gamma
_eh_gamma:                              ; @eh_gamma
	.cfi_startproc
	.cfi_escape 0x2e, 0x00
; %bb.0:
	sub	sp, sp, #176
	.cfi_def_cfa_offset 176
	mov	w8, #0                          ; =0x0
	mov	x9, #0                          ; =0x0
	mov	x10, sp
LBB2_1:                                 ; =>This Inner Loop Header: Depth=1
	strb	w8, [x10, x9]
	add	x9, x9, #1
	add	w8, w8, w0
	cmp	x9, #176
	b.ne	LBB2_1
; %bb.2:
	mov	x8, #0                          ; =0x0
	mov	w0, #0                          ; =0x0
	mov	x9, sp
LBB2_3:                                 ; =>This Inner Loop Header: Depth=1
	ldrsb	w10, [x9, x8]
	add	w0, w0, w10
	add	x8, x8, #1
	cmp	x8, #176
	b.ne	LBB2_3
; %bb.4:
	add	sp, sp, #176
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	lsl	w8, w0, #3
	sub	w8, w8, w0
	str	w8, [sp, #12]
	ldr	w8, [sp, #12]
	add	w8, w8, #11
	str	w8, [sp, #12]
	ldr	w0, [sp, #12]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.no_dead_strip	_eh_alpha
	.no_dead_strip	_eh_beta
	.no_dead_strip	_eh_gamma
.subsections_via_symbols
