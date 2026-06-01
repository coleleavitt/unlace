__int64 __fastcall sub_1542980(__int64 a1, __int64 a2, int *a3)
{
  __int64 v6; // rax
  char *v7; // r15
  unsigned __int64 v8; // rcx
  const __m128i *v9; // r13
  unsigned __int64 v10; // rdx
  __m128i *v11; // rax
  __m128 v12; // xmm1
  __int64 v13; // rdx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  bool v18; // cc
  char *v19; // rcx
  const __m128i *v20; // rdx
  __m128i *v21; // rax
  char *v22; // rsi
  __int64 v23; // rdx
  __int16 v24; // ax
  unsigned __int16 v25; // cx
  unsigned int v26; // eax
  unsigned __int16 v27; // si
  __int64 v28; // rdx
  unsigned __int16 v29; // cx
  __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  bool v33; // zf
  char v34; // r15
  __int64 v35; // r14
  __int16 v36; // ax
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rdi
  __int16 v41; // ax
  int v42; // edx
  __int64 *v43; // rdi
  int v44; // edi
  __int64 v45; // rdx
  int v46; // ecx
  int v47; // esi
  int v48; // r12d
  int v49; // r15d
  unsigned __int16 v50; // cx
  __int64 *v51; // rdi
  unsigned __int16 v52; // cx
  unsigned int v53; // eax
  __int64 v54; // rdx
  unsigned __int16 v55; // cx
  unsigned int v56; // eax
  unsigned __int16 v57; // si
  _WORD *v58; // rdx
  __int64 *v59; // rdi
  int v60; // eax
  unsigned int v62; // eax
  unsigned __int16 v63; // si
  _WORD *v64; // rdx
  int v65; // eax
  __int64 *v66; // rdi
  unsigned __int16 v67; // cx
  unsigned int v68; // eax
  unsigned __int16 v69; // si
  __int64 v70; // rdx
  unsigned int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rsi
  unsigned __int64 v74; // r15
  __int64 v75; // rsi
  int v76; // eax
  __int64 *v77; // rdi
  __int64 v78; // [rsp+0h] [rbp-C8h]
  __int32 v79; // [rsp+1Ch] [rbp-ACh] BYREF
  _QWORD v80[2]; // [rsp+20h] [rbp-A8h] BYREF
  int v81; // [rsp+30h] [rbp-98h]
  int v82; // [rsp+40h] [rbp-88h] BYREF
  __int64 v83; // [rsp+48h] [rbp-80h]
  __int64 v84; // [rsp+58h] [rbp-70h]
  __int128 v85; // [rsp+60h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-58h]
  __int128 v87; // [rsp+80h] [rbp-48h]

  v6 = *(unsigned int *)(a2 + 8);
  v7 = *(char **)a2;
  v8 = *(unsigned int *)(a2 + 12);
  v81 = 63;
  v9 = (const __m128i *)v80;
  v80[0] = 0;
  v10 = v6 + 1;
  v80[1] = 0;
  v11 = (__m128i *)&v7[24 * v6];
  if ( v10 > v8 )
  {
    v75 = a2 + 16;
    if ( v7 > (char *)v80 || v11 <= (__m128i *)v80 )
    {
      sub_2237220(a2, v75, v10, 24);
      v11 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
    }
    else
    {
      sub_2237220(a2, v75, v10, 24);
      v9 = (const __m128i *)(*(_QWORD *)a2 + (char *)v80 - v7);
      v11 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
    }
  }
  v12 = (__m128)_mm_loadu_si128(v9);
  *v11 = (__m128i)v12;
  v13 = v9[1].m128i_i64[0];
  v14 = a1 + 16;
  v11[1].m128i_i64[0] = v13;
  v15 = *(unsigned int *)(a2 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  v17 = v16 + 1;
  *(_DWORD *)(a2 + 8) = v16;
  v18 = v16 + 1 <= v15;
  v19 = *(char **)a2;
  if ( v18 )
    goto LABEL_3;
  v73 = a2 + 16;
  if ( (unsigned __int64)v19 > v14 || v14 >= (unsigned __int64)&v19[24 * v16] )
  {
    sub_2237220(a2, v73, v17, 24);
    v19 = *(char **)a2;
    v16 = *(unsigned int *)(a2 + 8);
LABEL_3:
    v20 = (const __m128i *)(a1 + 16);
    goto LABEL_4;
  }
  v74 = v14 - (_QWORD)v19;
  sub_2237220(a2, v73, v17, 24);
  v19 = *(char **)a2;
  v16 = *(unsigned int *)(a2 + 8);
  v20 = (const __m128i *)(*(_QWORD *)a2 + v74);
LABEL_4:
  v21 = (__m128i *)&v19[24 * v16];
  *v21 = _mm_loadu_si128(v20);
  v21[1].m128i_i64[0] = v20[1].m128i_i64[0];
  v22 = *(char **)a2;
  v23 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v23;
  sub_14368B0(*(_QWORD *)(a1 + 8), v22, v23, 1u, 0, 1u);
  v24 = *(_WORD *)(a1 + 32);
  if ( v24 == 22 )
  {
    ++*(_WORD *)(a1 + 88);
    goto LABEL_19;
  }
  if ( v24 == 23 )
  {
    v29 = *(_WORD *)(a1 + 88);
    if ( !v29 )
      goto LABEL_19;
    v71 = *(_DWORD *)(a1 + 2792);
    if ( !v71 )
    {
LABEL_118:
      *(_WORD *)(a1 + 88) = v29 - 1;
      goto LABEL_19;
    }
    v72 = *(_QWORD *)(a1 + 2784) + 24LL * v71 - 24;
    while ( 1 )
    {
      if ( v29 == *(_WORD *)(v72 + 14) )
      {
        if ( *(_DWORD *)(v72 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_113;
      }
      else if ( v29 > *(_WORD *)(v72 + 14) )
      {
        goto LABEL_113;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v72 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v72 + 18) )
        goto LABEL_118;
LABEL_113:
      --v71;
      v72 -= 24;
      *(_DWORD *)(a1 + 2792) = v71;
      if ( !v71 )
        goto LABEL_118;
    }
  }
  if ( (unsigned __int16)(v24 - 20) <= 1u )
  {
    v25 = *(_WORD *)(a1 + 90);
    if ( v24 == 20 )
    {
      *(_WORD *)(a1 + 90) = v25 + 1;
    }
    else if ( v25 )
    {
      v26 = *(_DWORD *)(a1 + 2792);
      if ( v26 )
      {
        v27 = *(_WORD *)(a1 + 88);
        v28 = *(_QWORD *)(a1 + 2784) + 24LL * v26 - 24;
        do
        {
          if ( v27 == *(_WORD *)(v28 + 14) )
          {
            if ( *(_DWORD *)(v28 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_12;
          }
          else if ( v27 > *(_WORD *)(v28 + 14) )
          {
            goto LABEL_12;
          }
          if ( v25 <= *(_WORD *)(v28 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v28 + 18) )
            break;
LABEL_12:
          --v26;
          v28 -= 24;
          *(_DWORD *)(a1 + 2792) = v26;
        }
        while ( v26 );
      }
      *(_WORD *)(a1 + 90) = v25 - 1;
    }
    goto LABEL_19;
  }
  if ( (unsigned __int16)(v24 - 24) <= 1u )
  {
    v67 = *(_WORD *)(a1 + 92);
    if ( v24 == 24 )
    {
      *(_WORD *)(a1 + 92) = v67 + 1;
    }
    else if ( v67 )
    {
      v68 = *(_DWORD *)(a1 + 2792);
      if ( v68 )
      {
        v69 = *(_WORD *)(a1 + 88);
        v70 = *(_QWORD *)(a1 + 2784) + 24LL * v68 - 24;
        do
        {
          if ( v69 == *(_WORD *)(v70 + 14) )
          {
            if ( *(_DWORD *)(v70 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_103;
          }
          else if ( v69 > *(_WORD *)(v70 + 14) )
          {
            goto LABEL_103;
          }
          if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v70 + 16) && *(_WORD *)(v70 + 18) >= v67 )
            break;
LABEL_103:
          --v68;
          v70 -= 24;
          *(_DWORD *)(a1 + 2792) = v68;
        }
        while ( v68 );
      }
      *(_WORD *)(a1 + 92) = v67 - 1;
    }
LABEL_19:
    v30 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v30, (int *)(a1 + 16));
    goto LABEL_20;
  }
  if ( (unsigned __int16)(v24 - 14) <= 1u || (unsigned __int16)(v24 - 17) <= 2u )
    goto LABEL_19;
  if ( v24 == 3 )
  {
    sub_1566D30(a1);
  }
  else
  {
    if ( !sub_10CCDE0(v24) )
      goto LABEL_19;
    v76 = *(_DWORD *)(a1 + 20);
    v77 = *(__int64 **)(a1 + 8);
    if ( !v76 )
      v76 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = v76;
    sub_14634E0(v77, (int *)(a1 + 16));
  }
LABEL_20:
  v31 = *(_QWORD *)(a1 + 8);
  *(_OWORD *)ptr = 0;
  v87 = 0;
  v32 = *(_QWORD *)(v31 + 56);
  v85 = 0;
  if ( (*(_BYTE *)(v32 + 1) & 8) != 0 )
    sub_14D0170((const __m128i *)a1, (__int64)&v85, 0, 0, 0, nullptr, (__m128i)0LL, 0, nullptr, 0, 0, 0);
  v33 = *(_WORD *)(a1 + 32) == 147;
  v79 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  if ( v33 )
  {
    v34 = 0;
    v35 = sub_14C60F0(a1);
  }
  else
  {
    v34 = sub_14D1670((const __m128i *)a1, (__int64)&v85, 0, 0, 0, 0, (__m128i)0LL, v12, 0, 0, &v79, (__int64)&v82);
    v35 = sub_1C540F0(*(_QWORD *)(a1 + 96));
  }
  v36 = *(_WORD *)(a1 + 32);
  if ( v35 != 1 )
  {
    while ( v35 && v36 == 26 )
    {
      v37 = *(_QWORD *)(a1 + 8);
      v38 = *(_QWORD *)(v37 + 2944);
      if ( v38 >= *(unsigned int *)(v37 + 2912) )
        v39 = sub_14180A0(v37, 1u);
      else
        v39 = *(_QWORD *)(v37 + 2904) + 24 * v38;
      if ( *(_WORD *)(v39 + 16) != 5 )
      {
        v36 = *(_WORD *)(a1 + 32);
        break;
      }
      v40 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v40, (int *)(a1 + 16));
      v41 = *(_WORD *)(a1 + 32);
      if ( (unsigned __int16)(v41 - 7) <= 0xCu )
      {
        v43 = *(__int64 **)(a1 + 8);
        v42 = *(_DWORD *)(a1 + 16);
LABEL_138:
        *(_DWORD *)(a1 + 40) = v42;
        sub_14634E0(v43, (int *)(a1 + 16));
        BUG();
      }
      v42 = *(_DWORD *)(a1 + 16);
      v43 = *(__int64 **)(a1 + 8);
      if ( v41 == 1 )
        goto LABEL_138;
      *(_DWORD *)(a1 + 40) = v42;
      v78 = *(_QWORD *)(a1 + 24);
      sub_14634E0(v43, (int *)(a1 + 16));
      v35 = sub_1C58530(
              *(_QWORD *)(a1 + 96),
              v35 & 0xFFFFFFFFFFFFFFFELL,
              *(_QWORD *)(v78 + 16) + 16LL,
              **(unsigned int **)(v78 + 16),
              *(unsigned int *)(a1 + 16));
      v36 = *(_WORD *)(a1 + 32);
      if ( v35 == 1 )
        break;
    }
  }
  if ( v36 == 63 )
  {
    LODWORD(v45) = *(_DWORD *)(a2 + 8) - 2;
    v46 = v45;
  }
  else
  {
    v44 = *(_DWORD *)(a1 + 16);
    LODWORD(v45) = 0;
    if ( v44 != **(_DWORD **)a2 )
    {
      do
        v45 = (unsigned int)(v45 + 1);
      while ( *(_DWORD *)(*(_QWORD *)a2 + 24 * v45) != v44 );
    }
    v46 = v45;
    if ( v34 )
      v46 = *(_DWORD *)(a2 + 8) - 2;
  }
  *a3 = v46;
  v47 = *(_DWORD *)(a2 + 8);
  v48 = v47 - 2 - v45;
  if ( v47 - 2 != (_DWORD)v45 )
  {
    v49 = 0;
    while ( 1 )
    {
      if ( v36 == 22 )
      {
        ++*(_WORD *)(a1 + 88);
        goto LABEL_44;
      }
      if ( v36 == 23 )
        break;
      if ( (unsigned __int16)(v36 - 20) <= 1u )
      {
        v50 = *(_WORD *)(a1 + 90);
        if ( v36 == 20 )
        {
          *(_WORD *)(a1 + 90) = v50 + 1;
          goto LABEL_44;
        }
        if ( !v50 )
          goto LABEL_44;
        v62 = *(_DWORD *)(a1 + 2792);
        if ( !v62 )
        {
LABEL_87:
          *(_WORD *)(a1 + 90) = v50 - 1;
          goto LABEL_44;
        }
        v63 = *(_WORD *)(a1 + 88);
        v64 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v62 - 24);
        while ( 2 )
        {
          if ( v63 == v64[7] )
          {
            if ( *((_DWORD *)v64 + 4) != *(_DWORD *)(a1 + 90) )
            {
LABEL_85:
              if ( v64[8] >= v50 && *(_WORD *)(a1 + 92) <= v64[9] )
                goto LABEL_87;
            }
          }
          else if ( v63 <= v64[7] )
          {
            goto LABEL_85;
          }
          --v62;
          v64 -= 12;
          *(_DWORD *)(a1 + 2792) = v62;
          if ( !v62 )
            goto LABEL_87;
          continue;
        }
      }
      if ( (unsigned __int16)(v36 - 24) <= 1u )
      {
        v55 = *(_WORD *)(a1 + 92);
        if ( v36 == 24 )
        {
          *(_WORD *)(a1 + 92) = v55 + 1;
          goto LABEL_44;
        }
        if ( v55 )
        {
          v56 = *(_DWORD *)(a1 + 2792);
          if ( !v56 )
          {
LABEL_70:
            *(_WORD *)(a1 + 92) = v55 - 1;
            goto LABEL_44;
          }
          v57 = *(_WORD *)(a1 + 88);
          v58 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v56 - 24);
          while ( 2 )
          {
            if ( v57 == v58[7] )
            {
              if ( *((_DWORD *)v58 + 4) != *(_DWORD *)(a1 + 90) )
              {
LABEL_68:
                if ( *(_WORD *)(a1 + 90) <= v58[8] && v58[9] >= v55 )
                  goto LABEL_70;
              }
            }
            else if ( v57 <= v58[7] )
            {
              goto LABEL_68;
            }
            --v56;
            v58 -= 12;
            *(_DWORD *)(a1 + 2792) = v56;
            if ( !v56 )
              goto LABEL_70;
            continue;
          }
        }
LABEL_44:
        v51 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v51, (int *)(a1 + 16));
        goto LABEL_45;
      }
      if ( (unsigned __int16)(v36 - 14) <= 1u || (unsigned __int16)(v36 - 17) <= 2u )
        goto LABEL_44;
      if ( v36 == 3 )
      {
        sub_1566D30(a1);
      }
      else
      {
        if ( !sub_10CCDE0(v36) )
          goto LABEL_44;
        v65 = *(_DWORD *)(a1 + 20);
        v66 = *(__int64 **)(a1 + 8);
        if ( !v65 )
          v65 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 40) = v65;
        sub_14634E0(v66, (int *)(a1 + 16));
      }
LABEL_45:
      if ( v48 == ++v49 )
        goto LABEL_71;
      v36 = *(_WORD *)(a1 + 32);
    }
    v52 = *(_WORD *)(a1 + 88);
    if ( !v52 )
      goto LABEL_44;
    v53 = *(_DWORD *)(a1 + 2792);
    if ( !v53 )
    {
LABEL_58:
      *(_WORD *)(a1 + 88) = v52 - 1;
      goto LABEL_44;
    }
    v54 = *(_QWORD *)(a1 + 2784) + 24LL * v53 - 24;
    while ( 1 )
    {
      if ( v52 == *(_WORD *)(v54 + 14) )
      {
        if ( *(_DWORD *)(v54 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_53;
      }
      else if ( v52 > *(_WORD *)(v54 + 14) )
      {
        goto LABEL_53;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v54 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v54 + 18) )
        goto LABEL_58;
LABEL_53:
      --v53;
      v54 -= 24;
      *(_DWORD *)(a1 + 2792) = v53;
      if ( !v53 )
        goto LABEL_58;
    }
  }
LABEL_71:
  v59 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v59, (int *)(a1 + 16));
  v60 = HIDWORD(ptr[1]);
  *(_DWORD *)(a2 + 8) -= 2;
  if ( v60 )
    free(ptr[0]);
  return v35;
}
