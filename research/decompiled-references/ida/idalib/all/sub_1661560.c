__int64 __fastcall sub_1661560(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v6; // r14d
  _QWORD *v8; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned int *v19; // rax
  size_t v20; // r15
  __m128i v21; // xmm3
  size_t v22; // rdx
  unsigned __int8 *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  _QWORD *v28; // rcx
  _BYTE *v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  __m128i v32; // xmm0
  __int64 v33; // r15
  __m128i v34; // xmm2
  unsigned __int8 v35; // al
  unsigned int v36; // eax
  void **v37; // rbp
  _QWORD *v38; // rax
  void **v39; // r12
  void **v40; // rbx
  void **v41; // rdi
  void **v42; // rdi
  void **v43; // rbx
  void **v44; // r12
  __int64 v45; // rdx
  __m128i si128; // xmm1
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rsi
  __int64 v51; // rdx
  size_t v52; // rdx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rdx
  void *v58; // rdi
  bool v60; // [rsp+10h] [rbp-A8h]
  _QWORD *v61; // [rsp+10h] [rbp-A8h]
  char *src; // [rsp+18h] [rbp-A0h]
  unsigned __int8 *v63; // [rsp+20h] [rbp-98h]
  __int64 v64; // [rsp+30h] [rbp-88h]
  void *v66[2]; // [rsp+40h] [rbp-78h] BYREF
  int v67; // [rsp+50h] [rbp-68h]
  size_t n[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v69[9]; // [rsp+70h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a1[29] + 46LL) & 0x20) == 0 )
    return 0;
  v6 = a4 & 3;
  if ( (a4 & 3) != 0 )
  {
    v8 = a1 + 1;
    sub_168B9B0(v66, a1 + 1, 0);
    v17 = *(_DWORD *)a5;
    if ( *(_DWORD *)a5 == 10 )
    {
      sub_168B9B0(n, v8, 2942);
      if ( v66[0] && v66[1] )
        sub_1580C40((unsigned __int64)v66[1], (unsigned __int64)v66[0]);
      si128 = _mm_load_si128((const __m128i *)n);
      v47 = *(__int64 *)(a5 + 32) >> 2;
      v67 = v69[0];
      *(__m128i *)v66 = si128;
      sub_AE9DF0((unsigned __int8 **)v66, v47 & 1, 2u);
      v50 = *(_QWORD *)(**(_QWORD **)((*(_QWORD *)(a5 + 32) & 0xFFFFFFFFFFFFFFF8LL) + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v51 = *(_QWORD *)(v50 + 8) & 7LL | (*(__int64 *)(v50 + 8) >> 3) & 1;
      if ( v51 )
        v31 = sub_F64F00(**(_QWORD **)((*(_QWORD *)(a5 + 32) & 0xFFFFFFFFFFFFFFF8LL) + 16), v50, v51, v48, v49)
            & 0xFFFFFFFFFFFFFFF0LL;
      else
        v31 = v50 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_35;
    }
    if ( v17 <= 0xA )
    {
      if ( v17 != 6 )
        goto LABEL_25;
    }
    else
    {
      if ( v17 == 16 )
      {
        v18 = *(_QWORD *)(a5 + 32);
        if ( v18 )
        {
          v19 = *(unsigned int **)(v18 + 16);
          v20 = *v19;
          src = (char *)(v19 + 4);
          v60 = v19 + 4 == nullptr && (unsigned int *)((char *)v19 + v20 + 16) != nullptr;
        }
        else
        {
          v60 = 0;
          v20 = 4;
          src = "this";
        }
        sub_168B9B0(n, v8, 2955);
        if ( v66[0] && v66[1] )
          sub_1580C40((unsigned __int64)v66[1], (unsigned __int64)v66[0]);
        v21 = _mm_load_si128((const __m128i *)n);
        v22 = n[1];
        v67 = v69[0];
        v23 = (unsigned __int8 *)n[0];
        *(__m128i *)v66 = v21;
        if ( !n[0] )
        {
          v53 = *(_DWORD *)(n[1] + 14976);
          if ( v53 )
          {
            v54 = (unsigned int)(v53 - 1);
            *(_DWORD *)(n[1] + 14976) = v54;
            v23 = *(unsigned __int8 **)(v22 + 8 * v54 + 14848);
            v55 = *((unsigned int *)v23 + 134);
            *v23 = 0;
            v56 = *((_QWORD *)v23 + 66);
            *((_DWORD *)v23 + 106) = 0;
            v57 = v56 + (v55 << 6);
            while ( v56 != v57 )
            {
              while ( 1 )
              {
                v57 -= 64;
                v58 = *(void **)(v57 + 24);
                if ( v58 == (void *)(v57 + 40) )
                  break;
                v64 = v57;
                v63 = v23;
                operator delete(v58);
                v57 = v64;
                v23 = v63;
                if ( v56 == v64 )
                  goto LABEL_80;
              }
            }
LABEL_80:
            *((_DWORD *)v23 + 134) = 0;
          }
          else
          {
            v23 = (unsigned __int8 *)operator new(0x3A0u);
            *v23 = 0;
            *((_QWORD *)v23 + 12) = v23 + 112;
            *((_QWORD *)v23 + 16) = v23 + 144;
            *((_QWORD *)v23 + 20) = v23 + 176;
            *((_QWORD *)v23 + 24) = v23 + 208;
            *((_QWORD *)v23 + 28) = v23 + 240;
            *((_QWORD *)v23 + 32) = v23 + 272;
            *((_QWORD *)v23 + 36) = v23 + 304;
            *((_QWORD *)v23 + 40) = v23 + 336;
            *((_QWORD *)v23 + 44) = v23 + 368;
            *((_QWORD *)v23 + 48) = v23 + 400;
            *((_QWORD *)v23 + 52) = v23 + 432;
            *((_QWORD *)v23 + 13) = 0;
            v23[112] = 0;
            *((_QWORD *)v23 + 17) = 0;
            v23[144] = 0;
            *((_QWORD *)v23 + 21) = 0;
            v23[176] = 0;
            *((_QWORD *)v23 + 25) = 0;
            v23[208] = 0;
            *((_QWORD *)v23 + 29) = 0;
            v23[240] = 0;
            *((_QWORD *)v23 + 33) = 0;
            v23[272] = 0;
            *((_QWORD *)v23 + 37) = 0;
            v23[304] = 0;
            *((_QWORD *)v23 + 41) = 0;
            v23[336] = 0;
            *((_QWORD *)v23 + 45) = 0;
            v23[368] = 0;
            *((_QWORD *)v23 + 49) = 0;
            v23[400] = 0;
            *((_QWORD *)v23 + 53) = 0x800000000LL;
            *((_QWORD *)v23 + 66) = v23 + 544;
            *((_QWORD *)v23 + 67) = 0x600000000LL;
          }
          v66[0] = v23;
        }
        v23[*v23 + 1] = 0;
        v24 = v69;
        n[0] = (size_t)v69;
        if ( v60 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( v20 > 0xF )
        {
          v24 = (_QWORD *)operator new(v20 + 1);
          v69[0] = v20;
          n[0] = (size_t)v24;
        }
        else
        {
          if ( v20 == 1 )
          {
            LOBYTE(v69[0]) = *src;
            goto LABEL_17;
          }
          if ( !v20 )
          {
LABEL_17:
            n[1] = v20;
            *((_BYTE *)v24 + v20) = 0;
            v25 = v66[0];
            v26 = *(unsigned __int8 *)v66[0];
            *(_BYTE *)v66[0] = v26 + 1;
            v27 = 4 * (v26 + 3);
            v28 = &v25[v27];
            v29 = (_BYTE *)v25[v27];
            if ( (_QWORD *)n[0] == v69 )
            {
              v52 = n[1];
              if ( n[1] )
              {
                if ( n[1] == 1 )
                {
                  *v29 = v69[0];
                  v52 = n[1];
                  v29 = (_BYTE *)*v28;
                }
                else
                {
                  v61 = v28;
                  memcpy(v29, (const void *)n[0], n[1]);
                  v28 = v61;
                  v52 = n[1];
                  v29 = (_BYTE *)*v61;
                }
              }
              v28[1] = v52;
              v29[v52] = 0;
              v29 = (_BYTE *)n[0];
              goto LABEL_21;
            }
            if ( v29 == (_BYTE *)&v25[v27 + 2] )
            {
              *v28 = n[0];
              v28[1] = n[1];
              v28[2] = v69[0];
            }
            else
            {
              v30 = v25[4 * (int)v26 + 14];
              *v28 = n[0];
              v28[1] = n[1];
              v28[2] = v69[0];
              if ( v29 )
              {
                n[0] = (size_t)v29;
                v69[0] = v30;
LABEL_21:
                n[1] = 0;
                *v29 = 0;
                if ( (_QWORD *)n[0] != v69 )
                  operator delete((void *)n[0]);
                v31 = *(_QWORD *)(a5 + 16);
LABEL_35:
                sub_AE9DF0((unsigned __int8 **)v66, v31, 8u);
                v35 = sub_183C740(a1, a3);
                sub_AE9DF0((unsigned __int8 **)v66, v35, 2u);
                goto LABEL_36;
              }
            }
            v29 = v69;
            n[0] = (size_t)v69;
            goto LABEL_21;
          }
        }
        memcpy(v24, src, v20);
        v24 = (_QWORD *)n[0];
        goto LABEL_17;
      }
      if ( v17 != 21 )
      {
LABEL_25:
        sub_168B9B0(n, v8, a6 == 0 ? 2943 : 5666);
        if ( v66[0] && v66[1] )
          sub_1580C40((unsigned __int64)v66[1], (unsigned __int64)v66[0]);
        v32 = _mm_load_si128((const __m128i *)n);
        v67 = v69[0];
        *(__m128i *)v66 = v32;
LABEL_36:
        v36 = sub_1660BC0(a1, a2, a3, a4, a5, (__int64)v66);
        v37 = (void **)v66[0];
        v6 = v36;
        if ( v66[0] )
        {
          v38 = v66[1];
          if ( v66[1] )
          {
            if ( v66[0] < v66[1] || v66[0] > (char *)v66[1] + 14848 )
            {
              v39 = *((void ***)v66[0] + 66);
              v40 = &v39[8 * (unsigned __int64)*((unsigned int *)v66[0] + 134)];
              if ( v39 != v40 )
              {
                do
                {
                  while ( 1 )
                  {
                    v40 -= 8;
                    v41 = (void **)v40[3];
                    if ( v41 == v40 + 5 )
                      break;
                    operator delete(v41);
                    if ( v39 == v40 )
                      goto LABEL_42;
                  }
                }
                while ( v39 != v40 );
LABEL_42:
                v40 = (void **)v37[66];
              }
              if ( v40 != v37 + 68 )
                free(v40);
              v42 = (void **)v37[52];
              v43 = v37 + 52;
              if ( v42 != v37 + 54 )
                free(v42);
              v44 = v37 + 12;
              do
              {
                while ( 1 )
                {
                  v43 -= 4;
                  if ( *v43 == v43 + 2 )
                    break;
                  operator delete(*v43);
                  if ( v43 == v44 )
                    goto LABEL_50;
                }
              }
              while ( v43 != v44 );
LABEL_50:
              operator delete(v37, 0x3A0u);
            }
            else
            {
              v45 = *((unsigned int *)v66[1] + 3744);
              *((_DWORD *)v66[1] + 3744) = v45 + 1;
              v38[v45 + 1856] = v37;
            }
          }
        }
        return v6;
      }
    }
    v33 = sub_1A0B620(a5, a1 + 1, v13, v14, v15, v16);
    sub_168B9B0(n, v8, 2953);
    if ( v66[0] && v66[1] )
      sub_1580C40((unsigned __int64)v66[1], (unsigned __int64)v66[0]);
    v34 = _mm_load_si128((const __m128i *)n);
    v31 = *(_QWORD *)(v33 + 48);
    v67 = v69[0];
    *(__m128i *)v66 = v34;
    goto LABEL_35;
  }
  return v6;
}
