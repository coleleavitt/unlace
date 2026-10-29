__int64 __fastcall sub_7A82F0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx

  v4 = sub_7E4EC0(a2);
  v5 = sub_180C100(v4, 12);
  v6 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 16) = 3;
  *(_DWORD *)(v5 + 8) = a3;
  LODWORD(v6) = *(_DWORD *)(v6 + 3612);
  *(_QWORD *)v5 = a2;
  *(_QWORD *)(a1 + 8) = v5;
  *(_DWORD *)a1 = v6;
  return a1;
}

