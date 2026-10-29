/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B6000
// Address: 0x00000000000B6000

//----- (00000000000B6000) ----------------------------------------------------
void __fastcall sub_B6000(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  char *v7; // r15
  void *v8; // rdi
  char *v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  char *v13; // rax
  __int64 i; // r14
  __int64 v15; // r12
  void *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rbp
  char *v20; // r15
  void *v21; // rax
  void *src; // [rsp+8h] [rbp-40h]
  char *srca; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 > a2 )
  {
    v5 = 24 * a2;
    v6 = a2;
    do
    {
      v7 = *(char **)a1;
      v8 = *(void **)(*(_QWORD *)a1 + v5);
      if ( v8 )
      {
        *(_QWORD *)&v7[v5 + 8] = 0;
        qfree(v8);
        *(_QWORD *)&v7[v5] = 0;
        *(_QWORD *)&v7[v5 + 16] = 0;
      }
      ++v6;
      v5 += 24;
    }
    while ( v6 < v4 );
    *(_QWORD *)(a1 + 8) = a2;
    return;
  }
  if ( v4 >= a2 )
    return;
  v10 = *(char **)a1;
  v11 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 <= a3 && (unsigned __int64)&v10[24 * v11] > a3 )
  {
    v12 = *(_QWORD *)(a3 + 8);
    if ( v12 )
    {
      src = qalloc_or_throw(8 * v12);
      memcpy(src, *(const void **)a3, 8 * v12);
      if ( *(_QWORD *)(a1 + 16) >= a2 )
        goto LABEL_24;
    }
    else
    {
      src = nullptr;
      if ( v11 >= a2 )
      {
LABEL_24:
        v17 = *(_QWORD *)(a1 + 8);
        if ( v17 < a2 )
        {
          v18 = a2 - v17;
          v19 = 24 * v17;
          do
          {
            v20 = *(char **)a1;
            *(_OWORD *)&v20[v19] = 0;
            *(_QWORD *)&v20[v19 + 16] = 0;
            if ( v12 )
            {
              v21 = qalloc_or_throw(8 * v12);
              *(_QWORD *)&v20[v19] = v21;
              *(_QWORD *)&v20[v19 + 16] = v12;
              memcpy(v21, src, 8 * v12);
              *(_QWORD *)&v20[v19 + 8] = v12;
            }
            v19 += 24;
            --v18;
          }
          while ( v18 );
        }
        *(_QWORD *)(a1 + 8) = a2;
        if ( src )
          qfree(src);
        return;
      }
    }
    *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, a2, 0x18u);
    goto LABEL_24;
  }
  if ( v11 < a2 )
  {
    v10 = (char *)qvector_reserve(a1, v10, a2, 0x18u);
    *(_QWORD *)a1 = v10;
    v4 = *(_QWORD *)(a1 + 8);
  }
  if ( v4 < a2 )
  {
    v13 = (char *)(a2 - 1 - v4);
    for ( i = 24 * v4; ; i += 24 )
    {
      *(_OWORD *)&v10[i] = 0;
      *(_QWORD *)&v10[i + 16] = 0;
      v15 = *(_QWORD *)(a3 + 8);
      if ( v15 )
      {
        srca = v13;
        v16 = qalloc_or_throw(8 * v15);
        *(_QWORD *)&v10[i] = v16;
        *(_QWORD *)&v10[i + 16] = v15;
        memcpy(v16, *(const void **)a3, 8 * v15);
        v13 = srca;
        *(_QWORD *)&v10[i + 8] = v15;
      }
      if ( !v13 )
        break;
      v10 = *(char **)a1;
      --v13;
    }
  }
  *(_QWORD *)(a1 + 8) = a2;
}
