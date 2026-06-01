void __fastcall sub_13B3140(__int64 a1, unsigned int a2, unsigned int *a3)
{
  char *v6; // rsi
  char *v7; // rdx
  size_t v8; // rcx
  __int64 (__fastcall ***v9)(); // r8
  char *v10; // r9
  __int64 v11; // r15
  __int64 v12; // rdi
  _QWORD *v13; // r15
  int v14; // eax
  __int64 v15; // rdx
  size_t v16; // rax
  __int64 v17; // r15
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  unsigned int v24; // eax
  size_t v25; // rax
  _BYTE *v26; // r8
  unsigned int v27; // ecx
  const char *v28; // rax
  char *v29; // rdi
  size_t v30; // rdx
  size_t v31; // r15
  __int64 v32; // rax
  char v33; // bp
  int v34; // eax
  __int64 v35; // rax
  _WORD *v36; // rcx
  const char *v37; // rsi
  size_t v38; // rax
  _BYTE *v39; // rdx
  size_t v40; // rcx
  char *v41; // r9
  __int64 v42; // rax
  __int16 *v43; // rdx
  __int64 (__fastcall ***v44)(); // r8
  __int16 v45; // di
  char *v46; // rsi
  __int64 v47; // rax
  __int64 (__fastcall **v48)(); // rdi
  unsigned int v49; // eax
  const char *v50; // r9
  __int64 v51; // rax
  char *v52; // rdi
  __int64 (__fastcall ***v53)(); // r8
  __m128i v54; // xmm0
  unsigned int v55; // edi
  __int64 v56; // r8
  unsigned int v57; // edi
  __int64 v58; // rdx
  _QWORD *v59; // rdx
  size_t v60; // rdx
  __int64 v61; // [rsp-8h] [rbp-120h]
  size_t n; // [rsp+0h] [rbp-118h]
  size_t na; // [rsp+0h] [rbp-118h]
  size_t nb; // [rsp+0h] [rbp-118h]
  size_t nc; // [rsp+0h] [rbp-118h]
  size_t nd; // [rsp+0h] [rbp-118h]
  int src; // [rsp+8h] [rbp-110h]
  unsigned int srca; // [rsp+8h] [rbp-110h]
  void *srcb; // [rsp+8h] [rbp-110h]
  char *srcc; // [rsp+8h] [rbp-110h]
  __int64 (__fastcall ***srcd)(); // [rsp+8h] [rbp-110h]
  void *srce; // [rsp+8h] [rbp-110h]
  __int64 (__fastcall ***srcf)(); // [rsp+8h] [rbp-110h]
  _DWORD *v74; // [rsp+10h] [rbp-108h]
  char *v75; // [rsp+10h] [rbp-108h]
  unsigned int v76; // [rsp+1Ch] [rbp-FCh]
  __int64 (__fastcall **v77)(); // [rsp+20h] [rbp-F8h] BYREF
  int v78; // [rsp+28h] [rbp-F0h]
  __int128 v79; // [rsp+30h] [rbp-E8h]
  void *dest; // [rsp+40h] [rbp-D8h]
  char v81; // [rsp+48h] [rbp-D0h]
  int v82; // [rsp+4Ch] [rbp-CCh]
  void **p_ptr; // [rsp+50h] [rbp-C8h]
  void *ptr; // [rsp+60h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-B0h]
  _BYTE v86[160]; // [rsp+78h] [rbp-A0h] BYREF

  sub_FC5CB0((_DWORD *)a1, a2);
  ptr = v86;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8090);
  sub_FCA320((__int64)a3, &ptr);
  v6 = nullptr;
  v81 = 0;
  v79 = 0;
  v78 = 2;
  v82 = 1;
  dest = nullptr;
  v77 = &off_2BEBEE0;
  p_ptr = &ptr;
  sub_227B8B0(&v77, 0, 0, 0);
  v11 = *(_QWORD *)(a1 + 24);
  if ( (*(_BYTE *)(v11 + 1) & 0x40) != 0 )
  {
    v6 = (char *)a3[3];
    if ( (_DWORD)v6 == 98 )
    {
      v7 = (char *)dest;
      if ( *((_QWORD *)&v79 + 1) - (_QWORD)dest > 0x10u )
      {
        v54 = _mm_load_si128((const __m128i *)&xmmword_23AA450);
        *((_BYTE *)dest + 16) = 93;
        *(__m128i *)v7 = v54;
        dest = (char *)dest + 17;
      }
      else
      {
        v6 = " [-ferror-limit=]";
        sub_227BF10(&v77, " [-ferror-limit=]", 17);
      }
      goto LABEL_6;
    }
    v12 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
    if ( a2 == 4 )
    {
      if ( sub_FD35E0(v12, (unsigned int)v6) && !sub_FD3670(*(_QWORD *)(*(_QWORD *)a3 + 32LL), a3[3]) )
      {
        v59 = dest;
        if ( *((_QWORD *)&v79 + 1) - (_QWORD)dest > 8u )
        {
          *((_BYTE *)dest + 8) = 114;
          *v59 = 0x6F727265572D5B20LL;
          dest = (char *)dest + 9;
        }
        else
        {
          sub_227BF10(&v77, " [-Werror", 9);
        }
        v6 = (char *)a3[3];
        v10 = sub_FD4050(*(_QWORD *)(*(_QWORD *)a3 + 32LL), (unsigned int)v6);
        v8 = v60;
        if ( !v60 )
        {
LABEL_40:
          if ( (*(_BYTE *)(v11 + 2) & 3) == 0 )
            goto LABEL_41;
          v49 = sub_FD31C0(a3[3]);
          v8 = v49;
          if ( !v49 )
            goto LABEL_41;
          v6 = ",";
LABEL_15:
          srca = v8;
          v25 = strlen(v6);
          v26 = dest;
          v27 = srca;
          if ( v25 <= *((_QWORD *)&v79 + 1) - (_QWORD)dest )
          {
            if ( (_DWORD)v25 )
            {
              v57 = 0;
              do
              {
                v58 = v57++;
                v26[v58] = v6[v58];
              }
              while ( v57 < (unsigned int)v25 );
            }
            dest = (char *)dest + v25;
          }
          else
          {
            sub_227BF10(&v77, v6, v25);
            v27 = srca;
          }
          if ( (*(_BYTE *)(v11 + 2) & 3) == 1 )
          {
            v6 = (char *)v27;
            sub_227B910(&v77, v27);
          }
          else
          {
            v28 = (const char *)sub_FD32F0(v27);
            v29 = (char *)dest;
            v31 = v30;
            v7 = *((char **)&v79 + 1);
            v8 = *((_QWORD *)&v79 + 1) - (_QWORD)dest;
            if ( v31 <= *((_QWORD *)&v79 + 1) - (_QWORD)dest )
            {
              if ( v31 )
              {
                v6 = (char *)v28;
                memcpy(dest, v28, v31);
                v7 = *((char **)&v79 + 1);
                v29 = (char *)dest + v31;
                dest = (char *)dest + v31;
              }
              if ( v29 < v7 )
                goto LABEL_22;
LABEL_42:
              v6 = (_BYTE *)(&qword_58 + 5);
              sub_227BA10(&v77, 93);
              goto LABEL_6;
            }
            v6 = (char *)v28;
            sub_227BF10(&v77, v28, v31);
          }
LABEL_41:
          v29 = (char *)dest;
          v7 = *((char **)&v79 + 1);
          if ( (unsigned __int64)dest < *((_QWORD *)&v79 + 1) )
          {
LABEL_22:
            dest = v29 + 1;
            *v29 = 93;
            goto LABEL_6;
          }
          goto LABEL_42;
        }
        v37 = ",";
LABEL_29:
        v75 = v10;
        srcb = (void *)v8;
        v38 = strlen(v37);
        v39 = dest;
        v40 = (size_t)srcb;
        v41 = v75;
        if ( v38 <= *((_QWORD *)&v79 + 1) - (_QWORD)dest )
        {
          if ( (_DWORD)v38 )
          {
            v55 = 0;
            do
            {
              v56 = v55++;
              v39[v56] = v37[v56];
            }
            while ( v55 < (unsigned int)v38 );
            v39 = dest;
          }
          v43 = (__int16 *)&v39[v38];
          v44 = &v77;
          dest = v43;
        }
        else
        {
          v42 = sub_227BF10(&v77, v37, v38);
          v40 = (size_t)srcb;
          v41 = v75;
          v43 = *(__int16 **)(v42 + 32);
          v44 = (__int64 (__fastcall ***)())v42;
        }
        v45 = 22317;
        if ( a2 == 2 )
          v45 = 21037;
        v46 = "-R";
        if ( a2 != 2 )
          v46 = "-W";
        if ( (unsigned __int64)((char *)v44[3] - (char *)v43) > 1 )
        {
          *v43 = v45;
          v48 = (__int64 (__fastcall **)())((char *)v44[4] + 2);
          v44[4] = v48;
        }
        else
        {
          srcc = v41;
          na = v40;
          v47 = sub_227BF10(v44, v46, 2);
          v40 = na;
          v41 = srcc;
          v48 = *(__int64 (__fastcall ***)())(v47 + 32);
          v44 = (__int64 (__fastcall ***)())v47;
        }
        v6 = v41;
        if ( (char *)v44[3] - (char *)v48 < v40 )
        {
          sub_227BF10(v44, v41, v40);
        }
        else
        {
          srcd = v44;
          nb = v40;
          memcpy(v48, v41, v40);
          v9 = srcd;
          srcd[4] = (__int64 (__fastcall **)())((char *)srcd[4] + nb);
        }
        v8 = *((_QWORD *)a3 + 3);
        if ( v8 )
        {
          v50 = *((const char **)a3 + 2);
          if ( *((void **)&v79 + 1) == dest )
          {
            srce = *((void **)a3 + 3);
            nc = *((_QWORD *)a3 + 2);
            v51 = sub_227BF10(&v77, "=", 1);
            v50 = (const char *)nc;
            v8 = (size_t)srce;
            v52 = *(char **)(v51 + 32);
            v53 = (__int64 (__fastcall ***)())v51;
          }
          else
          {
            *(_BYTE *)dest = 61;
            v53 = &v77;
            v52 = (char *)dest + 1;
            dest = (char *)dest + 1;
          }
          v6 = (char *)v50;
          if ( v8 > (char *)v53[3] - v52 )
          {
            sub_227BF10(v53, v50, v8);
          }
          else
          {
            srcf = v53;
            nd = v8;
            memcpy(v52, v50, v8);
            v9 = srcf;
            v8 = nd;
            srcf[4] = (__int64 (__fastcall **)())((char *)srcf[4] + nd);
          }
        }
        goto LABEL_40;
      }
      v6 = (char *)a3[3];
      v12 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
    }
    v10 = sub_FD4050(v12, (unsigned int)v6);
    v8 = (size_t)v7;
    if ( !v7 )
      goto LABEL_5;
    v37 = " [";
    goto LABEL_29;
  }
