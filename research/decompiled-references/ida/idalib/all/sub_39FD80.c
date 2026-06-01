unsigned __int64 __fastcall sub_39FD80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rbx
  __int64 v7; // r14
  __int64 v9; // rsi
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v13; // [rsp+0h] [rbp-58h]
  __int64 v14; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v6 = (char *)&unk_23AD7A0;
  v7 = *(_QWORD *)(a2 + 1536);
  v15 = __readfsqword(0x28u);
  v13 = v7 + 80;
  sub_42DA00(a2, v7 + 80, a3, a4);
  sub_42DA00(a2, v7 + 88, a3, a4);
  sub_42DA00(a2, v7 + 112, a3, a4);
  sub_42DA00(a2, v7 + 96, a3, a4);
  v9 = v7 + 104;
  v10 = (__int64 *)(v7 + 160);
  sub_42DA00(a2, v9, a3, a4);
  do
  {
    sub_42DA00(a2, v10, a3, a4);
    v11 = *(int *)v6;
    v6 += 4;
    v14 = *v10;
    v10 += 13;
    sub_7BE7C0(v13, a2, v11, &v14, 8, 65);
  }
  while ( v6 != "$ bptsgrps" );
  return v15 - __readfsqword(0x28u);
}
