/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_381E0
// Address: 0x000381E0

//----- (000381E0) --------------------------------------------------------
int __fastcall sub_381E0(int a1, int a2)
{
  char *v3; // r0
  char *v4; // r5
  size_t v5; // r2
  char *s; // [sp+4h] [bp-10h] BYREF
  int v8; // [sp+8h] [bp-Ch]
  int v9; // [sp+Ch] [bp-8h]

  v8 = 0;
  s = nullptr;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 12) )
    v3 = *(char **)(a1 + 8);
  else
    v3 = &byte_B3CBE;
  compile_idc_file(v3, (int)&s, 3);
  if ( v8 )
  {
    v4 = s;
    if ( !s )
    {
      v4 = nullptr;
      v5 = 0;
      goto LABEL_9;
    }
  }
  else
  {
    v4 = &byte_B3CBE;
  }
  v5 = strlen(v4);
LABEL_9:
  *(_BYTE *)a2 = 7;
  sub_266B8((_DWORD *)(a2 + 8), v4, v5);
  if ( s )
  {
    v8 = 0;
    qfree(s);
    v9 = 0;
    s = nullptr;
  }
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
