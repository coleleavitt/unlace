/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3998C
// Address: 0x0003998C

//----- (0003998C) --------------------------------------------------------
int __fastcall sub_3998C(_DWORD *a1)
{
  char *v2; // r0
  unsigned int v3; // r6
  int v4; // r7
  int v5; // r5
  const char *v6; // r0
  int v7; // r1
  int result; // r0
  int *v9; // [sp+4h] [bp-8h]
  char *s2; // [sp+8h] [bp-4h]

  if ( a1[7] )
    v2 = (char *)a1[6];
  else
    v2 = &byte_B3CBE;
  s2 = v2;
  v3 = a1[21];
  v9 = a1 + 20;
  if ( v3 )
  {
    v4 = *v9;
    v5 = 0;
    while ( 1 )
    {
      v6 = &byte_B3CBE;
      if ( *(_DWORD *)(v4 + 4) )
        v6 = *(const char **)v4;
      if ( !strcmp(v6, s2) )
        break;
      v4 += 12;
      if ( ++v5 >= v3 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v7 = sub_3BBC0((int)v9, s2);
    result = 0;
    if ( v7 != -1 )
      return result;
  }
  set_error_string(0, s2);
  return set_qerrno(52);
}
// B3CBE: using guessed type char byte_B3CBE;
