__int64 __fastcall sub_90ABE0(__m128i *a1, __int64 a2, const __m128i *a3, int a4, int a5, int a6, int a7)
{
  __int32 v8; // eax
  __int64 v9; // rbx
  __int32 v10; // r12d
  int v11; // ecx
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  int v16; // r10d
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r11
  void *v26; // rdi
  unsigned __int64 v27; // rdx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  unsigned int v36; // eax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned int v39; // eax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned int v42; // eax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned int v45; // eax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned int v48; // eax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned int v52; // ecx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // rsi
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  void *v58; // rdi
  unsigned int v59; // eax
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // rcx
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  void *v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rsi
  __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rsi
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rsi
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rsi
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rsi
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // rsi
  size_t v83; // rdx

  if ( a1[8].m128i_i32[3] && (a7 & 1) == 0
    || (v8 = a3[1].m128i_i32[2], v9 = 0, v8 != 1) && ((unsigned int)(v8 - 3) > 2 || a4 != 1) )
  {
    v9 = 4LL << a3->m128i_i32[1];
  }
  v10 = a3->m128i_i32[2];
  v11 = a7;
  v12 = 0;
  if ( a7 != 1 || (v11 = 0, a3[1].m128i_i32[0] != 3) )
  {
    if ( a6 != 1 )
      goto LABEL_9;
    goto LABEL_47;
  }
  v11 = 17;
  if ( a3->m128i_i32[0] <= 0x11u )
    v11 = a3->m128i_i32[0];
  if ( a3->m128i_i32[0] )
    v12 = 4LL << v11;
  if ( a6 == 1 )
  {
LABEL_47:
    a1[2].m128i_i32[1] = 0;
    a1->m128i_i64[1] = (__int64)" ";
    a1[1].m128i_i64[0] = (__int64)" ";
    a1->m128i_i64[0] = (__int64)&unk_22D9D5B;
    a1[1].m128i_i64[1] = 0x200000002LL;
    a1[2].m128i_i32[0] = 0;
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 16);
  }
LABEL_9:
  v13 = a1->m128i_i64[0] - a1->m128i_i64[1];
  a1[3].m128i_i32[0] = v11;
  a1[18].m128i_i32[3] = 0;
  a1[1].m128i_i32[3] = v13;
  v14 = 4LL << v10;
  a1[1].m128i_i32[2] = v13;
  a1[2].m128i_i32[3] = v13;
  a1[2].m128i_i32[2] = 0;
  a1[12].m128i_i32[1] = 0;
  a1[15].m128i_i64[1] = 0;
  v15 = *(_QWORD *)(a2 + 16);
  v16 = *(_DWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 24) = v15;
  if ( !v16 )
  {
    v17 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 32) = v15;
    *(_QWORD *)(a2 + 48) = v17 & 0xFFFFFFFFFFFFFFC0LL;
    v18 = v15 + (-(int)v15 & 0x3F);
    if ( v17 < v18 )
    {
      v15 = 0;
      goto LABEL_16;
    }
    *(_QWORD *)(a2 + 16) = v18;
    *(_QWORD *)(a2 + 24) = v18;
    if ( v15 < v18 )
      *(_QWORD *)(a2 + 32) = v18;
    *(_DWORD *)(a2 + 64) = 1;
    v15 += -(int)v15 & 0x3F;
  }
  if ( v15 + v14 > *(_QWORD *)(a2 + 40) )
  {
    *(_BYTE *)(a2 + 56) = 1;
    v15 = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 24) = v15 + v14;
  }
