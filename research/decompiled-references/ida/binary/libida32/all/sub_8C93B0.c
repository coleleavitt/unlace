bool __fastcall sub_8C93B0(__int64 a1, const __m128i **a2, __int64 a3)
{
  const __m128i *v3; // r14
  __int8 *v4; // rbx
  bool result; // al
  unsigned int v6; // eax
  unsigned int v7; // r15d
  __int64 v8; // r14
  const __m128i *v9; // rdx
  __int64 v10; // r14
  const __m128i *v11; // [rsp+8h] [rbp-60h]
  __int64 v12; // [rsp+8h] [rbp-60h]
  const __m128i *v13; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v14[9]; // [rsp+20h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v3 = *a2;
  v13 = v3;
  v4 = &v3->m128i_i8[a3];
  if ( __CFADD__(v3, a3) )
    return 0;
  v14[0] = v3;
  v6 = unpack_dd(v14);
  v7 = v6;
  v13 = (const __m128i *)v14[0];
  v11 = (const __m128i *)v14[0];
  if ( (unsigned __int64)v3 >= v14[0] )
    return 0;
  v8 = v6;
  sub_8C9110((_QWORD *)(a1 + 16), v6);
  v9 = v11;
  if ( v7 )
  {
    v12 = 48 * v8;
    v10 = 0;
    while ( (unsigned __int8)sub_8C2DC0((__m128i *)(v10 + *(_QWORD *)(a1 + 16)), &v13, v4 - (__int8 *)v9) )
    {
      v10 += 48;
      if ( v12 == v10 )
        goto LABEL_10;
      v9 = v13;
    }
    return 0;
  }
LABEL_10:
  result = sub_7BFDB0((_DWORD *)(a1 + 40), (unsigned __int64 *)&v13);
  if ( !result )
    return 0;
  *a2 = v13;
  return result;
}

