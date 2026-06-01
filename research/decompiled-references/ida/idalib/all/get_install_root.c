unsigned __int64 __fastcall get_install_root(__int64 a1)
{
  const char *v2; // rax
  void *v3; // rbp
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  __int128 v7; // kr00_16
  void *v8; // rdi
  __int64 v9; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v2 = (const char *)idadir(0);
  ptr = nullptr;
  v3 = (void *)v2;
  v12 = 0;
  if ( v2 )
  {
    v4 = strlen(v2);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
    *(_QWORD *)&v12 = v5;
    memmove(ptr, v3, v6);
    *((_BYTE *)ptr + v6) = 0;
    v3 = ptr;
    v7 = v12;
  }
  else
  {
    v7 = 0u;
  }
  v8 = *(void **)a1;
  v9 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v3;
  *(_OWORD *)(a1 + 8) = v7;
  ptr = v8;
  *((_QWORD *)&v12 + 1) = v9;
  if ( v8 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v8);
  }
  return v13 - __readfsqword(0x28u);
}
