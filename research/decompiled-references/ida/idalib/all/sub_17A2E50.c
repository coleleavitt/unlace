__int64 __fastcall sub_17A2E50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  _QWORD *v7; // rax

  v6 = *(_QWORD *)(a1 + 544);
  v7 = sub_B7E870(a3, a2, a3, a4, a5, a6);
  if ( v7 )
    v7 += 8;
  *(_QWORD *)(a1 + 544) = v7;
  *(_QWORD *)(a2 + 360) = sub_B8ED10((__int64)v7);
  return v6;
}
