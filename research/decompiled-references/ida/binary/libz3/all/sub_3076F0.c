__int64 __fastcall sub_3076F0(__int64 a1, __int64 *a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // r13
  _QWORD *v7; // rax
  unsigned int *v8; // rbp
  __int64 *v9; // rbx
  std::ios_base *v10; // rdi
  int v11; // eax
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(); // rax
  __int64 *v14; // r14
  __int64 v15; // rsi

  v6 = *a2;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v7 = (_QWORD *)sub_186B270(0x18u);
  v7[1] = a3;
  v8 = (unsigned int *)v7;
  v9 = v7 + 1;
  v10 = (std::ios_base *)a2[1];
  *v7 = 0x100000002LL;
  v11 = sub_E60CB0(v10, 1, (int)v7 + 8);
  v12 = a2[1];
  *a4 = v11;
  v13 = *(__int64 (__fastcall **)())(*(_QWORD *)v12 + 352LL);
  if ( v13 == sub_313A00 )
    sub_8E3AE0(a1, v12 + 880, 1);
  else
    ((void (__fastcall *)(__int64, __int64, __int64))v13)(a1, v12, 1);
  v14 = &v9[v8[1]];
  while ( v9 < v14 )
  {
    while ( 1 )
    {
      v15 = *v9;
      if ( *v9 )
      {
        if ( (*(_DWORD *)(v15 + 8))-- == 1 )
          break;
      }
      if ( ++v9 >= v14 )
        goto LABEL_11;
    }
    ++v9;
    sub_15D7BC0(v6, v15);
  }
LABEL_11:
  sub_186B220(v8);
  return a1;
}

