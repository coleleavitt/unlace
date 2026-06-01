unsigned __int64 __fastcall sub_C1280(__int64 a1, __int64 a2)
{
  size_t v3; // r12
  char *v4; // rbp
  char *v5; // rdi
  const void *v7; // r13
  size_t v8; // rax
  size_t v9; // r12
  __int64 v10; // rax
  const char *v11; // rax
  const char *v12; // rbp
  size_t v13; // rax
  size_t v14; // r12
  void *v15; // rdi
  size_t v16; // r14
  void *v17; // rdi
  size_t v18; // r13
  __int64 v19; // rax
  void *src; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  src = nullptr;
  if ( (unsigned int)sub_9E0A0() )
  {
    v3 = 0;
  }
  else
  {
    v7 = *(const void **)(a1 + 8);
    if ( !v7 )
      goto LABEL_11;
    v8 = strlen(*(const char **)(a1 + 8));
    v9 = v8;
    if ( !v8 )
      goto LABEL_11;
    v15 = nullptr;
    v16 = v8 + 1;
    if ( v8 != -1 )
    {
      src = (void *)qvector_reserve();
      v15 = src;
    }
    memmove(v15, v7, v9);
    *((_BYTE *)src + v9) = 0;
    v3 = v16;
  }
  if ( v3 > 1 )
  {
    v4 = (char *)src;
    v5 = *(char **)a2;
    if ( *(_QWORD *)(a2 + 16) >= v3 )
    {
LABEL_5:
      *(_QWORD *)(a2 + 8) = v3;
      memmove(v5, v4, v3 - 1);
      *(_BYTE *)(*(_QWORD *)a2 + v3 - 1) = 0;
      goto LABEL_6;
    }
LABEL_14:
    v10 = qvector_reserve();
    *(_QWORD *)a2 = v10;
    v5 = (char *)v10;
    goto LABEL_5;
  }
LABEL_11:
  v3 = xmmword_251308;
  if ( xmmword_251308 <= 1 )
  {
    v11 = sub_B75F0(a1);
    v12 = v11;
    if ( v11 && (v13 = strlen(v11), (v14 = v13) != 0) )
    {
      v17 = *(void **)a2;
      v18 = v13 + 1;
      if ( *(_QWORD *)(a2 + 16) < v13 + 1 )
      {
        v19 = qvector_reserve();
        *(_QWORD *)a2 = v19;
        v17 = (void *)v19;
      }
      *(_QWORD *)(a2 + 8) = v18;
      memmove(v17, v12, v14);
      *(_BYTE *)(*(_QWORD *)a2 + v14) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  else if ( (char **)a2 != &qword_251300 )
  {
    v4 = qword_251300;
    v5 = *(char **)a2;
    if ( *(_QWORD *)(a2 + 16) >= xmmword_251308 )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_6:
  if ( src )
    qfree();
  return v21 - __readfsqword(0x28u);
}

