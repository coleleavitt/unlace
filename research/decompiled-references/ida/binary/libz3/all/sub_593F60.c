__int64 __fastcall sub_593F60(__int64 a1, _QWORD **a2)
{
  _QWORD *v3; // r12
  __m128i v4; // xmm0
  unsigned int v5; // ebp
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  size_t v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // r14d
  int v11; // r14d
  __int64 v12; // r13
  unsigned int v13; // ebx
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 result; // rax
  _QWORD *v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // r8
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // r8
  __int64 v28; // rax
  _QWORD *v29; // rsi
  _QWORD *v30; // rdx
  _QWORD *v31; // rax
  size_t v32; // rdi
  __int64 *v33; // rax
  __int64 *v34; // rbx
  __int64 v35; // rdx
  size_t v36; // rdx
  size_t v37; // rbp
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  char *v40; // rsi
  __int64 v41; // rdx
  char *v42; // r8
  _QWORD *v43; // r10
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  int v46; // edi
  __int64 v47; // rdx
  _QWORD *v48; // rsi
  _QWORD *v49; // rdx
  __int64 v50; // rsi
  char *v51; // rax
  char *v52; // rbp
  __int64 v53; // rdi
  _QWORD *v54; // rax
  char *v55; // [rsp+0h] [rbp-78h]
  char *v56; // [rsp+8h] [rbp-70h]
  _QWORD *v57; // [rsp+10h] [rbp-68h]
  _QWORD *v58; // [rsp+18h] [rbp-60h]
  _QWORD *v59; // [rsp+20h] [rbp-58h]
  _QWORD *v60; // [rsp+28h] [rbp-50h]
  __int64 *v61[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v4 = _mm_loadl_epi64((const __m128i *)(v3 - 1));
    v5 = *((_DWORD *)v3 - 1);
    v55 = (char *)v4.m128i_i64[0];
    v6 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v4) + 8);
    v7 = *a2;
    v3 = v6 + 1;
    *v6 = v4.m128i_i64[0];
    if ( v7 )
    {
      v8 = 8LL * *((unsigned int *)v7 - 1);
      if ( v8 <= 8 )
      {
        if ( v8 == 8 )
          v6[1] = *v7;
      }
      else
      {
        memmove(v6 + 1, v7, v8);
      }
    }
    v9 = *(_DWORD *)(a1 + 48);
    v10 = 2 * v9;
    if ( 3 * v9 >= 4 * (*(_DWORD *)(a1 + 56) + *(_DWORD *)(a1 + 52)) )
    {
      if ( !v5 )
        goto LABEL_7;
LABEL_40:
      v32 = 8LL * *((unsigned int *)v3 - 2) + 8;
      LODWORD(v55) = *((_DWORD *)v3 - 2);
      v33 = (__int64 *)sub_186B270(v32);
      v34 = v33;
      v35 = *((unsigned int *)v3 - 1);
      v61[0] = v33 + 1;
      v36 = 8 * v35;
      *v33 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v55), _mm_cvtsi32_si128(v5)).m128i_u64[0];
      if ( v36 <= 8 )
      {
        if ( v36 == 8 )
          v33[1] = *v3;
        v11 = sub_592970(v61, v5);
      }
      else
      {
        memcpy(v33 + 1, v3, v36);
        v11 = sub_592970(v61, v5);
      }
      sub_186B220(v34);
      v12 = *(unsigned int *)(a1 + 48);
      v13 = v12 - 1;
      goto LABEL_8;
    }
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 48);
    v10 = 2 * v9;
    if ( 3 * v9 >= 4 * (*(_DWORD *)(a1 + 56) + *(_DWORD *)(a1 + 52)) )
      goto LABEL_7;
  }
  v12 = v10;
  LODWORD(v55) = v10;
  v37 = 16LL * v10;
  v38 = (_QWORD *)sub_186B270(v37);
  v58 = v38;
  v9 = (unsigned int)v55;
  v39 = &v38[v37 / 8];
  if ( v10 )
  {
    do
    {
      *v38 = 0;
      v38 += 2;
      *(v38 - 1) = 0;
    }
    while ( v38 != v39 );
  }
  v40 = *(char **)(a1 + 40);
  v13 = v10 - 1;
  v41 = *(unsigned int *)(a1 + 48);
  v42 = &v40[16 * v41];
  v43 = &v58[v37 / 8];
  v44 = v40 + 8;
  if ( v40 != v42 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v44 - 1) != 2 )
      {
LABEL_48:
        v45 = v44 + 2;
        if ( v42 == (char *)(v44 + 1) )
          goto LABEL_59;
        goto LABEL_49;
      }
      v46 = *((_DWORD *)v44 - 2);
      v47 = 16LL * (v46 & v13);
      v48 = &v58[(unsigned __int64)v47 / 8];
      if ( v37 == v47 )
      {
LABEL_82:
        v49 = v58;
        if ( v58 == v48 )
        {
LABEL_99:
          v59 = v44;
          v57 = v43;
          LODWORD(v56) = v9;
          v55 = v42;
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        while ( *((_DWORD *)v49 + 1) )
        {
          v49 += 2;
          if ( v48 == v49 )
            goto LABEL_99;
        }
        *(_DWORD *)v49 = v46;
        *((_DWORD *)v49 + 1) = 2;
        if ( v44 == v49 + 1 )
          goto LABEL_48;
        v50 = v49[1];
        if ( v50 )
          goto LABEL_57;
      }
      else
      {
        v49 = &v58[(unsigned __int64)v47 / 8];
        while ( *((_DWORD *)v49 + 1) )
        {
          v49 += 2;
          if ( v43 == v49 )
            goto LABEL_82;
        }
        *(_DWORD *)v49 = v46;
        *((_DWORD *)v49 + 1) = 2;
        if ( v44 == v49 + 1 )
          goto LABEL_48;
        v50 = v49[1];
        if ( v50 )
        {
LABEL_57:
          v60 = v44;
          v59 = v49;
          v57 = v43;
          LODWORD(v56) = v9;
          v55 = v42;
          sub_186B220((void *)(v50 - 8));
          v44 = v60;
          v49 = v59;
          v43 = v57;
          v9 = (unsigned int)v56;
          v42 = v55;
        }
      }
      v49[1] = 0;
      v49[1] = *v44;
      v45 = v44 + 2;
      v51 = (char *)(v44 + 1);
      *((_QWORD *)v51 - 1) = 0;
      if ( v42 == v51 )
      {
LABEL_59:
        v41 = *(unsigned int *)(a1 + 48);
        v42 = *(char **)(a1 + 40);
        break;
      }
LABEL_49:
      v44 = v45;
    }
  }
  if ( v42 )
  {
    if ( (_DWORD)v41 )
    {
      v52 = v42;
      v55 = &v42[16 * v41];
      do
      {
        while ( 1 )
        {
          v53 = *((_QWORD *)v52 + 1);
          if ( !v53 )
            break;
          LODWORD(v57) = v9;
          v52 += 16;
          v56 = v42;
          sub_186B220((void *)(v53 - 8));
          v42 = v56;
          v9 = (unsigned int)v57;
          if ( v55 == v52 )
            goto LABEL_65;
        }
        v52 += 16;
      }
      while ( v52 != v55 );
    }
LABEL_65:
    LODWORD(v55) = v9;
    sub_186B220(v42);
    v9 = (unsigned int)v55;
  }
  v54 = v58;
  *(_DWORD *)(a1 + 48) = v10;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = v54;
  if ( !v3 )
  {
    v11 = 778;
    goto LABEL_8;
  }
  v5 = *((_DWORD *)v3 - 1);
  if ( v5 )
    goto LABEL_40;
