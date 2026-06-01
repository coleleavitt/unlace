/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrerror
// Address: 0x00000001000755C4

//----- (00000001000755C4) ----------------------------------------------------
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
  __int64 _28; // [xsp+28h] [xbp+8h]

  qerrno = a1;
  if ( a1 != -1 )
  {
    if ( a1 <= 1 )
      goto LABEL_3;
LABEL_9:
    if ( qerrno == 2 )
      return "Disk is full";
    if ( qerrno == 3 )
      return "Read attempt past file end";
LABEL_12:
    v3 = (char **)sub_10006C158();
    sub_10000295C(v3, "Unknown error code %d", v4, v5, v6, v7, v8, v9, qerrno);
    return *v3;
  }
  qerrno = get_qerrno();
  if ( qerrno > 1 )
    goto LABEL_9;
LABEL_3:
  if ( !qerrno )
    return "No error";
  if ( qerrno != 1 )
    goto LABEL_12;
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (const char *)qerrstr(-1);
}
// 10007560C: variable '_28' is possibly undefined
// 10007565C: variable 'v4' is possibly undefined
// 10007565C: variable 'v5' is possibly undefined
// 10007565C: variable 'v6' is possibly undefined
// 10007565C: variable 'v7' is possibly undefined
// 10007565C: variable 'v8' is possibly undefined
// 10007565C: variable 'v9' is possibly undefined
