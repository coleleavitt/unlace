_QWORD *__fastcall sub_BEB0(_QWORD *a1, _BYTE *a2, int a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, int); // rax
  __int64 v7; // r13
  __int64 i; // rbx
  unsigned int v9; // r15d
  void (__fastcall *hexdsp)(__int64, _QWORD *, _QWORD); // rax
  _QWORD *v11; // rdi
  __int64 (__fastcall *v12)(__int64, int, int); // rax
  __int64 (__fastcall *v13)(__int64, int); // rax
  __int64 v14; // r13
  __int64 j; // rbx
  unsigned int v16; // r15d
  void (__fastcall *v17)(__int64, _QWORD *, _QWORD); // rax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, int, int); // rax

  *a1 = 0;
  a1[1] = 0;
  v4 = *(_QWORD **)a2;
  v5 = **(_QWORD **)a2;
  if ( a2[8] )
  {
    v6 = *(__int64 (__fastcall **)(__int64, int))(v5 + 104);
    if ( v6 == sub_BA60 )
    {
      if ( !v4[10] )
        return a1;
      v7 = *(int *)(v4[9] + 24LL * a3 + 8);
    }
    else
    {
      v7 = (int)v6((__int64)v4, a3);
    }
    if ( (int)v7 > 0 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v11 = *(_QWORD **)a2;
        v12 = *(__int64 (__fastcall **)(__int64, int, int))(**(_QWORD **)a2 + 120LL);
        if ( v12 == sub_BAA0 )
          v9 = *(_DWORD *)(*(_QWORD *)(v11[9] + 24LL * a3) + 4 * i);
        else
          v9 = v12((__int64)v11, a3, i);
        hexdsp = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp();
        hexdsp(205, a1, v9);
      }
    }
  }
  else
  {
    v13 = *(__int64 (__fastcall **)(__int64, int))(v5 + 96);
    if ( v13 == sub_BA40 )
    {
      if ( !v4[7] )
        return a1;
      v14 = *(int *)(v4[6] + 24LL * a3 + 8);
    }
    else
    {
      v14 = (int)v13((__int64)v4, a3);
    }
    if ( (int)v14 > 0 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v18 = *(_QWORD *)a2;
        v19 = *(__int64 (__fastcall **)(__int64, int, int))(**(_QWORD **)a2 + 112LL);
        if ( v19 == sub_BA80 )
          v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 48) + 24LL * a3) + 4 * j);
        else
          v16 = v19(v18, a3, j);
        v17 = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp();
        v17(205, a1, v16);
      }
    }
  }
  return a1;
}
