/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrerror
// Address: 0x0000000100070534

//----- (0000000100070534) ----------------------------------------------------
const char *__fastcall qstrerror(int a1)
{
  int qerrno; // w19
  char **v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7

  qerrno = a1;
  if ( a1 == -1 )
  {
    qerrno = get_qerrno();
    if ( qerrno <= 1 )
      goto LABEL_3;
  }
  else if ( a1 <= 1 )
  {
LABEL_3:
    if ( qerrno )
    {
      if ( qerrno == 1 )
        return (const char *)qerrstr(-1);
LABEL_10:
      v3 = (char **)sub_100067450();
      sub_10000273C(v3, "Unknown error code %d", v4, v5, v6, v7, v8, v9, qerrno);
      return *v3;
    }
    return "No error";
  }
  if ( qerrno != 2 )
  {
    if ( qerrno == 3 )
      return "Read attempt past file end";
    goto LABEL_10;
  }
  return "Disk is full";
}
// 1000705B8: variable 'v4' is possibly undefined
// 1000705B8: variable 'v5' is possibly undefined
// 1000705B8: variable 'v6' is possibly undefined
// 1000705B8: variable 'v7' is possibly undefined
// 1000705B8: variable 'v8' is possibly undefined
// 1000705B8: variable 'v9' is possibly undefined
