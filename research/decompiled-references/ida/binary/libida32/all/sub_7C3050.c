bool __fastcall sub_7C3050(__int64 a1, char **a2, __int64 a3)
{
  bool result; // al
  char *v4; // rbx
  char *v5; // r14
  char *v6; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v7[7]; // [rsp+10h] [rbp-38h] BYREF

  v7[1] = __readfsqword(0x28u);
  v6 = *a2;
  if ( __CFADD__(a3, v6) )
    return 0;
  v4 = &v6[a3];
  if ( !(unsigned __int8)sub_7C2D00((__int64 *)a1, (const void **)&v6, a3) )
    return 0;
  if ( !(unsigned __int8)sub_7BE9B0((__int64 *)(a1 + 72), (const void **)&v6, (unsigned __int64)v4) )
    return 0;
  if ( !sub_7BFDB0((_DWORD *)(a1 + 96), (unsigned __int64 *)&v6) )
    return 0;
  v5 = v6;
  v7[0] = v6;
  *(_QWORD *)(a1 + 104) = unpack_dq(v7, v4);
  v6 = (char *)v7[0];
  if ( (unsigned __int64)v5 >= v7[0] )
    return 0;
  result = sub_7BFDB0((_DWORD *)(a1 + 112), (unsigned __int64 *)&v6);
  if ( !result )
    return 0;
  *a2 = v6;
  return result;
}

