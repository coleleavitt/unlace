_QWORD *__fastcall sub_413BB0(_QWORD *a1, __int64 a2, int *a3, int a4, char a5, double a6)
{
  unsigned int v9; // r14d
  __int64 *v10; // rax
  int v11; // r15d
  int v12; // esi
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD); // rax
  char v15; // al
  __int64 v16; // rsi
  int v17; // edx

  if ( a5 )
    v9 = *(_DWORD *)(a2 + 72);
  else
    v9 = *(_DWORD *)(a2 + 80);
  v10 = *(__int64 **)(*(_QWORD *)(a2 + 8) + 784LL);
  v11 = *((_DWORD *)v10 + 6);
  if ( 2 * v11 < a4 )
  {
    if ( !under_debugger )
      sub_383060(0xCE63u, a6);
    BUG();
  }
  v12 = (2 * v11 + *a3 - 1) & (-2 * v11);
  *a3 = v12;
  v13 = *v10;
  v14 = (__int64 (__fastcall *)(__int64, _QWORD))v10[6];
  if ( v14 )
  {
    v15 = v14(v13, v9);
    v12 = *a3;
  }
  else
  {
    v15 = *(_BYTE *)(v13 + 145);
  }
  if ( v15 )
  {
    v17 = v9 - v12;
    v16 = v9 - v12 - v11;
  }
  else
  {
    v16 = v9 + v12;
    v17 = v11 + v16;
  }
  a1[1] = 0;
  *a1 = 0xFFFFFFFF00000000LL;
  sub_1252A0((__int64)a1, v16, v17, a4 / 2);
  *a3 += 2 * v11;
  return a1;
}
