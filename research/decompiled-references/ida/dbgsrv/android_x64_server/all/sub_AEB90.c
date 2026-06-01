/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AEB90
// Address: 0x00000000000AEB90

//----- (00000000000AEB90) ----------------------------------------------------
void __fastcall sub_AEB90(__int64 a1)
{
  const char *v1; // r14
  FILE *v2; // rax
  const char *v3; // rax

  if ( (unsigned __int64)xmmword_156A38 >= 2 )
  {
    v1 = *((const char **)&xmmword_156A28 + 1);
    v2 = fopenA(*((const char **)&xmmword_156A28 + 1));
    *(_QWORD *)(a1 + 160) = v2;
    if ( v2 )
    {
      sub_AD570(v2);
    }
    else
    {
      v3 = (const char *)qerrstr(0xFFFFFFFFLL);
      sub_AD470("Cannot open log file \"%s\": %s\n", v1, v3);
    }
  }
}
// 156A28: using guessed type __int128 xmmword_156A28;
// 156A38: using guessed type __int128 xmmword_156A38;
