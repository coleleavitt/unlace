__int64 __fastcall sub_8E9400(__int64 a1, char **a2, __int64 a3)
{
  unsigned int v3; // r12d
  char *v5; // r14
  int v6; // eax
  char *v7; // rdx
  char *v8; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v8 = *a2;
  if ( __CFADD__(a3, v8) )
    return 0;
  v3 = sub_8E9310((__int64 *)(a1 + 16), &v8, a3);
  if ( !(_BYTE)v3 )
    return 0;
  v5 = v8;
  v9[0] = v8;
  v6 = unpack_dd(v9);
  v7 = (char *)v9[0];
  if ( (unsigned __int64)v5 >= v9[0] )
  {
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 120) = v6 != 0;
    *a2 = v7;
  }
  return v3;
}
