__int64 __fastcall sub_19FEC0(__int64 a1)
{
  bool v1; // zf
  const char *v2; // r13
  __int16 v3; // r15
  char v4; // r12
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // rbp
  void *v8; // r13
  size_t v9; // r14
  void *v10; // rbp
  void *v12; // rax
  const void *v13; // rsi
  void *src; // [rsp+0h] [rbp-98h]
  void *v15; // [rsp+20h] [rbp-78h] BYREF
  __int128 v16; // [rsp+28h] [rbp-70h]
  void *v17; // [rsp+38h] [rbp-60h]
  __int128 v18; // [rsp+40h] [rbp-58h]
  __int16 v19; // [rsp+50h] [rbp-48h]
  char v20; // [rsp+52h] [rbp-46h]
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]

  v1 = *(_BYTE *)(a1 + 90) == 0;
  v21 = __readfsqword(0x28u);
  if ( v1 )
  {
    if ( !(unsigned __int8)sub_19F620(*(_QWORD *)(a1 + 24)) )
      return 0;
  }
  else
  {
    sub_19F740();
  }
  v2 = *(const char **)(a1 + 80);
  src = nullptr;
  v3 = *(_WORD *)(a1 + 88);
  v4 = *(_BYTE *)(a1 + 90) ^ 1;
  if ( !v2 )
  {
    v15 = nullptr;
    v16 = 0;
    goto LABEL_18;
  }
  v5 = strlen(v2);
  v6 = v5 + 1;
  v7 = v5;
  src = (void *)qvector_reserve();
  memmove(src, v2, v7);
  v15 = nullptr;
  v16 = 0;
  *((_BYTE *)src + v7) = 0;
  if ( !v6 )
  {
LABEL_18:
    v8 = nullptr;
    goto LABEL_6;
  }
  v15 = (void *)qalloc_or_throw();
  *((_QWORD *)&v16 + 1) = v6;
  v8 = v15;
  memcpy(v15, src, v6);
  *(_QWORD *)&v16 = v6;
LABEL_6:
  v9 = *(_QWORD *)(a1 + 64);
  v10 = nullptr;
  v17 = nullptr;
  v18 = 0;
  if ( v9 )
  {
    v12 = (void *)qalloc_or_throw();
    v13 = *(const void **)(a1 + 56);
    v17 = v12;
    *((_QWORD *)&v18 + 1) = v9;
    v10 = v12;
    memcpy(v12, v13, v9);
    *(_QWORD *)&v18 = v9;
  }
  v19 = v3;
  v20 = v4;
  if ( src )
    qfree();
  sub_19FC00(*(_QWORD *)(a1 + 24), (__int64)&v15);
  if ( v10 )
    qfree();
  if ( v8 )
    qfree();
  return 1;
}

