/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046308
// Address: 0x0000000100046308

//----- (0000000100046308) ----------------------------------------------------
void *__fastcall sub_100046308(_BYTE *a1, const void *a2, unsigned __int64 a3)
{
  _QWORD *v4; // x20
  const void *v5; // x22
  size_t v6; // x21

  if ( a3 > 0x16 )
  {
    v4 = a1;
    if ( a3 >= 0x7FFFFFFFFFFFFFF8LL )
      sub_100044FA8();
    v5 = a2;
    if ( (a3 | 7) == 0x17 )
      v6 = 25;
    else
      v6 = (a3 | 7) + 1;
    a1 = operator new(v6);
    v4[1] = a3;
    v4[2] = v6 | 0x8000000000000000LL;
    *v4 = a1;
    a2 = v5;
  }
  else
  {
    a1[23] = a3;
  }
  return memmove(a1, a2, a3 + 1);
}
