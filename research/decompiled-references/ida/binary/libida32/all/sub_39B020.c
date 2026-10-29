unsigned __int64 __fastcall sub_39B020(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char *v4; // r14
  __int64 v7; // r13
  __int64 v9; // rsi
  int *v10; // r13
  __int64 v11; // rdx
  __int64 v13; // [rsp+0h] [rbp-58h]
  int v14; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v4 = (char *)&unk_2389780;
  v7 = *(_QWORD *)(a2 + 1344);
  v15 = __readfsqword(0x28u);
  v13 = v7 + 72;
  sub_419DD0(a2, v7 + 72, a3, a4);
  sub_419DD0(a2, v7 + 76, a3, a4);
  sub_419DD0(a2, v7 + 88, a3, a4);
  sub_419DD0(a2, v7 + 80, a3, a4);
  v9 = v7 + 84;
  v10 = (int *)(v7 + 128);
  sub_419DD0(a2, v9, a3, a4);
  do
  {
    sub_419DD0(a2, v10, a3, a4);
    v11 = *(unsigned int *)v4;
    v4 += 4;
    v14 = *v10;
    v10 += 26;
    sub_79B440(v13, a2, v11, &v14, 4, 65);
  }
  while ( v4 != "$ bptsgrps" );
  return v15 - __readfsqword(0x28u);
}

