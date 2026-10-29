__int64 __fastcall sub_5839E0(__int64 a1, __int64 a2)
{
  unsigned int v4; // r12d
  unsigned int v5; // r15d
  _DWORD *v6; // rax
  int v7; // r15d
  unsigned int v8; // ebp
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r12
  int v16; // eax
  _DWORD *v17; // r8
  _DWORD *v18; // rdx
  __int64 v19; // rax
  int v20; // edi
  _DWORD *v21; // rdi
  _DWORD *v22; // rax
  __int64 result; // rax
  int v24; // eax
  _DWORD *v25; // rdi
  _DWORD *v26; // rdx
  __int64 v27; // rax
  int v28; // ecx
  _DWORD *v29; // rcx
  _DWORD *v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // xmm1_8
  __int64 v33; // rax
  _DWORD *v34; // rsi
  void *v35; // rbx
  size_t v36; // rdx
  __int64 v37; // rax
  char *v38; // rax
  __int64 v39; // r8
  char *v40; // rdx
  char *v41; // rsi
  unsigned int v42; // r10d
  __int64 v43; // rdx
  char *v44; // rbx
  char *v45; // rax
  char *v46; // r9
  char *v47; // rdx
  int v48; // edi
  __int64 v49; // rsi
  char *v50; // rdx
  char *v51; // rbp
  __int64 v52; // rdx
  char *v53; // rbp
  char *v54; // rbx
  __int64 v55; // rdi
  unsigned int v56; // [rsp+8h] [rbp-70h]
  char *v57; // [rsp+8h] [rbp-70h]
  char *v58; // [rsp+10h] [rbp-68h]
  char *v59; // [rsp+18h] [rbp-60h]
  char *v60; // [rsp+20h] [rbp-58h]
  __int64 v61; // [rsp+28h] [rbp-50h]
  int *v62[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = *(_DWORD *)(a1 + 16);
  v5 = 2 * v4;
  if ( 3 * v4 >= 4 * (*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 24)) )
    goto LABEL_2;
  v4 *= 2;
  v38 = (char *)sub_186B270(24LL * v5);
  v39 = 24LL * v5;
  v58 = v38;
  v40 = &v38[v39];
  if ( v5 )
  {
    do
    {
      *(_QWORD *)v38 = 0;
      v38 += 24;
      *((_QWORD *)v38 - 2) = 0;
    }
    while ( v38 != v40 );
  }
  v41 = *(char **)(a1 + 8);
  v42 = v5 - 1;
  v43 = *(unsigned int *)(a1 + 16);
  v44 = v41 + 8;
  v45 = &v41[24 * v43];
  v46 = &v58[v39];
  if ( v41 != v45 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v44 - 1) != 2 )
      {
        v47 = v44 + 24;
        if ( v45 == v44 + 16 )
          goto LABEL_68;
        goto LABEL_57;
      }
      v48 = *((_DWORD *)v44 - 2);
      v49 = 24LL * (v48 & v42);
      v50 = &v58[v49];
      if ( v49 == v39 )
      {
LABEL_84:
        if ( v50 == v58 )
        {
LABEL_102:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v51 = v58;
        while ( *((_DWORD *)v51 + 1) )
        {
          v51 += 24;
          if ( v50 == v51 )
            goto LABEL_102;
        }
        *(_DWORD *)v51 = v48;
        *((_DWORD *)v51 + 1) = 2;
        if ( v44 != v51 + 8 )
        {
          v52 = *((_QWORD *)v51 + 1);
          if ( v52 )
          {
LABEL_65:
            v61 = v39;
            v60 = v45;
            v59 = v46;
            v56 = v42;
            sub_186B220((void *)(v52 - 8));
            v39 = v61;
            v45 = v60;
            v46 = v59;
            v42 = v56;
          }
LABEL_66:
          *((_QWORD *)v51 + 1) = 0;
          *((_QWORD *)v51 + 1) = *(_QWORD *)v44;
          *(_QWORD *)v44 = 0;
        }
      }
      else
      {
        v51 = &v58[v49];
        while ( *((_DWORD *)v51 + 1) )
        {
          v51 += 24;
          if ( v46 == v51 )
            goto LABEL_84;
        }
        *(_DWORD *)v51 = v48;
        *((_DWORD *)v51 + 1) = 2;
        if ( v44 != v51 + 8 )
        {
          v52 = *((_QWORD *)v51 + 1);
          if ( v52 )
            goto LABEL_65;
          goto LABEL_66;
        }
      }
      *((_DWORD *)v51 + 4) = *((_DWORD *)v44 + 2);
      v47 = v44 + 24;
      if ( v45 == v44 + 16 )
      {
LABEL_68:
        v43 = *(unsigned int *)(a1 + 16);
        v45 = *(char **)(a1 + 8);
        break;
      }
LABEL_57:
      v44 = v47;
    }
  }
  if ( v45 )
  {
    if ( (_DWORD)v43 )
    {
      v53 = v45;
      v54 = &v45[24 * v43];
      do
      {
        while ( 1 )
        {
          v55 = *((_QWORD *)v53 + 1);
          if ( !v55 )
            break;
          v53 += 24;
          v57 = v45;
          sub_186B220((void *)(v55 - 8));
          v45 = v57;
          if ( v54 == v53 )
            goto LABEL_74;
        }
        v53 += 24;
      }
      while ( v53 != v54 );
    }
LABEL_74:
    sub_186B220(v45);
  }
  *(_DWORD *)(a1 + 16) = v5;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = v58;
