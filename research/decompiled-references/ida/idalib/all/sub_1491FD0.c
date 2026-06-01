__int64 __fastcall sub_1491FD0(const __m128i *a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  __int16 v6; // ax
  __int64 v8; // rax
  __int16 v9; // [rsp+Eh] [rbp-7Ah] BYREF
  __int64 v10; // [rsp+10h] [rbp-78h] BYREF
  void *v11; // [rsp+18h] [rbp-70h]
  __int64 v12; // [rsp+20h] [rbp-68h]
  _BYTE v13[16]; // [rsp+28h] [rbp-60h] BYREF
  __int8 *v14; // [rsp+38h] [rbp-50h] BYREF
  void *ptr; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-40h]
  _BYTE v17[56]; // [rsp+50h] [rbp-38h] BYREF

  v6 = a1[2].m128i_i16[0];
  if ( v6 != 126 )
  {
    if ( v6 != 189 )
      return sub_1481EA0((__int64)a1, a2, a3, 0, a4, *(double *)a5.m128_u64);
LABEL_8:
    v14 = &a1[31].m128i_i8[8];
    v11 = v13;
    ptr = v17;
    v12 = 0x200000000LL;
    v16 = 0x200000000LL;
    v10 = 0;
    sub_1490230(a1, (__int64)&v10, 0, a2, a4, a5);
    sub_147F500((__int64 *)(a2 + 736), *(char **)(a2 + 736), (char *)v11, (char *)v11 + 8 * (unsigned int)v12);
    LODWORD(v12) = 0;
    sub_15D8C50(a2 + 768, &v14);
    LODWORD(v16) = 0;
    if ( HIDWORD(v10) )
      *(_DWORD *)(a2 + 92) = HIDWORD(v10);
    sub_15DCED0(v14, &v14);
    if ( ptr != v17 )
      free(ptr);
    if ( v11 != v13 )
      free(v11);
    return sub_1481EA0((__int64)a1, a2, a3, 0, a4, *(double *)a5.m128_u64);
  }
  LODWORD(v10) = 0;
  v8 = sub_156E540(a1, 1, &v10);
  if ( v8 != 1 )
  {
    *(_QWORD *)(a2 + 816) = v8 & 0xFFFFFFFFFFFFFFFELL;
    if ( (_DWORD)v10 )
      *(_DWORD *)(a2 + 92) = v10;
    if ( a1[2].m128i_i16[0] != 189 )
      return sub_1481EA0((__int64)a1, a2, a3, 0, a4, *(double *)a5.m128_u64);
    goto LABEL_8;
  }
  v9 = 63;
  sub_15680D0(a1, &v9, 1, 2);
  return 0;
}