LABEL_16:
  a1[7].m128i_i64[0] = v15;
  if ( *(_DWORD *)(a2 + 64) )
  {
    v19 = *(_QWORD *)(a2 + 24);
    v20 = v19 + v9;
    if ( v20 <= *(_QWORD *)(a2 + 40) )
      goto LABEL_18;
  }
  else
  {
    v29 = *(_QWORD *)(a2 + 8);
    v30 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 32) = v30;
    *(_QWORD *)(a2 + 48) = v29 & 0xFFFFFFFFFFFFFFC0LL;
    v19 = v30 + (-(int)v30 & 0x3F);
    if ( v29 < v19 )
    {
      v19 = 0;
LABEL_19:
      a1[8].m128i_i64[0] = v19;
      if ( *(_DWORD *)(a2 + 64) )
        goto LABEL_20;
      goto LABEL_35;
    }
    *(_QWORD *)(a2 + 16) = v19;
    *(_QWORD *)(a2 + 24) = v19;
    if ( v30 < v19 )
      *(_QWORD *)(a2 + 32) = v19;
    *(_DWORD *)(a2 + 64) = 1;
    v20 = v19 + v9;
    if ( v20 <= *(_QWORD *)(a2 + 40) )
    {
LABEL_18:
      *(_QWORD *)(a2 + 24) = v20;
      goto LABEL_19;
    }
  }
  *(_BYTE *)(a2 + 56) = 1;
  a1[8].m128i_i64[0] = 0;
  if ( *(_DWORD *)(a2 + 64) )
  {
LABEL_20:
    v21 = *(_QWORD *)(a2 + 24);
    v22 = v21 + v12;
    if ( v22 <= *(_QWORD *)(a2 + 40) )
    {
LABEL_21:
      *(_QWORD *)(a2 + 24) = v22;
      goto LABEL_22;
    }
LABEL_39:
    *(_BYTE *)(a2 + 56) = 1;
    a1[7].m128i_i64[1] = 0;
    if ( *(_BYTE *)(a2 + 56) )
      return -64;
    goto LABEL_23;
  }
LABEL_35:
  v31 = *(_QWORD *)(a2 + 8);
  v32 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 32) = v32;
  *(_QWORD *)(a2 + 48) = v31 & 0xFFFFFFFFFFFFFFC0LL;
  v21 = v32 + (-(int)v32 & 0x3F);
  if ( v31 >= v21 )
  {
    *(_QWORD *)(a2 + 16) = v21;
    *(_QWORD *)(a2 + 24) = v21;
    if ( v32 < v21 )
      *(_QWORD *)(a2 + 32) = v21;
    *(_DWORD *)(a2 + 64) = 1;
    v22 = v21 + v12;
    if ( v22 <= *(_QWORD *)(a2 + 40) )
      goto LABEL_21;
    goto LABEL_39;
  }
  v21 = 0;
LABEL_22:
  a1[7].m128i_i64[1] = v21;
  if ( *(_BYTE *)(a2 + 56) )
    return -64;
