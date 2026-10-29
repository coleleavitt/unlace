__int64 __fastcall sub_14AF20(__int64 a1, int a2)
{
  const char *v2; // rbp
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // r13
  char *v6; // rdi
  __int64 v7; // rbx
  void *src; // [rsp+0h] [rbp-68h]
  void *srca; // [rsp+0h] [rbp-68h]
  int v11[4]; // [rsp+8h] [rbp-60h]
  int v12; // [rsp+18h] [rbp-50h]
  int v13[2]; // [rsp+20h] [rbp-48h] BYREF
  int v14[4]; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v2 = *(const char **)(a1 + 40);
  v15 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)v11 = 0;
  if ( v2 )
  {
    v3 = strlen(v2);
    v4 = v3 + 1;
    v5 = v3;
    src = (void *)qvector_reserve();
    *(_QWORD *)v11 = v4;
    memmove(src, v2, v5);
    *((_BYTE *)src + v5) = 0;
  }
  *(_QWORD *)v13 = 0;
  *(_OWORD *)v14 = 0;
  if ( a2 != -1 )
  {
    *(_QWORD *)v13 = qvector_reserve();
    *(_DWORD *)(*(_QWORD *)v13 + 4LL * (*(_QWORD *)v14)++) = a2;
  }
  sub_198260(a1, v13);
  if ( *(_QWORD *)v13 )
  {
    *(_QWORD *)v14 = 0;
    qfree();
  }
  v6 = (char *)s1;
  if ( *(_QWORD *)v11 )
    v6 = (char *)src;
  v7 = sub_193680(v6, (__int64)src, v11[0], v11[2], v12, v13[0], v14[0], *(__int64 *)&v14[2]);
  if ( srca )
    qfree();
  return v7;
}