LABEL_7:
  v11 = 778;
  v12 = v9;
  v13 = v9 - 1;
LABEL_8:
  v14 = *(_QWORD *)(a1 + 40);
  v15 = 16 * v12;
  v16 = 16LL * (v11 & v13);
  v17 = v14 + v16;
  v18 = v14 + v15;
  if ( v16 == v15 )
  {
    v20 = 0;
LABEL_25:
    if ( v14 == v17 )
    {
LABEL_76:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      result = *(unsigned int *)(v14 + 4);
      if ( (_DWORD)result == 2 )
      {
        if ( *(_DWORD *)v14 == v11 )
        {
          v27 = *(_QWORD **)(v14 + 8);
          if ( v27 )
          {
            v28 = *((unsigned int *)v27 - 1);
            if ( v3 )
            {
              if ( (_DWORD)v28 == *((_DWORD *)v3 - 1) )
              {
                v29 = &v27[v28];
                if ( v27 == v29 )
                  goto LABEL_39;
                v30 = v3;
                v31 = *(_QWORD **)(v14 + 8);
                while ( *v31 == *v30 )
                {
                  ++v31;
                  ++v30;
                  if ( v29 == v31 )
                    goto LABEL_39;
                }
              }
            }
            else if ( !(_DWORD)v28 )
            {
LABEL_39:
              result = sub_186B220(v27 - 1);
LABEL_96:
              *(_QWORD *)(v14 + 8) = v3;
              *(_DWORD *)(v14 + 4) = 2;
              return result;
            }
          }
          else
          {
            if ( !v3 )
              goto LABEL_96;
            result = *((unsigned int *)v3 - 1);
            if ( !(_DWORD)result )
              goto LABEL_96;
          }
        }
      }
      else
      {
        if ( !(_DWORD)result )
        {
          if ( v20 )
            --*(_DWORD *)(a1 + 56);
          else
            v20 = v14;
          result = *(_QWORD *)(v20 + 8);
          if ( result )
            goto LABEL_72;
          goto LABEL_73;
        }
        v20 = v14;
      }
      v14 += 16;
      if ( v17 == v14 )
        goto LABEL_76;
    }
  }
  v19 = v14 + v16;
  v20 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(v19 + 4);
    if ( (_DWORD)result != 2 )
      break;
    if ( *(_DWORD *)v19 == v11 )
    {
      v22 = *(_QWORD **)(v19 + 8);
      if ( v22 )
      {
        v23 = *((unsigned int *)v22 - 1);
        if ( v3 )
        {
          if ( (_DWORD)v23 == *((_DWORD *)v3 - 1) )
          {
            v24 = &v22[v23];
            if ( v22 == v24 )
              goto LABEL_22;
            v25 = v3;
            v26 = *(_QWORD **)(v19 + 8);
            while ( *v26 == *v25 )
            {
              ++v26;
              ++v25;
              if ( v24 == v26 )
                goto LABEL_22;
            }
          }
        }
        else if ( !(_DWORD)v23 )
        {
LABEL_22:
          result = sub_186B220(v22 - 1);
LABEL_23:
          *(_QWORD *)(v19 + 8) = v3;
          *(_DWORD *)(v19 + 4) = 2;
          return result;
        }
      }
      else
      {
        if ( !v3 )
          goto LABEL_23;
        if ( !*((_DWORD *)v3 - 1) )
        {
          *(_QWORD *)(v19 + 8) = v3;
          *(_DWORD *)(v19 + 4) = 2;
          return result;
        }
      }
    }
LABEL_12:
    v19 += 16;
    if ( v18 == v19 )
      goto LABEL_25;
  }
  if ( (_DWORD)result )
  {
    v20 = v19;
    goto LABEL_12;
  }
  if ( v20 )
    --*(_DWORD *)(a1 + 56);
  else
    v20 = v19;
  result = *(_QWORD *)(v20 + 8);
  if ( result )
LABEL_72:
    result = sub_186B220((void *)(result - 8));
LABEL_73:
  *(_QWORD *)(v20 + 8) = v3;
  *(_DWORD *)(v20 + 4) = 2;
  *(_DWORD *)v20 = v11;
  ++*(_DWORD *)(a1 + 52);
  return result;
}

