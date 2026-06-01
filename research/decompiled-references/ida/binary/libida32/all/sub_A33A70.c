__int64 __fastcall sub_A33A70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  if ( !a2 )
  {
    sub_F3AD20(0);
    BUG();
  }
  v4 = sub_F3AD20(a2 - 24);
  return sub_F475A0(a3, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), v4);
}

