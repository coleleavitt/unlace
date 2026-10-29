__int64 __fastcall sub_49140(__int64 a1, char **a2, __int64 a3)
{
  unsigned int v3; // r12d
  char *v5; // rbx
  char *v6; // r14
  char *v7; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  v7 = *a2;
  if ( __CFADD__(a3, v7) )
    return 0;
  v5 = &v7[a3];
  v3 = sub_480B0((__int64 *)(a1 + 16), (const void **)&v7, (unsigned __int64)&v7[a3]);
  if ( !(_BYTE)v3 )
    return 0;
  v6 = v7;
  v8[0] = v7;
  *(_DWORD *)(a1 + 40) = sub_93BC0(v8, v5);
  if ( (unsigned __int64)v6 >= v8[0] )
    return 0;
  else
    *a2 = (char *)v8[0];
  return v3;
}

