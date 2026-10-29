__int64 __fastcall sub_8A6CB0(__int64 a1, __int64 a2, const char *a3, _BYTE *a4)
{
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // r15d
  __int64 v9; // rax
  __m128i v10; // xmm0
  unsigned int v12; // eax
  const char *v13; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v14[12]; // [rsp+10h] [rbp-B8h] BYREF
  int v15; // [rsp+1Ch] [rbp-ACh]
  __int64 v16; // [rsp+38h] [rbp-90h]
  __int64 v17; // [rsp+50h] [rbp-78h]
  __m128i v18; // [rsp+60h] [rbp-68h] BYREF
  __m128i v19; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp-40h]

  v13 = a3;
  v20 = __readfsqword(0x28u);
  if ( a4 )
    *a4 = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const char *))(**(_QWORD **)(a1 + 8) + 96LL))(
         *(_QWORD *)(a1 + 8),
         v14,
         v13);
  if ( !v8 )
  {
    if ( (v15 & 0xF000) != 0x8000 )
    {
      v12 = sub_8DB5A0(33, (unsigned int)"%s : not a regular file", (_DWORD)v13, v5, v6, v7);
      if ( v12 )
        return v12;
    }
    v19 = 0;
    if ( (unsigned __int8)sub_8A6B70((_QWORD *)a1, &v19, (__int64)v13, (__int64)v14) )
    {
      v9 = v16;
      v18.m128i_i64[1] = v16;
    }
    else
    {
      v12 = sub_8DA4A0(*(_QWORD *)(a1 + 8), &v19, v13, 0, 0);
      if ( v12 )
        return v12;
      v18.m128i_i64[0] = v17;
      v18.m128i_i64[1] = v16;
      sub_8A54E0(a1 + 64, &v13, &v18);
      v9 = v18.m128i_i64[1];
    }
    if ( *(_QWORD *)a2 == v9 && *(_OWORD *)(a2 + 8) - *(_OWORD *)&v19 == 0 )
    {
      if ( a4 )
        *a4 = 1;
    }
    else
    {
      v10 = _mm_load_si128(&v19);
      *(_QWORD *)a2 = v9;
      *(__m128i *)(a2 + 8) = v10;
    }
  }
  return v8;
}

