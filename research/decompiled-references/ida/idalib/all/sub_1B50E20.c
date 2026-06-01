__int64 __fastcall sub_1B50E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 **v7; // rax
  __int64 *v8; // rdx
  unsigned __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  _QWORD *v15; // rbx
  __m128i *v16; // rdx
  __int64 result; // rax
  unsigned __int64 v18; // rsi
  __m128i si128; // xmm0
  char v20; // di
  __int64 v21; // rdx
  unsigned int v22; // ecx
  __int64 *v23; // rsi
  __int64 v24; // r13
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 *v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // r10
  _QWORD *v43; // r8
  int v44; // edi
  unsigned int v45; // edx
  __int64 v46; // r9
  int v47; // r10d
  __int64 *v48; // rax
  __int64 *v49; // rcx
  __int64 *v50; // rax
  _QWORD *v51; // r8
  int v52; // edi
  unsigned int v53; // edx
  __int64 v54; // r9
  int v55; // r10d
  __m128 v56; // [rsp+0h] [rbp-68h] BYREF
  __int64 v57; // [rsp+10h] [rbp-58h] BYREF
  _QWORD *v58; // [rsp+18h] [rbp-50h] BYREF
  unsigned int v59; // [rsp+20h] [rbp-48h]

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_8;
  v7 = (__int64 **)sub_B8C3D0(a2, a2, a3, a4, a5, (__int64)a6);
  v8 = *v7;
  v9 = (unsigned __int64)&(*v7)[*((unsigned int *)v7 + 2)];
  if ( (unsigned __int64)v8 < v9 )
  {
    v49 = v8;
    while ( *(_WORD *)(*v49 + 36) != 295 )
    {
      if ( (__int64 *)v9 == ++v49 )
        goto LABEL_8;
    }
    if ( (__int64 *)v9 != v49 )
      goto LABEL_73;
LABEL_8:
    v12 = 0;
    goto LABEL_9;
  }
  if ( v8 == (__int64 *)v9 )
    goto LABEL_8;
  if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 295 )
  {
    v10 = (__int64 *)(v9 + 8);
    while ( v8 != v10 )
    {
      v11 = *v10++;
      if ( *(_WORD *)(v11 + 36) == 295 )
        goto LABEL_73;
    }
    goto LABEL_8;
  }
LABEL_73:
  v12 = *v8;
  if ( *(_WORD *)(*v8 + 36) != 295 )
  {
    v50 = v8 + 1;
    do
      v12 = *v50++;
    while ( *(_WORD *)(v12 + 36) != 295 );
  }
