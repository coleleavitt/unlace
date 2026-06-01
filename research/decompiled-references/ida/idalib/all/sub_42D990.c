__int64 __fastcall sub_42D990(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax

  v6 = a2;
  v7 = a2 - sub_631AD0(**(_QWORD **)(a1 + 1672), 29);
  if ( v7 >= *a3 && v7 < a3[1] )
    return v7 + a4 + sub_631AD0(**(_QWORD **)(a1 + 1672), 29);
  return v6;
}
