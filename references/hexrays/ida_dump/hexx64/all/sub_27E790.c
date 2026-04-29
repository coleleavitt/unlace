unsigned __int64 __fastcall sub_27E790(
        __m128i *a1,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        _QWORD *a5,
        const __m128i *a6,
        char a7)
{
  __int64 v11; // rsi
  int tinfo_size; // eax
  int v13; // r15d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-90h]
  unsigned __int64 v18[2]; // [rsp+18h] [rbp-80h] BYREF
  const __m128i *v19; // [rsp+28h] [rbp-70h] BYREF
  __m128i v20; // [rsp+30h] [rbp-68h] BYREF
  int v21; // [rsp+40h] [rbp-58h]
  int v22; // [rsp+44h] [rbp-54h]
  __int64 v23; // [rsp+48h] [rbp-50h] BYREF
  int v24; // [rsp+50h] [rbp-48h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v18[0] = a2;
  v25 = __readfsqword(0x28u);
  set_tinfo_property(a5, 6, 192);
  if ( (get_tinfo_property(*a5, 2) & 0xF) != 0xC )
  {
    v11 = *a5;
    if ( (unsigned __int8)*a5
      && ((unsigned int)verify_tinfo(*a5) || (v11 = *a5, (*(_BYTE *)a5 & 0xF) == 0xD) && (v11 & 0x100) == 0) )
    {
      v13 = a4;
    }
    else
    {
      tinfo_size = get_tinfo_size(0, v11, 0);
      v13 = a4 + tinfo_size;
      if ( !a4 && !a3 || (a3 >= tinfo_size || !a3) && (tinfo_size <= 0 || !(a4 % tinfo_size)) )
      {
        v20.m128i_i64[0] = (__int64)v18;
        v14 = sub_27E520(a1, v18, (__int64 **)&v20);
        v22 = a4;
        v21 = a3;
        v17 = v14 + 24;
        v23 = 0;
        copy_tinfo_t(&v23, a5);
        v24 = get_tinfo_size(0, v23, 0);
        if ( a6 )
          v20 = _mm_loadu_si128(a6);
        else
          v20.m128i_i32[2] = -1;
        v19 = &v20;
        sub_27AC10((__m128i *)(v17 + 8), (__int64)&v20, &v19);
        if ( a7 )
          *(_BYTE *)(v17 + 28) = 1;
        clear_tinfo_t(&v23);
      }
    }
    if ( v13 )
    {
      v20.m128i_i64[0] = (__int64)v18;
      v15 = sub_27E520(a1, v18, (__int64 **)&v20);
      if ( *(_DWORD *)(v15 + 48) < v13 )
        *(_DWORD *)(v15 + 48) = v13;
    }
  }
  return v25 - __readfsqword(0x28u);
}
