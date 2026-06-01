/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38344
// Address: 0x00038344

//----- (00038344) --------------------------------------------------------
int __fastcall sub_38344(int a1, int a2)
{
  const char *v3; // r2
  size_t v4; // r5
  unsigned int v5; // r6
  unsigned int v6; // r3
  size_t v7; // r2
  char *v8; // r1
  char *v9; // r5
  size_t v10; // r2
  unsigned int v12; // [sp+4h] [bp-28h]
  char *s; // [sp+10h] [bp-1Ch] BYREF
  unsigned int v14; // [sp+14h] [bp-18h]
  unsigned int v15; // [sp+18h] [bp-14h]
  void *v16; // [sp+1Ch] [bp-10h] BYREF
  unsigned int v17; // [sp+20h] [bp-Ch]
  int v18; // [sp+24h] [bp-8h]

  v17 = 0;
  v16 = nullptr;
  v18 = 0;
  if ( *(_DWORD *)(a1 + 12) )
    v3 = *(const char **)(a1 + 8);
  else
    v3 = &byte_B3CBE;
  if ( eval_expr(a2, -1, v3, (int)&v16) )
    goto LABEL_18;
  sub_1B09C((int)&s, "IDC_FAILURE: ");
  v4 = v17 - 1;
  if ( v17 >= 2 )
  {
    v5 = v14 - 1;
    if ( !v14 )
      v5 = 0;
    v6 = v5 + v17;
    v7 = v5 + v4;
    v8 = s;
    if ( v15 < v5 + v17 )
    {
      v12 = v5 + v17;
      v8 = (char *)qvector_reserve((int)&s, s, v6, 1u);
      s = v8;
      v7 = v5 + v4;
      v6 = v12;
    }
    v14 = v6;
    v8[v7] = 0;
    qmemcpy(&s[v5], v16, v4);
  }
  if ( v14 )
  {
    v9 = s;
    if ( !s )
    {
      v9 = nullptr;
      v10 = 0;
      goto LABEL_16;
    }
  }
  else
  {
    v9 = &byte_B3CBE;
  }
  v10 = strlen(v9);
LABEL_16:
  *(_BYTE *)a2 = 7;
  sub_266B8((_DWORD *)(a2 + 8), v9, v10);
  if ( s )
  {
    v14 = 0;
    qfree(s);
    v15 = 0;
    s = nullptr;
  }
LABEL_18:
  if ( v16 )
  {
    v17 = 0;
    qfree(v16);
    v18 = 0;
    v16 = nullptr;
  }
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
