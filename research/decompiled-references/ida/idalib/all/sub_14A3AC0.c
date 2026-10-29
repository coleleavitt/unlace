_BYTE *__fastcall sub_14A3AC0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  char v4; // al
  int v5; // eax
  __int64 *v6; // rdi
  bool v7; // zf
  char v8; // al
  _BYTE *result; // rax
  __int16 v10; // bx
  size_t v11; // rax
  size_t v12; // r9
  unsigned int v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  unsigned __int64 v16; // r12
  char *v17; // rdi
  _BYTE *v18; // rdx
  char *v19; // rdx
  __int64 v20; // rdi
  const void *v21; // rax
  size_t v22; // rdx
  size_t v23; // r12
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 *p_ptr; // rsi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  void *v32; // rdx
  int v33; // ebp
  void *v34; // r15
  int v35; // ebx
  size_t v36; // r14
  __int64 v37; // r13
  __int16 v38; // ax
  __int64 v39; // rax
  char *v40; // rdi
  size_t v41; // rax
  size_t v42; // r9
  size_t v43; // rbx
  __int64 v44; // r9
  __int64 v45; // rdi
  __int64 v46; // rax
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v51; // [rsp+8h] [rbp-1C0h]
  size_t na; // [rsp+10h] [rbp-1B8h]
  size_t nb; // [rsp+10h] [rbp-1B8h]
  size_t nc; // [rsp+10h] [rbp-1B8h]
  size_t n; // [rsp+10h] [rbp-1B8h]
  __int64 v56; // [rsp+18h] [rbp-1B0h]
  int v57; // [rsp+28h] [rbp-1A0h]
  unsigned int v58; // [rsp+2Ch] [rbp-19Ch]
  char v59; // [rsp+3Dh] [rbp-18Bh] BYREF
  __int16 v60; // [rsp+3Eh] [rbp-18Ah] BYREF
  _BYTE *v61; // [rsp+40h] [rbp-188h] BYREF
  char v62; // [rsp+48h] [rbp-180h]
  __int64 v63; // [rsp+50h] [rbp-178h]
  int v64; // [rsp+58h] [rbp-170h]
  __int16 v65; // [rsp+5Ch] [rbp-16Ch]
  __int64 (__fastcall *v66)(__int64); // [rsp+60h] [rbp-168h]
  __int64 v67; // [rsp+68h] [rbp-160h]
  __int64 v68; // [rsp+70h] [rbp-158h]
  void *v69; // [rsp+80h] [rbp-148h] BYREF
  __m128i si128; // [rsp+88h] [rbp-140h]
  _BYTE v71[56]; // [rsp+98h] [rbp-130h] BYREF
  void *ptr; // [rsp+D0h] [rbp-F8h] BYREF
  __m128i v73; // [rsp+D8h] [rbp-F0h]
  _BYTE v74[56]; // [rsp+E8h] [rbp-E0h] BYREF
  void *src; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+128h] [rbp-A0h]
  _BYTE v77[152]; // [rsp+130h] [rbp-98h] BYREF

  v3 = *(unsigned __int16 *)(a1 + 32);
  v4 = sub_141A630(v3);
  if ( (_WORD)v3 == 1 || v4 )
    v56 = 0;
  else
    v56 = *(_QWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = v5;
  v57 = v5;
  sub_14634E0(v6, (int *)(a1 + 16));
  v7 = *(_WORD *)(a1 + 32) == 22;
  v61 = (_BYTE *)(a1 + 1952);
  v8 = *(_BYTE *)(a1 + 1952);
  v63 = a1;
  v62 = v8;
  *(_BYTE *)(a1 + 1952) = 1;
  v64 = 1507350;
  v65 = 63;
  v66 = sub_146A990;
  v67 = 0;
  v68 = 0;
  if ( !v7 )
    goto LABEL_5;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
  {
    if ( (unsigned __int8)sub_1568800(&v61) )
    {
LABEL_5:
      sub_1564840(&src, a1, a1 + 16, 14);
      sub_AE9DF0((unsigned __int8 **)&src, 22, 4u);
      sub_AEA040((__int64)&src);
      goto LABEL_6;
    }
  }
  else
  {
    LODWORD(v68) = sub_146A990(a1);
  }
  v10 = *(_WORD *)(a1 + 32);
  src = v77;
  v76 = 0xC00000000LL;
  if ( (unsigned __int16)(v10 - 14) > 1u && (unsigned __int16)(v10 - 17) > 2u )
  {
    v69 = v71;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA640);
    v11 = j__strlen("\"");
    v12 = v11;
    if ( v11 > 0x2A )
    {
      nb = v11;
      sub_2236E10(&v69, v71, v11, 1);
      v12 = nb;
      v40 = (char *)v69 + si128.m128i_i64[0];
    }
    else
    {
      if ( !v11 )
      {
LABEL_13:
        v13 = *(_DWORD *)(a1 + 16);
        si128.m128i_i64[0] = v12;
        v58 = v13;
        if ( v10 != 23 )
        {
          if ( (*(_BYTE *)(a1 + 34) & 3) != 0 )
          {
LABEL_46:
            sub_1564840(&ptr, a1, a1 + 16, 6);
            sub_AEA040((__int64)&ptr);
            LOWORD(ptr) = 23;
            sub_15680D0(a1, &ptr, 1, 1);
          }
          else
          {
            while ( 1 )
            {
              v15 = *(_DWORD *)(a1 + 20);
              ptr = v74;
              v16 = (unsigned int)(v15 + 1);
              v73 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
              if ( v15 != -1 )
              {
                v17 = v74;
                v18 = v74;
                if ( v16 > 0x10 )
                {
                  sub_2236E10(&ptr, v74, (unsigned int)(v15 + 1), 1);
                  v18 = ptr;
                  v17 = (char *)ptr + v73.m128i_i64[0];
                }
                v19 = &v18[v16];
                if ( v19 != v17 )
                  memset(v17, 0, v19 - v17);
                v73.m128i_i64[0] = v16;
              }
              v20 = *(_QWORD *)(a1 + 8);
              v59 = 0;
              v21 = (const void *)sub_145C740(v20, a1 + 16, (__int64 *)&ptr, &v59);
              v23 = v22;
              if ( v59 )
                break;
              v14 = si128.m128i_i64[0];
              v24 = v22 + si128.m128i_i64[0];
              if ( v24 > si128.m128i_i64[1] )
              {
                na = (size_t)v21;
                sub_2236E10(&v69, v71, v24, 1);
                v14 = si128.m128i_i64[0];
                v21 = (const void *)na;
              }
              if ( v23 )
              {
                memcpy((char *)v69 + v14, v21, v23);
                v14 = si128.m128i_i64[0];
              }
              si128.m128i_i64[0] = v23 + v14;
              sub_149F520(a1, 0);
              if ( ptr != v74 )
                free(ptr);
              if ( *(_WORD *)(a1 + 32) == 23 )
              {
                v12 = si128.m128i_i64[0];
                goto LABEL_52;
              }
              if ( (*(_BYTE *)(a1 + 34) & 3) != 0 )
                goto LABEL_46;
            }
            v60 = 23;
            sub_15680D0(a1, &v60, 1, 1);
            if ( ptr != v74 )
              free(ptr);
          }
          goto LABEL_47;
        }
LABEL_52:
        n = v12;
        v41 = j__strlen("\"");
        v42 = n;
        v43 = v41;
        if ( v41 + n > si128.m128i_i64[1] )
        {
          sub_2236E10(&v69, v71, v41 + n, 1);
          v42 = si128.m128i_i64[0];
        }
        if ( v43 )
        {
          memcpy((char *)v69 + v42, "\"", v43);
          v42 = si128.m128i_i64[0];
        }
        v44 = v43 + v42;
        si128.m128i_i64[0] = v44;
        if ( (*(_BYTE *)(a1 + 34) & 3) != 0 )
        {
          sub_1564840(&ptr, a1, a1 + 16, 6);
          sub_AEA040((__int64)&ptr);
          sub_146A990(a1);
LABEL_47:
          if ( v69 != v71 )
            free(v69);
          goto LABEL_36;
        }
        v45 = *(_QWORD *)(a1 + 96);
        p_ptr = (__int64 *)&ptr;
        v73.m128i_i32[2] = 14;
        ptr = (void *)__PAIR64__(v44, v58);
        v73.m128i_i64[0] = (__int64)v69;
        v46 = sub_18D7870(v45, &ptr, 1);
        v28 = HIDWORD(v76);
        v47 = v46 & 0xFFFFFFFFFFFFFFFCLL;
        v48 = (unsigned int)v76;
        v49 = (unsigned int)v76 + 1LL;
        if ( v49 > HIDWORD(v76) )
        {
          p_ptr = (__int64 *)v77;
          sub_2237220(&src, v77, v49, 8);
          v48 = (unsigned int)v76;
        }
        v32 = src;
        *((_QWORD *)src + v48) = v47;
        LODWORD(v76) = v76 + 1;
        if ( v69 != v71 )
          free(v69);
LABEL_35:
        if ( !(unsigned __int8)sub_14808E0((__int64)&v61, p_ptr, (__int64)v32, v28, v26, v27) )
        {
          v33 = HIDWORD(v68);
          v34 = src;
          v35 = v76;
          v36 = 8LL * (unsigned int)v76;
          v37 = sub_15D92D0(*(_QWORD *)(a2 + 40), v36 + 80);
          v38 = sub_F963B0(v56, 0, 5);
          *(_WORD *)(v37 + 56) = v35;
          *(_QWORD *)(v37 + 56) &= 0x7F80FFFFuLL;
          *(_QWORD *)v37 = v56;
          *(_BYTE *)(v37 + 35) &= 0xFCu;
          *(_QWORD *)(v37 + 8) = 0;
          *(_QWORD *)(v37 + 16) = 0;
          *(_DWORD *)(v37 + 24) = v57;
          *(_DWORD *)(v37 + 28) = v33;
          *(_WORD *)(v37 + 32) = v38;
          *(_BYTE *)(v37 + 34) = -11;
          *(_QWORD *)(v37 + 40) = 0;
          *(_QWORD *)(v37 + 48) = 0;
          *(_QWORD *)(v37 + 72) = sub_15D7D80(v37);
          if ( v35 )
            memcpy((void *)(v37 + 80), v34, v36);
          v39 = *(unsigned int *)(a2 + 56);
          if ( v39 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 60) )
          {
            sub_2237220(a2 + 48, a2 + 64, v39 + 1, 8);
            v39 = *(unsigned int *)(a2 + 56);
          }
          *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v39) = v37;
          ++*(_DWORD *)(a2 + 56);
          sub_147F4B0(a2 + 8, v37);
        }
        goto LABEL_36;
      }
      v40 = v71;
    }
    nc = v12;
    memcpy(v40, "\"", v12);
    v10 = *(_WORD *)(a1 + 32);
    v12 = si128.m128i_i64[0] + nc;
    goto LABEL_13;
  }
  v25 = sub_14B6F70(a1);
  if ( v25 != 1 )
  {
    v28 = (unsigned int)v76;
    p_ptr = (__int64 *)HIDWORD(v76);
    v30 = v25 & 0xFFFFFFFFFFFFFFFCLL;
    v31 = (unsigned int)v76 + 1LL;
    if ( v31 > HIDWORD(v76) )
    {
      p_ptr = (__int64 *)v77;
      v51 = v30;
      sub_2237220(&src, v77, v31, 8);
      v28 = (unsigned int)v76;
      v30 = v51;
    }
    v32 = src;
    *((_QWORD *)src + v28) = v30;
    LODWORD(v76) = v76 + 1;
    goto LABEL_35;
  }
LABEL_36:
  if ( src != v77 )
    free(src);
LABEL_6:
  result = v61;
  *v61 = v62;
  return result;
}
