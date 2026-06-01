/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006375C
// Address: 0x000000010006375C

//----- (000000010006375C) ----------------------------------------------------
__int64 __fastcall sub_10006375C(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x1

  sub_10005E368(*(_QWORD *)(a1 + 32));
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = -1;
  v8 = 78;
  if ( (a2 & 0x80000000) == 0 && a3 )
  {
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = a4;
    v8 = 33;
    *(_DWORD *)(a1 + 24) = a2;
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(qword_10009DAD8 + 216))(
           *(_QWORD *)(a1 + 88),
           v8,
           1,
           0);
}
// 10009DAD8: using guessed type __int64 qword_10009DAD8;
