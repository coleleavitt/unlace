__int64 __fastcall sub_59D320(char **a1, __int64 a2)
{
  unsigned int v4; // r12d
  unsigned int v5; // r13d
  _BYTE *v6; // rax
  int v7; // r13d
  unsigned int v8; // ebp
  int v9; // esi
  __int64 v10; // rbp
  __int64 v11; // r8
  int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r12
  int v18; // eax
  __int64 v19; // r9
  _BYTE *v20; // rdi
  __int64 v21; // rax
  _BYTE *v22; // r8
  _BYTE *v23; // rax
  __int64 result; // rax
  int v25; // eax
  __int64 v26; // r8
  _BYTE *v27; // rdx
  __int64 v28; // rax
  _BYTE *v29; // rdi
  _BYTE *v30; // rax
  unsigned __int64 v31; // xmm1_8
  __int64 v32; // rax
  _BYTE *v33; // rsi
  void *v34; // rbx
  size_t v35; // rdx
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // r9
  unsigned int v40; // r10d
  __int64 v41; // rdx
  __int64 v42; // rbx
  char *v43; // rax
  __int64 v44; // rdx
  int v45; // edi
  __int64 v46; // rsi
  _QWORD *v47; // rdx
  _QWORD *v48; // rbp
  __int64 v49; // rdx
  char *v50; // rbp
  char *v51; // rbx
  __int64 v52; // rdi
  unsigned int v53; // [rsp+8h] [rbp-70h]
  char *v54; // [rsp+8h] [rbp-70h]
  _QWORD *v55; // [rsp+10h] [rbp-68h]
  __int64 v56; // [rsp+18h] [rbp-60h]
  char *v57; // [rsp+20h] [rbp-58h]
  _QWORD *v58; // [rsp+28h] [rbp-50h]
  unsigned __int8 *v59[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = *((_DWORD *)a1 + 2);
  v5 = 2 * v4;
  if ( 3 * v4 >= 4 * (*((_DWORD *)a1 + 3) + *((_DWORD *)a1 + 4)) )
    goto LABEL_2;
  v4 *= 2;
  v37 = (_QWORD *)sub_186B270(32LL * v5);
  v38 = 32LL * v5;
  v55 = v37;
  v39 = (_QWORD *)((char *)v37 + v38);
  if ( v5 )
  {
    do
    {
      *v37 = 0;
      v37 += 4;
      *(v37 - 3) = 0;
    }
    while ( v39 != v37 );
  }
  v40 = v5 - 1;
  v41 = *((unsigned int *)a1 + 2);
  v42 = (__int64)(*a1 + 8);
  v43 = &(*a1)[32 * v41];
  if ( *a1 != v43 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v42 - 4) != 2 )
      {
        v44 = v42 + 32;
        if ( v43 == (char *)(v42 + 24) )
          goto LABEL_69;
        goto LABEL_58;
      }
      v45 = *(_DWORD *)(v42 - 8);
      v46 = 32LL * (v45 & v40);
      v47 = &v55[(unsigned __int64)v46 / 8];
      if ( v46 == v38 )
      {
LABEL_84:
        if ( v47 == v55 )
        {
LABEL_95:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v48 = v55;
        while ( *((_DWORD *)v48 + 1) )
        {
          v48 += 4;
          if ( v47 == v48 )
            goto LABEL_95;
        }
        *(_DWORD *)v48 = v45;
        *((_DWORD *)v48 + 1) = 2;
        if ( (_QWORD *)v42 != v48 + 1 )
        {
          v49 = v48[1];
          if ( v49 )
          {
LABEL_66:
            v58 = v39;
            v57 = v43;
            v56 = v38;
            v53 = v40;
            sub_186B220((void *)(v49 - 8));
            v39 = v58;
            v43 = v57;
            v38 = v56;
            v40 = v53;
          }
LABEL_67:
          v48[1] = 0;
          v48[1] = *(_QWORD *)v42;
          *(_QWORD *)v42 = 0;
        }
      }
      else
      {
        v48 = &v55[(unsigned __int64)v46 / 8];
        while ( *((_DWORD *)v48 + 1) )
        {
          v48 += 4;
          if ( v39 == v48 )
            goto LABEL_84;
        }
        *(_DWORD *)v48 = v45;
        *((_DWORD *)v48 + 1) = 2;
        if ( (_QWORD *)v42 != v48 + 1 )
        {
          v49 = v48[1];
          if ( v49 )
            goto LABEL_66;
          goto LABEL_67;
        }
      }
      *((_DWORD *)v48 + 4) = *(_DWORD *)(v42 + 8);
      *((_DWORD *)v48 + 6) = *(_DWORD *)(v42 + 16);
      v44 = v42 + 32;
      if ( v43 == (char *)(v42 + 24) )
      {
LABEL_69:
        v41 = *((unsigned int *)a1 + 2);
        v43 = *a1;
        break;
      }
LABEL_58:
      v42 = v44;
    }
  }
  if ( v43 )
  {
    if ( (_DWORD)v41 )
    {
      v50 = v43;
      v51 = &v43[32 * v41];
      do
      {
        while ( 1 )
        {
          v52 = *((_QWORD *)v50 + 1);
          if ( !v52 )
            break;
          v50 += 32;
          v54 = v43;
          sub_186B220((void *)(v52 - 8));
          v43 = v54;
          if ( v51 == v50 )
            goto LABEL_75;
        }
        v50 += 32;
      }
      while ( v50 != v51 );
    }
LABEL_75:
    sub_186B220(v43);
  }
  *((_DWORD *)a1 + 2) = v5;
  *((_DWORD *)a1 + 4) = 0;
  *a1 = (char *)v55;
