__int64 __fastcall sub_13D0510(__int64 a1, int a2, int a3, int a4)
{
  int v4; // eax
  __int64 v7; // r12
  int v8; // ebp
  unsigned __int64 v9; // rax

  v4 = a2;
  v7 = *(_QWORD *)(a1 + 88);
  if ( a2 < 0 )
    v4 = sub_1021B90(*(_QWORD *)(a1 + 88), a2);
  v8 = v4 + a3;
  v9 = sub_101FC50(v7, a2);
  return sub_10209A0(v7, v8, v9, SHIDWORD(v9), a4, 1, 0, 0);
}
