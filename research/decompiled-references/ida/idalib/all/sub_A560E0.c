__int64 __fastcall sub_A560E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax

  if ( !a2 )
  {
    sub_F5EA60(0);
    BUG();
  }
  v7 = sub_F5EA60(a2 - 24);
  sub_F6B2E0(a5, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), v7);
  return sub_2222ED0(a5, a3);
}
