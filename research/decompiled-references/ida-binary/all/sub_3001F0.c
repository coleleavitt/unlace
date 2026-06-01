__int64 __fastcall sub_3001F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // rbp
  void *v7; // rax
  char v9[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v10; // [rsp+408h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  ea2str(v9, 1024, a4);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = strlen(v9);
  v5 = v4 + 1;
  v6 = v4;
  v7 = (void *)qvector_reserve(a1, 0, v4 + 1, 1);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v5;
  memmove(v7, v9, v6);
  *(_BYTE *)(*(_QWORD *)a1 + v6) = 0;
  return a1;
}
