__int64 __fastcall sub_3C0520(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 (*v12)(); // rax
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 (*v21)(); // rax
  __int64 (*v22)(); // rdx
  __int64 v23; // rax
  char v24; // [rsp+0h] [rbp-58h]
  unsigned int v25; // [rsp+Ch] [rbp-4Ch]
  __int64 v26; // [rsp+10h] [rbp-48h] BYREF
  __int128 v27; // [rsp+18h] [rbp-40h]
  unsigned __int64 v28; // [rsp+28h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v9 = sub_3C5BB0(a1);
  if ( !v9 )
    return 0;
  v10 = *(_QWORD *)(v9 + 2488);
  v11 = v9;
  v12 = *(__int64 (**)())(*(_QWORD *)v10 + 64LL);
  if ( v12 == sub_3AAC50 || !((__int64 (__fastcall *)(__int64))v12)(v10) )
    return 0;
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10) )
  {
    v22 = *(__int64 (**)())(*(_QWORD *)v10 + 64LL);
    v23 = 0;
    if ( v22 != sub_3AAC50 )
      v23 = ((__int64 (__fastcall *)(__int64))v22)(v10);
    sub_169630(
      (int)"AUTOHIDE NONE\n'%s' has no types, nothing to export",
      *(_QWORD *)(v23 + 8),
      (__int64)v22,
      v14,
      v15,
      v16,
      a2,
      a3,
      a4,
      a5,
      v17,
      v18,
      a8,
      a9,
      v24);
    return 0;
  }
  v19 = *(_QWORD *)(a1 + 200);
  v26 = 0;
  v27 = 0;
  if ( v19 )
    sub_3C60D0(v11, &v26, v19, -1);
  v20 = 0;
  v21 = *(__int64 (**)())(*(_QWORD *)v10 + 64LL);
  if ( v21 != sub_3AAC50 )
    v20 = ((__int64 (__fastcall *)(__int64))v21)(v10);
  result = sub_3C01E0(v20, (__int64)&v26, 0.0, a3, a4, a5, *(double *)v17.m128_u64, *(double *)v18.m128_u64, a8, a9);
  if ( v26 )
  {
    v25 = result;
    *(_QWORD *)&v27 = 0;
    qfree(v26, (const char *)&v26);
    return v25;
  }
  return result;
}
