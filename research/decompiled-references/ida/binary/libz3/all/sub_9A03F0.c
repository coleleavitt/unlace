bool __fastcall sub_9A03F0(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rbx
  void *v6; // r15
  bool v8; // al
  char v9; // bl
  _DWORD *v10; // rax
  __int64 v11; // rax
  char v12; // dl
  _DWORD *v13; // rax

  v3 = a3;
  v4 = sub_999800(*a1, a3);
  v5 = sub_999800(*a1, a2);
  v6 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v5 + 4) & 1) != 0 || (*(_BYTE *)(v4 + 4) & 1) != 0 )
  {
    if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v5, v4) )
      return 0;
  }
  else if ( *(_DWORD *)v5 != *(_DWORD *)v4 )
  {
    return 0;
  }
  if ( (*(_BYTE *)(v5 + 20) & 1) != 0 || (*(_BYTE *)(v4 + 20) & 1) != 0 )
    v8 = (unsigned int)sub_182C7B0(v6, v5 + 16, v4 + 16) == 0;
  else
    v8 = *(_DWORD *)(v5 + 16) == *(_DWORD *)(v4 + 16);
  if ( !v8 )
    return 0;
  v9 = 0;
  v10 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a1 + 32) + 8LL * a2)) + 24);
  if ( v10 && *v10 == 5 )
    v9 = v10[1] == 1;
  v11 = sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a1 + 32) + 8 * v3));
  v12 = 0;
  v13 = *(_DWORD **)(v11 + 24);
  if ( v13 )
  {
    if ( *v13 == 5 )
      v12 = v13[1] == 1;
  }
  return v12 == v9;
}

