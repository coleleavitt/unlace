__int64 __fastcall sub_386140(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  int v14; // r13d
  unsigned int v15; // ebx
  int v16; // r14d
  unsigned int v17; // eax
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 v21; // rbp
  unsigned int v22; // eax
  bool v23; // zf
  void (__fastcall ***v24)(_QWORD); // rdi
  __int64 v25; // [rsp+8h] [rbp-50h] BYREF
  __int64 *v26[9]; // [rsp+10h] [rbp-48h] BYREF

  v14 = a3;
  v15 = 0;
  v26[1] = (__int64 *)__readfsqword(0x28u);
  v16 = a4;
  v17 = sub_239910(1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  if ( !(_BYTE)v17 )
  {
    v15 = v17;
    sub_255E20(&v25, a1, nullptr);
    v21 = v25;
    if ( v25 )
    {
      ++*(_DWORD *)(v25 + 8);
      v26[0] = (__int64 *)v21;
      v22 = sub_385A80(v26, a2, v14, v16, *(double *)a7.m128_u64, a8, a9, a10, v19, v20, a13, a14);
      v23 = (*(_DWORD *)(v21 + 8))-- == 1;
      v15 = v22;
      if ( v23 )
        (**(void (__fastcall ***)(__int64))v21)(v21);
      v24 = (void (__fastcall ***)(_QWORD))v25;
      if ( v25 )
      {
        v23 = (*(_DWORD *)(v25 + 8))-- == 1;
        if ( v23 )
          (**v24)(v24);
      }
    }
  }
  return v15;
}
