__int64 __fastcall sub_5342F0(_QWORD *a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // r14
  size_t v4; // r12
  void *v5; // r12
  int *v6; // rbx
  const char *v7; // rsi
  void *v9; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v9 = nullptr;
  v10 = 0;
  if ( a2 )
  {
    v2 = strlen(a2);
    v3 = v2 + 1;
    v4 = v2;
    v9 = (void *)qvector_reserve(&v9, 0, v2 + 1, 1);
    *(_QWORD *)&v10 = v3;
    memmove(v9, a2, v4);
    *((_BYTE *)v9 + v4) = 0;
    v5 = v9;
    v6 = (int *)sub_24D6C0((__int64)&unk_8D2540, (__int64)&v9);
    if ( v5 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(v5, (const char *)&v9);
    }
    if ( v6 != &dword_8D2548 )
      goto LABEL_5;
    return 0;
  }
  v6 = (int *)sub_24D6C0((__int64)&unk_8D2540, (__int64)&v9);
  if ( v6 == &dword_8D2548 )
    return 0;
LABEL_5:
  v7 = &s1;
  if ( *((_QWORD *)v6 + 8) )
    v7 = *((const char **)v6 + 7);
  return sub_531090(a1, v7);
}
