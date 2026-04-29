__int64 __fastcall sub_1ED8C0(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  int v6; // ebp
  __int64 v7; // r12
  _DWORD *v8; // rsi
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  _DWORD *v11; // rax
  const char *v12; // r13
  __int64 v13; // rbp
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rdx

  if ( *(_BYTE *)a2 != 9 || (*(_BYTE *)(a2 + 1) & 0x10) == 0 )
    return 0;
  v3 = *(__int64 **)(a2 + 8);
  v4 = *v3;
  v5 = *((int *)v3 + 4);
  v6 = v5;
  if ( *(_QWORD *)(v4 + 440) < v5 )
    sub_1ECB80(a1);
  v7 = *(_QWORD *)(v4 + 432) + 104 * v5;
  if ( *(_QWORD *)(v7 + 40) > 1u )
  {
    v8 = (_DWORD *)a1[6];
    v9 = a1[7];
    v10 = &v8[v9];
    if ( v8 == v10 )
      goto LABEL_12;
    v11 = (_DWORD *)a1[6];
    while ( v6 != *v11 )
    {
      if ( v10 == ++v11 )
        goto LABEL_12;
    }
    if ( v11 == v10 )
    {
LABEL_12:
      if ( a1[8] < (unsigned __int64)(v9 + 1) )
      {
        v17 = qvector_reserve();
        v18 = a1[7];
        a1[6] = v17;
        v10 = (_DWORD *)(v17 + 4 * v18);
      }
      *v10 = v6;
      v12 = s1;
      v13 = a1[1];
      ++a1[7];
      if ( *(_QWORD *)(v7 + 40) )
        v12 = *(const char **)(v7 + 32);
      v14 = sub_330F80(v13);
      sub_3311F0(v13, v14, 42, (_DWORD)v12, v15, v16);
    }
  }
  return 0;
}
