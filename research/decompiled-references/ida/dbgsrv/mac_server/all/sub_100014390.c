/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100014390
// Address: 0x0000000100014390

//----- (0000000100014390) ----------------------------------------------------
bool __fastcall sub_100014390(__int64 a1, unsigned int a2, unsigned __int64 a3, const char *a4, off_t a5, __int64 a6)
{
  __int64 v6; // r15
  off_t v7; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  bool result; // al

  v6 = a6;
  v7 = a5;
  if ( a5 == -1 )
  {
    v7 = qlseek(a1, 0, 1);
    if ( v6 != -1 )
      goto LABEL_3;
LABEL_12:
    v6 = qlsize(a1);
    goto LABEL_3;
  }
  if ( a6 == -1 )
    goto LABEL_12;
LABEL_3:
  LODWORD(v9) = 0;
  if ( v7 < 0 || (v10 = v6 - v7, (v10 & 0x8000000000000000LL) != 0LL) )
LABEL_16:
    sub_10001D7A0((__int64)"%s is incorrect, maximum possible value is %u%s", a4, v9, (const char *)&dword_10008FEDC);
  result = a2 != 0 && a3 != 0 && (a3 * (unsigned __int128)a2) >> 64 != 0;
  if ( result || v10 < a3 * a2 )
  {
    if ( (a3 | v10) >> 32 )
      v9 = v10 / a3;
    else
      LODWORD(v9) = (unsigned int)v10 / (unsigned int)a3;
    goto LABEL_16;
  }
  return result;
}
// 10008FEDC: using guessed type int dword_10008FEDC;
