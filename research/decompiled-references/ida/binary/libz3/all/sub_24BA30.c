__int64 __fastcall sub_24BA30(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  int v5; // eax
  _DWORD *v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx

  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 || !*(_DWORD *)(a2 + 8) )
  {
    sub_24EA30(a1, 3, "not a valid ast");
    return 0;
  }
  v3 = a3;
  v4 = sub_15F0110(*(_QWORD *)(a1 + 1480));
  v5 = sub_15F0200(v4);
  v6 = *(_DWORD **)(a2 + 24);
  if ( !v6
    || v5 != *v6
    || v6[1]
    || (v8 = *(_QWORD *)sub_15F6BE0(v4, a2)) == 0
    || (unsigned int)v3 >= *(_DWORD *)(v8 - 4) )
  {
    sub_24EA30(a1, 3, 0);
    return 0;
  }
  v9 = *(_QWORD *)(v8 + 8 * v3);
  sub_251FD0(a1, v9);
  return v9;
}

