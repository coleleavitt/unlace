/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16868
// Address: 0x00016868

//----- (00016868) --------------------------------------------------------
char *__fastcall sub_16868(char *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  char *v4; // r0
  void *v5; // r0

  v2 = *((_DWORD **)a1 + 7);
  *(_DWORD *)a1 = &dword_D2648[2];
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      sub_809EC(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  memset(*((void **)a1 + 5), 0, 4 * *((_DWORD *)a1 + 6));
  v4 = *((char **)a1 + 5);
  *((_DWORD *)a1 + 7) = 0;
  *((_DWORD *)a1 + 8) = 0;
  if ( v4 != a1 + 44 )
    sub_809EC(v4);
  v5 = *((void **)a1 + 2);
  if ( v5 )
  {
    *((_DWORD *)a1 + 3) = 0;
    sub_77F70(v5);
  }
  sub_808A0(a1);
  return a1;
}
// D2648: using guessed type int dword_D2648[4];
