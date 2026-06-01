__int64 __fastcall sub_7304D0(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  size_t v6; // rax
  size_t v7; // r13
  size_t v8; // rbp
  void *v9; // rax
  char v11[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v12; // [rsp+1008h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  qmakepath((unsigned int)v11, 4096, a2, a3, 0, a6);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v6 = strlen(v11);
  v7 = v6 + 1;
  v8 = v6;
  v9 = (void *)qvector_reserve(a1, 0, v6 + 1, 1);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v7;
  memmove(v9, v11, v8);
  *(_BYTE *)(*(_QWORD *)a1 + v8) = 0;
  return a1;
}
