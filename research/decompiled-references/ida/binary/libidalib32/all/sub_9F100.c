void __fastcall sub_9F100(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  size_t v8; // r12
  _QWORD *v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 *v15; // r12
  __int64 v16; // rax
  void *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  size_t v20; // r13
  __int64 v21; // r13
  __int64 v22; // r13
  __int64 v23; // rax
  size_t v24; // rcx
  __int64 v25; // r13
  __int64 v26; // r15
  __int64 v27; // r13
  __int64 v28; // r14
  int v29; // eax
  void *v30; // rax
  void *v31; // rax
  void *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rsi
  void *v38; // rax
  void *v39; // rax
  _QWORD *v40; // [rsp+0h] [rbp-48h]
  size_t v41; // [rsp+0h] [rbp-48h]
  size_t v42; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  v2 = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 16) = v2;
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 1:
      if ( *(_QWORD *)(a2 + 24) )
      {
        v18 = operator new(0x60u);
        v19 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)v18 = 0;
        v4 = v18;
        *(_OWORD *)(v18 + 8) = 0;
        v20 = *(_QWORD *)(v19 + 8);
        if ( v20 )
        {
          v39 = (void *)qalloc_or_throw();
          *(_QWORD *)v4 = v39;
          *(_QWORD *)(v4 + 16) = v20;
          memcpy(v39, *(const void **)v19, v20);
          *(_QWORD *)(v4 + 8) = v20;
        }
        *(_QWORD *)(v4 + 24) = 0;
        *(_OWORD *)(v4 + 32) = 0;
        v21 = *(_QWORD *)(v19 + 32);
        if ( v21 )
        {
          v33 = qalloc_or_throw();
          *(_QWORD *)(v4 + 24) = v33;
          v34 = v33;
          v35 = 0;
          *(_QWORD *)(v4 + 40) = v21;
          while ( 1 )
          {
            v36 = 32 * v35 + v34;
            v37 = *(_QWORD *)(v19 + 24) + 32 * v35;
            *(_DWORD *)v36 = -2;
            *(_QWORD *)(v36 + 24) = 0;
            *(_OWORD *)(v36 + 8) = 0;
            sub_9CC30(v36, v37);
            if ( v21 == ++v35 )
              break;
            v34 = *(_QWORD *)(v4 + 24);
          }
          *(_QWORD *)(v4 + 32) = v21;
        }
        *(_QWORD *)(v4 + 48) = 0;
        *(_OWORD *)(v4 + 56) = 0;
        v22 = *(_QWORD *)(v19 + 56);
        if ( v22 )
        {
          v38 = (void *)qalloc_or_throw();
          *(_QWORD *)(v4 + 48) = v38;
          *(_QWORD *)(v4 + 64) = v22;
          memcpy(v38, *(const void **)(v19 + 48), 8 * v22);
          *(_QWORD *)(v4 + 56) = v22;
        }
        *(_QWORD *)(v4 + 72) = 0;
        *(_OWORD *)(v4 + 80) = 0;
        if ( *(_QWORD *)(v19 + 80) )
        {
          v41 = *(_QWORD *)(v19 + 80);
          v23 = qalloc_or_throw();
          v24 = v41;
          *(_QWORD *)(v4 + 72) = v23;
          v25 = v23;
          v26 = 0;
          *(_QWORD *)(v4 + 88) = v41;
          while ( 1 )
          {
            v27 = 32 * v26 + v25;
            v28 = *(_QWORD *)(v19 + 72) + 32 * v26;
            v29 = *(_DWORD *)v28;
            *(_QWORD *)(v27 + 8) = 0;
            *(_OWORD *)(v27 + 16) = 0;
            *(_DWORD *)v27 = v29;
            if ( *(_QWORD *)(v28 + 16) )
            {
              nb = v24;
              v42 = *(_QWORD *)(v28 + 16);
              v30 = (void *)qalloc_or_throw();
              *(_QWORD *)(v27 + 8) = v30;
              *(_QWORD *)(v27 + 24) = v42;
              memcpy(v30, *(const void **)(v28 + 8), v42);
              v24 = nb;
              *(_QWORD *)(v27 + 16) = v42;
            }
            if ( v24 == ++v26 )
              break;
            v25 = *(_QWORD *)(v4 + 72);
          }
          *(_QWORD *)(v4 + 80) = v24;
        }
        goto LABEL_6;
      }
      break;
    case 2:
    case 3:
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
      break;
    case 4:
      if ( *(_QWORD *)(a2 + 24) )
      {
        v5 = operator new(0x20u);
        v6 = *(_QWORD *)(a2 + 24);
        v7 = v5;
        LODWORD(v5) = *(_DWORD *)v6;
        *(_QWORD *)(v7 + 8) = 0;
        *(_OWORD *)(v7 + 16) = 0;
        *(_DWORD *)v7 = v5;
        v8 = *(_QWORD *)(v6 + 16);
        if ( v8 )
        {
          v32 = (void *)qalloc_or_throw();
          *(_QWORD *)(v7 + 8) = v32;
          *(_QWORD *)(v7 + 24) = v8;
          memcpy(v32, *(const void **)(v6 + 8), v8);
          *(_QWORD *)(v7 + 16) = v8;
        }
        goto LABEL_10;
      }
      break;
    case 5:
      if ( *(_QWORD *)(a2 + 24) )
      {
        v7 = qalloc_or_throw();
        v9 = *(_QWORD **)(a2 + 24);
        *(_QWORD *)v7 = 0;
        *(_OWORD *)(v7 + 8) = 0;
        v10 = v9[1];
        v40 = v9;
        if ( v10 )
        {
          v11 = qalloc_or_throw();
          *(_QWORD *)v7 = v11;
          v12 = v11;
          v13 = 0;
          *(_QWORD *)(v7 + 16) = v10;
          while ( 1 )
          {
            v14 = (v13 << 6) + v12;
            v15 = (__int64 *)(*v40 + (v13 << 6));
            v16 = *v15;
            *(_QWORD *)(v14 + 8) = 0;
            *(_OWORD *)(v14 + 16) = 0;
            *(_QWORD *)v14 = v16;
            if ( v15[2] )
            {
              na = v15[2];
              v17 = (void *)qalloc_or_throw();
              *(_QWORD *)(v14 + 8) = v17;
              *(_QWORD *)(v14 + 24) = na;
              memcpy(v17, (const void *)v15[1], na);
              *(_QWORD *)(v14 + 16) = na;
            }
            *(_QWORD *)(v14 + 32) = 0;
            *(_OWORD *)(v14 + 40) = 0;
            if ( v15[5] )
            {
              n = v15[5];
              v31 = (void *)qalloc_or_throw();
              *(_QWORD *)(v14 + 32) = v31;
              *(_QWORD *)(v14 + 48) = n;
              memcpy(v31, (const void *)v15[4], n);
              *(_QWORD *)(v14 + 40) = n;
            }
            ++v13;
            *(_DWORD *)(v14 + 56) = *((_DWORD *)v15 + 14);
            *(_WORD *)(v14 + 60) = *((_WORD *)v15 + 30);
            if ( v10 == v13 )
              break;
            v12 = *(_QWORD *)v7;
          }
          *(_QWORD *)(v7 + 8) = v10;
        }
LABEL_10:
        *(_QWORD *)(a1 + 24) = v7;
      }
      break;
    case 6:
      if ( *(_QWORD *)(a2 + 24) )
      {
        v4 = operator new(0x3Cu);
        *(_QWORD *)(v4 + 16) = 0;
        *(_QWORD *)v4 = 0xFFFFFFFFLL;
        *(_QWORD *)(v4 + 8) = 0xFFFFFFFFLL;
        copy_debug_event();
LABEL_6:
        *(_QWORD *)(a1 + 24) = v4;
      }
      break;
    default:
      return;
  }
}

