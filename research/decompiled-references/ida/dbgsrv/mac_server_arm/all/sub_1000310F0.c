/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000310F0
// Address: 0x00000001000310F0

//----- (00000001000310F0) ----------------------------------------------------
void __fastcall sub_1000310F0(char *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // x21
  __int64 v6; // x0
  char *v7; // [xsp+0h] [xbp-30h] BYREF

  v7 = a1;
  if ( a2 >= 1 )
  {
    skip_utf8(&v7, a2);
LABEL_7:
    get_utf8_char(&v7);
    return;
  }
  if ( (a2 & 0x8000000000000000LL) == 0 )
    goto LABEL_7;
  if ( a3 )
  {
    v5 = 0;
    do
    {
      prev_utf8_char(nullptr, (unsigned __int64 *)&v7, a3);
      --v5;
    }
    while ( v5 > a2 );
    goto LABEL_7;
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(1834);
  sub_1000311B8(v6);
}
// 1000311B5: variable 'v6' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
