unsigned __int64 __fastcall sub_BE0DB0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  int v3; // r12d
  _QWORD *v4; // rdi
  int v5; // ecx
  __int64 v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  unsigned int v9; // r13d
  size_t v10; // rbx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  _OWORD *v13; // rdx
  __int64 v14; // rax
  unsigned __int64 result; // rax
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 *v18; // r12
  __int64 v19; // r13
  __int64 v20; // r15
  _QWORD **v21; // r13
  _QWORD **v22; // r15
  _QWORD *v23; // rbx
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // r11
  __int64 v27; // rax
  __m128i *v28; // r12
  __int64 v29; // rdx
  unsigned int v30; // esi
  __int32 v31; // r10d
  __int64 v32; // r11
  __int64 v33; // rax
  __m128i *v34; // r9
  unsigned __int64 v35; // r8
  _BYTE *v36; // rcx
  unsigned int v37; // esi
  unsigned int v38; // esi
  __int64 v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // r11
  __int64 v43; // r8
  __m128i *v44; // rdi
  __int64 v45; // r9
  __int64 v46; // r10
  const __m128i *v47; // rbp
  const __m128i *v48; // r14
  __int64 v49; // r9
  _QWORD **v50; // r8
  _QWORD *v51; // r13
  __m128i *v52; // rbx
  __int64 v53; // rax
  __m128i *v54; // rsi
  __m128i *v55; // rdx
  __m128i *v56; // rax
  unsigned int v57; // edx
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // [rsp+0h] [rbp-88h]
  __int64 v61; // [rsp+8h] [rbp-80h]
  __int64 v62; // [rsp+10h] [rbp-78h]
  unsigned int v63; // [rsp+18h] [rbp-70h]
  __int64 v64; // [rsp+18h] [rbp-70h]
  unsigned int v65; // [rsp+20h] [rbp-68h]
  __int64 v66; // [rsp+20h] [rbp-68h]
  size_t v67; // [rsp+28h] [rbp-60h]
  __int64 v68; // [rsp+30h] [rbp-58h]
  __int64 v69; // [rsp+38h] [rbp-50h]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    v3 = *(_DWORD *)(v2 - 4);
  else
    v3 = 0;
  if ( !*(_DWORD *)(a1 + 220) && !*(_DWORD *)(a1 + 224) )
    goto LABEL_19;
  v4 = *(_QWORD **)(a1 + 208);
  v5 = 0;
  v6 = *(unsigned int *)(v1 + 216);
  v7 = v4;
  v8 = &v4[2 * v6];
  if ( v4 != v8 )
  {
    do
    {
      while ( *v7 )
      {
        *v7 = 0;
        v7 += 2;
        if ( v8 == v7 )
          goto LABEL_10;
      }
      v7 += 2;
      ++v5;
    }
    while ( v8 != v7 );
LABEL_10:
    if ( (unsigned int)v6 > 0x10 && 3 * (int)v6 < (unsigned int)(4 * v5) )
    {
      if ( v4 )
      {
        sub_186B220(v4);
        v9 = *(_DWORD *)(v1 + 216);
        *(_QWORD *)(v1 + 208) = 0;
        v9 >>= 1;
        *(_DWORD *)(v1 + 216) = v9;
        v10 = 16LL * v9;
        v11 = (_OWORD *)sub_186B270(v10);
        if ( !v9 )
        {
LABEL_17:
          *(_QWORD *)(v1 + 208) = v11;
          goto LABEL_18;
        }
      }
      else
      {
        *(_QWORD *)(v1 + 208) = 0;
        v37 = (unsigned int)v6 >> 1;
        *(_DWORD *)(v1 + 216) = v37;
        v10 = 16LL * v37;
        v11 = (_OWORD *)sub_186B270(v10);
      }
      v12 = &v11[v10 / 0x10];
      v13 = v11;
      if ( (v10 & 0x10) == 0 || (v13 = v11 + 1, *v11 = 0, v12 != v11 + 1) )
      {
        do
        {
          *v13 = 0;
          v13 += 2;
          *(v13 - 1) = 0;
        }
        while ( v12 != v13 );
      }
      goto LABEL_17;
    }
  }