LABEL_2:
  v6 = *(_BYTE **)a2;
  v7 = 778;
  if ( !*(_QWORD *)a2 )
    goto LABEL_4;
  v8 = *((_DWORD *)v6 - 1);
  if ( !v8 )
    goto LABEL_4;
  v31 = _mm_unpacklo_epi32((__m128i)*((unsigned int *)v6 - 2), _mm_cvtsi32_si128(v8)).m128i_u64[0];
  v32 = sub_186B270(*((unsigned int *)v6 - 2) + 8LL);
  v33 = *(_BYTE **)a2;
  *(_QWORD *)v32 = v31;
  v34 = (void *)v32;
  v59[0] = (unsigned __int8 *)(v32 + 8);
  if ( !v33 )
  {
LABEL_106:
    v7 = sub_5963C0(v59, v8);
    goto LABEL_44;
  }
  v35 = *((unsigned int *)v33 - 1);
  if ( v35 <= 1 )
  {
    if ( v35 == 1 )
    {
      *(_BYTE *)(v32 + 8) = *v33;
      v7 = sub_5963C0(v59, v8);
      goto LABEL_44;
    }
    goto LABEL_106;
  }
  memmove((void *)(v32 + 8), v33, v35);
  v7 = sub_5963C0(v59, v8);
LABEL_44:
  sub_186B220(v34);
  v4 = *((_DWORD *)a1 + 2);
