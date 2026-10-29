_QWORD *__fastcall sub_B46050(_QWORD *a1, int **a2)
{
  int *v2; // rbp
  __int64 v3; // rax
  int v4; // edx
  int v5; // edx

  v2 = *a2;
  *a1 = 0;
  v3 = sub_186B270(0x10u);
  *(_QWORD *)v3 = 2;
  *a1 = v3 + 8;
  v4 = *v2;
  *(_DWORD *)(v3 + 4) = 1;
  *(_DWORD *)(v3 + 8) = v4;
  v5 = v2[1];
  *(_DWORD *)(v3 + 4) = 2;
  *(_DWORD *)(v3 + 12) = v5;
  return a1;
}