LABEL_5:
  if ( (*(_BYTE *)(v11 + 2) & 3) != 0 )
  {
    v24 = sub_FD31C0(a3[3]);
    v8 = v24;
    if ( v24 )
    {
      v6 = " [";
      goto LABEL_15;
    }
  }
LABEL_6:
  v13 = *(_QWORD **)(a1 + 16);
  v14 = (*(__int64 (__fastcall **)(_QWORD *, char *, char *, size_t, __int64 (__fastcall ***)(), char *))(*v13 + 80LL))(
          v13,
          v6,
          v7,
          v8,
          v9,
          v10);
  v15 = *(_QWORD *)(a1 + 48);
  src = v14;
  v16 = v13[2];
  v17 = v13[4];
  n = v16;
  if ( v15 )
  {
    v35 = sub_227BF10(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 40), v15);
    v36 = *(_WORD **)(v35 + 32);
    if ( *(_QWORD *)(v35 + 24) - (_QWORD)v36 > 1u )
    {
      *v36 = 8250;
      *(_QWORD *)(v35 + 32) += 2LL;
    }
    else
    {
      sub_227BF10(v35, ": ", 2);
    }
  }
  v18 = a3[2];
  if ( (_DWORD)v18 )
  {
    sub_1361E30(
      *(_QWORD **)(a1 + 32),
      (char *)v18,
      *(__int64 (__fastcall ***)())(*(_QWORD *)a3 + 64LL),
      a2,
      (char *)*p_ptr,
      (__int64)p_ptr[1],
      *(void **)(*((_QWORD *)a3 + 6) + 416LL),
      *(unsigned int *)(*((_QWORD *)a3 + 6) + 424LL),
      *(int **)(*((_QWORD *)a3 + 6) + 528LL),
      *(unsigned int *)(*((_QWORD *)a3 + 6) + 536LL),
      0);
    v23 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v23 + 32) == *(_QWORD *)(v23 + 16) )
      goto LABEL_10;
    goto LABEL_9;
  }
  sub_13AC690(*(_QWORD **)(a1 + 16), a2, (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 2LL) & 4) != 0);
  v32 = *(_QWORD *)(a1 + 24);
  v74 = *(_DWORD **)(a1 + 16);
  v76 = *(_DWORD *)(v32 + 36);
  v33 = *(_BYTE *)(v32 + 2) >> 2;
  v34 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v74 + 80LL))(v74);
  v18 = a2 == 1;
  sub_13AC900(
    *(_QWORD **)(a1 + 16),
    v18,
    (unsigned __int8 *)*p_ptr,
    (size_t)p_ptr[1],
    v34 + v74[8] - v74[4] - (src + v17 - n),
    v76,
    v33 & 1);
  v23 = *(_QWORD *)(a1 + 16);
  v19 = v61;
  if ( *(_QWORD *)(v23 + 32) != *(_QWORD *)(v23 + 16) )
LABEL_9:
    sub_227B9F0(v23, v18, v19, v20, v21, v22, n);
LABEL_10:
  v77 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v77);
  if ( ptr != v86 )
    free(ptr);
}
