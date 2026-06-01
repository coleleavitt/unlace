/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000483B8
// Address: 0x00000001000483B8

//----- (00000001000483B8) ----------------------------------------------------
void *__fastcall sub_1000483B8(_BYTE *a1, const void *a2, unsigned __int64 a3)
{
  _QWORD *v4; // x20
  const void *v5; // x22
  size_t v6; // x21
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( a3 > 0x16 )
  {
    v4 = a1;
    if ( a3 >= 0x7FFFFFFFFFFFFFF8LL )
      sub_100047010();
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
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return memmove(a1, a2, a3 + 1);
}
// 100048430: variable '_28' is possibly undefined
