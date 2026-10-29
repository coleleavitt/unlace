bool __fastcall sub_8C4900(__int64 a1, char **a2, __int64 a3)
{
  bool result; // al
  char *v4; // rbx
  char *v5; // r14
  char *v6; // rdx
  char *v7; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v8[9]; // [rsp+10h] [rbp-48h] BYREF

  v8[1] = __readfsqword(0x28u);
  v7 = *a2;
  if ( __CFADD__(a3, v7) )
    return 0;
  v4 = &v7[a3];
  if ( !(unsigned __int8)sub_7BE9B0((__int64 *)a1, (const void **)&v7, (unsigned __int64)&v7[a3]) )
    return 0;
  if ( !(unsigned __int8)sub_7BE9B0((__int64 *)(a1 + 24), (const void **)&v7, (unsigned __int64)v4) )
    return 0;
  if ( !(unsigned __int8)sub_7BE9B0((__int64 *)(a1 + 48), (const void **)&v7, (unsigned __int64)v4) )
    return 0;
  if ( !(unsigned __int8)sub_7BE9B0((__int64 *)(a1 + 72), (const void **)&v7, (unsigned __int64)v4) )
    return 0;
  if ( !(unsigned __int8)sub_7BE9B0((__int64 *)(a1 + 96), (const void **)&v7, (unsigned __int64)v4) )
    return 0;
  v5 = v7;
  v8[0] = v7;
  *(_QWORD *)(a1 + 120) = unpack_dq(v8, v4);
  v7 = (char *)v8[0];
  if ( (unsigned __int64)v5 >= v8[0] )
    return 0;
  result = sub_7BFDB0(v8, (unsigned __int64 *)&v7);
  if ( !result )
    return 0;
  v6 = v7;
  *(_BYTE *)(a1 + 128) = LODWORD(v8[0]) != 0;
  *a2 = v6;
  return result;
}

