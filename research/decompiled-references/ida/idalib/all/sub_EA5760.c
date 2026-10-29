__int64 __fastcall sub_EA5760(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rdx

  if ( !(_BYTE)a2 )
    return sub_EA4BE0((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9);
  v10 = a1[4];
  if ( (unsigned __int64)(v10 + 1) > a1[5] )
  {
    a2 = (__int64)(a1 + 6);
    sub_2236E10(a1 + 3, a1 + 6, v10 + 1, 1);
    v10 = a1[4];
  }
  v11 = a1[3];
  *(_BYTE *)(v11 + v10) = 1;
  ++a1[4];
  sub_EA4BE0((__int64)a1, a2, v11, a4, a5, a6, a7, a8, a9);
  result = a1[4];
  if ( (unsigned __int64)(result + 1) > a1[5] )
  {
    sub_2236E10(a1 + 3, a1 + 6, result + 1, 1);
    result = a1[4];
  }
  *(_BYTE *)(a1[3] + result) = 0;
  ++a1[4];
  return result;
}
