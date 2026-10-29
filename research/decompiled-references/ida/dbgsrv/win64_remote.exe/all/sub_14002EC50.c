/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002EC50
// Address: 0x000000014002EC50

//----- (000000014002EC50) ----------------------------------------------------
__int64 __fastcall sub_14002EC50(__int64 a1, __int64 a2, char *a3, void **a4)
{
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    sub_140029390(a1);
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
  }
  v9[1] = a2;
  v9[0] = &off_140094B80;
  return sub_14002E8D0((char *)a1, a3, a4, (__int64)v9);
}
// 140094B80: using guessed type _UNKNOWN *off_140094B80;
