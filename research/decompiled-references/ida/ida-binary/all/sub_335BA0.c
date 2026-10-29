__int64 __fastcall sub_335BA0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // rsi
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 v18; // rsi
  __int64 i; // rcx
  int v20; // eax
  unsigned int v21; // ebp
  double v22; // xmm0_8
  const char *v24; // [rsp+0h] [rbp-158h] BYREF
  __int128 v25; // [rsp+8h] [rbp-150h]
  _QWORD v26[32]; // [rsp+20h] [rbp-138h] BYREF
  const char *v27; // [rsp+120h] [rbp-38h]
  _BYTE v28[16]; // [rsp+128h] [rbp-30h]
  unsigned __int64 v29; // [rsp+138h] [rbp-20h]

  v29 = __readfsqword(0x28u);
  v24 = nullptr;
  v25 = 0;
  sub_334B00((__int64)v26);
  v9 = nullptr;
  v11 = callui(203, 0, (unsigned int)v26, (unsigned int)&v24, (unsigned int)&callui, v10);
  if ( v11 )
  {
    if ( v11 == -1 )
    {
      v9 = &s1;
      if ( (_QWORD)v25 )
        v9 = v24;
      sub_169630((int)"%s", (__int64)v9, v12, v13, v14, v15, (__m128)0LL, a3, a4, a5, v16, v17, a8, a9, (char)v24);
      v21 = 0;
    }
    else
    {
      v18 = 0;
      for ( i = 0; i != 11; ++i )
      {
        if ( v28[i] )
          v18 |= 1LL << i;
      }
      setinf(55, v18);
      v9 = v27;
      if ( v27 == (const char *)-1LL )
      {
        v21 = 1;
      }
      else
      {
        v20 = *(_DWORD *)(a1 + 8);
        if ( v20 == 25 || v20 == 58 )
          v21 = sub_3B2AE0(a1, v27);
        else
          v21 = (unsigned __int8)sub_32FF30(xmmword_8CC810, (__int64)v27);
      }
    }
  }
  else
  {
    v21 = -1;
  }
  v26[0] = &setup_data_dialog_t___vtable;
  v22 = forms::dialog_desc_t__::vfunc_0(v26, v9);
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24, v9, v22);
  }
  return v21;
}
