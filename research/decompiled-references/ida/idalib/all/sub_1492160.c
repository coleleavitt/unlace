__int64 __fastcall sub_1492160(const __m128i *a1, __int64 a2, __m128i a3, __m128 a4)
{
  __int16 v4; // dx
  __int64 result; // rax
  __int64 v6; // rax
  __int16 v7; // [rsp+Eh] [rbp-6Ah] BYREF
  __int64 v8; // [rsp+10h] [rbp-68h] BYREF
  void *v9; // [rsp+18h] [rbp-60h]
  __int64 v10; // [rsp+20h] [rbp-58h]
  _BYTE v11[16]; // [rsp+28h] [rbp-50h] BYREF
  __int8 *v12; // [rsp+38h] [rbp-40h] BYREF
  void *ptr; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-30h]
  _BYTE v15[40]; // [rsp+50h] [rbp-28h] BYREF

  v4 = a1[2].m128i_i16[0];
  if ( v4 != 126 )
  {
    result = 0;
    if ( v4 != 189 )
      return result;
    goto LABEL_8;
  }
  LODWORD(v8) = 0;
  v6 = sub_156E540(a1, 1, &v8);
  if ( v6 == 1 )
  {
    v7 = 63;
    sub_15680D0(a1, &v7, 1, 2);
    return 1;
  }
  *(_QWORD *)(a2 + 816) = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( (_DWORD)v8 )
    *(_DWORD *)(a2 + 92) = v8;
  result = 0;
  if ( a1[2].m128i_i16[0] == 189 )
  {
LABEL_8:
    v12 = &a1[31].m128i_i8[8];
    v9 = v11;
    ptr = v15;
    v10 = 0x200000000LL;
    v14 = 0x200000000LL;
    v8 = 0;
    sub_1490230(a1, (__int64)&v8, 0, a2, a3, a4);
    sub_147F500((__int64 *)(a2 + 736), *(char **)(a2 + 736), (char *)v9, (char *)v9 + 8 * (unsigned int)v10);
    LODWORD(v10) = 0;
    sub_15D8C50(a2 + 768, &v12);
    LODWORD(v14) = 0;
    if ( HIDWORD(v8) )
      *(_DWORD *)(a2 + 92) = HIDWORD(v8);
    sub_15DCED0(v12, &v12);
    if ( ptr != v15 )
      free(ptr);
    if ( v9 != v11 )
      free(v9);
    return 0;
  }
  return result;
}
