__int64 __fastcall TclInvokeObjectCommand(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // r12d
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // rbx
  __int64 *v9; // rax
  int v10; // r12d
  unsigned int v11; // r13d
  _QWORD *v12; // rbp
  _DWORD *v13; // rbx
  int v14; // eax
  bool v15; // zf
  void *v17; // rax
  __int64 i; // [rsp+8h] [rbp-50h]

  v5 = 0;
  for ( i = sub_4495F0(a2, 8LL * a3); v5 < a3; *(_QWORD *)(i + 8 * v6) = v8 )
  {
    v6 = v5;
    v7 = strlen(*(const char **)(a4 + 8LL * v5));
    v8 = sub_496740();
    *(_DWORD *)v8 = 0;
    if ( v7 )
    {
      v17 = (void *)sub_40FB00(v7 + 1);
      *(_QWORD *)(v8 + 8) = v17;
      memcpy(v17, *(const void **)(a4 + 8LL * v5), v7);
      *(_BYTE *)(*(_QWORD *)(v8 + 8) + (int)v7) = 0;
      *(_DWORD *)(v8 + 16) = v7;
    }
    else
    {
      v9 = off_656088;
      *(_DWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 8) = v9;
    }
    *(_QWORD *)(v8 + 24) = 0;
    ++v5;
    ++*(_DWORD *)v8;
  }
  v10 = 0;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(a1 + 32))(
          *(_QWORD *)(a1 + 40),
          a2,
          (unsigned int)a3,
          i);
  sub_48B940(a2);
  if ( a3 > 0 )
  {
    v12 = (_QWORD *)i;
    do
    {
      v13 = (_DWORD *)*v12;
      v14 = *(_DWORD *)*v12 - 1;
      v15 = *(_DWORD *)*v12 == 1;
      *(_DWORD *)*v12 = v14;
      if ( v14 < 0 || v15 )
        sub_47B120(v13);
      ++v10;
      ++v12;
    }
    while ( v10 < a3 );
  }
  sub_449510(a2, i);
  return v11;
}

