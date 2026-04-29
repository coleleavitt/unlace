__int64 __fastcall sub_3D8AC0(
        double a1,
        double a2,
        double a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rcx
  __int64 (__fastcall **v12)(); // r12
  __int64 (__fastcall **v13)(); // rdi
  int v14; // eax
  int v15; // eax
  __m128 v16; // xmm0
  _QWORD *func; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 (__fastcall **v21)(); // [rsp+0h] [rbp-78h] BYREF
  __int64 v22; // [rsp+8h] [rbp-70h]
  __int128 v23; // [rsp+10h] [rbp-68h]
  int v24; // [rsp+20h] [rbp-58h]
  __int128 v25; // [rsp+28h] [rbp-50h]
  __m128 v26; // [rsp+38h] [rbp-40h]
  unsigned __int64 v27; // [rsp+48h] [rbp-30h]

  v10 = *(_QWORD *)(a7 + 64);
  v27 = __readfsqword(0x28u);
  if ( v10 != -1 )
  {
    ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall ***)(), __int64, __int64, __int64))callui)(
      16,
      5,
      &v21,
      v10,
      a9,
      a10);
    v12 = v21;
    if ( v21 != (__int64 (__fastcall **)())-1LL )
    {
      v13 = v21;
      LODWORD(v23) = 0;
      v21 = off_4B58B0;
      v14 = *(_DWORD *)(a6 + 12);
      v25 = -1;
      HIDWORD(v23) = v14;
      v15 = *(_DWORD *)(a6 + 56);
      v16 = _mm_loadh_ps((const double *)(a7 + 64));
      *(_QWORD *)((char *)&v23 + 4) = 0;
      v24 = 73;
      HIDWORD(v22) = v15;
      v26 = v16;
      func = (_QWORD *)get_func(v13);
      if ( func )
        *(_QWORD *)&v25 = *func;
      if ( !(unsigned __int8)sub_3D8580(a6, &v21, 4u, *(_DWORD *)(a6 + 56), *(double *)v16.m128_u64, a2, a3, a4) )
        callui(115, v12, 0xFFFFFFFFLL, 1, v18, v19, v21, v22, v23, *((_QWORD *)&v23 + 1));
    }
  }
  return 0;
}
