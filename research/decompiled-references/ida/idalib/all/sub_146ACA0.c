__int64 __fastcall sub_146ACA0(__int64 a1, __int64 a2, double a3, double a4)
{
  int *v5; // rbp
  unsigned __int64 v7; // r8
  int v8; // r14d
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i *v11; // rcx
  const __m128i *v12; // rax
  __m128i v13; // xmm0
  char *v14; // rsi
  __int64 v15; // rdx
  __int16 v16; // ax
  unsigned __int16 v17; // cx
  unsigned int v18; // eax
  unsigned __int16 v19; // si
  __int64 v20; // rdx
  unsigned __int16 v21; // cx
  __int64 *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 v25; // r15
  __int16 v26; // dx
  unsigned int v27; // eax
  void *v28; // rdi
  void **v29; // r15
  unsigned __int64 v30; // rax
  void **v31; // rcx
  void **v32; // rax
  void **v33; // rdi
  void **v34; // rdi
  void **v35; // rax
  unsigned __int16 v36; // cx
  __int64 *v37; // rdi
  unsigned __int16 v38; // cx
  unsigned int v39; // eax
  unsigned __int16 v40; // si
  __int64 v41; // rdx
  unsigned __int16 v42; // cx
  unsigned int v43; // eax
  unsigned __int16 v44; // si
  _WORD *v45; // rdx
  unsigned int v46; // edx
  unsigned __int16 v47; // cx
  __int64 v48; // rax
  unsigned int v50; // eax
  _WORD *v51; // rdx
  int v52; // eax
  __int64 *v53; // rdi
  unsigned __int16 v54; // cx
  unsigned int v55; // eax
  unsigned __int16 v56; // si
  __int64 v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rdi
  __int64 v61; // rsi
  char *v62; // r12
  __int64 v63; // rdx
  __int64 v64; // rdx
  int v65; // eax
  __int64 *v66; // rdi
  unsigned __int16 v67; // [rsp+Eh] [rbp-AAh]
  void **v68; // [rsp+10h] [rbp-A8h]
  void **v69; // [rsp+10h] [rbp-A8h]
  void **v70; // [rsp+18h] [rbp-A0h]
  void **v71; // [rsp+18h] [rbp-A0h]
  unsigned int v72; // [rsp+2Ch] [rbp-8Ch] BYREF
  void *v73; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v74; // [rsp+38h] [rbp-80h]
  __int64 v75; // [rsp+40h] [rbp-78h]
  void *v76; // [rsp+50h] [rbp-68h]
  _BYTE v77[16]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v78; // [rsp+70h] [rbp-48h]

  v5 = (int *)(a1 + 16);
  v7 = *(_QWORD *)(a2 + 24);
  v8 = *(_DWORD *)(a1 + 88);
  v67 = *(_WORD *)(a1 + 92);
  v9 = *(unsigned int *)(a2 + 32);
  v10 = v9 + 1;
  v11 = (__m128i *)(v7 + 24 * v9);
  v12 = (const __m128i *)(a1 + 16);
  if ( v10 > *(unsigned int *)(a2 + 36) )
  {
    v60 = a2 + 24;
    v61 = a2 + 40;
    if ( v7 > (unsigned __int64)v5 || v11 <= (__m128i *)v5 )
    {
      sub_2237220(v60, v61, v10, 24);
      v11 = (__m128i *)(*(_QWORD *)(a2 + 24) + 24LL * *(unsigned int *)(a2 + 32));
      v12 = (const __m128i *)v5;
    }
    else
    {
      v62 = (char *)v5 - v7;
      sub_2237220(v60, v61, v10, 24);
      v63 = *(_QWORD *)(a2 + 24);
      v12 = (const __m128i *)&v62[v63];
      v11 = (__m128i *)(v63 + 24LL * *(unsigned int *)(a2 + 32));
    }
  }
  v13 = _mm_loadu_si128(v12);
  *v11 = v13;
  v11[1].m128i_i64[0] = v12[1].m128i_i64[0];
  v14 = *(char **)(a2 + 24);
  v15 = (unsigned int)(*(_DWORD *)(a2 + 32) + 1);
  *(_DWORD *)(a2 + 32) = v15;
  sub_14368B0(*(_QWORD *)(a1 + 8), v14, v15, 1u, 0, 1u);
  v16 = *(_WORD *)(a1 + 32);
  if ( v16 == 22 )
  {
    ++*(_WORD *)(a1 + 88);
    goto LABEL_17;
  }
  if ( v16 == 23 )
  {
    v21 = *(_WORD *)(a1 + 88);
    if ( !v21 )
      goto LABEL_17;
    v58 = *(_DWORD *)(a1 + 2792);
    if ( !v58 )
    {
LABEL_128:
      *(_WORD *)(a1 + 88) = v21 - 1;
      goto LABEL_17;
    }
    v59 = *(_QWORD *)(a1 + 2784) + 24LL * v58 - 24;
    while ( 1 )
    {
      if ( v21 == *(_WORD *)(v59 + 14) )
      {
        if ( *(_DWORD *)(v59 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_123;
      }
      else if ( v21 > *(_WORD *)(v59 + 14) )
      {
        goto LABEL_123;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v59 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v59 + 18) )
        goto LABEL_128;
LABEL_123:
      --v58;
      v59 -= 24;
      *(_DWORD *)(a1 + 2792) = v58;
      if ( !v58 )
        goto LABEL_128;
    }
  }
  if ( (unsigned __int16)(v16 - 20) <= 1u )
  {
    v17 = *(_WORD *)(a1 + 90);
    if ( v16 == 20 )
    {
      *(_WORD *)(a1 + 90) = v17 + 1;
    }
    else if ( v17 )
    {
      v18 = *(_DWORD *)(a1 + 2792);
      if ( v18 )
      {
        v19 = *(_WORD *)(a1 + 88);
        v20 = *(_QWORD *)(a1 + 2784) + 24LL * v18 - 24;
        do
        {
          if ( v19 == *(_WORD *)(v20 + 14) )
          {
            if ( *(_DWORD *)(v20 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_10;
          }
          else if ( v19 > *(_WORD *)(v20 + 14) )
          {
            goto LABEL_10;
          }
          if ( *(_WORD *)(v20 + 16) >= v17 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v20 + 18) )
            break;
LABEL_10:
          --v18;
          v20 -= 24;
          *(_DWORD *)(a1 + 2792) = v18;
        }
        while ( v18 );
      }
      *(_WORD *)(a1 + 90) = v17 - 1;
    }
    goto LABEL_17;
  }
  if ( (unsigned __int16)(v16 - 24) <= 1u )
  {
    v54 = *(_WORD *)(a1 + 92);
    if ( v16 == 24 )
    {
      *(_WORD *)(a1 + 92) = v54 + 1;
    }
    else if ( v54 )
    {
      v55 = *(_DWORD *)(a1 + 2792);
      if ( v55 )
      {
        v56 = *(_WORD *)(a1 + 88);
        v57 = *(_QWORD *)(a1 + 2784) + 24LL * v55 - 24;
        do
        {
          if ( v56 == *(_WORD *)(v57 + 14) )
          {
            if ( *(_DWORD *)(v57 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_114;
          }
          else if ( v56 > *(_WORD *)(v57 + 14) )
          {
            goto LABEL_114;
          }
          if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v57 + 16) && *(_WORD *)(v57 + 18) >= v54 )
            break;
LABEL_114:
          --v55;
          v57 -= 24;
          *(_DWORD *)(a1 + 2792) = v55;
        }
        while ( v55 );
      }
      *(_WORD *)(a1 + 92) = v54 - 1;
    }
LABEL_17:
    v22 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v22, v5);
    goto LABEL_18;
  }
  if ( (unsigned __int16)(v16 - 14) <= 1u || (unsigned __int16)(v16 - 17) <= 2u || v16 == 3 || !sub_10CCDE0(v16) )
    goto LABEL_17;
  v65 = *(_DWORD *)(a1 + 20);
  v66 = *(__int64 **)(a1 + 8);
  if ( !v65 )
    v65 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v65;
  sub_14634E0(v66, v5);
LABEL_18:
  v23 = *(_QWORD *)(a1 + 96);
  v72 = 0;
  sub_183C090(v23);
  v24 = *(_QWORD *)(a1 + 96);
  sub_18C74E0(v24, 7, 0, 4);
  v25 = sub_14A0C50(a1, *(_QWORD *)(a2 + 16), 0, &v72);
  sub_183C370(*(_QWORD *)(a1 + 96), *(_QWORD *)(a2 + 16), v72, v25);
  v26 = *(_WORD *)(a1 + 32);
  if ( v26 != 1 )
  {
    if ( v25 == 1 )
      goto LABEL_44;
    v27 = sub_13DC060(
            *(_DWORD *)(a1 + 40),
            0,
            *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
            v13,
            a4);
    if ( !v27 )
      v27 = *(_DWORD *)(a1 + 16);
    sub_1564820(&v73, a1, v27, 1647);
    if ( (_BYTE)v78 )
    {
      sub_FC7790(v75, (__int64 *)&v73, SHIBYTE(v78));
      v28 = v76;
      v75 = 0;
      v78 = 0;
      if ( v76 == v77 )
        goto LABEL_25;
    }
    else
    {
      v28 = v76;
      if ( v76 == v77 )
      {
LABEL_25:
        v29 = (void **)v73;
        if ( v73 )
        {
          v30 = v74;
          if ( v74 )
          {
            if ( (unsigned __int64)v73 >= v74 && (unsigned __int64)v73 <= v74 + 14848 )
            {
              v64 = *(unsigned int *)(v74 + 14976);
              *(_DWORD *)(v74 + 14976) = v64 + 1;
              *(_QWORD *)(v30 + 8 * v64 + 14848) = v29;
              goto LABEL_43;
            }
            v31 = *((void ***)v73 + 66);
            v32 = &v31[8 * (unsigned __int64)*((unsigned int *)v73 + 134)];
            if ( v31 != v32 )
            {
              do
              {
                while ( 1 )
                {
                  v32 -= 8;
                  v33 = (void **)v32[3];
                  if ( v33 == v32 + 5 )
                    break;
                  v70 = v32;
                  v68 = v31;
                  operator delete(v33);
                  v31 = v68;
                  v32 = v70;
                  if ( v68 == v70 )
                    goto LABEL_31;
                }
              }
              while ( v31 != v32 );
LABEL_31:
              v32 = (void **)v29[66];
            }
            if ( v32 != v29 + 68 )
              free(v32);
            v34 = (void **)v29[52];
            v35 = v29 + 52;
            if ( v34 != v29 + 54 )
            {
              free(v34);
              v35 = v29 + 52;
            }
            v69 = v29 + 12;
            while ( 1 )
            {
              v35 -= 4;
              if ( *v35 == v35 + 2 )
              {
                if ( v35 == v69 )
                {
LABEL_39:
                  operator delete(v29, 0x3A0u);
                  goto LABEL_43;
                }
              }
              else
              {
                v71 = v35;
                operator delete(*v35);
                v35 = v71;
                if ( v71 == v69 )
                  goto LABEL_39;
              }
            }
          }
        }
        while ( 1 )
        {
LABEL_43:
          v26 = *(_WORD *)(a1 + 32);
          if ( v26 == 1 )
            goto LABEL_70;
LABEL_44:
          if ( (unsigned __int16)(v26 - 22) <= 1u )
          {
            v36 = *(_WORD *)(a1 + 88);
            if ( v26 == 22 )
            {
              *(_WORD *)(a1 + 88) = v36 + 1;
              goto LABEL_42;
            }
            if ( !v36 )
              goto LABEL_42;
            v50 = *(_DWORD *)(a1 + 2792);
            if ( !v50 )
            {
LABEL_89:
              *(_WORD *)(a1 + 88) = v36 - 1;
              goto LABEL_42;
            }
            v51 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v50 - 24);
            while ( 2 )
            {
              if ( v51[7] == v36 )
              {
                if ( *((_DWORD *)v51 + 4) != *(_DWORD *)(a1 + 90) )
                {
LABEL_87:
                  if ( *(_WORD *)(a1 + 90) <= v51[8] && *(_WORD *)(a1 + 92) <= v51[9] )
                    goto LABEL_89;
                }
              }
              else if ( v51[7] >= v36 )
              {
                goto LABEL_87;
              }
              --v50;
              v51 -= 12;
              *(_DWORD *)(a1 + 2792) = v50;
              if ( !v50 )
                goto LABEL_89;
              continue;
            }
          }
          if ( (unsigned __int16)(v26 - 20) <= 1u )
            break;
          if ( (unsigned __int16)(v26 - 24) > 1u )
          {
            if ( (unsigned __int16)(v26 - 14) <= 1u || (unsigned __int16)(v26 - 17) <= 2u )
              goto LABEL_42;
            if ( v26 == 3 )
            {
              sub_1566D30(a1);
            }
            else
            {
              if ( !sub_10CCDE0(v26) )
                goto LABEL_42;
              v52 = *(_DWORD *)(a1 + 20);
              v53 = *(__int64 **)(a1 + 8);
              if ( !v52 )
                v52 = *(_DWORD *)(a1 + 16);
              *(_DWORD *)(a1 + 40) = v52;
              sub_14634E0(v53, v5);
            }
          }
          else
          {
            v42 = *(_WORD *)(a1 + 92);
            if ( v26 != 24 )
            {
              if ( !v42 )
                goto LABEL_42;
              v43 = *(_DWORD *)(a1 + 2792);
              if ( !v43 )
              {
LABEL_69:
                *(_WORD *)(a1 + 92) = v42 - 1;
                goto LABEL_42;
              }
              v44 = *(_WORD *)(a1 + 88);
              v45 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v43 - 24);
              while ( 2 )
              {
                if ( v44 == v45[7] )
                {
                  if ( *((_DWORD *)v45 + 4) != *(_DWORD *)(a1 + 90) )
                  {
LABEL_67:
                    if ( *(_WORD *)(a1 + 90) <= v45[8] && v45[9] >= v42 )
                      goto LABEL_69;
                  }
                }
                else if ( v44 <= v45[7] )
                {
                  goto LABEL_67;
                }
                --v43;
                v45 -= 12;
                *(_DWORD *)(a1 + 2792) = v43;
                if ( !v43 )
                  goto LABEL_69;
                continue;
              }
            }
            *(_WORD *)(a1 + 92) = v42 + 1;
LABEL_42:
            v37 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v37, v5);
          }
        }
        v38 = *(_WORD *)(a1 + 90);
        if ( v26 == 20 )
        {
          *(_WORD *)(a1 + 90) = v38 + 1;
        }
        else if ( v38 )
        {
          v39 = *(_DWORD *)(a1 + 2792);
          if ( v39 )
          {
            v40 = *(_WORD *)(a1 + 88);
            v41 = *(_QWORD *)(a1 + 2784) + 24LL * v39 - 24;
            do
            {
              if ( v40 == *(_WORD *)(v41 + 14) )
              {
                if ( *(_DWORD *)(v41 + 16) == *(_DWORD *)(a1 + 90) )
                  goto LABEL_51;
              }
              else if ( v40 > *(_WORD *)(v41 + 14) )
              {
                goto LABEL_51;
              }
              if ( *(_WORD *)(v41 + 16) >= v38 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v41 + 18) )
                break;
LABEL_51:
              --v39;
              v41 -= 24;
              *(_DWORD *)(a1 + 2792) = v39;
            }
            while ( v39 );
          }
          *(_WORD *)(a1 + 90) = v38 - 1;
        }
        goto LABEL_42;
      }
    }
    operator delete(v28);
    goto LABEL_25;
  }
LABEL_70:
  if ( *(_QWORD *)(a1 + 24) == *(_QWORD *)(a2 + 16) )
    sub_146AA30(a1);
  sub_190D5E0(v24);
  v46 = *(_DWORD *)(a1 + 2792);
  if ( v46 )
  {
    v47 = *(_WORD *)(a1 + 88);
    v48 = *(_QWORD *)(a1 + 2784) + 24LL * v46 - 24;
    do
    {
      if ( v47 == *(_WORD *)(v48 + 14) )
      {
        if ( *(_DWORD *)(v48 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_75;
      }
      else if ( v47 > *(_WORD *)(v48 + 14) )
      {
        goto LABEL_75;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v48 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v48 + 18) )
        break;
LABEL_75:
      --v46;
      v48 -= 24;
      *(_DWORD *)(a1 + 2792) = v46;
    }
    while ( v46 );
  }
  *(_DWORD *)(a1 + 88) = v8;
  *(_WORD *)(a1 + 92) = v67;
  return v67;
}
