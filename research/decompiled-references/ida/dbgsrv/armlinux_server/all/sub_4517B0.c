/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4517B0
// Address: 0x00000000004517B0

//----- (00000000004517B0) ----------------------------------------------------
char *__fastcall sub_4517B0(__int64 a1)
{
  char *i; // x20
  int v3; // w19
  bool v4; // zf
  unsigned int v5; // w23
  char *v6; // x22
  __int64 v8; // x1
  int v9; // w2
  bool v10; // zf

  for ( i = *(char **)(a1 + 8); ; *(_QWORD *)(a1 + 8) = i )
  {
    v3 = (unsigned __int8)*i;
    v4 = v3 == 32 || v3 == 9;
    if ( !v4 && !sub_450428(*i) )
      break;
    ++i;
  }
  v5 = v3 & 0x80;
  if ( (v3 & 0x80) == 0 && isalpha(v3) )
  {
    v6 = i;
  }
  else
  {
    v6 = i;
    if ( v3 != 95 && v3 != 36 )
      goto LABEL_14;
  }
  while ( !v5 && isalnum(v3) || v3 == 95 || v3 == 36 )
  {
    *(_QWORD *)(a1 + 8) = ++v6;
    v3 = (unsigned __int8)*v6;
    v5 = v3 & 0xFFFFFF80;
  }
LABEL_14:
  *(_BYTE *)(a1 + 692) = v3;
  if ( *v6 )
  {
    *v6 = 0;
    v8 = *(_QWORD *)(a1 + 8) + 1LL;
    do
    {
      *(_QWORD *)(a1 + 8) = v8++;
      v9 = *(unsigned __int8 *)(v8 - 1);
      v10 = v9 == 32 || v9 == 9;
    }
    while ( v10 || sub_450428(*(_BYTE *)(v8 - 1)) );
  }
  return i;
}
// 4517F4: mask 0xFFFFFF80 is shortened because w19.4 <= 0xFF
// 451838: variable 'v8' is possibly undefined