LABEL_18:
  *(_QWORD *)(v1 + 220) = 0;
LABEL_19:
  v14 = *(_QWORD *)(v1 + 232);
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  result = *(_QWORD *)(v1 + 240);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v16 = v3;
  v17 = 0;
  if ( v3 <= 0 )
    return result;
  while ( 2 )
  {
    v18 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v1 + 32) + 8 * v17) + 8LL);
    result = sub_B39350((__int64)v18, *(_DWORD *)(v1 + 8));
    if ( (_DWORD)result != (_DWORD)v17 )
      goto LABEL_25;
    v19 = *(_QWORD *)(v1 + 16);
    v20 = *v18;
    result = sub_8E7030(v19);
    if ( (_DWORD)result )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v19 + 7488) + 56LL))(
                 *(_QWORD *)(v19 + 7488),
                 v20);
      if ( !(_BYTE)result )
        goto LABEL_25;
    }
    v21 = (_QWORD **)v18[7];
    if ( !v21 )
      goto LABEL_25;
    result = *((unsigned int *)v21 - 1);
    v22 = &v21[result];
    if ( v22 == v21 )
      goto LABEL_25;
    v62 = (__int64)v18;
    v60 = v16;
    v61 = v17;
    while ( 2 )
    {
      v23 = *v21;
      if ( v23 != (_QWORD *)v23[3] )
        goto LABEL_32;
      v24 = *(_QWORD *)(v1 + 16);
      v25 = *v23;
      if ( (unsigned int)sub_8E7030(v24) )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v24 + 7488) + 56LL))(
                   *(_QWORD *)(v24 + 7488),
                   v25);
        if ( !(_BYTE)result )
          goto LABEL_32;
      }
      result = *(_QWORD *)(*(_QWORD *)(*v23 + 16LL) + 24LL);
      if ( !result )
        goto LABEL_32;
      if ( *(_DWORD *)(v1 + 8) != *(_DWORD *)result )
        goto LABEL_32;
      if ( *(_DWORD *)(result + 4) != 1 )
        goto LABEL_32;
      result = v23[14];
      if ( v62 != *(_QWORD *)(result + 8) )
        goto LABEL_32;
      v26 = sub_BE07E0(v1, v62);
      v27 = *(unsigned int *)(v26 + 8);
      v63 = 2 * v27;
      if ( 3 * (int)v27 < (unsigned int)(4 * (*(_DWORD *)(v26 + 12) + *(_DWORD *)(v26 + 16))) )
      {
        v66 = v26;
        v67 = 16LL * v63;
        v41 = sub_186B270(v67);
        v42 = v66;
        v28 = (__m128i *)v41;
        v43 = v41 + v67;
        if ( v63 )
        {
          if ( (v67 & 0x10) == 0 || (*(_QWORD *)(v41 + 8) = 0, v41 += 16, &v28[1] != (__m128i *)v43) )
          {
            do
            {
              *(_QWORD *)(v41 + 8) = 0;
              v41 += 32;
              *(_QWORD *)(v41 - 8) = 0;
            }
            while ( v41 != v43 );
          }
        }
        v44 = *(__m128i **)v66;
        v29 = v43;
        v45 = *(_QWORD *)v66 + 16LL * *(unsigned int *)(v66 + 8);
        v65 = v63 - 1;
        if ( *(_QWORD *)v42 != v45 )
        {
          v46 = v1;
          v47 = (const __m128i *)v45;
          v48 = v44;
          v49 = v43;
          v50 = v21;
          v51 = v23;
          v52 = (__m128i *)v29;
          do
          {
            if ( v48->m128i_i64[1] > 1uLL )
            {
              v53 = 16LL * (v48->m128i_i32[0] & v65);
              v54 = &v28[(unsigned __int64)v53 / 0x10];
              if ( v67 == v53 )
              {
LABEL_83:
                if ( v28 == v54 )
                {
LABEL_101:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v56 = v28;
                while ( v56->m128i_i64[1] )
                {
                  if ( v54 == ++v56 )
                    goto LABEL_101;
                }
                *v56 = _mm_loadu_si128(v48);
              }
              else
              {
                v55 = &v28[(unsigned __int64)v53 / 0x10];
                while ( v55->m128i_i64[1] )
                {
                  if ( v52 == ++v55 )
                    goto LABEL_83;
                }
                *v55 = _mm_loadu_si128(v48);
              }
            }
            ++v48;
          }
          while ( v47 != v48 );
          v23 = v51;
          v21 = v50;
          v44 = *(__m128i **)v42;
          v29 = v49;
          v1 = v46;
        }
        if ( v44 )
        {
          v69 = v29;
          v68 = v42;
          sub_186B220(v44);
          v29 = v69;
          v42 = v68;
        }
        *(_QWORD *)v42 = v28;
        *(_DWORD *)(v42 + 16) = 0;
        *(_DWORD *)(v42 + 8) = v63;
      }
      else
      {
        v28 = *(__m128i **)v26;
        v65 = v27 - 1;
        v67 = 16 * v27;
        v29 = *(_QWORD *)v26 + 16 * v27;
      }
      v30 = -1;
      if ( (*((_BYTE *)v23 + 44) & 8) == 0 )
        v30 = *(_DWORD *)(*v23 + 24LL) - 1;
      v64 = v29;
      v31 = sub_BDCBD0(v23, v30);
      v33 = 16LL * (v31 & v65);
      v34 = &v28[(unsigned __int64)v33 / 0x10];
      if ( v33 == v67 )
      {
        v35 = 0;
        while ( 1 )
        {
LABEL_57:
          if ( v34 == v28 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          result = v28->m128i_u64[1];
          if ( result > 1 )
          {
            if ( v28->m128i_i32[0] == v31 )
            {
              if ( (*(_BYTE *)(result + 44) & 8) != 0 || (v57 = *(_DWORD *)(*(_QWORD *)result + 24LL), v57 <= 1) )
              {
LABEL_64:
                v28->m128i_i64[1] = (__int64)v23;
                goto LABEL_32;
              }
              v58 = v57 - 1;
              v59 = 0;
              while ( *(_QWORD *)(*(_QWORD *)(result + 8 * v59 + 120) + 8LL) == *(_QWORD *)(v23[v59 + 15] + 8LL) )
              {
                if ( v58 == ++v59 )
                  goto LABEL_64;
              }
            }
          }
          else
          {
            if ( !result )
            {
              if ( v35 )
              {
                --*(_DWORD *)(v32 + 16);
                v28 = (__m128i *)v35;
              }
              v28->m128i_i64[1] = (__int64)v23;
              v28->m128i_i32[0] = v31;
              ++*(_DWORD *)(v32 + 12);
              goto LABEL_32;
            }
            v35 = (unsigned __int64)v28;
          }
          ++v28;
        }
      }
      result = (unsigned __int64)&v28[(unsigned __int64)v33 / 0x10];
      v35 = 0;
      while ( 1 )
      {
        v36 = *(_BYTE **)(result + 8);
        if ( (unsigned __int64)v36 <= 1 )
          break;
        if ( *(_DWORD *)result == v31 )
        {
          if ( (v36[44] & 8) != 0 || (v38 = *(_DWORD *)(*(_QWORD *)v36 + 24LL), v38 <= 1) )
          {
LABEL_62:
            *(_QWORD *)(result + 8) = v23;
            goto LABEL_32;
          }
          v39 = v38 - 1;
          v40 = 0;
          while ( *(_QWORD *)(*(_QWORD *)&v36[8 * v40 + 120] + 8LL) == *(_QWORD *)(v23[v40 + 15] + 8LL) )
          {
            if ( ++v40 == v39 )
              goto LABEL_62;
          }
        }
LABEL_47:
        result += 16LL;
        if ( result == v64 )
          goto LABEL_57;
      }
      if ( v36 )
      {
        v35 = result;
        goto LABEL_47;
      }
      if ( v35 )
      {
        --*(_DWORD *)(v32 + 16);
        result = v35;
      }
      *(_QWORD *)(result + 8) = v23;
      *(_DWORD *)result = v31;
      ++*(_DWORD *)(v32 + 12);
LABEL_32:
      if ( v22 != ++v21 )
        continue;
      break;
    }
    v16 = v60;
    v17 = v61;
LABEL_25:
    if ( v16 != ++v17 )
      continue;
    return result;
  }
}

