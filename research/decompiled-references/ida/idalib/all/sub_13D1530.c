__int64 __fastcall sub_13D1530(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  int v7; // esi
  int v8; // edx

  v5 = *(_QWORD *)(a2 + 8);
  v6 = a3 - *(_QWORD *)(a2 + 112);
  v7 = *(_DWORD *)(a2 + 128);
  if ( v7 < 0 )
    v8 = sub_13D0510(v5, v7, v6, 1);
  else
    v8 = v7 + v6;
  sub_FC70B0(a1, *(_QWORD *)(v5 + 48), v8, a4);
  return a1;
}
