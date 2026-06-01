void __fastcall sub_1FFC970(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // r9
  const void *v8; // rsi
  signed __int64 v9; // rax
  __int64 v10; // r10
  void **v11; // r8
  __int64 v12; // rcx
  void **v13; // r13
  size_t v14; // r15
  void **v15; // r12
  __int64 v16; // rbp
  _BYTE *v17; // rdi
  void *v18; // rax
  __int64 v19; // r14
  size_t v20; // rbx
  void **v21; // rdi
  size_t v22; // rdx
  __int64 v23; // rbx
  void **v24; // r10
  __int64 v25; // rsi
  size_t v26; // r14
  __int64 v27; // rbp
  __int64 v28; // r11
  __int64 v29; // rcx
  _BYTE *v30; // r15
  __int64 i; // r13
  __int64 v32; // rax
  size_t v33; // rdx
  size_t v34; // r12
  _BYTE *v35; // r9
  _BYTE *v36; // rdi
  signed __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rbx
  _BYTE *v40; // rdi
  _BYTE *v41; // rdi
  __int64 v42; // rdx
  void **v43; // r14
  __int64 v44; // r12
  _BYTE *v45; // rdi
  __int64 v46; // rbp
  _BYTE *v47; // rsi
  __int64 v48; // rdx
  size_t v49; // rdx
  __m128i v50; // [rsp+0h] [rbp-B8h] BYREF
  void **v51; // [rsp+10h] [rbp-A8h]
  __int64 v52; // [rsp+18h] [rbp-A0h]
  __int64 v53; // [rsp+20h] [rbp-98h]
  void **v54; // [rsp+28h] [rbp-90h]
  __int64 v55; // [rsp+30h] [rbp-88h]
  __int64 v56; // [rsp+38h] [rbp-80h]
  __int64 v57; // [rsp+40h] [rbp-78h]
  __int64 v58; // [rsp+48h] [rbp-70h]
  __int64 v59; // [rsp+50h] [rbp-68h]
  __int64 v60; // [rsp+58h] [rbp-60h]
  void *v61; // [rsp+60h] [rbp-58h] BYREF
  size_t v62; // [rsp+68h] [rbp-50h]
  _OWORD v63[4]; // [rsp+70h] [rbp-48h] BYREF

  v4 = 32 * a2;
  v5 = a1;
  v6 = a2;
  v60 = a3;
  v53 = a2;
  v59 = a4;
  v58 = (a3 - 1) / 2;
  if ( a2 >= v58 )
  {
    v23 = a2;
    goto LABEL_25;
  }
  v7 = a1;
  for ( v50.m128i_i64[0] = v4 + a1 + 16; ; v50.m128i_i64[0] = (__int64)(v15 + 2) )
  {
    v10 = 2 * (v6 + 1);
    v19 = (v6 + 1) << 6;
    v12 = v10 - 1;
    v11 = (void **)(v7 + v19);
    v20 = *(_QWORD *)(v7 + v19 + 8);
    v21 = *(void ***)(v7 + v19);
    v4 = 32 * (v10 - 1);
    v15 = (void **)(v7 + v4);
    v51 = v21;
    v14 = *(_QWORD *)(v7 + v4 + 8);
    v13 = *(void ***)(v7 + v4);
    v22 = v14;
    if ( v20 <= v14 )
      v22 = v20;
    if ( v22 )
    {
      v8 = *(const void **)(v7 + v4);
      v57 = v10 - 1;
      v56 = 32 * (v10 - 1);
      v55 = v7;
      v54 = (void **)(v7 + v19);
      v52 = 2 * (v6 + 1);
      LODWORD(v9) = memcmp(v21, v8, v22);
      v10 = v52;
      v11 = v54;
      v7 = v55;
      v4 = v56;
      v12 = v57;
      if ( (_DWORD)v9 )
        goto LABEL_4;
    }
    v9 = v20 - v14;
    if ( (__int64)(v20 - v14) > 0x7FFFFFFF )
      goto LABEL_5;
    if ( v9 >= (__int64)0xFFFFFFFF80000000LL )
    {
LABEL_4:
      if ( (int)v9 < 0 )
        goto LABEL_6;
LABEL_5:
      v13 = v51;
      v14 = v20;
      v15 = v11;
      v4 = (v6 + 1) << 6;
      v12 = v10;
    }
LABEL_6:
    v16 = v7 + 32 * v6;
    v17 = *(_BYTE **)v16;
    if ( v15 + 2 == v13 )
    {
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          *v17 = *((_BYTE *)v15 + 16);
          v14 = (size_t)v15[1];
          v17 = *(_BYTE **)v16;
        }
        else
        {
          v52 = v12;
          v51 = (void **)v4;
          v50.m128i_i64[0] = v7;
          memcpy(v17, v13, v14);
          v14 = (size_t)v15[1];
          v17 = *(_BYTE **)v16;
          v12 = v52;
          v4 = (__int64)v51;
          v7 = v50.m128i_i64[0];
        }
      }
      *(_QWORD *)(v16 + 8) = v14;
      v17[v14] = 0;
      v17 = *v15;
    }
    else
    {
      if ( v17 == (_BYTE *)v50.m128i_i64[0] )
      {
        *(_QWORD *)v16 = v13;
        *(_QWORD *)(v16 + 8) = v15[1];
        *(_QWORD *)(v16 + 16) = v15[2];
      }
      else
      {
        *(_QWORD *)v16 = v13;
        v18 = *(void **)(v16 + 16);
        *(_QWORD *)(v16 + 8) = v15[1];
        *(_QWORD *)(v16 + 16) = v15[2];
        if ( v17 )
        {
          *v15 = v17;
          v15[2] = v18;
          goto LABEL_10;
        }
      }
      *v15 = v15 + 2;
      v17 = v15 + 2;
    }
