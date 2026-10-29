__int64 __fastcall sub_173220(char *src, __int64 a2)
{
  char *v2; // rsi
  const char *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  size_t v10; // rbx
  void *v11; // rdi
  char *v12; // r12
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int128 v14; // [rsp+8h] [rbp-30h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  v14 = 0;
  v2 = (char *)(a2 - (_QWORD)src);
  if ( !v2 )
    goto LABEL_2;
  v10 = (size_t)v2;
  v11 = nullptr;
  v12 = v2 + 1;
  if ( v2 != (char *)-1LL )
  {
    v13 = qvector_reserve(&v13, 0, v2 + 1, 1);
    v11 = (void *)v13;
  }
  v2 = src;
  *(_QWORD *)&v14 = v12;
  memmove(v11, src, v10);
  *(_BYTE *)(v13 + v10) = 0;
  if ( (_QWORD)v14 )
    v3 = (const char *)v13;
  else
LABEL_2:
    v3 = &s1;
  v6 = tag_strlen(v3);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, v2, v4, v5, v7);
  }
  return v6;
}
