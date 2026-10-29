__int64 __fastcall sub_13CDBD0(__int64 a1, void ***a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rax
  unsigned __int8 v9; // cl
  size_t v10; // r14
  _DWORD *v11; // r15
  char v12; // r13
  _QWORD **v13; // rsi
  _QWORD *v14; // rax
  __m128 *v15; // rdi
  __int8 v16; // r13
  unsigned int v17; // ebp
  __int64 v19; // rax
  __m128i *v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rax
  _WORD *v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int8 *v26; // r13
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rax
  void **v30; // r8
  _BYTE *v31; // rdi
  __int64 v32; // rax
  void **v33; // r13
  __int64 v34; // rax
  void **v35; // rcx
  void **v36; // rax
  void **v37; // rdi
  void **v38; // rdi
  void **v39; // rax
  void *v40; // rax
  size_t v41; // rdx
  __int64 v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  void *v52; // rdi
  __int64 v53; // [rsp+8h] [rbp-200h]
  size_t *v54; // [rsp+8h] [rbp-200h]
  __int64 v55; // [rsp+10h] [rbp-1F8h]
  void **v56; // [rsp+10h] [rbp-1F8h]
  void **v57; // [rsp+10h] [rbp-1F8h]
  void **v58; // [rsp+10h] [rbp-1F8h]
  __int64 v59; // [rsp+10h] [rbp-1F8h]
  void **v60; // [rsp+18h] [rbp-1F0h]
  void **v61; // [rsp+18h] [rbp-1F0h]
  __int64 v62; // [rsp+18h] [rbp-1F0h]
  __int64 v64; // [rsp+24h] [rbp-1E4h] BYREF
  unsigned int v65; // [rsp+2Ch] [rbp-1DCh] BYREF
  _QWORD *v66; // [rsp+38h] [rbp-1D0h] BYREF
  void *src; // [rsp+40h] [rbp-1C8h] BYREF
  size_t n; // [rsp+48h] [rbp-1C0h]
  _QWORD v69[2]; // [rsp+50h] [rbp-1B8h] BYREF
  __m128i v70; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v71; // [rsp+70h] [rbp-198h]
  void *v72; // [rsp+80h] [rbp-188h]
  __int64 v73; // [rsp+90h] [rbp-178h] BYREF
  __int16 v74; // [rsp+A0h] [rbp-168h]
  void *ptr; // [rsp+B0h] [rbp-158h] BYREF
  size_t v76[2]; // [rsp+B8h] [rbp-150h]
  _BYTE v77[320]; // [rsp+C8h] [rbp-140h] BYREF

  v6 = *(_QWORD *)(a1 + 48);
  v7 = *((_BYTE *)a2 + 33) == 1;
  v65 = a3;
  v8 = *(_QWORD *)(v6 + 40);
  v64 = a5;
  v53 = v8;
  ptr = v77;
  *(__m128i *)v76 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( v7 )
  {
    v9 = *((_BYTE *)a2 + 32);
    if ( v9 <= 6u && ((1LL << v9) & 0x7A) != 0 )
    {
      switch ( *((_BYTE *)a2 + 32) )
      {
        case 0:
        case 2:
        case 5:
        case 6:
          v10 = (size_t)a2[1];
          v11 = *a2;
          goto LABEL_4;
        case 1:
          if ( *(_BYTE *)(a1 + 96) )
            goto LABEL_59;
          v11 = nullptr;
          v10 = 0;
          goto LABEL_5;
        case 3:
          v11 = *a2;
          if ( *a2 )
          {
            v10 = strlen((const char *)*a2);
            goto LABEL_4;
          }
          if ( *(_BYTE *)(a1 + 96) )
          {
LABEL_59:
            v10 = 0;
            v11 = nullptr;
          }
          else
          {
            v10 = 0;
          }
          break;
        case 4:
          v11 = **a2;
          v10 = (size_t)(*a2)[1];
          goto LABEL_4;
        default:
          goto LABEL_3;
      }
      goto LABEL_5;
    }
  }
LABEL_3:
  sub_22538C0(a2, &ptr);
  v10 = v76[0];
  v11 = ptr;
LABEL_4:
  if ( !*(_BYTE *)(a1 + 96)
    || v10 <= 0xB
    || (*(_QWORD *)v11 != 0x636E692F7273752FLL || v11[2] != 1701082476)
    && (v10 <= 0x11
     || *(_QWORD *)v11 ^ 0x636F6C2F7273752FLL | *((_QWORD *)v11 + 1) ^ 0x756C636E692F6C61LL
     || *((_WORD *)v11 + 8) != 25956) )
  {
    goto LABEL_5;
  }
  sub_FC70B0((__int64)&v70, *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), 0, 149);
  v26 = (unsigned __int8 *)v70.m128i_i64[0];
  if ( !v70.m128i_i64[0] )
  {
    v45 = v70.m128i_i64[1];
    v46 = *(_DWORD *)(v70.m128i_i64[1] + 14976);
    if ( v46 )
    {
      v48 = (unsigned int)(v46 - 1);
      *(_DWORD *)(v70.m128i_i64[1] + 14976) = v48;
      v26 = *(unsigned __int8 **)(v45 + 8 * v48 + 14848);
      v49 = *((unsigned int *)v26 + 134);
      *v26 = 0;
      v50 = *((_QWORD *)v26 + 66);
      *((_DWORD *)v26 + 106) = 0;
      v51 = v50 + (v49 << 6);
      while ( v50 != v51 )
      {
        while ( 1 )
        {
          v51 -= 64;
          v52 = *(void **)(v51 + 24);
          if ( v52 == (void *)(v51 + 40) )
            break;
          v62 = v50;
          v59 = v51;
          operator delete(v52);
          v51 = v59;
          v50 = v62;
          if ( v62 == v59 )
            goto LABEL_98;
        }
      }
LABEL_98:
      *((_DWORD *)v26 + 134) = 0;
    }
    else
    {
      v26 = (unsigned __int8 *)operator new(0x3A0u);
      *v26 = 0;
      *((_QWORD *)v26 + 12) = v26 + 112;
      *((_QWORD *)v26 + 16) = v26 + 144;
      *((_QWORD *)v26 + 20) = v26 + 176;
      *((_QWORD *)v26 + 24) = v26 + 208;
      *((_QWORD *)v26 + 28) = v26 + 240;
      *((_QWORD *)v26 + 32) = v26 + 272;
      *((_QWORD *)v26 + 36) = v26 + 304;
      *((_QWORD *)v26 + 40) = v26 + 336;
      *((_QWORD *)v26 + 44) = v26 + 368;
      *((_QWORD *)v26 + 48) = v26 + 400;
      *((_QWORD *)v26 + 52) = v26 + 432;
      *((_QWORD *)v26 + 13) = 0;
      v26[112] = 0;
      *((_QWORD *)v26 + 17) = 0;
      v26[144] = 0;
      *((_QWORD *)v26 + 21) = 0;
      v26[176] = 0;
      *((_QWORD *)v26 + 25) = 0;
      v26[208] = 0;
      *((_QWORD *)v26 + 29) = 0;
      v26[240] = 0;
      *((_QWORD *)v26 + 33) = 0;
      v26[272] = 0;
      *((_QWORD *)v26 + 37) = 0;
      v26[304] = 0;
      *((_QWORD *)v26 + 41) = 0;
      v26[336] = 0;
      *((_QWORD *)v26 + 45) = 0;
      v26[368] = 0;
      *((_QWORD *)v26 + 49) = 0;
      v26[400] = 0;
      *((_QWORD *)v26 + 53) = 0x800000000LL;
      *((_QWORD *)v26 + 66) = v26 + 544;
      *((_QWORD *)v26 + 67) = 0x600000000LL;
    }
    v70.m128i_i64[0] = (__int64)v26;
  }
  v26[*v26 + 1] = 0;
  src = v69;
  sub_13CD010(&src, v11, (__int64)v11 + v10);
  v27 = v70.m128i_i64[0];
  v28 = *(unsigned __int8 *)v70.m128i_i64[0];
  *(_BYTE *)v70.m128i_i64[0] = v28 + 1;
  v29 = 32 * (v28 + 3);
  v30 = (void **)(v27 + v29);
  v31 = *(_BYTE **)(v27 + v29);
  if ( src == v69 )
  {
    v41 = n;
    if ( n )
    {
      if ( n == 1 )
      {
        *v31 = v69[0];
        v41 = n;
        v31 = *v30;
      }
      else
      {
        v58 = v30;
        memcpy(v31, src, n);
        v30 = v58;
        v41 = n;
        v31 = *v58;
      }
    }
    v30[1] = (void *)v41;
    v31[v41] = 0;
    v31 = src;
  }
  else
  {
    if ( v31 == (_BYTE *)(v27 + v29 + 16) )
    {
      *v30 = src;
      v30[1] = (void *)n;
      v30[2] = (void *)v69[0];
    }
    else
    {
      v32 = *(_QWORD *)(v27 + 32LL * (int)v28 + 112);
      *v30 = src;
      v30[1] = (void *)n;
      v30[2] = (void *)v69[0];
      if ( v31 )
      {
        src = v31;
        v69[0] = v32;
        goto LABEL_38;
      }
    }
    v31 = v69;
    src = v69;
  }
