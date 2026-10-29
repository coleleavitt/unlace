void __fastcall sub_20DD80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rax
  __int64 v5; // rsi
  _QWORD *v6; // r12
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  size_t v11; // r12
  _QWORD *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // r12
  __m128i v19; // xmm0
  void *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  size_t v23; // r13
  __int64 v24; // r13
  __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // rax
  size_t v28; // rcx
  __int64 v29; // r13
  __int64 v30; // r15
  __int64 v31; // r13
  __int64 v32; // r14
  __int64 v33; // rax
  void *v34; // rax
  void *v35; // rax
  void *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // rdi
  __int64 v41; // rsi
  void *v42; // rax
  void *v43; // rax
  _QWORD *v44; // [rsp+0h] [rbp-48h]
  size_t v45; // [rsp+0h] [rbp-48h]
  size_t v46; // [rsp+0h] [rbp-48h]
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
        v21 = operator new(0x60u);
        v22 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)v21 = 0;
        v6 = (_QWORD *)v21;
        *(_OWORD *)(v21 + 8) = 0;
        v23 = *(_QWORD *)(v22 + 8);
        if ( v23 )
        {
          v43 = (void *)qalloc_or_throw(*(_QWORD *)(v22 + 8));
          *v6 = v43;
          v6[2] = v23;
          memcpy(v43, *(const void **)v22, v23);
          v6[1] = v23;
        }
        v6[3] = 0;
        *((_OWORD *)v6 + 2) = 0;
        v24 = *(_QWORD *)(v22 + 32);
        if ( v24 )
        {
          v37 = qalloc_or_throw(32 * v24);
          v6[3] = v37;
          v38 = v37;
          v39 = 0;
          v6[5] = v24;
          while ( 1 )
          {
            v40 = 32 * v39 + v38;
            v41 = *(_QWORD *)(v22 + 24) + 32 * v39;
            *(_DWORD *)v40 = -2;
            *(_QWORD *)(v40 + 24) = 0;
            *(_OWORD *)(v40 + 8) = 0;
            sub_20BB80(v40, v41);
            if ( v24 == ++v39 )
              break;
            v38 = v6[3];
          }
          v6[4] = v24;
        }
        v6[6] = 0;
        *(_OWORD *)(v6 + 7) = 0;
        v25 = *(_QWORD *)(v22 + 56);
        if ( v25 )
        {
          v42 = (void *)qalloc_or_throw(8 * v25);
          v6[6] = v42;
          v6[8] = v25;
          memcpy(v42, *(const void **)(v22 + 48), 8 * v25);
          v6[7] = v25;
        }
        v6[9] = 0;
        *((_OWORD *)v6 + 5) = 0;
        v26 = *(_QWORD *)(v22 + 80);
        if ( v26 )
        {
          v45 = *(_QWORD *)(v22 + 80);
          v27 = qalloc_or_throw(32 * v26);
          v28 = v45;
          v6[9] = v27;
          v29 = v27;
          v30 = 0;
          v6[11] = v45;
          while ( 1 )
          {
            v31 = 32 * v30 + v29;
            v32 = *(_QWORD *)(v22 + 72) + 32 * v30;
            v33 = *(_QWORD *)v32;
            *(_QWORD *)(v31 + 8) = 0;
            *(_OWORD *)(v31 + 16) = 0;
            *(_QWORD *)v31 = v33;
            if ( *(_QWORD *)(v32 + 16) )
            {
              nb = v28;
              v46 = *(_QWORD *)(v32 + 16);
              v34 = (void *)qalloc_or_throw(v46);
              *(_QWORD *)(v31 + 8) = v34;
              *(_QWORD *)(v31 + 24) = v46;
              memcpy(v34, *(const void **)(v32 + 8), v46);
              v28 = nb;
              *(_QWORD *)(v31 + 16) = v46;
            }
            if ( v28 == ++v30 )
              break;
            v29 = v6[9];
          }
          v6[10] = v28;
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
        v7 = operator new(0x20u);
        v8 = *(__int64 **)(a2 + 24);
        v9 = v7;
        v10 = *v8;
        *(_QWORD *)(v9 + 8) = 0;
        *(_OWORD *)(v9 + 16) = 0;
        *(_QWORD *)v9 = v10;
        v11 = v8[2];
        if ( v11 )
        {
          v36 = (void *)qalloc_or_throw(v8[2]);
          *(_QWORD *)(v9 + 8) = v36;
          *(_QWORD *)(v9 + 24) = v11;
          memcpy(v36, (const void *)v8[1], v11);
          *(_QWORD *)(v9 + 16) = v11;
        }
        goto LABEL_10;
      }
      break;
    case 5:
      if ( *(_QWORD *)(a2 + 24) )
      {
        v9 = qalloc_or_throw(24);
        v12 = *(_QWORD **)(a2 + 24);
        *(_QWORD *)v9 = 0;
        *(_OWORD *)(v9 + 8) = 0;
        v13 = v12[1];
        v44 = v12;
        if ( v13 )
        {
          v14 = qalloc_or_throw(80 * v13);
          *(_QWORD *)v9 = v14;
          v15 = v14;
          v16 = 0;
          *(_QWORD *)(v9 + 16) = v13;
          while ( 1 )
          {
            v17 = 80 * v16 + v15;
            v18 = *v44 + 80 * v16;
            v19 = _mm_loadu_si128((const __m128i *)v18);
            *(_QWORD *)(v17 + 16) = 0;
            *(_OWORD *)(v17 + 24) = 0;
            *(__m128i *)v17 = v19;
            if ( *(_QWORD *)(v18 + 24) )
            {
              na = *(_QWORD *)(v18 + 24);
              v20 = (void *)qalloc_or_throw(na);
              *(_QWORD *)(v17 + 16) = v20;
              *(_QWORD *)(v17 + 32) = na;
              memcpy(v20, *(const void **)(v18 + 16), na);
              *(_QWORD *)(v17 + 24) = na;
            }
            *(_QWORD *)(v17 + 40) = 0;
            *(_OWORD *)(v17 + 48) = 0;
            if ( *(_QWORD *)(v18 + 48) )
            {
              n = *(_QWORD *)(v18 + 48);
              v35 = (void *)qalloc_or_throw(n);
              *(_QWORD *)(v17 + 40) = v35;
              *(_QWORD *)(v17 + 56) = n;
              memcpy(v35, *(const void **)(v18 + 40), n);
              *(_QWORD *)(v17 + 48) = n;
            }
            ++v16;
            *(_QWORD *)(v17 + 64) = *(_QWORD *)(v18 + 64);
            *(_WORD *)(v17 + 72) = *(_WORD *)(v18 + 72);
            if ( v13 == v16 )
              break;
            v15 = *(_QWORD *)v9;
          }
          *(_QWORD *)(v9 + 8) = v13;
        }
LABEL_10:
        *(_QWORD *)(a1 + 24) = v9;
      }
      break;
    case 6:
      if ( *(_QWORD *)(a2 + 24) )
      {
        v4 = (_QWORD *)operator new(0x48u);
        v5 = *(_QWORD *)(a2 + 24);
        v6 = v4;
        v4[1] = -1;
        *v4 = 0xFFFFFFFFLL;
        v4[2] = 0;
        copy_debug_event(v4, v5);
LABEL_6:
        *(_QWORD *)(a1 + 24) = v6;
      }
      break;
    default:
      return;
  }
}
