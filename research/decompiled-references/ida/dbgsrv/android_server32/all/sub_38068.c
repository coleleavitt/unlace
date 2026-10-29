/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38068
// Address: 0x00038068

//----- (00038068) --------------------------------------------------------
int __fastcall sub_38068(int a1, int a2)
{
  const char *v3; // r1
  int v4; // r5
  const char *v5; // r1
  char *v7; // [sp+0h] [bp-10h] BYREF
  int v8; // [sp+4h] [bp-Ch]
  int v9; // [sp+8h] [bp-8h]

  v8 = 0;
  v7 = nullptr;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 12) )
    v3 = *(const char **)(a1 + 8);
  else
    v3 = &byte_B3CBE;
  if ( eval_idc_snippet(0, v3, (int)&v7, 0) )
  {
    *(_DWORD *)(a2 + 8) = 1;
    v4 = 0;
  }
  else
  {
    if ( v8 )
      v5 = v7;
    else
      v5 = &byte_B3CBE;
    v4 = throw_idc_exception(a2, v5);
  }
  if ( v7 )
  {
    v8 = 0;
    qfree(v7);
    v9 = 0;
    v7 = nullptr;
  }
  return v4;
}
// B3CBE: using guessed type char byte_B3CBE;
