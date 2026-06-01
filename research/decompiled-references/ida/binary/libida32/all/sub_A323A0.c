__int64 __fastcall sub_A323A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax

  if ( !a2 )
  {
    sub_F3AD20(0);
    BUG();
  }
  v7 = sub_F3AD20(a2 - 24);
  sub_F475A0(a5, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), v7);
  return sub_21FF190(a5, a3);
}

