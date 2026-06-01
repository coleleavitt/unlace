/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000ED30
// Address: 0x000000010000ED30

//----- (000000010000ED30) ----------------------------------------------------
__int64 __fastcall sub_10000ED30(__int64 a1)
{
  __int64 v1; // x20
  void *v2; // x19
  const char *v3; // x0
  void *v5; // [xsp+0h] [xbp-30h] BYREF
  __int64 v6; // [xsp+8h] [xbp-28h]
  __int64 v7; // [xsp+10h] [xbp-20h]

  v5 = nullptr;
  v6 = 0;
  v7 = 0;
  v1 = sub_10000EBE0((__int64)&v5, a1);
  v2 = v5;
  if ( v1 < 0 )
  {
    v1 = -1;
    if ( !v5 )
      return v1;
LABEL_10:
    v6 = 0;
    qfree(v2);
    return v1;
  }
  if ( v6 )
    v3 = (const char *)v5;
  else
    v3 = &byte_10007AE40;
  if ( strcmp(v3, "IM4P") )
    v1 = -1;
  if ( v2 )
    goto LABEL_10;
  return v1;
}
// 10007AE40: using guessed type char byte_10007AE40;