LABEL_23:
  if ( a5 != 1 )
  {
    v26 = *(void **)(a2 + 32);
    v27 = *(_QWORD *)(a2 + 24);
    if ( (unsigned __int64)v26 < v27 )
    {
      memset(v26, 0, v27 - (_QWORD)v26);
      v51 = *(_QWORD *)(a2 + 24);
      if ( v51 > *(_QWORD *)(a2 + 32) )
        *(_QWORD *)(a2 + 32) = v51;
    }
  }
  if ( (unsigned int)(a3[1].m128i_i32[2] - 3) <= 2 && a4 == 1 )
  {
    v52 = *(_DWORD *)(a2 + 64);
    v53 = ((1LL << v10) + 63) & 0xFFFFFFFFFFFFFFC0LL;
    if ( a7 != 1 )
    {
      if ( v52 <= 1 )
      {
        if ( !v52 )
        {
          v54 = *(_QWORD *)(a2 + 8);
          v55 = *(_QWORD *)(a2 + 16);
          v56 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)(a2 + 32) = v55;
          *(_QWORD *)(a2 + 48) = v56 & 0xFFFFFFFFFFFFFFC0LL;
          v57 = v55 + (-(int)v55 & 0x3F);
          if ( v54 < v57 )
            goto LABEL_114;
          *(_QWORD *)(a2 + 16) = v57;
          *(_QWORD *)(a2 + 24) = v57;
          if ( v55 < v57 )
            *(_QWORD *)(a2 + 32) = v57;
        }
        *(_DWORD *)(a2 + 64) = 2;
      }
      if ( v53 )
      {
        v58 = (void *)(*(_QWORD *)(a2 + 40) - v53);
        if ( (unsigned __int64)v58 >= *(_QWORD *)(a2 + 24) )
        {
          if ( (unsigned __int64)v58 < *(_QWORD *)(a2 + 32) )
            *(_QWORD *)(a2 + 32) = v58;
          *(_QWORD *)(a2 + 40) = v58;
          goto LABEL_102;
        }
        *(_BYTE *)(a2 + 56) = 1;
      }
LABEL_114:
      v58 = nullptr;
LABEL_102:
      a1[3].m128i_i64[1] = (__int64)v58;
      memset(v58, 0, 1LL << v10);
      a1[6].m128i_i64[0] = 0;
LABEL_103:
      v59 = 6;
      if ( a3->m128i_i32[3] <= 6u )
        v59 = a3->m128i_u32[3];
      if ( v59 < 4 )
        v59 = 4;
      a1[3].m128i_i32[1] = a3->m128i_i32[2] - v59;
      goto LABEL_27;
    }
    if ( !v52 )
    {
      v60 = *(_QWORD *)(a2 + 8);
      v61 = *(_QWORD *)(a2 + 16);
      v62 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 32) = v61;
      *(_QWORD *)(a2 + 48) = v62 & 0xFFFFFFFFFFFFFFC0LL;
      v63 = v61 + (-(int)v61 & 0x3F);
      if ( v60 < v63 )
        goto LABEL_161;
      *(_QWORD *)(a2 + 16) = v63;
      *(_QWORD *)(a2 + 24) = v63;
      if ( v61 < v63 )
        *(_QWORD *)(a2 + 32) = v63;
      *(_DWORD *)(a2 + 64) = 1;
    }
    if ( v53 )
    {
      v64 = (void *)(*(_QWORD *)(a2 + 40) - v53);
      if ( (unsigned __int64)v64 < *(_QWORD *)(a2 + 24) )
      {
        *(_BYTE *)(a2 + 56) = 1;
      }
      else
      {
        if ( (unsigned __int64)v64 < *(_QWORD *)(a2 + 32) )
          *(_QWORD *)(a2 + 32) = v64;
        *(_QWORD *)(a2 + 40) = v64;
        if ( v64 )
        {
          v65 = *(_QWORD *)(a2 + 48);
          if ( v65 > (unsigned __int64)v64 )
          {
            v83 = v65 - (_QWORD)v64;
            if ( v83 > v53 )
              v83 = ((1LL << v10) + 63) & 0xFFFFFFFFFFFFFFC0LL;
            v64 = memset(v64, 0, v83);
            *(_QWORD *)(a2 + 48) = v64;
          }
          goto LABEL_126;
        }
      }
    }
LABEL_161:
    v64 = nullptr;
LABEL_126:
    v66 = a1[6].m128i_i64[0];
    v67 = a1[6].m128i_u32[2];
    a1[3].m128i_i64[1] = (__int64)v64;
    v68 = v66 ^ __ROR8__(v66, 24) ^ __ROL8__(v66, 15);
    v69 = 0x9FB21C651E98DF25LL * ((((0x9FB21C651E98DF25LL * v68) >> 35) + 8) ^ (0x9FB21C651E98DF25LL * v68));
    v70 = 0x9FB21C651E98DF25LL * (v67 ^ __ROR8__(v67, 24) ^ __ROL8__(v67, 15));
    a1[6].m128i_i64[0] = (0x9FB21C651E98DF25LL * (((v70 >> 35) + 4) ^ v70))
                       ^ (v69 >> 28)
                       ^ v69
                       ^ ((0x9FB21C651E98DF25LL * (((v70 >> 35) + 4) ^ v70)) >> 28);
    goto LABEL_103;
  }
