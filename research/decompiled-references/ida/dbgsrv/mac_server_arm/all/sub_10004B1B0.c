/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B1B0
// Address: 0x000000010004B1B0

//----- (000000010004B1B0) ----------------------------------------------------
__int64 __fastcall sub_10004B1B0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD **v4; // x0
  __int64 v6; // [xsp+8h] [xbp-18h]
  __int64 v7; // [xsp+10h] [xbp-10h]

  if ( a1 )
    v4 = (_QWORD **)(a1 - 192);
  else
    v4 = nullptr;
  v6 = a3;
  v7 = a3 + a4;
  if ( a2 < 0x1000000 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*v4[55] + 400LL))(v4[55]);
  else
    return ((__int64 (__fastcall *)(_QWORD **))(*v4)[4])(v4);
}
