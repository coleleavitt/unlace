/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000378A0
// Address: 0x00000001000378A0

//----- (00000001000378A0) ----------------------------------------------------
void __fastcall sub_1000378A0(char *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 i; // r12
  char *v5; // [rsp+0h] [rbp-30h] BYREF

  v5 = a1;
  if ( a2 > 0 )
  {
    skip_utf8(&v5, a2);
LABEL_7:
    get_utf8_char(&v5);
    return;
  }
  if ( a2 >= 0 )
    goto LABEL_7;
  if ( a3 )
  {
    for ( i = 0; i > a2; --i )
      prev_utf8_char(nullptr, (unsigned __int64 *)&v5, a3);
    goto LABEL_7;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x72Au);
  sub_100037950(1834);
}
// 1000AE23D: using guessed type char under_debugger;
