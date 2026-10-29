__int64 __fastcall sub_7BEA70(__int64 a1, const void **a2, __int64 a3)
{
  char *v3; // rbx
  bool v4; // cf
  char *v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  const void *v8; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v3 = (char *)*a2;
  v8 = v3;
  v4 = __CFADD__(v3, a3);
  v5 = &v3[a3];
  if ( v4 )
    return 0;
  v9[0] = v3;
  v7 = (unsigned __int64)v5;
  *(_DWORD *)(a1 + 12) = unpack_dd(v9);
  v8 = (const void *)v9[0];
  if ( (unsigned __int64)v3 >= v9[0] )
    return 0;
  result = sub_7BE9B0((__int64 *)(a1 + 16), &v8, v7);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v8;
  return result;
}