LABEL_38:
  n = 0;
  *v31 = 0;
  if ( src != v69 )
    operator delete(src);
  if ( (_BYTE)v74 )
  {
    sub_FC7790(v71, v70.m128i_i64, SHIBYTE(v74));
    v71 = 0;
    v74 = 0;
  }
  if ( v72 != &v73 )
    operator delete(v72);
  v33 = (void **)v70.m128i_i64[0];
  if ( v70.m128i_i64[0] )
  {
    v34 = v70.m128i_i64[1];
    if ( v70.m128i_i64[1] )
    {
      if ( v70.m128i_i64[0] < (unsigned __int64)v70.m128i_i64[1]
        || v70.m128i_i64[0] > (unsigned __int64)(v70.m128i_i64[1] + 14848) )
      {
        v35 = *(void ***)(v70.m128i_i64[0] + 528);
        v36 = &v35[8 * (unsigned __int64)*(unsigned int *)(v70.m128i_i64[0] + 536)];
        if ( v35 != v36 )
        {
          do
          {
            while ( 1 )
            {
              v36 -= 8;
              v37 = (void **)v36[3];
              if ( v37 == v36 + 5 )
                break;
              v60 = v36;
              v56 = v35;
              operator delete(v37);
              v35 = v56;
              v36 = v60;
              if ( v56 == v60 )
                goto LABEL_50;
            }
          }
          while ( v35 != v36 );
LABEL_50:
          v36 = (void **)v33[66];
        }
        if ( v36 != v33 + 68 )
          free(v36);
        v38 = (void **)v33[52];
        if ( v38 != v33 + 54 )
          free(v38);
        v39 = v33 + 48;
        v57 = v33 + 8;
        do
        {
          while ( *v39 != v39 + 2 )
          {
            v61 = v39;
            operator delete(*v39);
            v39 = v61 - 4;
            if ( v57 == v61 - 4 )
              goto LABEL_58;
          }
          v39 -= 4;
        }
        while ( v39 != v57 );
LABEL_58:
        operator delete(v33, 0x3A0u);
      }
      else
      {
        v42 = *(unsigned int *)(v70.m128i_i64[1] + 14976);
        *(_DWORD *)(v70.m128i_i64[1] + 14976) = v42 + 1;
        *(_QWORD *)(v34 + 8 * v42 + 14848) = v33;
      }
    }
  }