LABEL_10:
    v15[1] = nullptr;
    v6 = v12;
    *v17 = 0;
    if ( v12 >= v58 )
      break;
  }
  v23 = v12;
  v5 = v7;
LABEL_25:
  if ( (v60 & 1) == 0 && (v60 - 2) / 2 == v23 )
  {
    v23 = 2 * v23 + 1;
    v44 = v5 + v4;
    v45 = *(_BYTE **)(v5 + v4);
    v46 = v5 + 32 * v23;
    v47 = *(_BYTE **)v46;
    if ( *(_QWORD *)v46 == v46 + 16 )
    {
      v49 = *(_QWORD *)(v46 + 8);
      if ( v49 )
      {
        if ( v49 == 1 )
          *v45 = *(_BYTE *)(v46 + 16);
        else
          memcpy(v45, v47, v49);
        v49 = *(_QWORD *)(v46 + 8);
        v45 = *(_BYTE **)v44;
      }
      *(_QWORD *)(v44 + 8) = v49;
      v45[v49] = 0;
      v45 = *(_BYTE **)v46;
      goto LABEL_73;
    }
    if ( v45 == (_BYTE *)(v44 + 16) )
    {
      *(_QWORD *)v44 = v47;
      *(_QWORD *)(v44 + 8) = *(_QWORD *)(v46 + 8);
      *(_QWORD *)(v44 + 16) = *(_QWORD *)(v46 + 16);
    }
    else
    {
      *(_QWORD *)v44 = v47;
      v48 = *(_QWORD *)(v44 + 16);
      *(_QWORD *)(v44 + 8) = *(_QWORD *)(v46 + 8);
      *(_QWORD *)(v44 + 16) = *(_QWORD *)(v46 + 16);
      if ( v45 )
      {
        *(_QWORD *)v46 = v45;
        *(_QWORD *)(v46 + 16) = v48;
LABEL_73:
        *(_QWORD *)(v46 + 8) = 0;
        v4 = 32 * v23;
        *v45 = 0;
        goto LABEL_27;
      }
    }
    *(_QWORD *)v46 = v46 + 16;
    v45 = (_BYTE *)(v46 + 16);
    goto LABEL_73;
  }
