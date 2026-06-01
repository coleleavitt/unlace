/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57E18
// Address: 0x00057E18

//----- (00057E18) --------------------------------------------------------
_DWORD *__fastcall sub_57E18(_DWORD *a1)
{
  _BYTE *v2; // r0
  int v3; // r3
  void *v4; // r0
  void *v5; // r0

  v2 = (_BYTE *)a1[61];
  *a1 = &off_D294C;
  a1[25] = &off_D2978;
  if ( v2 )
    v3 = (v2[452] ^ 1) & 1;
  else
    v3 = 0;
  if ( v3 )
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v2 + 20))(v2);
  sub_65834((int)a1);
  a1[62] = 0;
  sub_6E484(a1 + 50);
  sub_6E484(a1 + 39);
  v4 = (void *)a1[35];
  a1[25] = dword_D2B54;
  if ( v4 )
  {
    a1[36] = 0;
    sub_77F70(v4);
  }
  v5 = (void *)a1[27];
  if ( v5 )
  {
    a1[28] = 0;
    sub_77F70(v5);
  }
  sub_657C8(a1);
  return a1;
}
// D294C: using guessed type _UNKNOWN *off_D294C;
// D2978: using guessed type _UNKNOWN *off_D2978;
// D2B54: using guessed type int dword_D2B54[2];
