__int64 __fastcall sub_A26A30(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v6; // r12
  unsigned int v7; // r13d
  __int64 v9; // [rsp-10h] [rbp-38h]

  v6 = *(_QWORD *)a1;
  v7 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  sub_9B9C90(a2, 1);
  sub_9B9C90(a2, *a3);
  sub_A26740(v6, v7, *(_QWORD *)a2, *(unsigned int *)(a2 + 8), *(_QWORD *)a4, *(_QWORD *)(a4 + 8), 0);
  return v9;
}
