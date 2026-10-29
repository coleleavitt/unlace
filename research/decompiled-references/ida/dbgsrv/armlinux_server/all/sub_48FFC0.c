/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48FFC0
// Address: 0x000000000048FFC0

//----- (000000000048FFC0) ----------------------------------------------------
__int64 __fastcall sub_48FFC0(__int64 a1, int a2, int a3)
{
  unsigned int v3; // w19
  int v4; // w21
  int v5; // w0
  unsigned int v6; // w20
  int v8; // w0

  v3 = a2 & 0xFFFFFDBF;
  if ( a3 )
  {
    if ( a3 <= 0 )
    {
      if ( a3 != -1 )
      {
LABEL_12:
        a1 = (unsigned __int8)under_debugger;
        if ( !under_debugger )
          sub_492270(707);
        __break(0x3E8u);
        goto LABEL_14;
      }
    }
    else if ( a3 != 1 )
    {
      v4 = 8;
      if ( a3 == 2 )
        goto LABEL_5;
      goto LABEL_12;
    }
    v4 = 2;
    v5 = __open64_2(a1, v3);
    v6 = v5;
    if ( v5 != -1 )
      goto LABEL_6;
LABEL_11:
    sub_4869C8(1);
    return v6;
  }
LABEL_14:
  v4 = 1;
LABEL_5:
  v5 = __open64_2(a1, v3);
  v6 = v5;
  if ( v5 == -1 )
    goto LABEL_11;
LABEL_6:
  if ( (unsigned int)sub_48FDA8(v5, v3, v4) )
  {
    v8 = v6;
    v6 = -1;
    sub_48FF88(v8);
  }
  return v6;
}
// 4062E0: using guessed type __int64 __fastcall __open64_2(_QWORD, _QWORD);
// 52451C: using guessed type char under_debugger;
