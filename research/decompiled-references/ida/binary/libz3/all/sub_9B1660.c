bool __fastcall sub_9B1660(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r14
  int *v4; // rbp
  int *v5; // rbx
  void *v6; // r15
  bool v8; // al
  char v9; // bl
  _DWORD *v10; // rax
  __int64 v11; // rax
  char v12; // dl
  _DWORD *v13; // rax

  v3 = a3;
  v4 = sub_9AD4F0(*a1, a3);
  v5 = sub_9AD4F0(*a1, a2);
  v6 = qword_1C7F2C0;
  if ( (v5[1] & 1) != 0 || (v4[1] & 1) != 0 )
  {
    if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v5, v4) )
      return 0;
  }
  else if ( *v5 != *v4 )
  {
    return 0;
  }
  if ( (v5[5] & 1) != 0 || (v4[5] & 1) != 0 )
    v8 = (unsigned int)sub_182C7B0(v6, v5 + 4, v4 + 4) == 0;
  else
    v8 = v5[4] == v4[4];
  if ( !v8 || !sub_9B0850((__int64)(v5 + 8), (__int64)(v4 + 8)) )
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

