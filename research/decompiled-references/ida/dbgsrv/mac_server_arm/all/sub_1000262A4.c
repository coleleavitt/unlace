/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000262A4
// Address: 0x00000001000262A4

//----- (00000001000262A4) ----------------------------------------------------
__int64 __fastcall sub_1000262A4(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *v9; // x1
  __int64 v10; // x8
  int *v11; // x20
  int *v12; // x0
  __int64 result; // x0

  sub_10000273C((char **)(a1 + 40), "%s.%s", a3, a4, a5, a6, a7, a8, a2);
  sub_100025BA4(a1);
  sub_1000260A8(a1);
  v9 = *(_QWORD **)(a1 + 40);
  if ( *(_QWORD *)(a1 + 56) <= 4u )
  {
    v9 = qvector_reserve((_QWORD *)(a1 + 40), v9, 5u, 1u);
    *(_QWORD *)(a1 + 40) = v9;
  }
  *(_QWORD *)(a1 + 48) = 5;
  *(_DWORD *)v9 = 1936287860;
  *(_BYTE *)(*(_QWORD *)(a1 + 40) + 4LL) = 0;
  sub_100025BA4(a1);
  v10 = *(_QWORD *)(a1 + 352);
  v11 = *(int **)(*(_QWORD *)(a1 + 344) + 8 * v10 - 8);
  if ( v10 )
    *(_QWORD *)(a1 + 352) = v10 - 1;
  sub_100027554(a1, (__int64)v11, 0, 0);
  if ( v11 )
  {
    v12 = sub_100025DE0(v11);
    operator delete(v12);
  }
  result = set_qerrno();
  if ( !(_DWORD)result )
    return sub_1000263A4(a1);
  return result;
}
