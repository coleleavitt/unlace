/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65A80
// Address: 0x00065A80

//----- (00065A80) --------------------------------------------------------
_DWORD *__fastcall sub_65A80(_DWORD *a1)
{
  int v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  *a1 = dword_D2B38;
  sub_66704(a1 + 10);
  v2 = a1[11];
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = (void *)a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    sub_77F70(v3);
  }
  v4 = (void *)a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    sub_77F70(v4);
  }
  v5 = (void *)a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    sub_77F70(v5);
  }
  return a1;
}
// D2B38: using guessed type int dword_D2B38[2];
