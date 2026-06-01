__int64 __fastcall sub_811140(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx

  v6 = sub_7E4EC0(a2);
  v7 = sub_180C100(v6, 56);
  v8 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 16) = 3;
  *(_DWORD *)(v7 + 12) = a3;
  *(_QWORD *)(v7 + 16) = -1;
  *(_DWORD *)(v7 + 24) = a4;
  *(_DWORD *)(v7 + 28) = -2;
  LODWORD(v8) = *(_DWORD *)(v8 + 3612);
  *(_QWORD *)v7 = a2;
  *(_DWORD *)(v7 + 8) = 3;
  *(_QWORD *)(a1 + 8) = v7;
  *(_DWORD *)a1 = v8;
  return a1;
}

