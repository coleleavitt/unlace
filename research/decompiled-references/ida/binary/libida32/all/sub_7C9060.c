bool __fastcall sub_7C9060(__int64 a1, char **a2, __int64 a3)
{
  bool result; // al
  char *v4; // rbx
  char *v5; // r15
  char *v6; // r15
  char *v7; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v8[9]; // [rsp+10h] [rbp-48h] BYREF

  v8[1] = __readfsqword(0x28u);
  v7 = *a2;
  if ( __CFADD__(a3, v7) )
    return 0;
  v4 = &v7[a3];
  if ( !(unsigned __int8)sub_7C8E40((__int64 *)a1, &v7, a3) )
    return 0;
  v5 = v7;
  v8[0] = v7;
  *(_QWORD *)(a1 + 72) = unpack_dq(v8, v4);
  v7 = (char *)v8[0];
  if ( (unsigned __int64)v5 >= v8[0] )
    return 0;
  if ( !sub_7BFDB0((_DWORD *)(a1 + 80), (unsigned __int64 *)&v7) )
    return 0;
  v6 = v7;
  v8[0] = v7;
  *(_QWORD *)(a1 + 88) = unpack_dq(v8, v4);
  v7 = (char *)v8[0];
  if ( (unsigned __int64)v6 >= v8[0] )
    return 0;
  if ( !sub_7BFDB0((_DWORD *)(a1 + 96), (unsigned __int64 *)&v7) )
    return 0;
  result = sub_7BFDB0((_DWORD *)(a1 + 100), (unsigned __int64 *)&v7);
  if ( !result )
    return 0;
  *a2 = v7;
  return result;
}

