__int64 __fastcall sub_1AEE0D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  __int64 v6; // r12
  int v7; // r13d
  __int64 v8; // rbx
  __int64 v9; // rbp

  v5 = sub_C00A40(a1[4], a2, a3, a4, a5);
  v6 = *a1;
  v7 = v5;
  v8 = a1[3];
  v9 = *(_QWORD *)(*(_QWORD *)a1[1] + 8LL * *((int *)a1 + 4));
  *(_BYTE *)(v9 + 29) |= 8u;
  sub_B8C4D0(v9, *(_QWORD *)(v6 + 248));
  return sub_C09130(*(_QWORD **)(v6 + 248), 0, 0, 0, v9, 0, v7, v8, 1, 0, 0, 0);
}
