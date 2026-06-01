unsigned __int64 __fastcall sub_71E110(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r15
  const __m128i *i; // rbp
  __m128i v9; // xmm1
  __m128i *v10; // rdx
  __m128i v11; // xmm0
  _DWORD *v12; // r8
  const __m128i *v13; // rcx
  unsigned __int32 v14; // edx
  char v15; // si
  __int64 v16; // rdi
  char v17; // si
  _DWORD *v18; // rdi
  _DWORD *v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 result; // rax
  __int64 v22; // r15
  unsigned __int64 v23; // r12
  size_t v24; // rbp
  _QWORD *v25; // r14
  size_t v26; // rdx
  signed __int64 v27; // rax
  _QWORD *v28; // rax
  _BYTE *v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  _DWORD *v36; // rdi
  _DWORD *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rsi
  _BYTE *v41; // rax
  int v42; // edx
  _DWORD *v43; // rdi
  _DWORD *v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rsi
  unsigned __int64 v50; // rcx
  char *v51; // rax
  char *v52; // rdi
  unsigned int v53; // edx
  unsigned int v54; // eax
  __int64 v55; // rsi
  _QWORD *v57; // [rsp+8h] [rbp-90h]
  __int64 v58; // [rsp+10h] [rbp-88h]
  __int64 v59; // [rsp+10h] [rbp-88h]
  _QWORD *v61; // [rsp+20h] [rbp-78h]
  _QWORD v62[2]; // [rsp+30h] [rbp-68h] BYREF
  void *v63; // [rsp+40h] [rbp-58h] BYREF
  __int64 v64; // [rsp+48h] [rbp-50h]
  _QWORD v65[9]; // [rsp+50h] [rbp-48h] BYREF

  v3 = a2 - a1;
  v5 = a2;
  if ( (__int64)(a2 - a1) > 32 )
  {
    v58 = a2 - a1;
    v6 = v3 >> 5;
    v7 = ((v3 >> 5) - 2) / 2;
    for ( i = (const __m128i *)(a1 + 32 * v7 + 16); ; i -= 2 )
    {
      v10 = (__m128i *)i[-1].m128i_i64[0];
      v11 = _mm_loadl_epi64((const __m128i *)((char *)i - 8));
      if ( v10 == i )
        break;
      v9 = _mm_loadl_epi64(i);
      i[-1].m128i_i64[0] = (__int64)i;
      i[-1].m128i_i64[1] = 0;
      i->m128i_i8[0] = 0;
      v62[0] = _mm_unpacklo_epi64(v11, v9).m128i_i64[1];
      if ( v10 != (__m128i *)v62 )
      {
        v63 = v10;
        v65[0] = v9.m128i_i64[0];
        goto LABEL_5;
      }
      v63 = v65;
      v18 = v65;
      v19 = v62;
      v14 = v11.m128i_i32[0] + 1;
      v17 = v11.m128i_i8[0] + 1;
      if ( (unsigned int)(v11.m128i_i32[0] + 1) >= 8 )
        goto LABEL_41;
LABEL_15:
      v20 = 0;
      if ( (v17 & 4) != 0 )
      {
        *v18 = *v19;
        v20 = 4;
        if ( (v17 & 2) == 0 )
        {
LABEL_17:
          if ( (v17 & 1) == 0 )
            goto LABEL_5;
LABEL_18:
          *((_BYTE *)v18 + v20) = *((_BYTE *)v19 + v20);
          goto LABEL_5;
        }
      }
      else if ( (v17 & 2) == 0 )
      {
        goto LABEL_17;
      }
      *(_WORD *)((char *)v18 + v20) = *(_WORD *)((char *)v19 + v20);
      v20 += 2;
      if ( (v17 & 1) != 0 )
        goto LABEL_18;
LABEL_5:
      LOBYTE(v62[0]) = 0;
      v64 = v11.m128i_i64[0];
      sub_6AFB70(a1, v7, v6, &v63);
      if ( v63 != v65 )
        operator delete(v63, v65[0] + 1LL);
      if ( !v7 )
      {
        v3 = v58;
        v5 = a2;
        goto LABEL_20;
      }
      --v7;
    }
    v12 = v62;
    v13 = i;
    v14 = v11.m128i_i32[0] + 1;
    v15 = v11.m128i_i8[0] + 1;
    if ( (unsigned int)(v11.m128i_i32[0] + 1) >= 8 )
    {
      LODWORD(v33) = 0;
      do
      {
        v34 = (unsigned int)v33;
        v33 = (unsigned int)(v33 + 8);
        *(_QWORD *)((char *)v62 + v34) = *(__int64 *)((char *)i->m128i_i64 + v34);
      }
      while ( (unsigned int)v33 < (v14 & 0xFFFFFFF8) );
      v12 = (_DWORD *)((char *)v62 + v33);
      v13 = (const __m128i *)((char *)i + v33);
    }
    v16 = 0;
    if ( (v15 & 4) != 0 )
    {
      *v12 = v13->m128i_i32[0];
      v16 = 2;
      if ( (v15 & 2) == 0 )
      {
LABEL_13:
        if ( ((v11.m128i_i8[0] + 1) & 1) == 0 )
          goto LABEL_14;
        goto LABEL_49;
      }
    }
    else if ( (v15 & 2) == 0 )
    {
      goto LABEL_13;
    }
    *(_WORD *)((char *)v12 + v16 * 2) = v13->m128i_i16[v16];
    ++v16;
    if ( ((v11.m128i_i8[0] + 1) & 1) == 0 )
    {
LABEL_14:
      i[-1].m128i_i64[1] = 0;
      v17 = v11.m128i_i8[0] + 1;
      v18 = v65;
      v19 = v62;
      i->m128i_i8[0] = 0;
      v63 = v65;
      if ( v14 < 8 )
        goto LABEL_15;
LABEL_41:
      v30 = v14 & 0xFFFFFFF8;
      LODWORD(v31) = 0;
      do
      {
        v32 = (unsigned int)v31;
        v31 = (unsigned int)(v31 + 8);
        *(_QWORD *)((char *)v65 + v32) = *(_QWORD *)((char *)v62 + v32);
      }
      while ( (unsigned int)v31 < v30 );
      v18 = (_DWORD *)((char *)v65 + v31);
      v19 = (_DWORD *)((char *)v62 + v31);
      goto LABEL_15;
    }
LABEL_49:
    *((_BYTE *)v12 + v16 * 2) = v13->m128i_i8[v16 * 2];
    goto LABEL_14;
  }
LABEL_20:
  result = a3;
  v59 = v3 >> 5;
  if ( v5 < a3 )
  {
    v57 = (_QWORD *)(a1 + 16);
    v22 = a1;
    do
    {
      v23 = *(_QWORD *)(v5 + 8);
      v24 = *(_QWORD *)(v22 + 8);
      v25 = *(_QWORD **)v5;
      v26 = v24;
      if ( v23 <= v24 )
        v26 = *(_QWORD *)(v5 + 8);
      if ( !v26 || (LODWORD(v27) = memcmp(*(const void **)v5, *(const void **)v22, v26), !(_DWORD)v27) )
      {
        v27 = v23 - v24;
        if ( (__int64)(v23 - v24) >= 0x80000000LL )
          goto LABEL_22;
        if ( v27 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
          goto LABEL_30;
      }
      if ( (int)v27 < 0 )
      {
LABEL_30:
        v28 = (_QWORD *)(v5 + 16);
        v61 = v62;
        if ( v25 != (_QWORD *)(v5 + 16) )
        {
          v61 = v25;
          v62[0] = *(_QWORD *)(v5 + 16);
          goto LABEL_32;
        }
        v42 = v23 + 1;
        v43 = v62;
        v44 = (_DWORD *)(v5 + 16);
        if ( (unsigned int)(v23 + 1) >= 8 )
        {
          LODWORD(v48) = 0;
          do
          {
            v49 = (unsigned int)v48;
            v48 = (unsigned int)(v48 + 8);
            *(_QWORD *)((char *)v62 + v49) = *(_QWORD *)((char *)v28 + v49);
          }
          while ( (unsigned int)v48 < (v42 & 0xFFFFFFF8) );
          v43 = (_DWORD *)((char *)v62 + v48);
          v44 = (_DWORD *)((char *)v28 + v48);
        }
        v45 = 0;
        if ( (v42 & 4) != 0 )
        {
          *v43 = *v44;
          v45 = 4;
          if ( (v42 & 2) != 0 )
            goto LABEL_79;
LABEL_73:
          if ( (v42 & 1) != 0 )
LABEL_74:
            *((_BYTE *)v43 + v45) = *((_BYTE *)v44 + v45);
        }
        else
        {
          if ( (v42 & 2) == 0 )
            goto LABEL_73;
LABEL_79:
          *(_WORD *)((char *)v43 + v45) = *(_WORD *)((char *)v44 + v45);
          v45 += 2;
          if ( (v42 & 1) != 0 )
            goto LABEL_74;
        }
LABEL_32:
        *(_QWORD *)v5 = v28;
        *(_QWORD *)(v5 + 8) = 0;
        *(_BYTE *)(v5 + 16) = 0;
        v29 = v57;
        if ( *(_QWORD **)v22 != v57 )
        {
          *(_QWORD *)v5 = *(_QWORD *)v22;
          *(_QWORD *)(v5 + 8) = *(_QWORD *)(v22 + 8);
          *(_QWORD *)(v5 + 16) = *(_QWORD *)(v22 + 16);
          *(_QWORD *)v22 = v57;
          goto LABEL_34;
        }
        v39 = *(_QWORD *)(v22 + 8);
        v40 = v39;
        if ( v22 != v5 )
        {
          if ( v39 )
          {
            if ( v39 == 1 )
            {
              *(_BYTE *)(v5 + 16) = *(_BYTE *)(v22 + 16);
              v39 = *(_QWORD *)(v22 + 8);
            }
            else
            {
              if ( (unsigned int)v39 >= 8 )
              {
                *v28 = *v57;
                *(_QWORD *)((char *)v28 + (unsigned int)v39 - 8) = *(_QWORD *)((char *)v57 + (unsigned int)v39 - 8);
                v50 = (v5 + 24) & 0xFFFFFFFFFFFFFFF8LL;
                v51 = (char *)v28 - v50;
                v52 = (char *)((char *)v57 - v51);
                if ( (((_DWORD)v39 + (_DWORD)v51) & 0xFFFFFFF8) >= 8 )
                {
                  v53 = (v39 + (_DWORD)v51) & 0xFFFFFFF8;
                  v54 = 0;
                  do
                  {
                    v55 = v54;
                    v54 += 8;
                    *(_QWORD *)(v50 + v55) = *(_QWORD *)&v52[v55];
                  }
                  while ( v54 < v53 );
                }
LABEL_67:
                v40 = *(_QWORD *)(v22 + 8);
              }
              else if ( (v39 & 4) != 0 )
              {
                *(_DWORD *)v28 = *(_DWORD *)v57;
                *(_DWORD *)((char *)v28 + (unsigned int)v39 - 4) = *(_DWORD *)((char *)v57 + (unsigned int)v39 - 4);
                v40 = *(_QWORD *)(v22 + 8);
              }
              else if ( (_DWORD)v39 )
              {
                *(_BYTE *)v28 = *(_BYTE *)v57;
                if ( (v39 & 2) == 0 )
                  goto LABEL_67;
                *(_WORD *)((char *)v28 + (unsigned int)v39 - 2) = *(_WORD *)((char *)v57 + (unsigned int)v39 - 2);
                v40 = *(_QWORD *)(v22 + 8);
              }
              v39 = v40;
            }
          }
          v41 = *(_BYTE **)v5;
          *(_QWORD *)(v5 + 8) = v39;
          v41[v39] = 0;
          v29 = *(_BYTE **)v22;
        }
LABEL_34:
        *(_QWORD *)(v22 + 8) = 0;
        *v29 = 0;
        v63 = v65;
        if ( v61 != v62 )
        {
          v63 = v61;
          v65[0] = v62[0];
          goto LABEL_36;
        }
        v35 = v23 + 1;
        v36 = v65;
        v37 = v62;
        if ( (unsigned int)(v23 + 1) >= 8 )
        {
          LODWORD(v46) = 0;
          do
          {
            v47 = (unsigned int)v46;
            v46 = (unsigned int)(v46 + 8);
            *(_QWORD *)((char *)v65 + v47) = *(_QWORD *)((char *)v62 + v47);
          }
          while ( (unsigned int)v46 < (v35 & 0xFFFFFFF8) );
          v36 = (_DWORD *)((char *)v65 + v46);
          v37 = (_DWORD *)((char *)v62 + v46);
        }
        v38 = 0;
        if ( (v35 & 4) != 0 )
        {
          *v36 = *v37;
          v38 = 4;
          if ( (v35 & 2) != 0 )
            goto LABEL_75;
LABEL_58:
          if ( (v35 & 1) != 0 )
LABEL_59:
            *((_BYTE *)v36 + v38) = *((_BYTE *)v37 + v38);
        }
        else
        {
          if ( (v35 & 2) == 0 )
            goto LABEL_58;
LABEL_75:
          *(_WORD *)((char *)v36 + v38) = *(_WORD *)((char *)v37 + v38);
          v38 += 2;
          if ( (v35 & 1) != 0 )
            goto LABEL_59;
        }
LABEL_36:
        v64 = v23;
        LOBYTE(v62[0]) = 0;
        sub_6AFB70(v22, 0, v59, &v63);
        if ( v63 != v65 )
          operator delete(v63, v65[0] + 1LL);
      }
LABEL_22:
      result = a3;
      v5 += 32LL;
    }
    while ( v5 < a3 );
  }
  return result;
}

