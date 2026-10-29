bool __fastcall sub_8E53B0(__int64 a1, const void **a2, __int64 a3)
{
  char *v3; // rbx
  bool v4; // cf
  char *v5; // rdx
  bool result; // al
  unsigned __int64 v7; // rbp
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 v10; // r14
  char *v11; // rdx
  char *v12; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  v3 = (char *)*a2;
  v12 = v3;
  v4 = __CFADD__(v3, a3);
  v5 = &v3[a3];
  if ( v4 )
    return 0;
  v13[0] = v3;
  v7 = (unsigned __int64)v5;
  v8 = unpack_dd(v13);
  v12 = (char *)v13[0];
  if ( (unsigned __int64)v3 >= v13[0] )
    return 0;
  if ( v8 != *(_QWORD *)(a1 + 24) )
    sub_8DA2F0((__int64 *)(a1 + 16), v8);
  if ( v8 )
  {
    v9 = 0;
    v10 = 24LL * v8;
    while ( (unsigned __int8)sub_7E1CF0((__int64 *)(v9 + *(_QWORD *)(a1 + 16)), (const void **)&v12, v7) )
    {
      v9 += 24;
      if ( v10 == v9 )
        goto LABEL_11;
    }
    return 0;
  }
LABEL_11:
  result = sub_7E30F0((_DWORD *)(a1 + 40), (unsigned __int64 *)&v12);
  if ( !result )
    return 0;
  if ( (unsigned __int64)v12 >= v7 )
  {
    *(_BYTE *)(a1 + 44) = 0;
    return 0;
  }
  v11 = v12 + 1;
  *(_BYTE *)(a1 + 44) = *v12;
  *a2 = v11;
  return result;
}
