_QWORD *__fastcall sub_409030(_QWORD *a1, __int64 a2, int *a3, int a4, char a5)
{
  unsigned int v8; // r14d
  __int64 *v9; // rax
  int v10; // r15d
  int v11; // esi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD); // rax
  char v14; // al
  int v15; // esi
  int v16; // edx

  if ( a5 )
    v8 = *(_DWORD *)(a2 + 72);
  else
    v8 = *(_DWORD *)(a2 + 80);
  v9 = *(__int64 **)(*(_QWORD *)(a2 + 8) + 776LL);
  v10 = *((_DWORD *)v9 + 6);
  if ( 2 * v10 < a4 )
  {
    if ( !under_debugger )
      sub_37EA20(52835);
    BUG();
  }
  v11 = (2 * v10 + *a3 - 1) & (-2 * v10);
  *a3 = v11;
  v12 = *v9;
  v13 = (__int64 (__fastcall *)(__int64, _QWORD))v9[6];
  if ( v13 )
  {
    v14 = v13(v12, v8);
    v11 = *a3;
  }
  else
  {
    v14 = *(_BYTE *)(v12 + 145);
  }
  if ( v14 )
  {
    v16 = v8 - v11;
    v15 = v8 - v11 - v10;
  }
  else
  {
    v15 = v8 + v11;
    v16 = v10 + v15;
  }
  a1[1] = 0;
  *a1 = 0xFFFFFFFF00000000LL;
  sub_122DA0((__int64)a1, v15, v16, a4 / 2);
  *a3 += 2 * v10;
  return a1;
}
