__int64 __fastcall sub_3B5A0(_QWORD *a1)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbp
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r12
  const void *v7; // r14
  void *v8; // rax
  __int64 *v9; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  const char *v14; // rsi
  const char *v15; // rbp
  __int64 *v16; // rax
  __int64 *v17; // rax
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  const char *v21; // rsi

  if ( a1[8] )
    return 3;
  v3 = (_QWORD *)sub_3B4F0((__int64)a1);
  v4 = v3;
  if ( !v3 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v9 = sub_34340((__int64)a1);
      v14 = src;
      if ( v9[1] )
        v14 = (const char *)*v9;
      sub_88B80(
        (unsigned int)"Error subprogram DIE %s resolving declaration/abstract origin\n",
        (_DWORD)v14,
        v10,
        v11,
        v12,
        v13);
    }
    return 5;
  }
  if ( !v3[8] )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v15 = src;
      v16 = sub_34340((__int64)v3);
      if ( v16[1] )
        v15 = (const char *)*v16;
      v17 = sub_34340((__int64)a1);
      v21 = src;
      if ( v17[1] )
        v21 = (const char *)*v17;
      sub_88B80(
        (unsigned int)"Error subprogram DIE %s resolving declaration/abstract origin DIE %s name\n",
        (_DWORD)v21,
        (_DWORD)v15,
        v18,
        v19,
        v20);
    }
    return 5;
  }
  v5 = a1 + 5;
  if ( a1 + 5 != v3 + 5 )
  {
    v6 = v3[6];
    if ( v6 < 2 )
    {
      a1[6] = 0;
    }
    else
    {
      v7 = (const void *)v3[5];
      v8 = (void *)a1[5];
      if ( a1[7] < v6 )
      {
        v8 = (void *)qvector_reserve(v5, a1[5], v4[6], 1);
        a1[5] = v8;
      }
      a1[6] = v6;
      memmove(v8, v7, v6 - 1);
      *(_BYTE *)(a1[5] + v6 - 1) = 0;
    }
  }
  sub_348C0((__int64)a1, v4 + 8);
  return 3;
}
