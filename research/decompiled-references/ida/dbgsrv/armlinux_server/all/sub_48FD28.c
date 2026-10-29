/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48FD28
// Address: 0x000000000048FD28

//----- (000000000048FD28) ----------------------------------------------------
__int64 __fastcall sub_48FD28(int a1, int a2)
{
  unsigned int v3; // w1
  int v5; // w0

  if ( a2 == 1 )
  {
    if ( flock(a1, 5) != -1 )
      goto LABEL_4;
LABEL_7:
    sub_4869C8(1);
    return (unsigned int)-1;
  }
  if ( a2 == 8 )
  {
    v5 = flock(a1, 12);
    v3 = 0;
    if ( v5 != -1 )
      return v3;
    goto LABEL_7;
  }
  if ( flock(a1, 6) == -1 )
    goto LABEL_7;
LABEL_4:
  fcntl(a1, 2, 1);
  return 0;
}
