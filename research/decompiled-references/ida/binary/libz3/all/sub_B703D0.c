__int64 __fastcall sub_B703D0(__int64 a1, int a2)
{
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // r11
  __int64 v6; // rdx
  unsigned int v7; // r13d
  int v8; // r14d
  unsigned int v9; // eax
  char *v10; // rdi
  __int64 v11; // rcx
  char *v12; // rdx
  __int64 v13; // rax
  int v14; // esi
  unsigned int v15; // ebp
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  __int64 *v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 result; // rax
  __int64 v28; // rbp
  unsigned __int64 v29; // r12
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r10
  int v33; // esi
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // r15
  __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r15
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rsi
  unsigned int v48; // edx
  int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // ecx
  __int64 v52; // rax
  __m128i *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  const __m128i *v56; // r15
  unsigned int v57; // r10d
  __int64 v58; // rax
  __m128i *v59; // r11
  __m128i *v60; // r8
  __int64 v61; // r14
  __int64 v62; // rax
  __m128i *v63; // rdx
  __m128i *v64; // rax
  __int64 v65; // [rsp+8h] [rbp-60h]
  unsigned int v66; // [rsp+8h] [rbp-60h]
  int v67; // [rsp+8h] [rbp-60h]
  __m128i *v68; // [rsp+8h] [rbp-60h]

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = (unsigned int)(v4 - a2);
  v7 = *(_DWORD *)(v3 + 4 * v6);
  v8 = v6;
  if ( !v5 )
    goto LABEL_22;
  v9 = *(_DWORD *)(v5 - 4);
  if ( !v7 && v9 )
  {
    if ( !*(_DWORD *)(a1 + 20) && !*(_DWORD *)(a1 + 24) )
      goto LABEL_21;
    v10 = *(char **)(a1 + 8);
    v11 = *(unsigned int *)(a1 + 16);
    v12 = &v10[16 * v11];
    if ( v10 != v12 )
    {
      v13 = *(_QWORD *)(a1 + 8);
      v14 = 0;
      do
      {
        while ( *(_QWORD *)(v13 + 8) )
        {
          *(_QWORD *)(v13 + 8) = 0;
          v13 += 16;
          if ( v12 == (char *)v13 )
            goto LABEL_12;
        }
        v13 += 16;
        ++v14;
      }
      while ( v12 != (char *)v13 );
LABEL_12:
      if ( (unsigned int)v11 > 0x10 && 3 * (int)v11 < (unsigned int)(4 * v14) )
      {
        if ( v10 )
        {
          sub_186B220(v10);
          v15 = *(_DWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = 0;
          v15 >>= 1;
          *(_DWORD *)(a1 + 16) = v15;
          v16 = v15;
          v17 = sub_186B270(16LL * v15);
          if ( !v15 )
          {
LABEL_19:
            *(_QWORD *)(a1 + 8) = v17;
            v5 = *(_QWORD *)(a1 + 32);
            *(_QWORD *)(a1 + 20) = 0;
            goto LABEL_20;
          }
        }
        else
        {
          v51 = (unsigned int)v11 >> 1;
          *(_QWORD *)(a1 + 8) = 0;
          v16 = v51;
          *(_DWORD *)(a1 + 16) = v51;
          v17 = sub_186B270(16LL * v51);
        }
        v18 = 16 * v16;
        v19 = v17;
        v20 = v17 + v18;
        if ( (v18 & 0x10) == 0 || (v19 = v17 + 16, *(_QWORD *)(v17 + 8) = 0, v17 + 16 != v20) )
        {
          do
          {
            *(_QWORD *)(v19 + 8) = 0;
            v19 += 32;
            *(_QWORD *)(v19 - 8) = 0;
          }
          while ( v19 != v20 );
        }
        goto LABEL_19;
      }
    }
    *(_QWORD *)(a1 + 20) = 0;
LABEL_21:
    *(_DWORD *)(v5 - 4) = v7;
    goto LABEL_22;
  }
  if ( v7 >= v9 )
    goto LABEL_21;
  v28 = 8LL * v7;
  v29 = 8 * (v7 + (unsigned __int64)(v9 - 1 - v7) + 1);
LABEL_36:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        v30 = *(_QWORD *)(v5 + v28);
        v31 = *(unsigned int *)(a1 + 16);
        v32 = *(_QWORD *)(a1 + 8);
        v33 = *(_DWORD *)(v30 + 8);
        v34 = v31 - 1;
        v31 *= 16;
        v35 = v32 + v31;
        v36 = 16LL * (v33 & v34);
        v37 = v32 + v36;
        if ( v36 == v31 )
        {
LABEL_52:
          if ( v32 != v37 )
          {
            v38 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v42 = *(_QWORD *)(v38 + 8);
              if ( v42 > 1 )
              {
                if ( v33 == *(_DWORD *)v38 && *(_QWORD *)v42 == *(_QWORD *)v30 )
                {
                  v43 = *(unsigned int *)(v42 + 24);
                  if ( (_DWORD)v43 == *(_DWORD *)(v30 + 24) )
                  {
                    if ( !(_DWORD)v43 )
                      goto LABEL_67;
                    v44 = *(_QWORD *)(v42 + 32);
                    v45 = 8 * v43;
                    v46 = 0;
                    while ( *(_QWORD *)(v44 + v46) == *(_QWORD *)(*(_QWORD *)(v30 + 32) + v46) )
                    {
                      v46 += 8;
                      if ( v45 == v46 )
                        goto LABEL_67;
                    }
                  }
                }
              }
              else if ( !v42 )
              {
                v28 += 8;
                if ( v29 == v28 )
                  goto LABEL_20;
                goto LABEL_36;
              }
              v38 += 16;
              if ( v37 == v38 )
                goto LABEL_42;
            }
          }
          goto LABEL_42;
        }
        v65 = v32 + v36;
        v38 = v32 + v36;
        while ( 1 )
        {
          while ( 1 )
          {
            v39 = *(_QWORD *)(v38 + 8);
            if ( v39 <= 1 )
            {
              if ( !v39 )
                goto LABEL_42;
              goto LABEL_39;
            }
            if ( v33 == *(_DWORD *)v38 && *(_QWORD *)v39 == *(_QWORD *)v30 )
            {
              v37 = *(unsigned int *)(v39 + 24);
              if ( (_DWORD)v37 == *(_DWORD *)(v30 + 24) )
                break;
            }
LABEL_39:
            v38 += 16;
            if ( v35 == v38 )
              goto LABEL_51;
          }
          if ( !(_DWORD)v37 )
            break;
          v40 = *(_QWORD *)(v39 + 32);
          v37 *= 8;
          v41 = 0;
          while ( *(_QWORD *)(v40 + v41) == *(_QWORD *)(*(_QWORD *)(v30 + 32) + v41) )
          {
            v41 += 8;
            if ( v41 == v37 )
              goto LABEL_67;
          }
          v38 += 16;
          if ( v35 == v38 )
          {
LABEL_51:
            v37 = v65;
            goto LABEL_52;
          }
        }
LABEL_67:
        v47 = v38 + 16;
        if ( v35 == v38 + 16 )
          v47 = *(_QWORD *)(a1 + 8);
        v48 = *(_DWORD *)(a1 + 20) - 1;
        if ( !*(_QWORD *)(v47 + 8) )
        {
          v28 += 8;
          *(_QWORD *)(v38 + 8) = 0;
          *(_DWORD *)(a1 + 20) = v48;
          if ( v29 == v28 )
            goto LABEL_20;
          continue;
        }
        break;
      }
      *(_QWORD *)(v38 + 8) = 1;
      v49 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 20) = v48;
      v50 = v49 + 1;
      if ( v48 < 0x40 )
        v48 = 64;
      *(_DWORD *)(a1 + 24) = v50;
      if ( v48 >= v50 )
      {
LABEL_42:
        v28 += 8;
        if ( v29 == v28 )
          goto LABEL_20;
        continue;
      }
      break;
    }
    if ( !(unsigned __int8)sub_186AF10(v37) )
    {
      v66 = *(_DWORD *)(a1 + 16);
      v52 = sub_186B270(16LL * v66);
      v53 = (__m128i *)v52;
      v54 = v52 + 16LL * v66;
      if ( v66 )
      {
        if ( ((16 * (_BYTE)v66) & 0x10) == 0 || (*(_QWORD *)(v52 + 8) = 0, v52 += 16, v52 != v54) )
        {
          do
          {
            *(_QWORD *)(v52 + 8) = 0;
            v52 += 32;
            *(_QWORD *)(v52 - 8) = 0;
          }
          while ( v52 != v54 );
        }
      }
      v55 = *(unsigned int *)(a1 + 16);
      v56 = *(const __m128i **)(a1 + 8);
      v57 = v55 - 1;
      v58 = v55;
      v59 = (__m128i *)&v56[v58];
      v60 = &v53[v58];
      if ( v56 != &v56[v58] )
      {
        v67 = v8;
        v61 = v58 * 16;
        do
        {
          if ( v56->m128i_i64[1] > 1uLL )
          {
            v62 = 16LL * (v56->m128i_i32[0] & v57);
            v63 = &v53[(unsigned __int64)v62 / 0x10];
            if ( v61 == v62 )
            {
LABEL_96:
              if ( v53 == v63 )
              {
LABEL_105:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v64 = v53;
              while ( v64->m128i_i64[1] )
              {
                if ( v63 == ++v64 )
                  goto LABEL_105;
              }
            }
            else
            {
              v64 = &v53[(unsigned __int64)v62 / 0x10];
              while ( v64->m128i_i64[1] )
              {
                if ( v60 == ++v64 )
                  goto LABEL_96;
              }
            }
            *v64 = _mm_loadu_si128(v56);
          }
          ++v56;
        }
        while ( v59 != v56 );
        v8 = v67;
        v59 = *(__m128i **)(a1 + 8);
      }
      if ( v59 )
      {
        v68 = v53;
        sub_186B220(v59);
        v53 = v68;
      }
      *(_QWORD *)(a1 + 8) = v53;
      *(_DWORD *)(a1 + 24) = 0;
    }
    v28 += 8;
    v5 = *(_QWORD *)(a1 + 32);
    if ( v29 != v28 )
      continue;
    break;
  }
LABEL_20:
  if ( v5 )
    goto LABEL_21;
LABEL_22:
  v21 = *(_QWORD *)(a1 + 48);
  if ( v21 )
  {
    v22 = v21 + 8LL * *(unsigned int *)(v21 - 4);
    v23 = (__int64 *)(v21 + 8LL * v7);
    if ( (unsigned __int64)v23 >= v22 )
      goto LABEL_30;
    do
    {
      while ( 1 )
      {
        v24 = *v23;
        if ( *v23 )
        {
          v25 = *(_QWORD *)(a1 + 40);
          if ( (*(_DWORD *)(v24 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v23 >= v22 )
          goto LABEL_29;
      }
      sub_15D7BC0(v25, v24);
      ++v23;
    }
    while ( (unsigned __int64)v23 < v22 );
LABEL_29:
    v21 = *(_QWORD *)(a1 + 48);
    if ( v21 )
LABEL_30:
      *(_DWORD *)(v21 - 4) = v7;
  }
  result = *(_QWORD *)(a1 + 56);
  if ( result )
    *(_DWORD *)(result - 4) = v8;
  return result;
}

