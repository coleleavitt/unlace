/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006EA38
// Address: 0x000000010006EA38

//----- (000000010006EA38) ----------------------------------------------------
__int64 __fastcall sub_10006EA38(const char *a1, __int64 a2, int a3)
{
  __int64 v4; // x0
  __int64 v5; // x19

  v4 = open(a1, 514, a2);
  if ( (_DWORD)v4 == -1 )
    goto LABEL_6;
  v5 = v4;
  if ( (unsigned int)sub_10006E8EC(v4, 2, a3) )
  {
LABEL_5:
    if ( close(v5) != -1 )
      return 0xFFFFFFFFLL;
LABEL_6:
    set_qerrno();
    return 0xFFFFFFFFLL;
  }
  if ( ftruncate(v5, 0) )
  {
    set_qerrno();
    goto LABEL_5;
  }
  return v5;
}
