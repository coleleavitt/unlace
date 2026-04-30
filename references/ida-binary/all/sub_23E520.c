__int64 __fastcall sub_23E520(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // edx
  unsigned int v13; // r12d
  __int64 v15; // r13
  __m128 v16; // xmm0
  int v17; // r12d
  int v18; // r15d
  __int64 bpt_kernel_interface; // rdi
  const char *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  char *v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  double v36; // xmm4_8
  double v37; // xmm5_8
  __int64 v38; // rcx
  _QWORD *v39; // rdi
  _QWORD *v40; // rdi
  struct _Unwind_Exception *v41; // rbx
  _QWORD *v42; // [rsp+0h] [rbp-58h] BYREF
  __int128 v43; // [rsp+8h] [rbp-50h]
  unsigned __int64 v44; // [rsp+18h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 8);
  v44 = __readfsqword(0x28u);
  v11 = a1;
  v12 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
  if ( !v10 )
  {
    if ( v12 != 6 )
    {
      v13 = 0;
      goto LABEL_3;
    }
    v15 = qword_8CC348;
    if ( !*(_BYTE *)(a1 + 24) )
      goto LABEL_8;
LABEL_28:
    v38 = *(_QWORD *)(a2 + 40);
    a2 = v15;
    a1 = 1006;
    sub_1E73C0(0x3EEu, v15, sub_23F5C0, v38);
    *(_BYTE *)(v11 + 24) = 0;
    v15 = qword_8CC348;
    goto LABEL_8;
  }
  v13 = 0;
  if ( v12 != 5 )
    goto LABEL_3;
  v15 = *(_QWORD *)(v10 + 80);
  if ( qword_8CC348 != v15 )
    goto LABEL_3;
  if ( *(_BYTE *)(a1 + 24) )
    goto LABEL_28;
LABEL_8:
  v16 = 0;
  v42 = nullptr;
  v17 = *(_DWORD *)v11;
  v18 = HIDWORD(qword_8CC340);
  v43 = 0;
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v20 = (const char *)&v42;
  (*(void (__fastcall **)(__int64, _QWORD **, __int64))(*(_QWORD *)bpt_kernel_interface + 56LL))(
    bpt_kernel_interface,
    &v42,
    v15);
  v25 = v43;
  LODWORD(v26) = v43 - 1;
  if ( (int)v43 - 1 >= 0 )
  {
    v26 = (unsigned int)v26;
    do
    {
      bpt_kernel_interface = (__int64)&v42[v26];
      if ( (*(_BYTE *)(*(_QWORD *)bpt_kernel_interface + 76LL) & 2) == 0
        || (v21 = *(unsigned int *)(*(_QWORD *)bpt_kernel_interface + 64LL), (_DWORD)v21 != 4)
        && (v21 &= 8u, !(_DWORD)v21) )
      {
        v20 = (const char *)(bpt_kernel_interface + 8);
        memmove((void *)bpt_kernel_interface, (const void *)(bpt_kernel_interface + 8), 8 * (v25 - v26) - 8);
        *(_QWORD *)&v43 = v43 - 1;
        v25 = v43;
      }
      --v26;
    }
    while ( (_DWORD)v26 != -1 );
  }
  if ( !v25 )
  {
    v39 = v42;
    if ( !v42 )
    {
LABEL_31:
      v13 = v17 & 1;
      goto LABEL_32;
    }
LABEL_30:
    qfree(v39, v20, v21, v22, v23, v24, v42, v43, v44);
    goto LABEL_31;
  }
  v27 = get_bpt_kernel_interface(bpt_kernel_interface, v20);
  v20 = (const char *)&v42;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v27 + 216LL))(v27, &v42) )
  {
    v40 = qword_8CC600;
    v20 = (_BYTE *)(&dword_14 + 3);
    *(_DWORD *)qword_8CC600 = v18;
    v40[1] = v15;
    if ( (unsigned int)sub_23D480((__int64)v40, 23, v28, v29, 0.0) != 1 )
    {
      v39 = v42;
      if ( !v42 )
        goto LABEL_31;
      *(_QWORD *)&v43 = 0;
      goto LABEL_30;
    }
  }
  v30 = *v42;
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    *(double *)v16.m128_u64 = qfree(v42, v20);
  }
  if ( !v30 )
    goto LABEL_31;
  set_debug_event_code(&qword_8CC340, 5);
  if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) != 5 )
  {
    v41 = (struct _Unwind_Exception *)sub_2276C0(*(double *)v16.m128_u64, (__int64)&qword_8CC340, 5, v31, v32);
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42, &byte_5);
    }
    _Unwind_Resume(v41);
  }
  v33 = -1;
  if ( *(_DWORD *)(v30 + 64) != 4 )
    v33 = *(_QWORD *)(v30 + 56);
  xmmword_8CC358 = (void *)v33;
  sub_22FC60(0xAu, &qword_8CC340);
  if ( (*(_BYTE *)(v30 + 72) & 8) != 0 )
    sub_236F30((const char *)v30, (__int64)&qword_8CC340, v16, a4, a5, a6, v36, v37, a9, a10, v34, v35);
  v13 = 0;
LABEL_32:
  if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) != 5 )
  {
    set_debug_event_code(&qword_8CC340, 6);
    if ( (*(_BYTE *)v11 & 2) == 0 )
      return v13;
    goto LABEL_5;
  }
LABEL_3:
  if ( (*(_BYTE *)v11 & 2) != 0 )
LABEL_5:
    byte_8CC5EC = 0;
  return v13;
}
