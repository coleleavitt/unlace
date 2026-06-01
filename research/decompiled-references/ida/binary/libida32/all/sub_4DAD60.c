unsigned __int64 __fastcall sub_4DAD60(__int64 a1, __int64 a2, unsigned int *a3, int a4)
{
  __int64 v5; // r12
  __int64 v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  void *v10; // r14
  _QWORD *v11; // rax
  int *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __m128i *v15; // rax
  unsigned int v16; // r8d
  __int32 v17; // edx
  __int64 *v18; // r9
  __m128i v19; // xmm0
  int *v20; // rsi
  char *v21; // r10
  unsigned int v22; // ecx
  _DWORD *v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rbx
  _QWORD *v26; // r14
  void *v27; // rdi
  __int64 v29; // rax
  __int64 i; // rbx
  __int64 v31; // rdx
  __m128i n; // [rsp+10h] [rbp-128h] BYREF
  char *v35; // [rsp+20h] [rbp-118h]
  int *v36; // [rsp+28h] [rbp-110h]
  __int64 *v37; // [rsp+30h] [rbp-108h]
  __m128i *v38; // [rsp+38h] [rbp-100h]
  int *v39; // [rsp+40h] [rbp-F8h]
  char v40; // [rsp+4Bh] [rbp-EDh]
  unsigned int v41; // [rsp+4Ch] [rbp-ECh]
  int v42; // [rsp+54h] [rbp-E4h] BYREF
  int v43; // [rsp+58h] [rbp-E0h] BYREF
  unsigned int v44; // [rsp+5Ch] [rbp-DCh] BYREF
  void *src; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v46; // [rsp+68h] [rbp-D0h]
  int v47; // [rsp+78h] [rbp-C0h]
  char v48; // [rsp+80h] [rbp-B8h] BYREF
  int v49; // [rsp+88h] [rbp-B0h] BYREF
  void *v50; // [rsp+90h] [rbp-A8h]
  int *v51; // [rsp+98h] [rbp-A0h]
  int *v52; // [rsp+A0h] [rbp-98h]
  __int64 v53; // [rsp+A8h] [rbp-90h]
  char v54; // [rsp+B0h] [rbp-88h] BYREF
  unsigned __int64 v55; // [rsp+F8h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  v5 = 1;
  v36 = &v42;
  v35 = &v54;
  v40 = 0;
  n.m128i_i64[1] = (__int64)&v44;
  do
  {
    while ( 1 )
    {
      v6 = (int)v5 + 620LL;
      v42 = *(_DWORD *)(*(_QWORD *)(a2 + 1480) + 4 * v6 + 8);
      if ( (unsigned __int8)sub_419CF0(a2, v36, a3, a4) )
        *(_DWORD *)(*(_QWORD *)(a2 + 1480) + 4 * v6 + 8) = v42;
      v7 = *(_DWORD *)(*(_QWORD *)(a2 + 1480) + 4LL * (int)v5 + 2488);
      *(_DWORD *)&v35[4 * v5 - 4] = v7;
      v43 = v7;
      if ( (unsigned __int8)sub_79B370(a2, &v43) )
      {
        v49 = 0;
        v50 = nullptr;
        v51 = &v49;
        v52 = &v49;
        v53 = 0;
        v8 = sub_79B7E0(&v43, a2, 65);
        if ( v8 != -1 )
        {
          while ( 1 )
          {
            v44 = v8;
            if ( (unsigned __int8)sub_419CF0(a2, (int *)n.m128i_i64[1], a3, a4) )
              break;
LABEL_27:
            v8 = sub_79B840(&v43, a2, v8, 65);
            if ( v8 == -1 )
              goto LABEL_28;
          }
          v46 = 0;
          src = nullptr;
          v47 = sub_79B3A0(&v43, a2, v8, 65);
          sub_79B6F0(&v43, a2, &src, v8, 83);
          v9 = v44;
          v10 = nullptr;
          n.m128i_i64[0] = v46;
          if ( (_QWORD)v46 )
          {
            LODWORD(v37) = v44;
            v10 = (void *)qalloc_or_throw(v46, (const char *)a2);
            memcpy(v10, src, n.m128i_u64[0]);
            v9 = (unsigned int)v37;
          }
          v11 = v50;
          v12 = &v49;
          if ( v50 )
          {
            do
            {
              while ( 1 )
              {
                v13 = v11[2];
                v14 = v11[3];
                if ( *((_DWORD *)v11 + 8) < v9 )
                  break;
                v12 = (int *)v11;
                v11 = (_QWORD *)v11[2];
                if ( !v13 )
                  goto LABEL_15;
              }
              v11 = (_QWORD *)v11[3];
            }
            while ( v14 );
LABEL_15:
            if ( v12 != &v49 && v9 >= v12[8] )
            {
              if ( v10 )
                qfree(v10);
              goto LABEL_25;
            }
          }
          v39 = v12;
          LODWORD(v38) = v9;
          LODWORD(v37) = v47;
          v15 = (__m128i *)operator new(0x48u);
          v16 = (unsigned int)v38;
          v17 = (int)v37;
          v15[2].m128i_i64[1] = (__int64)v10;
          v18 = (__int64 *)v15;
          v19 = _mm_loadl_epi64(&n);
          v20 = v39;
          v21 = &v48;
          v15[2].m128i_i32[0] = v16;
          v15[4].m128i_i32[0] = v17;
          v15[3] = _mm_unpacklo_epi64(v19, v19);
          if ( v20 == &v49 )
          {
            if ( v53 )
            {
              v23 = v52;
              if ( v52[8] < v16 )
                goto LABEL_23;
            }
          }
          else
          {
            v22 = v20[8];
            n.m128i_i64[0] = (__int64)&v48;
            if ( v16 >= v22 )
            {
              if ( v22 >= v16 )
                goto LABEL_39;
              if ( v52 != v20 )
              {
                LODWORD(v37) = v16;
                v41 = v22;
                v38 = v15;
                v39 = v20;
                v29 = std::_Rb_tree_increment();
                v16 = (unsigned int)v37;
                v18 = (__int64 *)v38;
                v21 = (char *)n.m128i_i64[0];
                v23 = (_DWORD *)v29;
                if ( (unsigned int)v37 >= *(_DWORD *)(v29 + 32) )
                  goto LABEL_45;
                v20 = v39;
                if ( *((_QWORD *)v39 + 3) )
                  goto LABEL_23;
              }
              if ( v20 )
                goto LABEL_24;
              goto LABEL_39;
            }
            v23 = v20;
            if ( v51 == v20 )
              goto LABEL_23;
            LODWORD(v37) = v16;
            v38 = v15;
            v39 = v20;
            v24 = std::_Rb_tree_decrement();
            v16 = (unsigned int)v37;
            v18 = (__int64 *)v38;
            v21 = (char *)n.m128i_i64[0];
            v23 = (_DWORD *)v24;
            if ( *(_DWORD *)(v24 + 32) < (unsigned int)v37 )
            {
              if ( *(_QWORD *)(v24 + 24) )
                v23 = v39;
LABEL_23:
              if ( v23 )
              {
LABEL_24:
                std::_Rb_tree_insert_and_rebalance();
                ++v53;
LABEL_25:
                sub_79B4D0(&v43, a2, v8, 65);
                sub_79B4D0(&v43, a2, v8, 83);
                if ( src )
                {
                  *(_QWORD *)&v46 = 0;
                  qfree(src);
                }
                goto LABEL_27;
              }
LABEL_39:
              if ( v18 )
              {
                if ( v10 )
                {
                  v18[6] = 0;
                  n.m128i_i64[0] = (__int64)v18;
                  qfree(v10);
                  v18 = (__int64 *)n.m128i_i64[0];
                }
                operator delete(v18, 0x48u);
              }
              goto LABEL_25;
            }
          }
LABEL_45:
          v37 = v18;
          n.m128i_i32[0] = v16;
          sub_4D9E80((__int64)v21, v16);
          v18 = v37;
          goto LABEL_23;
        }
LABEL_28:
        if ( v53 )
        {
          for ( i = (__int64)v51; (int *)i != &v49; i = std::_Rb_tree_increment() )
          {
            while ( 1 )
            {
              v31 = *(unsigned int *)(i + 32);
              LODWORD(src) = *(_DWORD *)(i + 64);
              sub_79B440(&v43, a2, v31, &src, 4, 65);
              if ( *(_QWORD *)(i + 48) > 1u )
                break;
              i = std::_Rb_tree_increment();
              if ( (int *)i == &v49 )
                goto LABEL_56;
            }
            sub_79B440(&v43, a2, *(unsigned int *)(i + 32), *(_QWORD *)(i + 40), 0, 83);
          }
LABEL_56:
          v40 |= v5 == 14;
        }
        v25 = v50;
        if ( v50 )
          break;
      }
      if ( ++v5 == 17 )
        goto LABEL_34;
    }
    do
    {
      v26 = v25;
      sub_4DA710((_QWORD *)v25[3]);
      v27 = (void *)v25[5];
      v25 = (_QWORD *)v25[2];
      if ( v27 )
      {
        v26[6] = 0;
        qfree(v27);
      }
      operator delete(v26, 0x48u);
    }
    while ( v25 );
    ++v5;
  }
  while ( v5 != 17 );
LABEL_34:
  sub_6160D0(a2, 83, v35, 64);
  if ( v40 )
    sub_4DABC0(*(_QWORD **)(a2 + 1560));
  return v55 - __readfsqword(0x28u);
}

