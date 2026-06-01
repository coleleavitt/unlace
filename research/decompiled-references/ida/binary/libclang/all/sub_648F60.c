void __fastcall sub_648F60(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 *v4; // r15
  __int64 v5; // r13
  char v6; // al
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r12
  size_t v12; // r14
  __int64 *v13; // rdi
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  const void *v23; // r13
  size_t v24; // r14
  _QWORD *v25; // rdi
  _BYTE *v26; // rax
  _BYTE *v27; // r14
  void *v28; // rcx
  _QWORD *v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // r14
  void *v32; // rax
  _QWORD *v33; // rdi
  __m128i v34; // xmm0
  __int64 v35; // r14
  int v36; // ebx
  unsigned __int64 v37; // rcx
  int v38; // eax
  char *v39; // rdi
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // edx
  __int64 v43; // rsi
  char v44; // [rsp+1Fh] [rbp-119h]
  int v45; // [rsp+20h] [rbp-118h]
  int v46; // [rsp+24h] [rbp-114h]
  void *src; // [rsp+28h] [rbp-110h]
  __int64 v48; // [rsp+30h] [rbp-108h]
  __int64 v49; // [rsp+40h] [rbp-F8h]
  __int64 v50; // [rsp+48h] [rbp-F0h]
  __int64 v51; // [rsp+58h] [rbp-E0h] BYREF
  void *v52; // [rsp+60h] [rbp-D8h]
  __m128 n; // [rsp+68h] [rbp-D0h] BYREF
  void *v54; // [rsp+80h] [rbp-B8h]
  _BYTE *v55; // [rsp+88h] [rbp-B0h]
  _QWORD v56[2]; // [rsp+90h] [rbp-A8h] BYREF
  void *v57; // [rsp+A0h] [rbp-98h]
  size_t v58; // [rsp+A8h] [rbp-90h]
  _QWORD v59[2]; // [rsp+B0h] [rbp-88h] BYREF
  void *v60; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v61; // [rsp+C8h] [rbp-70h]
  _QWORD v62[2]; // [rsp+D0h] [rbp-68h] BYREF
  void *v63; // [rsp+E0h] [rbp-58h] BYREF
  __m128i v64; // [rsp+E8h] [rbp-50h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 96) = a1 + 112;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  *(_QWORD *)(a1 + 104) = 0x100000000LL;
  v3 = a2[7];
  v49 = a1 + 16;
  if ( 8 * *(_DWORD *)(v3 + 20) )
  {
    v48 = v3 + (unsigned int)(8 * *(_DWORD *)(v3 + 20)) + 24;
    v4 = (__int64 *)(v3 + 24);
    while ( 1 )
    {
      v5 = *v4;
      if ( (*(_BYTE *)(*v4 + 28) & 0x7F) == 0x41 )
        break;
LABEL_38:
      if ( (__int64 *)v48 == ++v4 )
        return;
    }
    n.m128_i8[8] = 0;
    n.m128_u64[0] = 0;
    v52 = &n.m128_u16[4];
    v6 = *(_BYTE *)(v5 + 60);
    if ( (v6 & 2) == 0 )
    {
      a2 = nullptr;
      std::string::_M_replace();
      goto LABEL_17;
    }
    if ( (v6 & 4) == 0 )
      BUG();
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 88) + 56LL) + 40LL);
    if ( (v7 & 7) != 0 || (v8 = v7 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v63 = &v64.m128i_u64[1];
    }
    else
    {
      v9 = *(_QWORD **)(v8 + 16);
      v10 = *v9;
      v11 = v9 + 2;
      v63 = &v64.m128i_u64[1];
      v12 = (unsigned int)v10;
      v60 = (void *)(unsigned int)v10;
      if ( (v10 & 0xFFFFFFF0) != 0 )
      {
        v63 = (void *)std::string::_M_create();
        v13 = (__int64 *)v63;
        v64.m128i_i64[1] = (__int64)v60;
LABEL_10:
        a2 = v11;
        memcpy(v13, v11, v12);
        v12 = (size_t)v60;
        v14 = (__int64 *)((char *)v63 + (_QWORD)v60);
        goto LABEL_11;
      }
      if ( (unsigned int)v10 == 1 )
      {
        v64.m128i_i8[8] = *((_BYTE *)v9 + 16);
        v14 = (__int64 *)((char *)&v64.m128i_i64[1] + 1);
LABEL_11:
        v64.m128i_i64[0] = v12;
        *(_BYTE *)v14 = 0;
        v15 = (__int64 *)v52;
        v16 = (__int64 *)v52;
        if ( v52 == &n.m128_u16[4] )
        {
          if ( v63 != &v64.m128i_u64[1] )
          {
            v34 = _mm_loadu_si128(&v64);
            v52 = v63;
            n = (__m128)v34;
LABEL_50:
            v63 = &v64.m128i_u64[1];
            v15 = &v64.m128i_i64[1];
            goto LABEL_15;
          }
          v17 = v64.m128i_i64[0];
          a2 = (_QWORD *)v64.m128i_i64[0];
        }
        else
        {
          v17 = v64.m128i_i64[0];
          a2 = (_QWORD *)v64.m128i_i64[0];
          if ( v63 != &v64.m128i_u64[1] )
          {
            v52 = v63;
            v18 = n.m128_i64[1];
            n = _mm_loadh_ps((const double *)&v64.m128i_i64[1]);
            if ( v15 )
            {
              v63 = v15;
              v64.m128i_i64[1] = v18;
              goto LABEL_15;
            }
            goto LABEL_50;
          }
        }
        if ( !v17 )
        {
LABEL_68:
          n.m128_u64[0] = (unsigned __int64)a2;
          *((_BYTE *)a2 + (_QWORD)v15) = 0;
          v15 = (__int64 *)v63;
LABEL_15:
          v64.m128i_i64[0] = 0;
          *(_BYTE *)v15 = 0;
          if ( v63 != &v64.m128i_u64[1] )
          {
            a2 = (_QWORD *)(v64.m128i_i64[1] + 1);
            operator delete(v63, v64.m128i_i64[1] + 1);
          }
LABEL_17:
          v44 = sub_7D53F0(v5, a2);
          v45 = sub_7D53B0(v5);
          v46 = sub_7D53D0(v5);
          v19 = *(_QWORD *)(v5 + 40);
          if ( (v19 & 7) != 0 || (v20 = v19 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v57 = v59;
          }
          else
          {
            v21 = *(_QWORD **)(v20 + 16);
            v22 = *v21;
            v23 = v21 + 2;
            v57 = v59;
            v24 = (unsigned int)v22;
            v63 = (void *)(unsigned int)v22;
            if ( (v22 & 0xFFFFFFF0) != 0 )
            {
              v57 = (void *)std::string::_M_create();
              v25 = v57;
              v59[0] = v63;
LABEL_21:
              memcpy(v25, v23, v24);
              v24 = (size_t)v63;
              v26 = (char *)v57 + (_QWORD)v63;
              goto LABEL_22;
            }
            if ( (unsigned int)v22 == 1 )
            {
              LOBYTE(v59[0]) = *((_BYTE *)v21 + 16);
              v26 = (char *)v59 + 1;
LABEL_22:
              v58 = v24;
              *v26 = 0;
              v27 = (_BYTE *)n.m128_u64[0];
              v54 = v56;
              v28 = v52;
              v63 = (void *)n.m128_u64[0];
              if ( n.m128_u64[0] > 0xF )
              {
                src = v52;
                v32 = (void *)std::string::_M_create();
                v28 = src;
                v54 = v32;
                v33 = v32;
                v56[0] = v63;
              }
              else
              {
                if ( n.m128_u64[0] == 1 )
                {
                  LOBYTE(v56[0]) = *(_BYTE *)v52;
                  goto LABEL_25;
                }
                if ( !n.m128_u64[0] )
                {
LABEL_25:
                  v29 = v56;
LABEL_26:
                  v55 = v27;
                  v27[(_QWORD)v29] = 0;
                  v30 = *(unsigned int *)(a1 + 8);
                  if ( v30 >= *(unsigned int *)(a1 + 12) )
                  {
                    v50 = sub_25D5F70(a1, v49, 0, 80, &v51);
                    v35 = v50 + 80LL * *(unsigned int *)(a1 + 8);
                    v60 = v62;
                    sub_63E170((__int64 *)&v60, v57, (__int64)v57 + v58);
                    v63 = &v64.m128i_u64[1];
                    sub_63E170((__int64 *)&v63, v54, (__int64)&v55[(_QWORD)v54]);
                    *(_QWORD *)v35 = v35 + 16;
                    sub_63E170((__int64 *)v35, v63, (__int64)v63 + v64.m128i_i64[0]);
                    *(_QWORD *)(v35 + 32) = v35 + 48;
                    sub_63E170((__int64 *)(v35 + 32), v60, (__int64)v60 + v61);
                    *(_DWORD *)(v35 + 64) = v46;
                    *(_DWORD *)(v35 + 68) = v45;
                    *(_BYTE *)(v35 + 72) = v44;
                    if ( v63 != &v64.m128i_u64[1] )
                      operator delete(v63, v64.m128i_i64[1] + 1);
                    if ( v60 != v62 )
                      operator delete(v60, v62[0] + 1LL);
                    a2 = (_QWORD *)v50;
                    sub_648CA0((__int64 *)a1, v50);
                    v36 = v51;
                    if ( v49 != *(_QWORD *)a1 )
                      free(*(void **)a1);
                    ++*(_DWORD *)(a1 + 8);
                    *(_DWORD *)(a1 + 12) = v36;
                    *(_QWORD *)a1 = v50;
                  }
                  else
                  {
                    v31 = *(_QWORD *)a1 + 80 * v30;
                    v60 = v62;
                    sub_63E170((__int64 *)&v60, v57, (__int64)v57 + v58);
                    v63 = &v64.m128i_u64[1];
                    sub_63E170((__int64 *)&v63, v54, (__int64)&v55[(_QWORD)v54]);
                    *(_QWORD *)v31 = v31 + 16;
                    sub_63E170((__int64 *)v31, v63, (__int64)v63 + v64.m128i_i64[0]);
                    *(_QWORD *)(v31 + 32) = v31 + 48;
                    a2 = v60;
                    sub_63E170((__int64 *)(v31 + 32), v60, (__int64)v60 + v61);
                    *(_DWORD *)(v31 + 64) = v46;
                    *(_DWORD *)(v31 + 68) = v45;
                    *(_BYTE *)(v31 + 72) = v44;
                    if ( v63 != &v64.m128i_u64[1] )
                    {
                      a2 = (_QWORD *)(v64.m128i_i64[1] + 1);
                      operator delete(v63, v64.m128i_i64[1] + 1);
                    }
                    if ( v60 != v62 )
                    {
                      a2 = (_QWORD *)(v62[0] + 1LL);
                      operator delete(v60, v62[0] + 1LL);
                    }
                    ++*(_DWORD *)(a1 + 8);
                  }
                  if ( v54 != v56 )
                  {
                    a2 = (_QWORD *)(v56[0] + 1LL);
                    operator delete(v54, v56[0] + 1LL);
                  }
                  if ( v57 != v59 )
                  {
                    a2 = (_QWORD *)(v59[0] + 1LL);
                    operator delete(v57, v59[0] + 1LL);
                  }
                  if ( v52 != &n.m128_u16[4] )
                  {
                    a2 = (_QWORD *)(n.m128_u64[1] + 1);
                    operator delete(v52, n.m128_u64[1] + 1);
                  }
                  goto LABEL_38;
                }
                v33 = v56;
              }
              memcpy(v33, v28, (size_t)v27);
              v27 = v63;
              v29 = v54;
              goto LABEL_26;
            }
            if ( (_DWORD)v22 )
            {
              v25 = v59;
              goto LABEL_21;
            }
          }
          v26 = v59;
          v24 = 0;
          goto LABEL_22;
        }
        if ( v17 == 1 )
        {
          *(_BYTE *)v52 = v64.m128i_i8[8];
          a2 = (_QWORD *)v64.m128i_i64[0];
          v15 = (__int64 *)v52;
          goto LABEL_68;
        }
        if ( (unsigned int)v17 >= 8 )
        {
          *(_QWORD *)v52 = v64.m128i_i64[1];
          *(__int64 *)((char *)v16 + (unsigned int)v17 - 8) = *(__int64 *)((char *)v64.m128i_i64 + (unsigned int)v17);
          v37 = (unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v38 = (_DWORD)v16 - v37;
          v39 = (char *)((char *)&v64.m128i_u64[1] - ((char *)v16 - v37));
          v40 = (v17 + v38) & 0xFFFFFFF8;
          if ( v40 >= 8 )
          {
            v41 = v40 & 0xFFFFFFF8;
            v42 = 0;
            do
            {
              v43 = v42;
              v42 += 8;
              *(_QWORD *)(v37 + v43) = *(_QWORD *)&v39[v43];
            }
            while ( v42 < v41 );
          }
        }
        else
        {
          if ( (v17 & 4) != 0 )
          {
            *(_DWORD *)v52 = v64.m128i_i32[2];
            *(_DWORD *)((char *)v16 + (unsigned int)v17 - 4) = *(__int32 *)((char *)&v64.m128i_i32[1] + (unsigned int)v17);
            v16 = (__int64 *)v52;
            v17 = v64.m128i_i64[0];
            goto LABEL_67;
          }
          if ( !(_DWORD)v17 )
          {
LABEL_67:
            a2 = (_QWORD *)v17;
            v15 = v16;
            goto LABEL_68;
          }
          *(_BYTE *)v52 = v64.m128i_i8[8];
          if ( (v17 & 2) != 0 )
          {
            *(_WORD *)((char *)v16 + (unsigned int)v17 - 2) = *(__int16 *)((char *)&v64.m128i_i16[3] + (unsigned int)v17);
            v16 = (__int64 *)v52;
            v17 = v64.m128i_i64[0];
            goto LABEL_67;
          }
        }
        v16 = (__int64 *)v52;
        v17 = v64.m128i_i64[0];
        goto LABEL_67;
      }
      if ( (_DWORD)v10 )
      {
        v13 = &v64.m128i_i64[1];
        goto LABEL_10;
      }
    }
    v14 = &v64.m128i_i64[1];
    v12 = 0;
    goto LABEL_11;
  }
}

