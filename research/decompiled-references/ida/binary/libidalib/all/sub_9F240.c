void __fastcall sub_9F240(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  size_t v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r12
  __m128i v17; // xmm0
  void *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  size_t v21; // r13
  __int64 v22; // r13
  __int64 v23; // r13
  __int64 v24; // rax
  size_t v25; // rcx
  __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rax
  void *v31; // rax
  void *v32; // rax
  void *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r14
  __int64 v37; // rdi
  __int64 v38; // rsi
  void *v39; // rax
  void *v40; // rax
  _QWORD *v41; // [rsp+0h] [rbp-48h]
  size_t v42; // [rsp+0h] [rbp-48h]
  size_t v43; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  v2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = v2;
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 1:
      if ( *(_QWORD *)(a2 + 24) )
      {
        v19 = operator new(0x60u);
        v20 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)v19 = 0;
        v4 = v19;
        *(_OWORD *)(v19 + 8) = 0;
        v21 = *(_QWORD *)(v20 + 8);
        if ( v21 )
        {
          v40 = (void *)qalloc_or_throw();
          *(_QWORD *)v4 = v40;
          *(_QWORD *)(v4 + 16) = v21;
          memcpy(v40, *(const void **)v20, v21);
          *(_QWORD *)(v4 + 8) = v21;
        }
        *(_QWORD *)(v4 + 24) = 0;
        *(_OWORD *)(v4 + 32) = 0;
        v22 = *(_QWORD *)(v20 + 32);
        if ( v22 )
        {
          v34 = qalloc_or_throw();
          *(_QWORD *)(v4 + 24) = v34;
          v35 = v34;
          v36 = 0;
          *(_QWORD *)(v4 + 40) = v22;
          while ( 1 )
          {
            v37 = 32 * v36 + v35;
            v38 = *(_QWORD *)(v20 + 24) + 32 * v36;
            *(_DWORD *)v37 = -2;
            *(_QWORD *)(v37 + 24) = 0;
            *(_OWORD *)(v37 + 8) = 0;
            sub_9CD50(v37, v38);
            if ( v22 == ++v36 )
              break;
            v35 = *(_QWORD *)(v4 + 24);
          }
          *(_QWORD *)(v4 + 32) = v22;
        }
        *(_QWORD *)(v4 + 48) = 0;
        *(_OWORD *)(v4 + 56) = 0;
        v23 = *(_QWORD *)(v20 + 56);
        if ( v23 )
        {
          v39 = (void *)qalloc_or_throw();
          *(_QWORD *)(v4 + 48) = v39;
          *(_QWORD *)(v4 + 64) = v23;
          memcpy(v39, *(const void **)(v20 + 48), 8 * v23);
          *(_QWORD *)(v4 + 56) = v23;
        }
        *(_QWORD *)(v4 + 72) = 0;
        *(_OWORD *)(v4 + 80) = 0;
        if ( *(_QWORD *)(v20 + 80) )
        {
          v42 = *(_QWORD *)(v20 + 80);
          v24 = qalloc_or_throw();
          v25 = v42;
          *(_QWORD *)(v4 + 72) = v24;
          v26 = v24;
          v27 = 0;
          *(_QWORD *)(v4 + 88) = v42;
          while ( 1 )
          {
            v28 = 32 * v27 + v26;
            v29 = *(_QWORD *)(v20 + 72) + 32 * v27;
            v30 = *(_QWORD *)v29;
            *(_QWORD *)(v28 + 8) = 0;
            *(_OWORD *)(v28 + 16) = 0;
            *(_QWORD *)v28 = v30;
            if ( *(_QWORD *)(v29 + 16) )
            {
              nb = v25;
              v43 = *(_QWORD *)(v29 + 16);
              v31 = (void *)qalloc_or_throw();
              *(_QWORD *)(v28 + 8) = v31;
              *(_QWORD *)(v28 + 24) = v43;
              memcpy(v31, *(const void **)(v29 + 8), v43);
              v25 = nb;
              *(_QWORD *)(v28 + 16) = v43;
            }
            if ( v25 == ++v27 )
              break;
            v26 = *(_QWORD *)(v4 + 72);
          }
          *(_QWORD *)(v4 + 80) = v25;
        }
        goto LABEL_6;
      }
      break;
    case 2:
    case 3:
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
      break;
    case 4:
      if ( *(_QWORD *)(a2 + 24) )
      {
        v5 = operator new(0x20u);
        v6 = *(__int64 **)(a2 + 24);
        v7 = v5;
        v8 = *v6;
        *(_QWORD *)(v7 + 8) = 0;
        *(_OWORD *)(v7 + 16) = 0;
        *(_QWORD *)v7 = v8;
        v9 = v6[2];
        if ( v9 )
        {
          v33 = (void *)qalloc_or_throw();
          *(_QWORD *)(v7 + 8) = v33;
          *(_QWORD *)(v7 + 24) = v9;
          memcpy(v33, (const void *)v6[1], v9);
          *(_QWORD *)(v7 + 16) = v9;
        }
        goto LABEL_10;
      }
      break;
    case 5:
      if ( *(_QWORD *)(a2 + 24) )
      {
        v7 = qalloc_or_throw();
        v10 = *(_QWORD **)(a2 + 24);
        *(_QWORD *)v7 = 0;
        *(_OWORD *)(v7 + 8) = 0;
        v11 = v10[1];
        v41 = v10;
        if ( v11 )
        {
          v12 = qalloc_or_throw();
          *(_QWORD *)v7 = v12;
          v13 = v12;
          v14 = 0;
          *(_QWORD *)(v7 + 16) = v11;
          while ( 1 )
          {
            v15 = 80 * v14 + v13;
            v16 = *v41 + 80 * v14;
            v17 = _mm_loadu_si128((const __m128i *)v16);
            *(_QWORD *)(v15 + 16) = 0;
            *(_OWORD *)(v15 + 24) = 0;
            *(__m128i *)v15 = v17;
            if ( *(_QWORD *)(v16 + 24) )
            {
              na = *(_QWORD *)(v16 + 24);
              v18 = (void *)qalloc_or_throw();
              *(_QWORD *)(v15 + 16) = v18;
              *(_QWORD *)(v15 + 32) = na;
              memcpy(v18, *(const void **)(v16 + 16), na);
              *(_QWORD *)(v15 + 24) = na;
            }
            *(_QWORD *)(v15 + 40) = 0;
            *(_OWORD *)(v15 + 48) = 0;
            if ( *(_QWORD *)(v16 + 48) )
            {
              n = *(_QWORD *)(v16 + 48);
              v32 = (void *)qalloc_or_throw();
              *(_QWORD *)(v15 + 40) = v32;
              *(_QWORD *)(v15 + 56) = n;
              memcpy(v32, *(const void **)(v16 + 40), n);
              *(_QWORD *)(v15 + 48) = n;
            }
            ++v14;
            *(_QWORD *)(v15 + 64) = *(_QWORD *)(v16 + 64);
            *(_WORD *)(v15 + 72) = *(_WORD *)(v16 + 72);
            if ( v11 == v14 )
              break;
            v13 = *(_QWORD *)v7;
          }
          *(_QWORD *)(v7 + 8) = v11;
        }
LABEL_10:
        *(_QWORD *)(a1 + 24) = v7;
      }
      break;
    case 6:
      if ( *(_QWORD *)(a2 + 24) )
      {
        v4 = operator new(0x48u);
        *(_QWORD *)(v4 + 8) = -1;
        *(_QWORD *)v4 = 0xFFFFFFFFLL;
        *(_QWORD *)(v4 + 16) = 0;
        copy_debug_event();
LABEL_6:
        *(_QWORD *)(a1 + 24) = v4;
      }
      break;
    default:
      return;
  }
}

