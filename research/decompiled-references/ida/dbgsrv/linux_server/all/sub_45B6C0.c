/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B6C0
// Address: 0x000000000045B6C0

//----- (000000000045B6C0) ----------------------------------------------------
__int64 __fastcall sub_45B6C0(_QWORD *a1, __int16 a2)
{
  __int64 v2; // rax
  void *v4; // rsi
  void *v6; // rax

  v2 = a1[17];
  v4 = (void *)a1[16];
  if ( a1[18] < (unsigned __int64)(v2 + 1) )
  {
    v6 = sub_481540((__int64)(a1 + 16), v4, v2 + 1, 2u);
    a1[16] = v6;
    v4 = v6;
    v2 = a1[17];
  }
  *((_WORD *)v4 + v2) = a2;
  ++a1[17];
  return 0;
}
