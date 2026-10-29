/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007C2B0
// Address: 0x000000010007C2B0

//----- (000000010007C2B0) ----------------------------------------------------
__int64 __fastcall sub_10007C2B0(const char *a1, unsigned int a2, int a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = open(a1, 514, a2);
  if ( v4 == -1 )
    goto LABEL_6;
  v5 = v4;
  if ( !(unsigned int)sub_10007C170(v4, 2, a3) )
  {
    if ( !ftruncate(v5, 0) )
      return v5;
    set_qerrno();
  }
  v6 = close(v5);
  v5 = -1;
  if ( v6 == -1 )
  {
LABEL_6:
    set_qerrno();
    return (unsigned int)-1;
  }
  return v5;
}
