__int64 __fastcall sub_543F00(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r8
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  size_t v12; // rbp
  const void *v13; // r12
  void *v14; // rax
  size_t v15; // rbp
  void *v16; // rax
  void *v17; // rsi
  void *src; // [rsp+0h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v3 = (unsigned int)(a3 - 1);
  v20 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( (unsigned int)v3 >= *(_DWORD *)(a2 + 136) )
    goto LABEL_2;
  v6 = *(_QWORD *)(qword_2CA1698 + 1464);
  v7 = *(__int64 **)(v6 + 16);
  v8 = &v7[*(_QWORD *)(v6 + 24)];
  if ( v7 == v8 )
    goto LABEL_2;
  v9 = *(_QWORD *)(a2 + 120);
  while ( 1 )
  {
    v10 = *v7;
    if ( v9 == *(_QWORD *)(*v7 + 48) )
      break;
    if ( v8 == ++v7 )
      goto LABEL_2;
  }
  if ( !v10 )
  {
LABEL_2:
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    sub_3573A0((char **)a1);
  }
  else
  {
    v11 = *(_QWORD *)(v10 + 56) + 24 * v3;
    if ( (void **)v11 == &src || (v12 = *(_QWORD *)(v11 + 8), v12 <= 1) )
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      return a1;
    }
    v13 = *(const void **)v11;
    v14 = (void *)qvector_reserve(&src, 0, *(_QWORD *)(v11 + 8), 1);
    n[0] = v12;
    src = v14;
    memmove(v14, v13, v12 - 1);
    *((char *)src + v12 - 1) = 0;
    v15 = n[0];
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    if ( v15 )
    {
      v16 = (void *)qalloc_or_throw(v15, (const char *)v13);
      *(_QWORD *)a1 = v16;
      v17 = src;
      *(_QWORD *)(a1 + 16) = v15;
      memcpy(v16, v17, v15);
      *(_QWORD *)(a1 + 8) = v15;
    }
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return a1;
}