LABEL_2:
  v6 = *(_DWORD **)a2;
  v7 = 778;
  if ( !*(_QWORD *)a2 )
    goto LABEL_4;
  v8 = *(v6 - 1);
  if ( !v8 )
    goto LABEL_4;
  v31 = (unsigned int)*(v6 - 2);
  v32 = _mm_unpacklo_epi32((__m128i)v31, _mm_cvtsi32_si128(v8)).m128i_u64[0];
  v33 = sub_186B270(4 * v31 + 8);
  v34 = *(_DWORD **)a2;
  *(_QWORD *)v33 = v32;
  v35 = (void *)v33;
  v62[0] = (int *)(v33 + 8);
  if ( !v34 )
  {
LABEL_105:
    v7 = sub_578120(v62, v8);
    goto LABEL_44;
  }
  v36 = 4LL * (unsigned int)*(v34 - 1);
  if ( v36 <= 4 )
  {
    if ( v36 == 4 )
    {
      *(_DWORD *)(v33 + 8) = *v34;
      v7 = sub_578120(v62, v8);
      goto LABEL_44;
    }
    goto LABEL_105;
  }
  memmove((void *)(v33 + 8), v34, v36);
  v7 = sub_578120(v62, v8);
LABEL_44:
  sub_186B220(v35);
  v4 = *(_DWORD *)(a1 + 16);
