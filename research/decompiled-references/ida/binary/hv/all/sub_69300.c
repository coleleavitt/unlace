__int64 __fastcall sub_69300(__int64 a1, __int64 a2, const char *a3, _BYTE *a4)
{
  unsigned int v5; // r15d
  __int64 v6; // rax
  __m128i v7; // xmm0
  unsigned int v9; // eax
  const char *v10; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v11[12]; // [rsp+10h] [rbp-B8h] BYREF
  int v12; // [rsp+1Ch] [rbp-ACh]
  __int64 v13; // [rsp+38h] [rbp-90h]
  __int64 v14; // [rsp+50h] [rbp-78h]
  __m128i v15; // [rsp+60h] [rbp-68h] BYREF
  __m128i v16; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp-40h]

  v10 = a3;
  v17 = __readfsqword(0x28u);
  if ( a4 )
    *a4 = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const char *))(**(_QWORD **)(a1 + 8) + 96LL))(
         *(_QWORD *)(a1 + 8),
         v11,
         v10);
  if ( !v5 )
  {
    if ( (v12 & 0xF000) != 0x8000 )
    {
      v9 = sub_65D40(0x21u, (__int64)"%s : not a regular file", v10);
      if ( v9 )
        return v9;
    }
    v16 = 0;
    if ( (unsigned __int8)sub_691C0((_QWORD *)a1, (__int64)&v16, (__int64)v10, (__int64)v11) )
    {
      v6 = v13;
      v15.m128i_i64[1] = v13;
    }
    else
    {
      v9 = sub_64910(*(_QWORD **)(a1 + 8), (__int64)&v16, (__int64)v10, nullptr, 0, 0.0);
      if ( v9 )
        return v9;
      v15.m128i_i64[0] = v14;
      v15.m128i_i64[1] = v13;
      sub_67B30(a1 + 64, &v10, &v15);
      v6 = v15.m128i_i64[1];
    }
    if ( *(_QWORD *)a2 == v6 && *(_OWORD *)(a2 + 8) - *(_OWORD *)&v16 == 0 )
    {
      if ( a4 )
        *a4 = 1;
    }
    else
    {
      v7 = _mm_load_si128(&v16);
      *(_QWORD *)a2 = v6;
      *(__m128i *)(a2 + 8) = v7;
    }
  }
  return v5;
}

