__int64 __fastcall sub_27DFE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rax
  __int64 v7; // rax

  if ( (_BYTE)a2 )
  {
    v5 = sub_1F3B50(a1, 1, a3, a4, a5);
    return sub_27DC40(a1, v5);
  }
  else
  {
    v7 = sub_1EA680(a1 + 384, a2, a3, a4, a5);
    return sub_27DC40(a1, *(_QWORD *)(v7 + 40));
  }
}
