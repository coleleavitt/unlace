/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005C270
// Address: 0x000000010005C270

//----- (000000010005C270) ----------------------------------------------------
__int64 __fastcall sub_10005C270(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rbx
  char *v6; // r14
  void *v7; // rdi
  unsigned __int64 v8; // rax
  size_t v9; // r14
  void *v10; // rax
  unsigned __int64 v11; // r13
  __int128 *v12; // r15
  __int64 v13; // rbx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  char *v17; // r14
  size_t v18; // r12
  void *v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r12
  char *v23; // rbx
  void *v24; // rax
  void *__src; // [rsp+10h] [rbp-C0h]
  unsigned __int64 v27; // [rsp+20h] [rbp-B0h]
  __int64 v28; // [rsp+28h] [rbp-A8h]
  int v29; // [rsp+30h] [rbp-A0h]
  __int128 v30; // [rsp+50h] [rbp-80h]
  __int128 v31; // [rsp+60h] [rbp-70h]
  __int128 v32; // [rsp+70h] [rbp-60h]
  __int128 v33; // [rsp+80h] [rbp-50h]
  __int128 v34; // [rsp+90h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 <= a2 )
  {
    if ( v4 < a2 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      v27 = a3;
      if ( *(_QWORD *)a1 <= a3 && *(_QWORD *)a1 + 120 * v8 > a3 )
      {
        v29 = *(_DWORD *)(a3 + 8);
        v28 = *(_QWORD *)a3;
        v9 = *(_QWORD *)(a3 + 24);
        if ( v9 )
        {
          __src = qalloc_or_throw(*(_QWORD *)(a3 + 24));
          memcpy(__src, *(const void **)(v27 + 16), v9);
          a3 = v27;
          v8 = *(_QWORD *)(a1 + 16);
        }
        else
        {
          __src = nullptr;
        }
        v34 = *(_OWORD *)(a3 + 104);
        v33 = *(_OWORD *)(a3 + 88);
        v32 = *(_OWORD *)(a3 + 72);
        v31 = *(_OWORD *)(a3 + 56);
        v30 = *(_OWORD *)(a3 + 40);
        if ( v8 < a2 )
          *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x78u);
        v20 = *(_QWORD *)(a1 + 8);
        v21 = a2 - v20;
        if ( a2 > v20 )
        {
          v22 = 120 * v20 + 40;
          do
          {
            v23 = *(char **)a1;
            *(_DWORD *)&v23[v22 - 32] = v29;
            *(_QWORD *)&v23[v22 - 40] = v28;
            *(_OWORD *)&v23[v22 - 24] = 0;
            *(_QWORD *)&v23[v22 - 8] = 0;
            if ( v9 )
            {
              v24 = qalloc_or_throw(v9);
              *(_QWORD *)&v23[v22 - 24] = v24;
              *(_QWORD *)&v23[v22 - 8] = v9;
              memcpy(v24, __src, v9);
              *(_QWORD *)&v23[v22 - 16] = v9;
            }
            *(_OWORD *)&v23[v22 + 64] = v34;
            *(_OWORD *)&v23[v22 + 48] = v33;
            *(_OWORD *)&v23[v22 + 32] = v32;
            *(_OWORD *)&v23[v22 + 16] = v31;
            *(_OWORD *)&v23[v22] = v30;
            v22 += 120;
            --v21;
          }
          while ( v21 );
        }
        *(_QWORD *)(a1 + 8) = a2;
        if ( __src )
          qfree(__src);
      }
      else
      {
        if ( v8 < a2 )
        {
          v10 = qvector_reserve(a1, *(void **)a1, a2, 0x78u);
          a3 = v27;
          *(_QWORD *)a1 = v10;
          v4 = *(_QWORD *)(a1 + 8);
        }
        v11 = a2 - v4;
        if ( a2 > v4 )
        {
          v12 = (__int128 *)(a3 + 40);
          v13 = 120 * v4 + 40;
          do
          {
            v17 = *(char **)a1;
            *(_DWORD *)&v17[v13 - 32] = *(_DWORD *)(a3 + 8);
            *(_QWORD *)&v17[v13 - 40] = *(_QWORD *)a3;
            *(_OWORD *)&v17[v13 - 24] = 0;
            *(_QWORD *)&v17[v13 - 8] = 0;
            v18 = *(_QWORD *)(a3 + 24);
            if ( v18 )
            {
              v19 = qalloc_or_throw(*(_QWORD *)(a3 + 24));
              *(_QWORD *)&v17[v13 - 24] = v19;
              *(_QWORD *)&v17[v13 - 8] = v18;
              memcpy(v19, *(const void **)(v27 + 16), v18);
              a3 = v27;
              *(_QWORD *)&v17[v13 - 16] = v18;
            }
            *(_OWORD *)&v17[v13 + 64] = v12[4];
            v14 = *v12;
            v15 = v12[1];
            v16 = v12[2];
            *(_OWORD *)&v17[v13 + 48] = v12[3];
            *(_OWORD *)&v17[v13 + 32] = v16;
            *(_OWORD *)&v17[v13 + 16] = v15;
            *(_OWORD *)&v17[v13] = v14;
            v13 += 120;
            --v11;
          }
          while ( v11 );
        }
        *(_QWORD *)(a1 + 8) = a2;
      }
    }
  }
  else
  {
    v5 = 120 * a2 + 16;
    do
    {
      v6 = *(char **)a1;
      v7 = *(void **)(*(_QWORD *)a1 + v5);
      if ( v7 )
      {
        *(_QWORD *)&v6[v5 + 8] = 0;
        qfree(v7);
        *(_QWORD *)&v6[v5] = 0;
        *(_QWORD *)&v6[v5 + 16] = 0;
      }
      --v4;
      v5 += 120;
    }
    while ( a2 != v4 );
    *(_QWORD *)(a1 + 8) = a2;
  }
  return __stack_chk_guard;
}
