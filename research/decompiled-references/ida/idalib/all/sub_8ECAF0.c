__int64 __fastcall sub_8ECAF0(__int64 a1, const __m128i **a2, __int64 a3)
{
  const __m128i *v3; // r14
  __int8 *v4; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r15d
  __int64 v8; // r14
  const __m128i *v9; // rdx
  __int64 v10; // r15
  __int64 v11; // r14
  bool i; // al
  const __m128i *v13; // [rsp+8h] [rbp-60h]
  const __m128i *v14; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v15[9]; // [rsp+20h] [rbp-48h] BYREF

  v15[1] = __readfsqword(0x28u);
  v3 = *a2;
  v14 = v3;
  v4 = &v3->m128i_i8[a3];
  if ( __CFADD__(v3, a3) )
    return 0;
  v15[0] = v3;
  v6 = unpack_dd(v15);
  v7 = v6;
  v14 = (const __m128i *)v15[0];
  v13 = (const __m128i *)v15[0];
  if ( (unsigned __int64)v3 >= v15[0] )
    return 0;
  v8 = v6;
  sub_8EC7D0((_QWORD *)(a1 + 16), v6);
  v9 = v13;
  if ( v7 )
  {
    v10 = 0;
    v11 = 80 * v8;
    for ( i = sub_8EAC40(*(_QWORD *)(a1 + 16), &v14, v4 - (__int8 *)v13);
          i;
          i = sub_8EAC40(v10 + *(_QWORD *)(a1 + 16), &v14, v4 - (__int8 *)v14) )
    {
      v10 += 80;
      v9 = v14;
      if ( v11 == v10 )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  *a2 = v9;
  return 1;
}