LABEL_4:
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 24LL * (v7 & (v4 - 1));
  v11 = 24LL * v4;
  v12 = v9 + v10;
  v13 = v9 + v11;
  if ( v10 == v11 )
  {
    v15 = 0;
LABEL_22:
    if ( v9 == v12 )
    {
LABEL_78:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v24 = *(_DWORD *)(v9 + 4);
      if ( v24 == 2 )
      {
        if ( *(_DWORD *)v9 == v7 )
        {
          v25 = *(_DWORD **)(v9 + 8);
          v26 = *(_DWORD **)a2;
          if ( v25 )
          {
            v27 = (unsigned int)*(v25 - 1);
            if ( v26 )
              v28 = *(v26 - 1);
            else
              v28 = 0;
            if ( (_DWORD)v27 == v28 )
            {
              v29 = &v25[v27];
              if ( v25 == v29 )
              {
LABEL_37:
                if ( a2 != v9 + 8 )
                {
                  sub_186B220(v25 - 2);
                  goto LABEL_39;
                }
                goto LABEL_40;
              }
              v30 = *(_DWORD **)(v9 + 8);
              while ( *v30 == *v26 )
              {
                ++v30;
                ++v26;
                if ( v29 == v30 )
                  goto LABEL_37;
              }
            }
          }
          else if ( !v26 || !*(v26 - 1) )
          {
            if ( a2 != v9 + 8 )
            {
LABEL_39:
              *(_QWORD *)(v9 + 8) = 0;
              *(_QWORD *)(v9 + 8) = *(_QWORD *)a2;
              *(_QWORD *)a2 = 0;
            }
LABEL_40:
            result = *(unsigned int *)(a2 + 8);
            *(_DWORD *)(v9 + 4) = 2;
            *(_DWORD *)(v9 + 16) = result;
            return result;
          }
        }
      }
      else
      {
        if ( !v24 )
        {
          if ( v15 )
            --*(_DWORD *)(a1 + 24);
          else
            v15 = v9;
          if ( a2 != v15 + 8 )
          {
            v37 = *(_QWORD *)(v15 + 8);
            if ( v37 )
LABEL_49:
              sub_186B220((void *)(v37 - 8));
LABEL_50:
            *(_QWORD *)(v15 + 8) = 0;
            *(_QWORD *)(v15 + 8) = *(_QWORD *)a2;
            *(_QWORD *)a2 = 0;
          }
          goto LABEL_51;
        }
        v15 = v9;
      }
      v9 += 24;
      if ( v12 == v9 )
        goto LABEL_78;
    }
  }
  v14 = v9 + v10;
  v15 = 0;
  while ( 1 )
  {
    v16 = *(_DWORD *)(v14 + 4);
    if ( v16 != 2 )
      break;
    if ( *(_DWORD *)v14 == v7 )
    {
      v17 = *(_DWORD **)(v14 + 8);
      v18 = *(_DWORD **)a2;
      if ( v17 )
      {
        v19 = (unsigned int)*(v17 - 1);
        if ( v18 )
          v20 = *(v18 - 1);
        else
          v20 = 0;
        if ( (_DWORD)v19 == v20 )
        {
          v21 = &v17[v19];
          if ( v17 == v21 )
          {
LABEL_19:
            if ( a2 != v14 + 8 )
            {
              sub_186B220(v17 - 2);
LABEL_82:
              *(_QWORD *)(v14 + 8) = 0;
              *(_QWORD *)(v14 + 8) = *(_QWORD *)a2;
              *(_QWORD *)a2 = 0;
            }
LABEL_20:
            result = *(unsigned int *)(a2 + 8);
            *(_DWORD *)(v14 + 4) = 2;
            *(_DWORD *)(v14 + 16) = result;
            return result;
          }
          v22 = *(_DWORD **)(v14 + 8);
          while ( *v22 == *v18 )
          {
            ++v22;
            ++v18;
            if ( v21 == v22 )
              goto LABEL_19;
          }
        }
      }
      else if ( !v18 || !*(v18 - 1) )
      {
        if ( a2 != v14 + 8 )
          goto LABEL_82;
        goto LABEL_20;
      }
    }
LABEL_8:
    v14 += 24;
    if ( v13 == v14 )
      goto LABEL_22;
  }
  if ( v16 )
  {
    v15 = v14;
    goto LABEL_8;
  }
  if ( v15 )
    --*(_DWORD *)(a1 + 24);
  else
    v15 = v14;
  if ( a2 != v15 + 8 )
  {
    v37 = *(_QWORD *)(v15 + 8);
    if ( v37 )
      goto LABEL_49;
    goto LABEL_50;
  }
LABEL_51:
  result = *(unsigned int *)(a2 + 8);
  *(_DWORD *)v15 = v7;
  *(_DWORD *)(v15 + 4) = 2;
  *(_DWORD *)(v15 + 16) = result;
  ++*(_DWORD *)(a1 + 20);
  return result;
}

