__int64 __fastcall sub_50820(__int64 a1, const void **a2, __int64 a3)
{
  char *v3; // rbx
  bool v4; // cf
  char *v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  char v9; // al
  const void *v10; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  v3 = (char *)*a2;
  v10 = v3;
  v4 = __CFADD__(v3, a3);
  v5 = &v3[a3];
  if ( v4 )
    return 0;
  v11[0] = v3;
  v7 = (unsigned __int64)v5;
  *(_DWORD *)a1 = sub_93BC0(v11, v5);
  v10 = (const void *)v11[0];
  if ( (unsigned __int64)v3 >= v11[0] )
    return 0;
  if ( v11[0] >= v7 )
  {
    *(_BYTE *)(a1 + 4) = 0;
    return 0;
  }
  v9 = *(_BYTE *)v11[0];
  v8 = ++v11[0];
  *(_BYTE *)(a1 + 4) = v9;
  *(_QWORD *)(a1 + 8) = sub_93CE0(v11, v7);
  v10 = (const void *)v11[0];
  if ( v8 >= v11[0] )
    return 0;
  if ( !(unsigned __int8)sub_480B0((__int64 *)(a1 + 16), &v10, v7) )
    return 0;
  if ( !(unsigned __int8)sub_480B0((__int64 *)(a1 + 40), &v10, v7) )
    return 0;
  result = sub_480B0((__int64 *)(a1 + 64), &v10, v7);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v10;
  return result;
}

