unsigned __int64 __fastcall sub_19A7C0(__int64 a1, const char *a2)
{
  const char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  __int128 v7; // kr00_16
  __int64 v8; // rdi
  void *v10; // [rsp+0h] [rbp-48h]
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v3 = a2;
  v11 = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    v10 = (void *)qvector_reserve();
    *(_QWORD *)&v11 = v5;
    memmove(v10, a2, v6);
    *((_BYTE *)v10 + v6) = 0;
    v3 = (const char *)v10;
    v7 = v11;
  }
  else
  {
    v7 = 0u;
  }
  v8 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v3;
  *(_OWORD *)(a1 + 48) = v7;
  if ( v8 )
    qfree();
  return v12 - __readfsqword(0x28u);
}

