__int64 __fastcall sub_EE5E00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  char v9; // al
  char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // rbx
  __int64 *v19; // r15
  __int64 *i; // r12
  __int64 v21; // r14
  unsigned __int64 v22; // rsi
  char v23; // al
  char *v24; // rsi
  __int64 v25; // rcx
  _QWORD *v26; // r13
  unsigned int v27; // eax

  v6 = a2;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 49 <= 2 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v7 & 4) != 0 )
      v8 = *(_QWORD *)v8;
    v9 = *(_BYTE *)(v8 + 8);
    v10 = (char *)(v8 - 64);
    if ( (v9 & 0x7Fu) - 58 >= 4 )
      v10 = nullptr;
    v13 = sub_EDE580(a1, v10, a3, a4, a5, a6);
    if ( *(char *)(v6 + 29) < 0 )
    {
      v6 = sub_B72720(v6);
      v16 = *(_DWORD *)(v6 + 68);
      if ( (v16 & 0xFFFFFFF0) != 0 )
        return *(_QWORD *)(v13[6] + 8LL * ((v16 >> 4) - 1));
    }
    else
    {
      v16 = *(_DWORD *)(v6 + 68);
      if ( (v16 & 0xFFFFFFF0) != 0 )
        return *(_QWORD *)(v13[6] + 8LL * ((v16 >> 4) - 1));
    }
    sub_B7EAB0(v6, (__int64)v10, v11, v12, v14, v15);
    v16 = *(_DWORD *)(v6 + 68);
    return *(_QWORD *)(v13[6] + 8LL * ((v16 >> 4) - 1));
  }
  v19 = *(__int64 **)(a2 + 56);
  v17 = 0;
  for ( i = &v19[*(unsigned int *)(a2 + 64)]; i != v19; v17 += *(_QWORD *)(v26[6] + 8 * a4) )
  {
    v21 = *v19;
    v22 = *(_QWORD *)(*v19 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(*v19 + 16) & 4) != 0 )
      v22 = *(_QWORD *)v22;
    v23 = *(_BYTE *)(v22 + 8);
    v24 = (char *)(v22 - 64);
    if ( (v23 & 0x7Fu) - 58 >= 4 )
      v24 = nullptr;
    v26 = sub_EDE580(a1, v24, a3, a4, a5, a6);
    if ( *(char *)(v21 + 29) < 0 )
      v21 = sub_B72720(v21);
    v27 = *(_DWORD *)(v21 + 68);
    if ( (v27 & 0xFFFFFFF0) == 0 )
    {
      sub_B7EAB0(v21, (__int64)v24, a3, v25, a5, a6);
      v27 = *(_DWORD *)(v21 + 68);
    }
    ++v19;
    a4 = (v27 >> 4) - 1;
  }
  return v17;
}