LABEL_4:
  v9 = *(_DWORD *)(a2 + 8);
  v10 = (__int64)*a1;
  v11 = 32LL * v4;
  v12 = v9 ^ v7;
  v13 = (__int64)&(*a1)[v11];
  v14 = 32LL * (v12 & (v4 - 1));
  v15 = (__int64)&(*a1)[v14];
  if ( v14 == v11 )
  {
    v17 = 0;
LABEL_22:
    if ( v10 == v15 )
    {
LABEL_52:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v25 = *(_DWORD *)(v10 + 4);
      if ( v25 == 2 )
      {
        if ( v12 == *(_DWORD *)v10 && v9 == *(_DWORD *)(v10 + 16) )
        {
          v26 = *(_QWORD *)(v10 + 8);
          v27 = *(_BYTE **)a2;
          if ( v26 )
          {
            v28 = *(unsigned int *)(v26 - 4);
            if ( v27 )
            {
              if ( (_DWORD)v28 == *((_DWORD *)v27 - 1) )
              {
                v29 = (_BYTE *)(v26 + v28);
                if ( v26 == v26 + v28 )
                  goto LABEL_37;
                v30 = *(_BYTE **)(v10 + 8);
                while ( *v30 == *v27 )
                {
                  ++v30;
                  ++v27;
                  if ( v29 == v30 )
                    goto LABEL_37;
                }
              }
            }
            else if ( !(_DWORD)v28 )
            {
LABEL_37:
              if ( a2 != v10 + 8 )
              {
                sub_186B220((void *)(v26 - 8));
                v9 = *(_DWORD *)(a2 + 8);
                goto LABEL_39;
              }
              goto LABEL_40;
            }
          }
          else if ( !v27 || !*((_DWORD *)v27 - 1) )
          {
            if ( a2 != v10 + 8 )
            {
LABEL_39:
              *(_QWORD *)(v10 + 8) = 0;
              *(_QWORD *)(v10 + 8) = *(_QWORD *)a2;
              *(_QWORD *)a2 = 0;
            }
LABEL_40:
            result = *(unsigned int *)(a2 + 16);
            *(_DWORD *)(v10 + 16) = v9;
            *(_DWORD *)(v10 + 4) = 2;
            *(_DWORD *)(v10 + 24) = result;
            return result;
          }
        }
      }
      else
      {
        if ( !v25 )
        {
          if ( v17 )
            --*((_DWORD *)a1 + 4);
          else
            v17 = v10;
          if ( a2 != v17 + 8 )
          {
            v36 = *(_QWORD *)(v17 + 8);
            if ( v36 )
            {
LABEL_49:
              sub_186B220((void *)(v36 - 8));
              v9 = *(_DWORD *)(a2 + 8);
            }
LABEL_50:
            *(_QWORD *)(v17 + 8) = 0;
            *(_QWORD *)(v17 + 8) = *(_QWORD *)a2;
            *(_QWORD *)a2 = 0;
          }
          goto LABEL_51;
        }
        v17 = v10;
      }
      v10 += 32;
      if ( v15 == v10 )
        goto LABEL_52;
    }
  }
  v16 = (__int64)&(*a1)[v14];
  v17 = 0;
  while ( 1 )
  {
    v18 = *(_DWORD *)(v16 + 4);
    if ( v18 != 2 )
      break;
    if ( v12 == *(_DWORD *)v16 && v9 == *(_DWORD *)(v16 + 16) )
    {
      v19 = *(_QWORD *)(v16 + 8);
      v20 = *(_BYTE **)a2;
      if ( v19 )
      {
        v21 = *(unsigned int *)(v19 - 4);
        if ( v20 )
        {
          if ( (_DWORD)v21 == *((_DWORD *)v20 - 1) )
          {
            v22 = (_BYTE *)(v19 + v21);
            if ( v19 == v19 + v21 )
              goto LABEL_19;
            v23 = *(_BYTE **)(v16 + 8);
            while ( *v23 == *v20 )
            {
              ++v23;
              ++v20;
              if ( v22 == v23 )
                goto LABEL_19;
            }
          }
        }
        else if ( !(_DWORD)v21 )
        {
LABEL_19:
          if ( a2 != v16 + 8 )
          {
            sub_186B220((void *)(v19 - 8));
            v9 = *(_DWORD *)(a2 + 8);
LABEL_99:
            *(_QWORD *)(v16 + 8) = 0;
            *(_QWORD *)(v16 + 8) = *(_QWORD *)a2;
            *(_QWORD *)a2 = 0;
          }
LABEL_20:
          result = *(unsigned int *)(a2 + 16);
          *(_DWORD *)(v16 + 16) = v9;
          *(_DWORD *)(v16 + 4) = 2;
          *(_DWORD *)(v16 + 24) = result;
          return result;
        }
      }
      else if ( !v20 || !*((_DWORD *)v20 - 1) )
      {
        if ( a2 != v16 + 8 )
          goto LABEL_99;
        goto LABEL_20;
      }
    }
LABEL_8:
    v16 += 32;
    if ( v13 == v16 )
      goto LABEL_22;
  }
  if ( v18 )
  {
    v17 = v16;
    goto LABEL_8;
  }
  if ( v17 )
    --*((_DWORD *)a1 + 4);
  else
    v17 = v16;
  if ( a2 != v17 + 8 )
  {
    v36 = *(_QWORD *)(v17 + 8);
    if ( v36 )
      goto LABEL_49;
    goto LABEL_50;
  }
LABEL_51:
  *(_DWORD *)(v17 + 16) = v9;
  result = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(v17 + 4) = 2;
  *(_DWORD *)(v17 + 24) = result;
  *(_DWORD *)v17 = v12;
  ++*((_DWORD *)a1 + 3);
  return result;
}

