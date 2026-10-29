void __fastcall sub_42DA00(__int64 a1, __int64 *a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned __int64 v7; // rax

  v4 = *a2;
  if ( *a2 != -1 )
  {
    v7 = v4 - sub_631AD0(**(_QWORD **)(a1 + 1672), 29);
    if ( v7 >= *a3 && v7 < a3[1] )
      v4 = v7 + a4 + sub_631AD0(**(_QWORD **)(a1 + 1672), 29);
    *a2 = v4;
  }
}
