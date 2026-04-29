__int64 __fastcall sub_3310F0(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v3; // rcx
  bool v4; // zf
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // rbp
  void *v8; // rax
  char v10[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v11; // [rsp+408h] [rbp-30h]

  v3 = s1;
  v4 = *(_QWORD *)(a2 + 24) == 0;
  v11 = __readfsqword(0x28u);
  if ( !v4 )
    v3 = *(const char **)(a2 + 16);
  if ( (unsigned int)(1 - *(_DWORD *)a2) > 0x24 )
    sub_328920(a1, a2, a3, v3);
  qsnprintf();
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = strlen(v10);
  v6 = v5 + 1;
  v7 = v5;
  v8 = (void *)qvector_reserve(a1, 0, v5 + 1, 1);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = v6;
  memmove(v8, v10, v7);
  *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
  return a1;
}