LABEL_5:
  v12 = 0;
  if ( v65 > 1 )
    v12 = (v65 == 3) + 1;
  v13 = (_QWORD **)v53;
  sub_FD9440((__int64)&v70, v53, (char *)v11, v10, 1);
  v14 = (_QWORD *)v70.m128i_i64[0];
  if ( (v70.m128i_i8[8] & 1) != 0 )
  {
    v70.m128i_i64[0] = 0;
    v13 = &v66;
    v66 = v14;
    sub_A05760(&src, &v66);
    if ( v66 )
      (*(void (__fastcall **)(_QWORD *))(*v66 + 8LL))(v66);
    v15 = (__m128 *)&v70;
    sub_A04D70(v70.m128i_i64);
  }
  else
  {
    v15 = (__m128 *)&v70;
    v55 = v70.m128i_i64[0];
    sub_A04D70(v70.m128i_i64);
    if ( v55 )
    {
      v70.m128i_i64[0] = v55;
      v16 = (8 * (a4 & 3)) & 0xDF | v70.m128i_i8[8] & 0xC0 | v12 & 0xDF;
LABEL_10:
      v70.m128i_i8[8] = v16;
      v17 = 1;
      sub_13CCE70(a1, (int *)&v65, &v70, &v64);
      goto LABEL_11;
    }
  }
  if ( !a4 )
  {
    sub_FD9C70((__int64)&v70, v53, v11, v10, 0, 1, 1);
    if ( (v70.m128i_i8[8] & 1) != 0 )
    {
      v43 = (_QWORD *)v70.m128i_i64[0];
      v70.m128i_i64[0] = 0;
      v13 = &v66;
      v66 = v43;
      sub_A05760(&src, &v66);
      if ( v66 )
        (*(void (__fastcall **)(_QWORD *))(*v66 + 8LL))(v66);
      v15 = (__m128 *)&v70;
      sub_A04D90(v70.m128i_i64);
    }
    else
    {
      v15 = (__m128 *)&v70;
      v54 = (size_t *)v70.m128i_i64[0];
      sub_A04D90(v70.m128i_i64);
      v13 = (_QWORD **)v54;
      if ( v54 )
      {
        v15 = *(__m128 **)(a1 + 48);
        v40 = sub_13C2050(v15, v54);
        if ( v40 )
        {
          v70.m128i_i64[0] = (__int64)v40;
          v16 = v70.m128i_i8[8] & 0xC0 | v12 | 0x10;
          goto LABEL_10;
        }
      }
    }
  }
  v17 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v17 )
  {
    v19 = sub_227D6D0(v15, v13);
    v20 = *(__m128i **)(v19 + 32);
    v21 = v19;
    if ( *(_QWORD *)(v19 + 24) - (_QWORD)v20 > 0x1Fu )
    {
      *v20 = _mm_load_si128((const __m128i *)&xmmword_23A9FA0);
      v20[1] = _mm_load_si128((const __m128i *)&xmmword_23A9FB0);
      v23 = (_WORD *)(*(_QWORD *)(v19 + 32) + 32LL);
      *(_QWORD *)(v19 + 32) = v23;
    }
    else
    {
      v22 = sub_227BF10(v19, "ignoring nonexistent directory \"", 32);
      v23 = *(_WORD **)(v22 + 32);
      v21 = v22;
    }
    v24 = *(_QWORD *)(v21 + 24) - (_QWORD)v23;
    if ( v24 < v10 )
    {
      v44 = sub_227BF10(v21, v11, v10);
      v23 = *(_WORD **)(v44 + 32);
      v21 = v44;
      v24 = *(_QWORD *)(v44 + 24) - (_QWORD)v23;
    }
    else if ( v10 )
    {
      memcpy(v23, v11, v10);
      v47 = *(_QWORD *)(v21 + 24);
      v23 = (_WORD *)(v10 + *(_QWORD *)(v21 + 32));
      *(_QWORD *)(v21 + 32) = v23;
      v24 = v47 - (_QWORD)v23;
    }
    if ( v24 > 1 )
    {
      *v23 = 2594;
      *(_QWORD *)(v21 + 32) += 2LL;
      v17 = 0;
    }
    else
    {
      v25 = v21;
      v17 = 0;
      sub_227BF10(v25, "\"\n", 2);
    }
  }
LABEL_11:
  if ( ptr != v77 )
    free(ptr);
  return v17;
}
