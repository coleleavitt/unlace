bool __fastcall sub_7E8510(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  bool result; // al
  unsigned __int64 v4; // rdx
  int v5; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int64 v6[7]; // [rsp+10h] [rbp-38h] BYREF

  v6[1] = __readfsqword(0x28u);
  v6[0] = *a2;
  if ( __CFADD__(a3, v6[0]) )
    return 0;
  if ( !(unsigned __int8)sub_7E8250((__int64 *)a1, v6, a3) )
    return 0;
  result = sub_7E30F0(&v5, v6);
  if ( !result )
    return 0;
  v4 = v6[0];
  *(_BYTE *)(a1 + 64) = v5 != 0;
  *a2 = v4;
  return result;
}