LABEL_9:
  v13 = *(unsigned int *)(a1 + 8);
  *(_QWORD *)(a1 + 64) = v12;
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v13 + 1, 8);
    v13 = *(unsigned int *)(a1 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v13) = a2;
  v14 = *(_DWORD *)(a1 + 8);
  v15 = &v58;
  v57 = 1;
  v16 = (__m128i *)&v58;
  result = (unsigned int)(v14 + 1);
  *(_DWORD *)(a1 + 8) = result;
  v18 = ((unsigned __int64)((char *)(&v56 + 3) - (char *)&v58) >> 3) + 1;
  if ( &v58 == (_QWORD **)(&v56 + 3) )
    goto LABEL_15;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
  do
    *v16++ = si128;
  while ( v16 != (__m128i *)&(&v58)[2 * (v18 >> 1)] );
  v15 = &(&v58)[v18 & 0xFFFFFFFFFFFFFFFELL];
  if ( v18 != (v18 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_15:
    *v15 = -4096;
  v20 = v57 & 1;
  while ( (_DWORD)result )
  {
    v24 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)result - 8);
    *(_DWORD *)(a1 + 8) = result - 1;
    if ( v20 )
    {
      v21 = 4;
      a6 = &v58;
      v22 = ((unsigned __int8)((unsigned int)v24 >> 9) ^ (unsigned __int8)((unsigned int)v24 >> 4)) & 3;
      v23 = (__int64 *)&(&v58)[((unsigned __int8)((unsigned int)v24 >> 9)
                              ^ (unsigned __int8)((unsigned int)v24 >> 4))
                             & 3];
      a5 = *v23;
      if ( v24 == *v23 )
        goto LABEL_19;
      v26 = 3;
    }
    else
    {
      v25 = v59;
      if ( !v59 )
      {
        v23 = nullptr;
        v27 = ((unsigned int)v57 >> 1) + 1;
LABEL_26:
        v28 = (unsigned int)(4 * v27);
        if ( (unsigned int)v28 >= 3 * (int)v25 )
          goto LABEL_47;
LABEL_27:
        v29 = (unsigned int)(v25 - HIDWORD(v57) - v27);
        if ( (unsigned int)v29 <= (unsigned int)v25 >> 3 )
        {
          sub_1B508C0((__int64)&v57, v25, v29, v27, a5, (__int64)a6);
          if ( (v57 & 1) != 0 )
          {
            v52 = 3;
            v51 = &v58;
          }
          else
          {
            v51 = v58;
            if ( !v59 )
              goto LABEL_104;
            v52 = v59 - 1;
          }
          v53 = v52 & (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
          v23 = &v51[v53];
          v54 = *v23;
          LODWORD(v27) = ((unsigned int)v57 >> 1) + 1;
          if ( v24 != *v23 )
          {
            v55 = 1;
            v48 = nullptr;
            if ( v54 != -4096 )
            {
              while ( 1 )
              {
                if ( v54 == -8192 && !v48 )
                  v48 = v23;
                v53 = v52 & (v55 + v53);
                v23 = &v51[v53];
                v54 = *v23;
                if ( v24 == *v23 )
                  break;
                if ( v54 == -4096 )
                {
LABEL_57:
                  if ( v48 )
                    v23 = v48;
                  goto LABEL_28;
                }
                ++v55;
              }
            }
          }
        }
        goto LABEL_28;
      }
      v26 = v59 - 1;
      a6 = v58;
      v22 = (v59 - 1) & (((unsigned int)v24 >> 4) ^ ((unsigned int)v24 >> 9));
      v23 = &v58[v22];
      a5 = *v23;
      if ( *v23 == v24 )
      {
LABEL_24:
        v21 = v25;
LABEL_19:
        sub_AEADE0(&v56, v23, &a6[v21], (__int64)&v57, 1);
        goto LABEL_20;
      }
    }
    v41 = 1;
    v42 = nullptr;
    if ( a5 == -4096 )
      goto LABEL_45;
    while ( 1 )
    {
      if ( a5 == -8192 && !v42 )
        v42 = v23;
      v22 = v26 & (v41 + v22);
      v23 = &a6[v22];
      a5 = *v23;
      if ( v24 == *v23 )
      {
        if ( !v20 )
        {
          a6 = v58;
          v25 = v59;
          goto LABEL_24;
        }
        v21 = 4;
        a6 = &v58;
        goto LABEL_19;
      }
      if ( a5 == -4096 )
        break;
      ++v41;
    }
    if ( v42 )
      v23 = v42;
LABEL_45:
    v27 = ((unsigned int)v57 >> 1) + 1;
    if ( !v20 )
    {
      LODWORD(v25) = v59;
      goto LABEL_26;
    }
    v28 = (unsigned int)(4 * v27);
    LODWORD(v25) = 4;
    if ( (unsigned int)v28 < 0xC )
      goto LABEL_27;
LABEL_47:
    sub_1B508C0((__int64)&v57, 2 * v25, v28, v27, a5, (__int64)a6);
    if ( (v57 & 1) == 0 )
    {
      v43 = v58;
      if ( v59 )
      {
        v44 = v59 - 1;
        goto LABEL_50;
      }
LABEL_104:
      LODWORD(v57) = (2 * ((unsigned int)v57 >> 1) + 2) | v57 & 1;
      BUG();
    }
    v44 = 3;
    v43 = &v58;
LABEL_50:
    v45 = v44 & (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
    v23 = &v43[v45];
    v46 = *v23;
    LODWORD(v27) = ((unsigned int)v57 >> 1) + 1;
    if ( v24 != *v23 )
    {
      v47 = 1;
      v48 = nullptr;
      if ( v46 != -4096 )
      {
        while ( 1 )
        {
          if ( v46 == -8192 && !v48 )
            v48 = v23;
          v45 = v44 & (v47 + v45);
          v23 = &v43[v45];
          v46 = *v23;
          if ( v24 == *v23 )
            break;
          if ( v46 == -4096 )
            goto LABEL_57;
          ++v47;
        }
      }
    }
LABEL_28:
    LODWORD(v57) = v57 & 1 | (2 * v27);
    if ( *v23 != -4096 )
      --HIDWORD(v57);
    *v23 = v24;
    if ( (v57 & 1) != 0 )
    {
      v30 = 4;
      v31 = &v58;
    }
    else
    {
      v31 = v58;
      v30 = v59;
    }
    sub_AEADE0(&v56, v23, &v31[v30], (__int64)&v57, 1);
    if ( (*(_BYTE *)(v24 + 29) & 1) != 0 )
    {
      v34 = sub_B8C3D0(v24, (__int64)v23, v32, v33, a5, (__int64)a6);
      v35 = *v34;
      v36 = *v34 + 8LL * *((unsigned int *)v34 + 2);
      if ( *v34 >= v36 )
      {
        if ( v35 == v36 )
          goto LABEL_20;
        while ( *(_WORD *)(*(_QWORD *)v36 + 36LL) != 295 )
        {
          v36 += 8LL;
          if ( v35 == v36 )
            goto LABEL_20;
        }
        if ( !sub_B735C0(v24) )
          goto LABEL_20;
      }
      else
      {
        v37 = *v34;
        while ( *(_WORD *)(*(_QWORD *)v37 + 36LL) != 295 )
        {
          v37 += 8LL;
          if ( v36 == v37 )
            goto LABEL_20;
        }
        if ( v36 == v37 || !sub_B735C0(v24) )
          goto LABEL_20;
      }
      if ( !sub_9B48E0(v24) )
      {
        v38 = sub_B73640(v24);
        if ( v38 )
          sub_1AF6950(a1, v38, v39, v40, a5, (__int64)a6);
      }
    }
LABEL_20:
    result = *(unsigned int *)(a1 + 8);
    v20 = v57 & 1;
  }
  if ( !v20 )
    return operator delete(v58, 8LL * v59, 8);
  return result;
}
