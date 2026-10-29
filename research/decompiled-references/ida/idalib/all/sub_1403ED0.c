void __fastcall sub_1403ED0(__int64 a1, char *a2, unsigned __int8 (__fastcall *a3)(const __m128i *, __int64))
{
  const __m128i *v3; // r15
  const __m128i *v6; // r13
  bool v7; // zf
  const __m128i *v8; // rax
  __int64 v9; // rax
  __m128i *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r13
  char *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  _BYTE *v18; // rax
  char *v19; // rsi
  char *v20; // rdi
  __int64 v21; // rdx
  _BYTE *v22; // rax
  __int64 v23; // r9
  char *v24; // rdi
  size_t v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  size_t v29; // rdx
  __int64 v30; // rax
  __m128i *v31; // rdi
  __int64 v32; // rax
  __m128i *v33; // r14
  __m128i *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // r13
  unsigned __int64 *v39; // rax
  __m128i *v40; // rdi
  __int64 v41; // rdx
  __m128i *v42; // r13
  unsigned __int64 *v43; // rsi
  __m128i *v44; // rdi
  size_t v45; // rdx
  size_t v46; // rdx
  __int64 v47; // rdx
  __m128i *v48; // rdi
  char *v49; // [rsp+0h] [rbp-A0h]
  __int64 v51; // [rsp+10h] [rbp-90h]
  void *v52; // [rsp+18h] [rbp-88h] BYREF
  __int64 v53; // [rsp+20h] [rbp-80h]
  __m128i v54; // [rsp+28h] [rbp-78h] BYREF
  void *v55; // [rsp+38h] [rbp-68h] BYREF
  __int64 v56; // [rsp+40h] [rbp-60h]
  __m128i v57; // [rsp+48h] [rbp-58h] BYREF
  __int64 v58; // [rsp+58h] [rbp-48h]

  if ( (char *)a1 == a2 || a2 == (char *)(a1 + 72) )
    return;
  v3 = (const __m128i *)(a1 + 88);
  do
  {
    v6 = v3 - 1;
    v7 = a3(v3 - 1, a1) == 0;
    v52 = &v54;
    v8 = (const __m128i *)v3[-1].m128i_i64[0];
    if ( !v7 )
    {
      if ( v8 == v3 )
      {
        v54 = _mm_loadu_si128(v3);
      }
      else
      {
        v52 = (void *)v3[-1].m128i_i64[0];
        v54.m128i_i64[0] = v3->m128i_i64[0];
      }
      v9 = v3[-1].m128i_i64[1];
      v10 = (__m128i *)v3[1].m128i_i64[0];
      v3[-1].m128i_i64[0] = (__int64)v3;
      v3[-1].m128i_i64[1] = 0;
      v53 = v9;
      v55 = &v57;
      v3->m128i_i8[0] = 0;
      if ( v10 == &v3[2] )
      {
        v57 = _mm_loadu_si128(v3 + 2);
      }
      else
      {
        v55 = v10;
        v57.m128i_i64[0] = v3[2].m128i_i64[0];
      }
      v3[1].m128i_i64[0] = (__int64)v3[2].m128i_i64;
      v11 = v3[3].m128i_i64[0];
      v12 = (__int64)v6->m128i_i64 - a1;
      v13 = v3[1].m128i_i64[1];
      v3[2].m128i_i8[0] = 0;
      v58 = v11;
      v56 = v13;
      v3[1].m128i_i64[1] = 0;
      v14 = 0x8E38E38E38E38E39LL * (((__int64)v6->m128i_i64 - a1) >> 3);
      v49 = &v3[3].m128i_i8[8];
      if ( v12 <= 0 )
      {
LABEL_33:
        sub_A0AAD0(a1, &v52);
        sub_A0AAD0(a1 + 32, &v55);
        v31 = (__m128i *)v55;
        *(_QWORD *)(a1 + 64) = v58;
        if ( v31 != &v57 )
          operator delete(v31);
        if ( v52 != &v54 )
          operator delete(v52);
        goto LABEL_37;
      }
      v15 = &v3[-5].m128i_i8[8];
      while ( 1 )
      {
        v23 = *((_QWORD *)v15 - 2);
        v24 = *((char **)v15 + 7);
        if ( v15 == (char *)v23 )
        {
          v25 = *((_QWORD *)v15 - 1);
          if ( v25 )
          {
            if ( v25 == 1 )
            {
              *v24 = *v15;
            }
            else
            {
              v51 = *((_QWORD *)v15 - 2);
              memcpy(v24, v15, v25);
              v23 = v51;
            }
          }
          v26 = *(_QWORD *)(v23 - 8);
          v27 = *(_QWORD *)(v23 + 56);
          *(_QWORD *)(v23 + 64) = v26;
          *(_BYTE *)(v27 + v26) = 0;
        }
        else
        {
          if ( v24 == v15 + 72 )
          {
            v30 = *((_QWORD *)v15 - 1);
            *((_QWORD *)v15 + 7) = v23;
            *((_QWORD *)v15 + 8) = v30;
            *((_QWORD *)v15 + 9) = *(_QWORD *)v15;
          }
          else
          {
            v16 = *((_QWORD *)v15 - 1);
            v17 = *((_QWORD *)v15 + 9);
            *((_QWORD *)v15 + 7) = v23;
            *((_QWORD *)v15 + 8) = v16;
            *((_QWORD *)v15 + 9) = *(_QWORD *)v15;
            if ( v24 )
            {
              *((_QWORD *)v15 - 2) = v24;
              *(_QWORD *)v15 = v17;
              goto LABEL_14;
            }
          }
          *((_QWORD *)v15 - 2) = v15;
        }
LABEL_14:
        v18 = *((_BYTE **)v15 - 2);
        *((_QWORD *)v15 - 1) = 0;
        *v18 = 0;
        v19 = *((char **)v15 + 2);
        v20 = *((char **)v15 + 11);
        if ( v19 == v15 + 32 )
        {
          v29 = *((_QWORD *)v15 + 3);
          if ( v29 )
          {
            if ( v29 == 1 )
              *v20 = v15[32];
            else
              memcpy(v20, v19, v29);
            v20 = *((char **)v15 + 11);
            v29 = *((_QWORD *)v15 + 3);
          }
          *((_QWORD *)v15 + 12) = v29;
          v20[v29] = 0;
          goto LABEL_18;
        }
        if ( v20 == v15 + 104 )
        {
          v28 = *((_QWORD *)v15 + 3);
          *((_QWORD *)v15 + 11) = v19;
          *((_QWORD *)v15 + 12) = v28;
          *((_QWORD *)v15 + 13) = *((_QWORD *)v15 + 4);
LABEL_25:
          *((_QWORD *)v15 + 2) = v15 + 32;
          goto LABEL_18;
        }
        *((_QWORD *)v15 + 11) = v19;
        v21 = *((_QWORD *)v15 + 13);
        *((_QWORD *)v15 + 12) = *((_QWORD *)v15 + 3);
        *((_QWORD *)v15 + 13) = *((_QWORD *)v15 + 4);
        if ( !v20 )
          goto LABEL_25;
        *((_QWORD *)v15 + 2) = v20;
        *((_QWORD *)v15 + 4) = v21;
LABEL_18:
        v22 = *((_BYTE **)v15 + 2);
        *((_QWORD *)v15 + 3) = 0;
        v15 -= 72;
        *v22 = 0;
        *((_QWORD *)v15 + 24) = *((_QWORD *)v15 + 15);
        if ( !--v14 )
          goto LABEL_33;
      }
    }
    if ( v8 == v3 )
    {
      v54 = _mm_loadu_si128(v3);
    }
    else
    {
      v52 = (void *)v3[-1].m128i_i64[0];
      v54.m128i_i64[0] = v3->m128i_i64[0];
    }
    v32 = v3[-1].m128i_i64[1];
    v33 = (__m128i *)&v3[2];
    v3[-1].m128i_i64[0] = (__int64)v3;
    v3[-1].m128i_i64[1] = 0;
    v53 = v32;
    v55 = &v57;
    v34 = (__m128i *)v3[1].m128i_i64[0];
    v3->m128i_i8[0] = 0;
    if ( v34 == &v3[2] )
    {
      v57 = _mm_loadu_si128(v3 + 2);
    }
    else
    {
      v55 = v34;
      v57.m128i_i64[0] = v3[2].m128i_i64[0];
    }
    v35 = v3[1].m128i_i64[1];
    v3[1].m128i_i64[0] = (__int64)v33;
    v3[1].m128i_i64[1] = 0;
    v56 = v35;
    v36 = v3[3].m128i_i64[0];
    v3[2].m128i_i8[0] = 0;
    v58 = v36;
    while ( 1 )
    {
      v42 = v33 - 3;
      if ( !a3((const __m128i *)&v52, (__int64)&v33[-8].m128i_i64[1]) )
        break;
      v43 = (unsigned __int64 *)v33[-8].m128i_i64[1];
      v44 = (__m128i *)v33[-3].m128i_i64[0];
      if ( v43 == &v33[-7].m128i_u64[1] )
      {
        v45 = v33[-7].m128i_u64[0];
        if ( v45 )
        {
          if ( v45 == 1 )
            v44->m128i_i8[0] = v33[-7].m128i_i8[8];
          else
            memcpy(v44, v43, v45);
          v45 = v33[-7].m128i_u64[0];
          v44 = (__m128i *)v33[-3].m128i_i64[0];
        }
        v33[-3].m128i_i64[1] = v45;
        v44->m128i_i8[v45] = 0;
        v44 = (__m128i *)v33[-8].m128i_i64[1];
      }
      else
      {
        if ( v44 == &v33[-2] )
        {
          v47 = v33[-7].m128i_i64[0];
          v33[-3].m128i_i64[0] = (__int64)v43;
          v33[-3].m128i_i64[1] = v47;
          v33[-2].m128i_i64[0] = v33[-7].m128i_i64[1];
        }
        else
        {
          v33[-3].m128i_i64[0] = (__int64)v43;
          v37 = v33[-2].m128i_i64[0];
          v33[-3].m128i_i64[1] = v33[-7].m128i_i64[0];
          v33[-2].m128i_i64[0] = v33[-7].m128i_i64[1];
          if ( v44 )
          {
            v33[-8].m128i_i64[1] = (__int64)v44;
            v33[-7].m128i_i64[1] = v37;
            goto LABEL_47;
          }
        }
        v33[-8].m128i_i64[1] = (__int64)&v33[-7].m128i_i64[1];
        v44 = (__m128i *)((char *)v33 - 104);
      }
LABEL_47:
      v33[-7].m128i_i64[0] = 0;
      v38 = &v33[-5].m128i_i64[1];
      v44->m128i_i8[0] = 0;
      v39 = (unsigned __int64 *)v33[-6].m128i_i64[1];
      v40 = (__m128i *)v33[-1].m128i_i64[0];
      if ( v39 == &v33[-5].m128i_u64[1] )
      {
        v46 = v33[-5].m128i_u64[0];
        if ( v46 )
        {
          if ( v46 == 1 )
            v40->m128i_i8[0] = *(_BYTE *)v38;
          else
            memcpy(v40, &v33[-5].m128i_u64[1], v46);
          v46 = v33[-5].m128i_u64[0];
          v40 = (__m128i *)v38[7];
        }
        v38[8] = v46;
        v40->m128i_i8[v46] = 0;
        v40 = (__m128i *)v33[-6].m128i_i64[1];
      }
      else
      {
        if ( v33 == v40 )
        {
          v38[7] = (__int64)v39;
          v33[-1].m128i_i64[1] = v33[-5].m128i_i64[0];
          v33->m128i_i64[0] = v33[-5].m128i_i64[1];
        }
        else
        {
          v38[7] = (__int64)v39;
          v41 = v33->m128i_i64[0];
          v33[-1].m128i_i64[1] = v33[-5].m128i_i64[0];
          v33->m128i_i64[0] = v33[-5].m128i_i64[1];
          if ( v40 )
          {
            v33[-6].m128i_i64[1] = (__int64)v40;
            *v38 = v41;
            goto LABEL_51;
          }
        }
        v33[-6].m128i_i64[1] = (__int64)&v33[-5].m128i_i64[1];
        v40 = (__m128i *)((char *)v33 - 72);
      }
LABEL_51:
      v33[-5].m128i_i64[0] = 0;
      v33 = (__m128i *)((char *)v33 - 72);
      v40->m128i_i8[0] = 0;
      v38[11] = v38[2];
    }
    sub_A0AAD0((__int64)v33[-3].m128i_i64, &v52);
    sub_A0AAD0((__int64)v42[2].m128i_i64, &v55);
    v48 = (__m128i *)v55;
    v42[4].m128i_i64[0] = v58;
    if ( v48 != &v57 )
      operator delete(v48);
    if ( v52 != &v54 )
      operator delete(v52);
    v49 = &v3[3].m128i_i8[8];
LABEL_37:
    v3 = (const __m128i *)((char *)v3 + 72);
  }
  while ( a2 != v49 );
}
