__int64 *__fastcall sub_110E920(__int64 *a1, unsigned __int8 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  _BYTE *v10; // rsi
  _BYTE *v11; // rdi
  __int64 v12; // rdx
  const void *v13; // rsi
  _BYTE *v14; // rdi
  __int64 v15; // rdx
  const void *v16; // rsi
  _BYTE *v17; // rdi
  __int64 v18; // rdx
  void **v19; // rdx
  void **v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  void **i; // rax
  const void *v26; // rsi
  _BYTE *v27; // rdi
  __int64 v28; // rdx
  void *v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rax
  unsigned __int64 v32; // r15
  _BYTE *v33; // rbx
  __m128i *v34; // rbp
  _BYTE *v35; // rcx
  unsigned __int64 *v36; // rdi
  __int64 v37; // rax
  _BYTE *v38; // rsi
  unsigned __int64 *v39; // rdi
  __int64 v40; // rdx
  _BYTE *v41; // rsi
  unsigned __int64 *v42; // rdi
  __int64 v43; // rdx
  void **v44; // rdx
  void **v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  void **j; // rax
  _BYTE *v51; // rsi
  __m128i *v52; // rdi
  __int64 v53; // rdx
  __m128i *v54; // rdi
  __int64 v55; // r12
  __int64 v56; // rbx
  void *v57; // rdi
  void *v58; // rdi
  void **v59; // r15
  void **v60; // r14
  void *v61; // rdi
  void *v62; // rdi
  __int64 v64; // rdx
  size_t v65; // rdx
  size_t v66; // rdx
  size_t v67; // rdx
  size_t v68; // rdx
  _BYTE *v69; // rdx
  size_t v70; // rdx
  size_t v71; // rdx
  size_t v72; // rdx
  size_t v73; // rdx
  __int64 v74; // rdi
  void **v75; // [rsp+8h] [rbp-50h]
  void **v76; // [rsp+8h] [rbp-50h]
  _BYTE *v77; // [rsp+8h] [rbp-50h]
  void **v78; // [rsp+10h] [rbp-48h]
  void **v79; // [rsp+10h] [rbp-48h]
  void **v80; // [rsp+18h] [rbp-40h]
  void **v81; // [rsp+18h] [rbp-40h]

  v6 = a1[1];
  v7 = sub_110E7D0(*a1, v6, a2, a3);
  if ( v6 == v7 )
    return a1;
  v8 = v7 + 192;
  v9 = v7;
  if ( v6 != v7 + 192 )
  {
    while ( 1 )
    {
      while ( a2(a3, v8) )
      {
        v8 += 192;
        if ( v6 == v8 )
          goto LABEL_33;
      }
      v10 = *(_BYTE **)v8;
      v11 = *(_BYTE **)v9;
      if ( *(_QWORD *)v8 == v8 + 16 )
      {
        v68 = *(_QWORD *)(v8 + 8);
        if ( v68 )
        {
          if ( v68 == 1 )
            *v11 = *(_BYTE *)(v8 + 16);
          else
            memcpy(v11, v10, v68);
          v68 = *(_QWORD *)(v8 + 8);
          v11 = *(_BYTE **)v9;
        }
        *(_QWORD *)(v9 + 8) = v68;
        v11[v68] = 0;
        v11 = *(_BYTE **)v8;
      }
      else
      {
        if ( v11 == (_BYTE *)(v9 + 16) )
        {
          *(_QWORD *)v9 = v10;
          *(_QWORD *)(v9 + 8) = *(_QWORD *)(v8 + 8);
          *(_QWORD *)(v9 + 16) = *(_QWORD *)(v8 + 16);
        }
        else
        {
          *(_QWORD *)v9 = v10;
          v12 = *(_QWORD *)(v9 + 16);
          *(_QWORD *)(v9 + 8) = *(_QWORD *)(v8 + 8);
          *(_QWORD *)(v9 + 16) = *(_QWORD *)(v8 + 16);
          if ( v11 )
          {
            *(_QWORD *)v8 = v11;
            *(_QWORD *)(v8 + 16) = v12;
            goto LABEL_10;
          }
        }
        *(_QWORD *)v8 = v8 + 16;
        v11 = (_BYTE *)(v8 + 16);
      }
LABEL_10:
      *(_QWORD *)(v8 + 8) = 0;
      *v11 = 0;
      v13 = *(const void **)(v8 + 32);
      v14 = *(_BYTE **)(v9 + 32);
      if ( v13 == (const void *)(v8 + 48) )
      {
        v67 = *(_QWORD *)(v8 + 40);
        if ( v67 )
        {
          if ( v67 == 1 )
            *v14 = *(_BYTE *)(v8 + 48);
          else
            memcpy(v14, v13, v67);
          v67 = *(_QWORD *)(v8 + 40);
          v14 = *(_BYTE **)(v9 + 32);
        }
        *(_QWORD *)(v9 + 40) = v67;
        v14[v67] = 0;
        v14 = *(_BYTE **)(v8 + 32);
      }
      else
      {
        if ( v14 == (_BYTE *)(v9 + 48) )
        {
          *(_QWORD *)(v9 + 32) = v13;
          *(_QWORD *)(v9 + 40) = *(_QWORD *)(v8 + 40);
          *(_QWORD *)(v9 + 48) = *(_QWORD *)(v8 + 48);
        }
        else
        {
          *(_QWORD *)(v9 + 32) = v13;
          v15 = *(_QWORD *)(v9 + 48);
          *(_QWORD *)(v9 + 40) = *(_QWORD *)(v8 + 40);
          *(_QWORD *)(v9 + 48) = *(_QWORD *)(v8 + 48);
          if ( v14 )
          {
            *(_QWORD *)(v8 + 32) = v14;
            *(_QWORD *)(v8 + 48) = v15;
            goto LABEL_14;
          }
        }
        *(_QWORD *)(v8 + 32) = v8 + 48;
        v14 = (_BYTE *)(v8 + 48);
      }
LABEL_14:
      *(_QWORD *)(v8 + 40) = 0;
      *v14 = 0;
      v16 = *(const void **)(v8 + 64);
      v17 = *(_BYTE **)(v9 + 64);
      if ( v16 == (const void *)(v8 + 80) )
      {
        v66 = *(_QWORD *)(v8 + 72);
        if ( v66 )
        {
          if ( v66 == 1 )
            *v17 = *(_BYTE *)(v8 + 80);
          else
            memcpy(v17, v16, v66);
          v66 = *(_QWORD *)(v8 + 72);
          v17 = *(_BYTE **)(v9 + 64);
        }
        *(_QWORD *)(v9 + 72) = v66;
        v17[v66] = 0;
        v17 = *(_BYTE **)(v8 + 64);
      }
      else
      {
        if ( v17 == (_BYTE *)(v9 + 80) )
        {
          *(_QWORD *)(v9 + 64) = v16;
          *(_QWORD *)(v9 + 72) = *(_QWORD *)(v8 + 72);
          *(_QWORD *)(v9 + 80) = *(_QWORD *)(v8 + 80);
        }
        else
        {
          *(_QWORD *)(v9 + 64) = v16;
          v18 = *(_QWORD *)(v9 + 80);
          *(_QWORD *)(v9 + 72) = *(_QWORD *)(v8 + 72);
          *(_QWORD *)(v9 + 80) = *(_QWORD *)(v8 + 80);
          if ( v17 )
          {
            *(_QWORD *)(v8 + 64) = v17;
            *(_QWORD *)(v8 + 80) = v18;
            goto LABEL_18;
          }
        }
        *(_QWORD *)(v8 + 64) = v8 + 80;
        v17 = (_BYTE *)(v8 + 80);
      }
LABEL_18:
      *(_QWORD *)(v8 + 72) = 0;
      *v17 = 0;
      v19 = *(void ***)(v9 + 96);
      *(_QWORD *)(v9 + 112) = 0;
      v20 = *(void ***)(v9 + 104);
      *(_OWORD *)(v9 + 96) = 0;
      *(_QWORD *)(v9 + 96) = *(_QWORD *)(v8 + 96);
      v21 = *(_QWORD *)(v8 + 104);
      *(_QWORD *)(v8 + 96) = 0;
      v22 = *(_QWORD *)(v9 + 104);
      *(_QWORD *)(v9 + 104) = v21;
      v23 = *(_QWORD *)(v8 + 112);
      *(_QWORD *)(v8 + 104) = v22;
      v24 = *(_QWORD *)(v9 + 112);
      *(_QWORD *)(v9 + 112) = v23;
      *(_QWORD *)(v8 + 112) = v24;
      for ( i = v19; v20 != i; i += 4 )
      {
        while ( *i != i + 2 )
        {
          v80 = i;
          v78 = v20;
          v75 = v19;
          operator delete(*i);
          v20 = v78;
          v19 = v75;
          i = v80 + 4;
          if ( v78 == v80 + 4 )
            goto LABEL_21;
        }
      }
LABEL_21:
      if ( v19 )
        operator delete(v19);
      v26 = *(const void **)(v8 + 120);
      v27 = *(_BYTE **)(v9 + 120);
      if ( v26 == (const void *)(v8 + 136) )
      {
        v65 = *(_QWORD *)(v8 + 128);
        if ( v65 )
        {
          if ( v65 == 1 )
            *v27 = *(_BYTE *)(v8 + 136);
          else
            memcpy(v27, v26, v65);
          v65 = *(_QWORD *)(v8 + 128);
          v27 = *(_BYTE **)(v9 + 120);
        }
        *(_QWORD *)(v9 + 128) = v65;
        v27[v65] = 0;
        v27 = *(_BYTE **)(v8 + 120);
      }
      else
      {
        if ( v27 == (_BYTE *)(v9 + 136) )
        {
          *(_QWORD *)(v9 + 120) = v26;
          *(_QWORD *)(v9 + 128) = *(_QWORD *)(v8 + 128);
          *(_QWORD *)(v9 + 136) = *(_QWORD *)(v8 + 136);
        }
        else
        {
          *(_QWORD *)(v9 + 120) = v26;
          v28 = *(_QWORD *)(v9 + 136);
          *(_QWORD *)(v9 + 128) = *(_QWORD *)(v8 + 128);
          *(_QWORD *)(v9 + 136) = *(_QWORD *)(v8 + 136);
          if ( v27 )
          {
            *(_QWORD *)(v8 + 120) = v27;
            *(_QWORD *)(v8 + 136) = v28;
            goto LABEL_27;
          }
        }
        *(_QWORD *)(v8 + 120) = v8 + 136;
        v27 = (_BYTE *)(v8 + 136);
      }
LABEL_27:
      *(_QWORD *)(v8 + 128) = 0;
      *v27 = 0;
      if ( *(_BYTE *)(v9 + 184) )
      {
        if ( *(_BYTE *)(v8 + 184) )
        {
          v74 = v9 + 152;
          v9 += 192;
          sub_A0AAD0(v74, (_QWORD *)(v8 + 152));
          goto LABEL_32;
        }
        v29 = *(void **)(v9 + 152);
        *(_BYTE *)(v9 + 184) = 0;
        if ( v29 != (void *)(v9 + 168) )
          operator delete(v29);
      }
      else if ( *(_BYTE *)(v8 + 184) )
      {
        *(_QWORD *)(v9 + 152) = v9 + 168;
        v64 = *(_QWORD *)(v8 + 152);
        if ( v64 == v8 + 168 )
        {
          *(__m128i *)(v9 + 168) = _mm_loadu_si128((const __m128i *)(v8 + 168));
        }
        else
        {
          *(_QWORD *)(v9 + 152) = v64;
          *(_QWORD *)(v9 + 168) = *(_QWORD *)(v8 + 168);
        }
        v9 += 192;
        *(_QWORD *)(v9 - 32) = *(_QWORD *)(v8 + 160);
        *(_QWORD *)(v8 + 152) = v8 + 168;
        *(_QWORD *)(v8 + 160) = 0;
        *(_BYTE *)(v8 + 168) = 0;
        *(_BYTE *)(v9 - 8) = 1;
        goto LABEL_32;
      }
      v9 += 192;
LABEL_32:
      v8 += 192;
      if ( v6 == v8 )
      {
LABEL_33:
        if ( v6 == v9 )
          return a1;
        break;
      }
    }
  }
  v30 = a1[1];
  v31 = v30 - v6;
  if ( v6 == v30 )
    goto LABEL_64;
  v32 = 0xAAAAAAAAAAAAAAABLL * (v31 >> 6);
  if ( v31 <= 0 )
    goto LABEL_64;
  v33 = (_BYTE *)(v6 + 16);
  v34 = (__m128i *)(v9 + 168);
  do
  {
    v35 = *((_BYTE **)v33 - 2);
    v36 = (unsigned __int64 *)v34[-11].m128i_i64[1];
    if ( v33 == v35 )
    {
      v72 = *((_QWORD *)v33 - 1);
      if ( v72 )
      {
        if ( v72 == 1 )
        {
          *(_BYTE *)v36 = *v33;
          v72 = *((_QWORD *)v33 - 1);
        }
        else
        {
          v77 = *((_BYTE **)v33 - 2);
          memcpy(v36, v33, v72);
          v72 = *((_QWORD *)v33 - 1);
          v35 = v77;
        }
        v36 = (unsigned __int64 *)v34[-11].m128i_i64[1];
      }
      v34[-10].m128i_i64[0] = v72;
      *((_BYTE *)v36 + v72) = 0;
      v36 = *((unsigned __int64 **)v35 - 2);
    }
    else
    {
      if ( v36 == &v34[-10].m128i_u64[1] )
      {
        v34[-11].m128i_i64[1] = (__int64)v35;
        v34[-10].m128i_i64[0] = *((_QWORD *)v33 - 1);
        v34[-10].m128i_i64[1] = *(_QWORD *)v33;
      }
      else
      {
        v34[-11].m128i_i64[1] = (__int64)v35;
        v37 = v34[-10].m128i_i64[1];
        v34[-10].m128i_i64[0] = *((_QWORD *)v33 - 1);
        v34[-10].m128i_i64[1] = *(_QWORD *)v33;
        if ( v36 )
        {
          *((_QWORD *)v33 - 2) = v36;
          *(_QWORD *)v33 = v37;
          goto LABEL_41;
        }
      }
      *((_QWORD *)v33 - 2) = v33;
      v36 = (unsigned __int64 *)v33;
    }
LABEL_41:
    *((_QWORD *)v33 - 1) = 0;
    *(_BYTE *)v36 = 0;
    v38 = *((_BYTE **)v33 + 2);
    v39 = (unsigned __int64 *)v34[-9].m128i_i64[1];
    if ( v38 == v33 + 32 )
    {
      v71 = *((_QWORD *)v33 + 3);
      if ( v71 )
      {
        if ( v71 == 1 )
          *(_BYTE *)v39 = v33[32];
        else
          memcpy(v39, v38, v71);
        v71 = *((_QWORD *)v33 + 3);
        v39 = (unsigned __int64 *)v34[-9].m128i_i64[1];
      }
      v34[-8].m128i_i64[0] = v71;
      *((_BYTE *)v39 + v71) = 0;
      v39 = *((unsigned __int64 **)v33 + 2);
    }
    else
    {
      if ( v39 == &v34[-8].m128i_u64[1] )
      {
        v34[-9].m128i_i64[1] = (__int64)v38;
        v34[-8].m128i_i64[0] = *((_QWORD *)v33 + 3);
        v34[-8].m128i_i64[1] = *((_QWORD *)v33 + 4);
      }
      else
      {
        v34[-9].m128i_i64[1] = (__int64)v38;
        v40 = v34[-8].m128i_i64[1];
        v34[-8].m128i_i64[0] = *((_QWORD *)v33 + 3);
        v34[-8].m128i_i64[1] = *((_QWORD *)v33 + 4);
        if ( v39 )
        {
          *((_QWORD *)v33 + 2) = v39;
          *((_QWORD *)v33 + 4) = v40;
          goto LABEL_45;
        }
      }
      *((_QWORD *)v33 + 2) = v33 + 32;
      v39 = (unsigned __int64 *)(v33 + 32);
    }
LABEL_45:
    *((_QWORD *)v33 + 3) = 0;
    *(_BYTE *)v39 = 0;
    v41 = *((_BYTE **)v33 + 6);
    v42 = (unsigned __int64 *)v34[-7].m128i_i64[1];
    if ( v41 == v33 + 64 )
    {
      v73 = *((_QWORD *)v33 + 7);
      if ( v73 )
      {
        if ( v73 == 1 )
          *(_BYTE *)v42 = v33[64];
        else
          memcpy(v42, v41, v73);
        v73 = *((_QWORD *)v33 + 7);
        v42 = (unsigned __int64 *)v34[-7].m128i_i64[1];
      }
      v34[-6].m128i_i64[0] = v73;
      *((_BYTE *)v42 + v73) = 0;
      v42 = *((unsigned __int64 **)v33 + 6);
    }
    else
    {
      if ( v42 == &v34[-6].m128i_u64[1] )
      {
        v34[-7].m128i_i64[1] = (__int64)v41;
        v34[-6].m128i_i64[0] = *((_QWORD *)v33 + 7);
        v34[-6].m128i_i64[1] = *((_QWORD *)v33 + 8);
      }
      else
      {
        v34[-7].m128i_i64[1] = (__int64)v41;
        v43 = v34[-6].m128i_i64[1];
        v34[-6].m128i_i64[0] = *((_QWORD *)v33 + 7);
        v34[-6].m128i_i64[1] = *((_QWORD *)v33 + 8);
        if ( v42 )
        {
          *((_QWORD *)v33 + 6) = v42;
          *((_QWORD *)v33 + 8) = v43;
          goto LABEL_49;
        }
      }
      *((_QWORD *)v33 + 6) = v33 + 64;
      v42 = (unsigned __int64 *)(v33 + 64);
    }
LABEL_49:
    *((_QWORD *)v33 + 7) = 0;
    *(_BYTE *)v42 = 0;
    v44 = (void **)v34[-5].m128i_i64[1];
    v34[-4].m128i_i64[1] = 0;
    v45 = (void **)v34[-4].m128i_i64[0];
    *(__m128i *)((char *)&v34[-5] + 8) = 0;
    v34[-5].m128i_i64[1] = *((_QWORD *)v33 + 10);
    v46 = *((_QWORD *)v33 + 11);
    *((_QWORD *)v33 + 10) = 0;
    v47 = v34[-4].m128i_i64[0];
    v34[-4].m128i_i64[0] = v46;
    v48 = *((_QWORD *)v33 + 12);
    *((_QWORD *)v33 + 11) = v47;
    v49 = v34[-4].m128i_i64[1];
    v34[-4].m128i_i64[1] = v48;
    *((_QWORD *)v33 + 12) = v49;
    for ( j = v44; v45 != j; j += 4 )
    {
      while ( *j != j + 2 )
      {
        v81 = j;
        v79 = v45;
        v76 = v44;
        operator delete(*j);
        v45 = v79;
        v44 = v76;
        j = v81 + 4;
        if ( v81 + 4 == v79 )
          goto LABEL_52;
      }
    }
LABEL_52:
    if ( v44 )
      operator delete(v44);
    v51 = *((_BYTE **)v33 + 13);
    v52 = (__m128i *)v34[-3].m128i_i64[0];
    if ( v51 == v33 + 120 )
    {
      v70 = *((_QWORD *)v33 + 14);
      if ( v70 )
      {
        if ( v70 == 1 )
          v52->m128i_i8[0] = v33[120];
        else
          memcpy(v52, v51, v70);
        v70 = *((_QWORD *)v33 + 14);
        v52 = (__m128i *)v34[-3].m128i_i64[0];
      }
      v34[-3].m128i_i64[1] = v70;
      v52->m128i_i8[v70] = 0;
      v52 = *((__m128i **)v33 + 13);
    }
    else
    {
      if ( v52 == &v34[-2] )
      {
        v34[-3].m128i_i64[0] = (__int64)v51;
        v34[-3].m128i_i64[1] = *((_QWORD *)v33 + 14);
        v34[-2].m128i_i64[0] = *((_QWORD *)v33 + 15);
      }
      else
      {
        v34[-3].m128i_i64[0] = (__int64)v51;
        v53 = v34[-2].m128i_i64[0];
        v34[-3].m128i_i64[1] = *((_QWORD *)v33 + 14);
        v34[-2].m128i_i64[0] = *((_QWORD *)v33 + 15);
        if ( v52 )
        {
          *((_QWORD *)v33 + 13) = v52;
          *((_QWORD *)v33 + 15) = v53;
          goto LABEL_58;
        }
      }
      *((_QWORD *)v33 + 13) = v33 + 120;
      v52 = (__m128i *)(v33 + 120);
    }
LABEL_58:
    *((_QWORD *)v33 + 14) = 0;
    v52->m128i_i8[0] = 0;
    if ( v34[1].m128i_i8[0] )
    {
      if ( v33[168] )
      {
        sub_A0AAD0((__int64)v34[-1].m128i_i64, (_QWORD *)v33 + 17);
      }
      else
      {
        v54 = (__m128i *)v34[-1].m128i_i64[0];
        v34[1].m128i_i8[0] = 0;
        if ( v54 != v34 )
          operator delete(v54);
      }
    }
    else if ( v33[168] )
    {
      v34[-1].m128i_i64[0] = (__int64)v34;
      v69 = *((_BYTE **)v33 + 17);
      if ( v69 == v33 + 152 )
      {
        *v34 = _mm_loadu_si128((const __m128i *)(v33 + 152));
      }
      else
      {
        v34[-1].m128i_i64[0] = (__int64)v69;
        v34->m128i_i64[0] = *((_QWORD *)v33 + 19);
      }
      v34[-1].m128i_i64[1] = *((_QWORD *)v33 + 18);
      *((_QWORD *)v33 + 17) = v33 + 152;
      *((_QWORD *)v33 + 18) = 0;
      v33[152] = 0;
      v34[1].m128i_i8[0] = 1;
    }
    v33 += 192;
    v34 += 12;
    --v32;
  }
  while ( v32 );
  v30 = a1[1];
  v31 = v30 - v6;
LABEL_64:
  v55 = v31 + v9;
  if ( v55 != v30 )
  {
    v56 = v55;
    do
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v56 + 184) )
        {
          v57 = *(void **)(v56 + 152);
          if ( v57 != (void *)(v56 + 168) )
            operator delete(v57);
        }
        v58 = *(void **)(v56 + 120);
        if ( v58 != (void *)(v56 + 136) )
          operator delete(v58);
        v59 = *(void ***)(v56 + 104);
        v60 = *(void ***)(v56 + 96);
        if ( v59 != v60 )
        {
          do
          {
            while ( *v60 != v60 + 2 )
            {
              operator delete(*v60);
              v60 += 4;
              if ( v59 == v60 )
                goto LABEL_74;
            }
            v60 += 4;
          }
          while ( v59 != v60 );
LABEL_74:
          v60 = *(void ***)(v56 + 96);
        }
        if ( v60 )
          operator delete(v60);
        v61 = *(void **)(v56 + 64);
        if ( v61 != (void *)(v56 + 80) )
          operator delete(v61);
        v62 = *(void **)(v56 + 32);
        if ( v62 != (void *)(v56 + 48) )
          operator delete(v62);
        if ( *(_QWORD *)v56 == v56 + 16 )
          break;
        operator delete(*(void **)v56);
        v56 += 192;
        if ( v56 == v30 )
        {
          a1[1] = v55;
          return a1;
        }
      }
      v56 += 192;
    }
    while ( v56 != v30 );
    a1[1] = v55;
  }
  return a1;
}
