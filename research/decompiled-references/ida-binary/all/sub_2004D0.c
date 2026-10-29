unsigned __int64 __fastcall sub_2004D0(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  bool v13; // zf
  char v14; // r12
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  double v18; // xmm4_8
  double v19; // xmm5_8
  struct _Unwind_Exception *v21; // rbx
  __m128i v22; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+28h] [rbp-40h]
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v13 = *(_BYTE *)(a1 + 968) == 0;
  v27 = __readfsqword(0x28u);
  v14 = a3;
  if ( v13 )
  {
    v16 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 424) )
    {
      v21 = (struct _Unwind_Exception *)sub_1E69C0(a5, a1, (__int64)a2, a3, a4);
      if ( v26 )
        qfree(v26, a2);
      _Unwind_Resume(v21);
    }
    v15 = *(_DWORD *)(a1 + 416);
    if ( v15 == 2 )
    {
      v16 = *(_QWORD *)(a1 + 896);
    }
    else if ( v15 == 3 )
    {
      v16 = *(_QWORD *)(a1 + 904);
    }
    else
    {
      v16 = 0;
      if ( v15 == 1 )
        v16 = *(_QWORD *)(a1 + 888);
    }
  }
  (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v16 + 280LL))(v16, a2);
  v17 = *(_QWORD *)a1;
  v23 = 0;
  v24 = -1;
  v25 = 0;
  v26 = 0;
  v22 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __m128i *, const char *))(v17 + 632))(a1, &v22, a2) )
  {
    if ( v14 )
      sub_1FFBB0(a1 + 384, &v22, byte_8BA8E5, (__m128)0LL, a6, a7, a8, v18, v19, a11, a12);
    else
      sub_1FF700(a1 + 384, &v22, (__m128)0LL, a6, a7, a8, v18, v19, a11, a12);
  }
  if ( v26 )
    qfree(v26, v22.m128i_i8);
  return v27 - __readfsqword(0x28u);
}
