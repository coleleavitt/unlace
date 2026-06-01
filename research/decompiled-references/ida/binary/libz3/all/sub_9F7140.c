__int64 __fastcall sub_9F7140(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  int v4; // r13d
  unsigned int v5; // ebp
  __int64 v6; // r8
  __int64 v7; // r15
  bool v8; // al
  __int64 v9; // r15
  int *v10; // rax
  __int64 v11; // rdx
  int *v12; // rax
  bool v14; // al
  int *v15; // [rsp+8h] [rbp-40h]

  v2 = *a2;
  if ( !*a2 )
    return 1;
  v3 = v2 + 40LL * *(unsigned int *)(v2 - 4);
  if ( v3 == v2 )
    return 1;
  v4 = *((_DWORD *)a2 + 3);
  while ( 1 )
  {
    v5 = *(_DWORD *)(v2 + 32);
    if ( v5 != -1 && v4 != v5 )
    {
      v6 = v5;
      v7 = *(_QWORD *)(a1[93] + 8LL * v5);
      if ( !v7
        || (v15 = sub_9AD4F0((__int64)a1, v5),
            v8 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v15, v7 + 16),
            v6 = v5,
            !v8)
        || (v14 = sub_9B0850((__int64)(v15 + 8), v7 + 48), v6 = v5, !v14) )
      {
        v9 = *(_QWORD *)(a1[94] + 8 * v6);
        if ( !v9 )
          break;
        v10 = sub_9AD4F0((__int64)a1, v5);
        if ( !sub_9F4890((__int64)v10, v9 + 16) )
          break;
      }
      v11 = *(unsigned int *)(v2 + 32);
      if ( (_DWORD)v11 != -1 && ((*(_BYTE *)(a1[90] + 4 * v11 + 3) >> 4) & 3) == 2 )
        v12 = sub_9ACE50((__int64)a1, v11);
      else
        v12 = (int *)(a1[91] + 96 * v11);
      if ( *v12 || v12[16] )
        break;
    }
    v2 += 40;
    if ( v2 == v3 )
      return 1;
  }
  return 0;
}

