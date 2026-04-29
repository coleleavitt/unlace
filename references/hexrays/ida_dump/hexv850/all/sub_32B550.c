__int64 __fastcall sub_32B550(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v3; // rcx
  bool v4; // zf
  __int64 v5; // rax
  size_t v6; // rax
  size_t v7; // r13
  size_t v8; // rbp
  void *v9; // rax
  char v11[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v12; // [rsp+408h] [rbp-30h]

  v3 = s1;
  v4 = *(_QWORD *)(a2 + 24) == 0;
  v12 = __readfsqword(0x28u);
  if ( !v4 )
    v3 = *(const char **)(a2 + 16);
  v5 = (unsigned int)(1 - *(_DWORD *)a2);
  if ( (unsigned int)v5 > 0x24 )
    sub_323060(a1, a2, a3, v3);
  qsnprintf(v11, 1024, off_4B7340[v5], v3);
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
