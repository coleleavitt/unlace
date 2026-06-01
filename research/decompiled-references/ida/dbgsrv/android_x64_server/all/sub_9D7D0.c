/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D7D0
// Address: 0x000000000009D7D0

//----- (000000000009D7D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_9D7D0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  char *v7; // r13
  void *v8; // rdi
  unsigned __int64 v10; // rax
  size_t v11; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r13
  __int64 v15; // rbp
  char *v16; // rbx
  void *v17; // rax
  void *src; // [rsp+0h] [rbp-68h]
  __int64 v19; // [rsp+8h] [rbp-60h]
  __int128 v20; // [rsp+10h] [rbp-58h]
  int v21; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 <= a2 )
  {
    if ( v4 < a2 )
    {
      if ( *(_QWORD *)a1 > a3 || (v10 = *(_QWORD *)(a1 + 16), 56 * v10 + *(_QWORD *)a1 <= a3) )
      {
        sub_9D9E0(a1, a2, a3);
      }
      else
      {
        v19 = *(_QWORD *)a3;
        v11 = *(_QWORD *)(a3 + 16);
        if ( v11 )
        {
          src = qalloc_or_throw(*(_QWORD *)(a3 + 16));
          memcpy(src, *(const void **)(a3 + 8), v11);
          v10 = *(_QWORD *)(a1 + 16);
        }
        else
        {
          src = nullptr;
        }
        v21 = *(_DWORD *)(a3 + 48);
        v20 = *(_OWORD *)(a3 + 32);
        if ( v10 < a2 )
          *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, a2, 0x38u);
        v13 = *(_QWORD *)(a1 + 8);
        if ( v13 < a2 )
        {
          v14 = a2 - v13;
          v15 = 56 * v13 + 32;
          do
          {
            v16 = *(char **)a1;
            *(_QWORD *)&v16[v15 - 32] = v19;
            *(_OWORD *)&v16[v15 - 24] = 0;
            *(_QWORD *)&v16[v15 - 8] = 0;
            if ( v11 )
            {
              v17 = qalloc_or_throw(v11);
              *(_QWORD *)&v16[v15 - 24] = v17;
              *(_QWORD *)&v16[v15 - 8] = v11;
              memcpy(v17, src, v11);
              *(_QWORD *)&v16[v15 - 16] = v11;
            }
            *(_DWORD *)&v16[v15 + 16] = v21;
            *(_OWORD *)&v16[v15] = v20;
            v15 += 56;
            --v14;
          }
          while ( v14 );
        }
        *(_QWORD *)(a1 + 8) = a2;
        if ( src )
          qfree(src);
      }
    }
  }
  else
  {
    v5 = 56 * a2 + 8;
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
      v5 += 56;
    }
    while ( v6 < v4 );
    *(_QWORD *)(a1 + 8) = a2;
  }
  return __readfsqword(0x28u);
}
