__int64 __fastcall sub_8E8770(__int64 a1, char **a2, __int64 a3)
{
  unsigned int v3; // r12d
  unsigned int v5; // eax
  char *v6; // r14
  int v7; // eax
  char *v8; // rdx
  char *v9; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  v9 = *a2;
  if ( __CFADD__(a3, v9) )
    return 0;
  LOBYTE(v5) = sub_8E8640(a1 + 16, &v9, a3);
  v3 = v5;
  if ( !(_BYTE)v5 )
    return 0;
  v6 = v9;
  v10[0] = v9;
  v7 = unpack_dd(v10);
  v8 = (char *)v10[0];
  if ( (unsigned __int64)v6 >= v10[0] )
  {
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 152) = v7 != 0;
    *a2 = v8;
  }
  return v3;
}
