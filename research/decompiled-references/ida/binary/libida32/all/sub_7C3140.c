bool __fastcall sub_7C3140(__int64 a1, char **a2, __int64 a3)
{
  bool result; // al
  char *v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[1] = (char *)__readfsqword(0x28u);
  v4[0] = *a2;
  if ( __CFADD__(a3, v4[0]) )
    return 0;
  if ( !sub_7C3050(a1 + 16, v4, a3) )
    return 0;
  result = sub_7BFDB0((_DWORD *)(a1 + 136), (unsigned __int64 *)v4);
  if ( !result )
    return 0;
  *a2 = v4[0];
  return result;
}