LABEL_27:
  if ( a7 == 1 && a3[1].m128i_i32[2] > 6u )
  {
    v33 = *(_DWORD *)(a2 + 64);
    if ( v33 <= 1 )
    {
      if ( v33 )
      {
        v34 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v71 = *(_QWORD *)(a2 + 16);
        v72 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(a2 + 32) = v71;
        *(_QWORD *)(a2 + 48) = v72 & 0xFFFFFFFFFFFFFFC0LL;
        v35 = 0;
        v34 = v71 + (-(int)v71 & 0x3F);
        if ( v72 < v34 )
          goto LABEL_55;
        *(_QWORD *)(a2 + 16) = v34;
        *(_QWORD *)(a2 + 24) = v34;
        if ( v71 < v34 )
          *(_QWORD *)(a2 + 32) = v34;
      }
      *(_DWORD *)(a2 + 64) = 2;
    }
    else
    {
      v34 = *(_QWORD *)(a2 + 24);
    }
    v35 = *(_QWORD *)(a2 + 40) - 1024LL;
    if ( v35 < v34 )
    {
      *(_BYTE *)(a2 + 56) = 1;
      v35 = 0;
    }
    else
    {
      if ( v35 < *(_QWORD *)(a2 + 32) )
        *(_QWORD *)(a2 + 32) = v35;
      *(_QWORD *)(a2 + 40) = v35;
    }
LABEL_55:
    a1[9].m128i_i64[0] = v35;
    v36 = *(_DWORD *)(a2 + 64);
    if ( v36 <= 1 )
    {
      if ( v36 )
      {
        v37 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v73 = *(_QWORD *)(a2 + 16);
        v74 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(a2 + 32) = v73;
        *(_QWORD *)(a2 + 48) = v74 & 0xFFFFFFFFFFFFFFC0LL;
        v38 = 0;
        v37 = v73 + (-(int)v73 & 0x3F);
        if ( v74 < v37 )
          goto LABEL_61;
        *(_QWORD *)(a2 + 16) = v37;
        *(_QWORD *)(a2 + 24) = v37;
        if ( v73 < v37 )
          *(_QWORD *)(a2 + 32) = v37;
      }
      *(_DWORD *)(a2 + 64) = 2;
    }
    else
    {
      v37 = *(_QWORD *)(a2 + 24);
    }
    v38 = *(_QWORD *)(a2 + 40) - 192LL;
    if ( v38 < v37 )
    {
      *(_BYTE *)(a2 + 56) = 1;
      v38 = 0;
    }
    else
    {
      if ( v38 < *(_QWORD *)(a2 + 32) )
        *(_QWORD *)(a2 + 32) = v38;
      *(_QWORD *)(a2 + 40) = v38;
    }
LABEL_61:
    a1[9].m128i_i64[1] = v38;
    v39 = *(_DWORD *)(a2 + 64);
    if ( v39 <= 1 )
    {
      if ( v39 )
      {
        v40 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v77 = *(_QWORD *)(a2 + 16);
        v78 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(a2 + 32) = v77;
        *(_QWORD *)(a2 + 48) = v78 & 0xFFFFFFFFFFFFFFC0LL;
        v41 = 0;
        v40 = v77 + (-(int)v77 & 0x3F);
        if ( v78 < v40 )
          goto LABEL_67;
        *(_QWORD *)(a2 + 16) = v40;
        *(_QWORD *)(a2 + 24) = v40;
        if ( v77 < v40 )
          *(_QWORD *)(a2 + 32) = v40;
      }
      *(_DWORD *)(a2 + 64) = 2;
    }
    else
    {
      v40 = *(_QWORD *)(a2 + 24);
    }
    v41 = *(_QWORD *)(a2 + 40) - 256LL;
    if ( v41 < v40 )
    {
      *(_BYTE *)(a2 + 56) = 1;
      v41 = 0;
    }
    else
    {
      if ( v41 < *(_QWORD *)(a2 + 32) )
        *(_QWORD *)(a2 + 32) = v41;
      *(_QWORD *)(a2 + 40) = v41;
    }
LABEL_67:
    a1[10].m128i_i64[0] = v41;
    v42 = *(_DWORD *)(a2 + 64);
    if ( v42 <= 1 )
    {
      if ( v42 )
      {
        v43 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v81 = *(_QWORD *)(a2 + 16);
        v82 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(a2 + 32) = v81;
        *(_QWORD *)(a2 + 48) = v82 & 0xFFFFFFFFFFFFFFC0LL;
        v44 = 0;
        v43 = v81 + (-(int)v81 & 0x3F);
        if ( v82 < v43 )
          goto LABEL_73;
        *(_QWORD *)(a2 + 16) = v43;
        *(_QWORD *)(a2 + 24) = v43;
        if ( v81 < v43 )
          *(_QWORD *)(a2 + 32) = v43;
      }
      *(_DWORD *)(a2 + 64) = 2;
    }
    else
    {
      v43 = *(_QWORD *)(a2 + 24);
    }
    v44 = *(_QWORD *)(a2 + 40) - 128LL;
    if ( v44 < v43 )
    {
      *(_BYTE *)(a2 + 56) = 1;
      v44 = 0;
    }
    else
    {
      if ( v44 < *(_QWORD *)(a2 + 32) )
        *(_QWORD *)(a2 + 32) = v44;
      *(_QWORD *)(a2 + 40) = v44;
    }
LABEL_73:
    a1[10].m128i_i64[1] = v44;
    v45 = *(_DWORD *)(a2 + 64);
    if ( v45 <= 1 )
    {
      if ( v45 )
      {
        v46 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v79 = *(_QWORD *)(a2 + 16);
        v80 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(a2 + 32) = v79;
        *(_QWORD *)(a2 + 48) = v80 & 0xFFFFFFFFFFFFFFC0LL;
        v47 = 0;
        v46 = v79 + (-(int)v79 & 0x3F);
        if ( v80 < v46 )
          goto LABEL_79;
        *(_QWORD *)(a2 + 16) = v46;
        *(_QWORD *)(a2 + 24) = v46;
        if ( v79 < v46 )
          *(_QWORD *)(a2 + 32) = v46;
      }
      *(_DWORD *)(a2 + 64) = 2;
    }
    else
    {
      v46 = *(_QWORD *)(a2 + 24);
    }
    v47 = *(_QWORD *)(a2 + 40) - 32832LL;
    if ( v47 < v46 )
    {
      *(_BYTE *)(a2 + 56) = 1;
      v47 = 0;
    }
    else
    {
      if ( v47 < *(_QWORD *)(a2 + 32) )
        *(_QWORD *)(a2 + 32) = v47;
      *(_QWORD *)(a2 + 40) = v47;
    }
LABEL_79:
    a1[11].m128i_i64[0] = v47;
    v48 = *(_DWORD *)(a2 + 64);
    if ( v48 <= 1 )
    {
      if ( v48 )
      {
        v49 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v75 = *(_QWORD *)(a2 + 16);
        v76 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(a2 + 32) = v75;
        *(_QWORD *)(a2 + 48) = v76 & 0xFFFFFFFFFFFFFFC0LL;
        v50 = 0;
        v49 = v75 + (-(int)v75 & 0x3F);
        if ( v76 < v49 )
        {
LABEL_85:
          a1[11].m128i_i64[1] = v50;
          goto LABEL_28;
        }
        *(_QWORD *)(a2 + 16) = v49;
        *(_QWORD *)(a2 + 24) = v49;
        if ( v75 < v49 )
          *(_QWORD *)(a2 + 32) = v49;
      }
      *(_DWORD *)(a2 + 64) = 2;
    }
    else
    {
      v49 = *(_QWORD *)(a2 + 24);
    }
    v50 = *(_QWORD *)(a2 + 40) - (_QWORD)&stru_1C080;
    if ( v50 < v49 )
    {
      *(_BYTE *)(a2 + 56) = 1;
      v50 = 0;
    }
    else
    {
      if ( v50 < *(_QWORD *)(a2 + 32) )
        *(_QWORD *)(a2 + 32) = v50;
      *(_QWORD *)(a2 + 40) = v50;
    }
    goto LABEL_85;
  }
LABEL_28:
  a1[16] = _mm_loadu_si128(a3);
  a1[17].m128i_i64[0] = a3[1].m128i_i64[0];
  a1[17].m128i_i32[2] = a3[1].m128i_i32[2];
  if ( !*(_BYTE *)(a2 + 56) )
    return 0;
  return -64;
}
