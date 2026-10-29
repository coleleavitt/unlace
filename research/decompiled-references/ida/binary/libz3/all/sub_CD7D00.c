_QWORD *__fastcall sub_CD7D00(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rax
  __int64 v3; // r13
  _QWORD *v4; // rbx
  __m128i *v5; // r15
  _QWORD *v6; // r13
  __int64 v8; // rsi
  unsigned int v9; // r9d
  __int64 v10; // rax
  int v11; // r11d
  _QWORD *v12; // rcx
  unsigned int v13; // r14d
  unsigned int v14; // edx
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  _QWORD *v17; // rbp
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // edx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // eax
  int v25; // r12d
  unsigned int v26; // r12d
  __int64 v27; // rcx
  const __m128i *v28; // rbp
  __int64 v29; // rsi
  __m128i *v30; // rax
  __m128i *v31; // rdx
  __int32 v32; // edi
  _QWORD *result; // rax
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int32 v36; // edi
  __m128i *v37; // rdx
  unsigned int *v38; // rsi
  __int32 v39; // ecx
  __int32 v40; // ecx
  __m128i *v41; // rax
  __m128i *v42; // r11
  const __m128i *i; // rax
  __int64 v44; // rdx
  __m128i *v45; // rsi
  __m128i *v46; // rdx
  __m128i v47; // xmm0
  unsigned int v48; // [rsp+8h] [rbp-90h]
  int v49; // [rsp+18h] [rbp-80h]
  __m128i *v50; // [rsp+18h] [rbp-80h]
  size_t v51; // [rsp+20h] [rbp-78h]
  unsigned int v52; // [rsp+20h] [rbp-78h]
  int v53; // [rsp+28h] [rbp-70h]
  int v54; // [rsp+30h] [rbp-68h]
  int v55; // [rsp+34h] [rbp-64h]
  int v56; // [rsp+38h] [rbp-60h]
  size_t v57; // [rsp+38h] [rbp-60h]
  unsigned int v58; // [rsp+40h] [rbp-58h]
  __int64 v59; // [rsp+40h] [rbp-58h]
  __int64 v60; // [rsp+48h] [rbp-50h]
  __m128i *v61; // [rsp+48h] [rbp-50h]

  v2 = (_OWORD *)sub_186B270(0xA0u);
  v3 = *(unsigned int *)(a2 + 8);
  v4 = *(_QWORD **)a2;
  v5 = (__m128i *)v2;
  *v2 = 0;
  *(_OWORD *)((char *)v2 + 20) = 0;
  v6 = &v4[2 * v3];
  *(_OWORD *)((char *)v2 + 40) = 0;
  *(_OWORD *)((char *)v2 + 60) = 0;
  v2[5] = 0;
  *(_OWORD *)((char *)v2 + 100) = 0;
  *(_OWORD *)((char *)v2 + 120) = 0;
  *(_OWORD *)((char *)v2 + 140) = 0;
  if ( v4 == v6 )
    return (_QWORD *)sub_186B220(v5);
  while ( *v4 <= 1u )
  {
    v4 += 2;
    if ( v6 == v4 )
      return (_QWORD *)sub_186B220(v5);
  }
  if ( v6 == v4 )
    return (_QWORD *)sub_186B220(v5);
  v49 = 0;
  v8 = *v4;
  v9 = 8;
  v54 = 0;
  v48 = 0;
  do
  {
    v10 = *(unsigned int *)(a1 + 8);
    v11 = *(_DWORD *)(v8 + 12);
    v12 = *(_QWORD **)a1;
    v13 = *((_DWORD *)v4 + 2);
    v14 = v10 - 1;
    v10 *= 16;
    v15 = (_QWORD *)(*(_QWORD *)a1 + v10);
    v16 = 16LL * (v11 & v14);
    v17 = (_QWORD *)(*(_QWORD *)a1 + v16);
    if ( v16 == v10 )
    {
LABEL_34:
      while ( v17 != v12 )
      {
        v35 = *v12;
        if ( *v12 > 1u )
        {
          if ( *(_DWORD *)(v35 + 12) == v11 && v35 == v8 )
          {
            v18 = v12;
            goto LABEL_33;
          }
        }
        else if ( !v35 )
        {
          break;
        }
        v12 += 2;
      }
LABEL_14:
      sub_1872CE0("");
      sub_1873130(114, 226);
    }
    v18 = (_QWORD *)(*(_QWORD *)a1 + v16);
    while ( 1 )
    {
      v19 = *v18;
      if ( *v18 > 1u )
        break;
      if ( !v19 )
        goto LABEL_14;
LABEL_11:
      v18 += 2;
      if ( v15 == v18 )
        goto LABEL_34;
    }
    if ( *(_DWORD *)(v19 + 12) != v11 || v19 != v8 )
      goto LABEL_11;
LABEL_33:
    v34 = *((_DWORD *)v18 + 2);
    v20 = (2 * v34 - v13) ^ ((v13 - 23 - v34) << 8);
    v21 = (v34 + 23 - (v13 - 23) - v20) ^ (v20 >> 13);
    v22 = (v13 - 23 - v34 - v20 - v21) ^ (v21 >> 12);
    v23 = (v20 - v21 - v22) ^ (v22 << 16);
    v24 = (v21 - v22 - v23) ^ (v23 >> 5);
    v25 = (v22 - v23 - v24) ^ (v24 >> 3);
    v26 = (v24 - v25 - ((v23 - v24 - v25) ^ (v25 << 10))) ^ (((v23 - v24 - v25) ^ (v25 << 10)) >> 15);
    v27 = 20LL * v9;
    v28 = (__m128i *)((char *)v5 + v27);
    v29 = 20LL * (v26 & (v9 - 1));
    v30 = (__m128i *)((char *)v5 + v29);
    if ( v29 != v27 )
    {
      v31 = (__m128i *)((char *)v5 + v29);
      do
      {
        v32 = v31->m128i_i32[1];
        if ( v32 == 2 )
        {
          if ( v31->m128i_i32[0] == v26 && v13 == v31->m128i_i32[2] && v34 == v31->m128i_i32[3] )
          {
LABEL_23:
            *((_DWORD *)v4 + 2) = v31[1].m128i_i32[0];
            goto LABEL_24;
          }
        }
        else if ( !v32 )
        {
          goto LABEL_51;
        }
        v31 = (__m128i *)((char *)v31 + 20);
      }
      while ( v28 != v31 );
    }
    if ( v5 != v30 )
    {
      v31 = v5;
      while ( 1 )
      {
        v36 = v31->m128i_i32[1];
        if ( v36 != 2 )
          break;
        if ( v31->m128i_i32[0] == v26 && v13 == v31->m128i_i32[2] )
        {
          if ( v34 == v31->m128i_i32[3] )
            goto LABEL_23;
          v31 = (__m128i *)((char *)v31 + 20);
          if ( v30 == v31 )
            goto LABEL_51;
        }
        else
        {
LABEL_45:
          v31 = (__m128i *)((char *)v31 + 20);
          if ( v30 == v31 )
            goto LABEL_51;
        }
      }
      if ( !v36 )
        goto LABEL_51;
      goto LABEL_45;
    }
LABEL_51:
    *((_DWORD *)v4 + 2) = v48;
    if ( 3 * v9 < 4 * (v49 + v54) )
    {
      v60 = a1;
      v55 = 2 * v9;
      v58 = v34;
      v56 = 2 * v9;
      v51 = 40LL * v9;
      v41 = (__m128i *)sub_186B270(v51);
      v50 = v41;
      v27 = v51;
      v9 = v55;
      v34 = v58;
      a1 = v60;
      v42 = (__m128i *)((char *)v41 + v51);
      if ( v56 )
      {
        if ( (v51 & 4) == 0 || (*v41 = 0, v41 = (__m128i *)((char *)v41 + 20), v41 != v42) )
        {
          do
          {
            *v41 = 0;
            v41 = (__m128i *)((char *)v41 + 40);
            *(__m128i *)((char *)&v41[-2] + 12) = 0;
          }
          while ( v41 != v42 );
        }
      }
      v53 = v56 - 1;
      for ( i = v5; v28 != i; v46[1].m128i_i32[0] = i[-1].m128i_i32[3] )
      {
        while ( i->m128i_i32[1] != 2 )
        {
          i = (const __m128i *)((char *)i + 20);
          if ( v28 == i )
            goto LABEL_91;
        }
        v44 = 20LL * (i->m128i_i32[0] & (unsigned int)v53);
        v45 = (__m128i *)((char *)v50 + v44);
        if ( v51 == v44 )
        {
LABEL_94:
          if ( v50 == v45 )
          {
LABEL_100:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v46 = v50;
          while ( v46->m128i_i32[1] )
          {
            v46 = (__m128i *)((char *)v46 + 20);
            if ( v45 == v46 )
              goto LABEL_100;
          }
        }
        else
        {
          v46 = (__m128i *)((char *)v50 + v44);
          while ( v46->m128i_i32[1] )
          {
            v46 = (__m128i *)((char *)v46 + 20);
            if ( v42 == v46 )
              goto LABEL_94;
          }
        }
        v47 = _mm_loadu_si128(i);
        i = (const __m128i *)((char *)i + 20);
        *v46 = v47;
      }
LABEL_91:
      if ( v5 )
      {
        v61 = v42;
        v59 = a1;
        v57 = v51;
        v52 = v34;
        sub_186B220(v5);
        v42 = v61;
        a1 = v59;
        v27 = v57;
        v9 = v55;
        v34 = v52;
      }
      v5 = v50;
      v28 = v42;
      v49 = 0;
      v29 = 20LL * (v26 & v53);
      v30 = (__m128i *)((char *)v5 + v29);
    }
    if ( v29 == v27 )
    {
      v38 = nullptr;
LABEL_64:
      if ( v5 == v30 )
      {
LABEL_74:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v37 = v5;
      while ( 2 )
      {
        while ( 1 )
        {
          v40 = v37->m128i_i32[1];
          if ( v40 != 2 )
            break;
          if ( v26 != v37->m128i_i32[0] || v13 != v37->m128i_i32[2] )
            goto LABEL_68;
          if ( v34 == v37->m128i_i32[3] )
            goto LABEL_61;
          v37 = (__m128i *)((char *)v37 + 20);
          if ( v37 == v30 )
            goto LABEL_74;
        }
        if ( !v40 )
          goto LABEL_75;
        v38 = (unsigned int *)v37;
LABEL_68:
        v37 = (__m128i *)((char *)v37 + 20);
        if ( v37 == v30 )
          goto LABEL_74;
        continue;
      }
    }
    v37 = v30;
    v38 = nullptr;
    while ( 1 )
    {
      v39 = v37->m128i_i32[1];
      if ( v39 != 2 )
        break;
      if ( v26 == v37->m128i_i32[0] && v13 == v37->m128i_i32[2] && v34 == v37->m128i_i32[3] )
      {
LABEL_61:
        v37->m128i_i32[2] = v13;
        v37->m128i_i32[3] = v34;
        v37[1].m128i_i32[0] = v48;
        v37->m128i_i32[1] = 2;
        goto LABEL_62;
      }
LABEL_56:
      v37 = (__m128i *)((char *)v37 + 20);
      if ( v37 == v28 )
        goto LABEL_64;
    }
    if ( v39 )
    {
      v38 = (unsigned int *)v37;
      goto LABEL_56;
    }
LABEL_75:
    if ( v38 )
      --v49;
    else
      v38 = (unsigned int *)v37;
    v38[2] = v13;
    v38[3] = v34;
    v38[4] = v48;
    v38[1] = 2;
    *v38 = v26;
    ++v54;
LABEL_62:
    ++v48;
LABEL_24:
    result = v4 + 2;
    if ( v6 == v4 + 2 )
      break;
    while ( 1 )
    {
      v8 = *result;
      v4 = result;
      if ( *result > 1u )
        break;
      result += 2;
      if ( v6 == result )
        goto LABEL_29;
    }
  }
  while ( v6 != result );
LABEL_29:
  if ( v5 )
    return (_QWORD *)sub_186B220(v5);
  return result;
}

