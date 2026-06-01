__int64 __fastcall sub_1EEC830(__int64 *a1, _DWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdi
  __int64 result; // rax

  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 32);
  v5 = *(_DWORD *)(v3 + 24);
  a2[4] = *(_QWORD *)(v4 + 8LL * v5);
  v6 = v5 + 2;
  v7 = *(_QWORD *)(v4 + 8LL * (v5 + 1));
  *(_DWORD *)(v3 + 24) = v6;
  a2[6] = v7;
  v8 = sub_1EE7490(v3);
  v9 = *a1;
  a2[3] = v8;
  v10 = sub_1EE7490(v9);
  v11 = *a1;
  a2[5] = v10;
  result = sub_1EE7490(v11);
  a2[7] = result;
  return result;
}
