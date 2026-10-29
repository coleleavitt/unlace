__int64 __fastcall sub_D73E00(_QWORD *a1, char a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  void *v6; // r12
  void **v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // r14
  unsigned int v11; // esi
  void **v13; // rax
  char v14; // r12
  void **v15; // rax
  bool v16; // r12
  __int64 v17; // rcx
  __int64 v18; // r8
  __m128i v19; // [rsp+0h] [rbp-78h] BYREF
  __m128i v20; // [rsp+10h] [rbp-68h] BYREF
  void *v21; // [rsp+20h] [rbp-58h] BYREF
  void **v22; // [rsp+28h] [rbp-50h]

  v4 = a1[22];
  v19 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v4, 16));
  sub_DFDA50(v4, 16);
  v20 = _mm_load_si128(&v19);
  sub_CDADA0((__int64)&v21, (__int64)&v20);
  v6 = (void *)sub_21D5390(&v21, &v20, v5);
  v7 = v22;
  if ( v21 != v6 )
    v7 = &v21;
  v19.m128i_i8[0] = *((_BYTE *)v7 + 20) & 7;
  sub_971860(&v21);
  v10 = *(_QWORD *)(a3 + 8);
  if ( a2 )
  {
    v11 = 0;
    if ( !v19.m128i_i8[0] )
    {
      sub_CDADA0((__int64)&v21, (__int64)&v20);
      v13 = &v21;
      if ( v6 == v21 )
        v13 = v22;
      v14 = *((_BYTE *)v13 + 20);
      sub_971860(&v21);
      v11 = (v14 & 8) == 0 ? 1 : -1;
    }
    sub_D6ED60(a1, v11, v10, v8, v9);
  }
  else
  {
    sub_CDADA0((__int64)&v21, (__int64)&v20);
    v15 = &v21;
    if ( v6 == v21 )
      v15 = v22;
    v16 = (*((_BYTE *)v15 + 20) & 7) == 0;
    sub_971860(&v21);
    LODWORD(v22) = 8;
    v21 = (void *)v16;
    BYTE4(v22) = 1;
    sub_D6C2A0(a1, (__int64)&v21, v10, v17, v18);
    if ( (unsigned int)v22 > 0x40 && v21 )
      operator delete[](v21);
  }
  return 1;
}

