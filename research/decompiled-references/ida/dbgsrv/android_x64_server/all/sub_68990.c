/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68990
// Address: 0x0000000000068990

//----- (0000000000068990) ----------------------------------------------------
void __fastcall sub_68990(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  char *v7; // r12
  void *v8; // rdi
  char *v10; // rbx
  unsigned __int64 v11; // rax
  size_t v12; // r13
  void *v13; // r14
  unsigned __int64 v14; // r13
  __int64 i; // r14
  size_t v16; // rbp
  void *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // rbp
  char *v22; // rbx
  void *v23; // rax

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 <= a2 )
  {
    if ( v4 < a2 )
    {
      v10 = *(char **)a1;
      v11 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)a1 > a3 || (unsigned __int64)&v10[24 * v11] <= a3 )
      {
        if ( v11 < a2 )
        {
          v10 = (char *)qvector_reserve(a1, v10, a2, 0x18u);
          *(_QWORD *)a1 = v10;
          v4 = *(_QWORD *)(a1 + 8);
        }
        if ( v4 < a2 )
        {
          v14 = a2 - 1 - v4;
          for ( i = 24 * v4; ; i += 24 )
          {
            *(_OWORD *)&v10[i] = 0;
            *(_QWORD *)&v10[i + 16] = 0;
            v16 = *(_QWORD *)(a3 + 8);
            if ( v16 )
            {
              v17 = qalloc_or_throw(*(_QWORD *)(a3 + 8));
              *(_QWORD *)&v10[i] = v17;
              *(_QWORD *)&v10[i + 16] = v16;
              memcpy(v17, *(const void **)a3, v16);
              *(_QWORD *)&v10[i + 8] = v16;
            }
            if ( !v14 )
              break;
            v10 = *(char **)a1;
            --v14;
          }
        }
        *(_QWORD *)(a1 + 8) = a2;
      }
      else
      {
        v12 = *(_QWORD *)(a3 + 8);
        if ( v12 )
        {
          v13 = qalloc_or_throw(*(_QWORD *)(a3 + 8));
          memcpy(v13, *(const void **)a3, v12);
          v11 = *(_QWORD *)(a1 + 16);
        }
        else
        {
          v13 = nullptr;
        }
        v18 = a2;
        if ( v11 < a2 )
        {
          *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, a2, 0x18u);
          v18 = a2;
        }
        v19 = *(_QWORD *)(a1 + 8);
        if ( v19 < v18 )
        {
          v20 = a2 - v19;
          v21 = 24 * v19;
          do
          {
            v22 = *(char **)a1;
            *(_OWORD *)&v22[v21] = 0;
            *(_QWORD *)&v22[v21 + 16] = 0;
            if ( v12 )
            {
              v23 = qalloc_or_throw(v12);
              *(_QWORD *)&v22[v21] = v23;
              *(_QWORD *)&v22[v21 + 16] = v12;
              memcpy(v23, v13, v12);
              *(_QWORD *)&v22[v21 + 8] = v12;
            }
            v21 += 24;
            --v20;
          }
          while ( v20 );
        }
        *(_QWORD *)(a1 + 8) = a2;
        if ( v13 )
          qfree(v13);
      }
    }
  }
  else
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
  }
}
