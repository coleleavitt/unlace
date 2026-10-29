__int64 __fastcall sub_7E2070(__int64 a1, const void **a2, __int64 a3)
{
  char *v3; // rbx
  bool v4; // cf
  char *v5; // rdx
  unsigned __int64 v7; // rbp
  unsigned int v8; // eax
  const void *v9; // r15
  unsigned int v10; // r14d
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r14
  const void *v15; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v16[1] = __readfsqword(0x28u);
  v3 = (char *)*a2;
  v15 = v3;
  v4 = __CFADD__(v3, a3);
  v5 = &v3[a3];
  if ( v4 )
    return 0;
  v16[0] = v3;
  v7 = (unsigned __int64)v5;
  v8 = unpack_dd(v16);
  v9 = (const void *)v16[0];
  v10 = v8;
  v15 = (const void *)v16[0];
  if ( (unsigned __int64)v3 >= v16[0] )
    return 0;
  v11 = v8;
  if ( v8 != *(_QWORD *)(a1 + 24) )
    sub_7DE7A0((__int64 *)(a1 + 16), v8);
  if ( v10 )
  {
    v12 = 3 * v11;
    v13 = 0;
    v14 = 8 * v12;
    while ( (unsigned __int8)sub_7E1CF0((__int64 *)(v13 + *(_QWORD *)(a1 + 16)), &v15, v7) )
    {
      v13 += 24;
      if ( v14 == v13 )
      {
        v9 = v15;
        goto LABEL_12;
      }
    }
    return 0;
  }
LABEL_12:
  *a2 = v9;
  return 1;
}