LABEL_27:
  v54 = &v61;
  v61 = v63;
  v24 = *(void ***)v59;
  v25 = v59;
  if ( *(_QWORD *)v59 == v59 + 16 )
  {
    v24 = (void **)v63;
    v50 = _mm_loadu_si128((const __m128i *)(v59 + 16));
    v63[0] = v50;
  }
  else
  {
    v61 = *(void **)v59;
    *(_QWORD *)&v63[0] = *(_QWORD *)(v59 + 16);
  }
  *(_QWORD *)v59 = v59 + 16;
  v26 = *(_QWORD *)(v25 + 8);
  v27 = v5 + v4;
  *(_QWORD *)(v25 + 8) = 0;
  v28 = v5 + v4 + 16;
  v62 = v26;
  *(_BYTE *)(v25 + 16) = 0;
  if ( v23 > v53 )
  {
    v29 = v5;
    v30 = (_BYTE *)v28;
    for ( i = (v23 - 1) / 2; ; i = (i - 1) / 2 )
    {
      v33 = v26;
      v27 = v29 + 32 * i;
      v34 = *(_QWORD *)(v27 + 8);
      v35 = *(_BYTE **)v27;
      if ( v34 <= v26 )
        v33 = *(_QWORD *)(v27 + 8);
      if ( v33 )
      {
        v36 = *(_BYTE **)v27;
        v52 = v29;
        v51 = v24;
        v50.m128i_i64[0] = (__int64)v35;
        LODWORD(v37) = memcmp(v36, v24, v33);
        v35 = (_BYTE *)v50.m128i_i64[0];
        v24 = v51;
        v29 = v52;
        if ( (_DWORD)v37 )
          goto LABEL_42;
      }
      v37 = v34 - v26;
      if ( (__int64)(v34 - v26) > 0x7FFFFFFF )
        goto LABEL_50;
      if ( v37 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_42:
        if ( (int)v37 >= 0 )
        {
LABEL_50:
          v28 = (__int64)v30;
          v27 = v29 + 32 * v23;
          break;
        }
      }
      v38 = v27 + 16;
      v39 = v29 + 32 * v23;
      v40 = *(_BYTE **)v39;
      if ( v35 == (_BYTE *)(v27 + 16) )
      {
        if ( v34 )
        {
          if ( v34 == 1 )
          {
            *v40 = *(_BYTE *)(v27 + 16);
            v34 = *(_QWORD *)(v27 + 8);
            v40 = *(_BYTE **)v39;
          }
          else
          {
            v51 = (void **)v29;
            v50.m128i_i64[0] = v27 + 16;
            memcpy(v40, (const void *)(v27 + 16), v34);
            v34 = *(_QWORD *)(v27 + 8);
            v40 = *(_BYTE **)v39;
            v29 = (__int64)v51;
            v38 = v27 + 16;
          }
        }
        *(_QWORD *)(v39 + 8) = v34;
        v40[v34] = 0;
        v40 = *(_BYTE **)v27;
      }
      else
      {
        if ( v40 == v30 )
        {
          *(_QWORD *)v39 = v35;
          *(_QWORD *)(v39 + 8) = *(_QWORD *)(v27 + 8);
          *(_QWORD *)(v39 + 16) = *(_QWORD *)(v27 + 16);
        }
        else
        {
          *(_QWORD *)v39 = v35;
          v32 = *(_QWORD *)(v39 + 16);
          *(_QWORD *)(v39 + 8) = *(_QWORD *)(v27 + 8);
          *(_QWORD *)(v39 + 16) = *(_QWORD *)(v27 + 16);
          if ( v40 )
          {
            *(_QWORD *)v27 = v40;
            *(_QWORD *)(v27 + 16) = v32;
            goto LABEL_34;
          }
        }
        *(_QWORD *)v27 = v38;
        v40 = (_BYTE *)(v27 + 16);
      }
LABEL_34:
      *(_QWORD *)(v27 + 8) = 0;
      *v40 = 0;
      v26 = v62;
      v24 = (void **)v61;
      if ( v53 >= i )
      {
        v28 = v38;
        break;
      }
      v23 = i;
      v30 = (_BYTE *)v38;
    }
  }
  v41 = *(_BYTE **)v27;
  if ( v24 == v54 + 2 )
  {
    if ( v26 )
    {
      if ( v26 == 1 )
        *v41 = v63[0];
      else
        memcpy(v41, v24, v26);
      v26 = v62;
      v41 = *(_BYTE **)v27;
    }
    *(_QWORD *)(v27 + 8) = v26;
    v41[v26] = 0;
    v41 = v61;
  }
  else
  {
    if ( v41 == (_BYTE *)v28 )
    {
      v50.m128i_i64[0] = *(_QWORD *)&v63[0];
      *(_QWORD *)v27 = v24;
      *(__m128 *)(v27 + 8) = _mm_loadh_ps((const double *)v50.m128i_i64);
    }
    else
    {
      v50.m128i_i64[0] = *(_QWORD *)&v63[0];
      v42 = *(_QWORD *)(v27 + 16);
      *(_QWORD *)v27 = v24;
      *(__m128 *)(v27 + 8) = _mm_loadh_ps((const double *)v50.m128i_i64);
      if ( v41 )
      {
        v61 = v41;
        *(_QWORD *)&v63[0] = v42;
        goto LABEL_55;
      }
    }
    v41 = v54 + 2;
    v61 = v54 + 2;
  }
LABEL_55:
  v62 = 0;
  v43 = v54;
  *v41 = 0;
  if ( v61 != v43 + 2 )
    operator delete(v61);
}
