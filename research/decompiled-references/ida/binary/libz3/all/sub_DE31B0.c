__int64 __fastcall sub_DE31B0(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 *v6; // r9
  int v7; // esi
  unsigned int v8; // edx
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 *v11; // rdi
  __int64 *i; // rax
  __int64 v13; // rdx
  int v15; // eax
  __int64 v16; // rbx
  int v17; // r13d
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r15
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // r14d
  __int64 v28; // rax
  __m128i *v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rax
  __m128i *v32; // rdi
  unsigned int v33; // r8d
  const __m128i *v34; // rbx
  const __m128i *v35; // rcx
  __int64 v36; // r15
  __m128i *v37; // r14
  __int64 v38; // rax
  __m128i *v39; // rdx
  __m128i *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rsi
  unsigned int v43; // edx
  int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // r14d
  __m128i *v47; // rax
  __m128i *v48; // r13
  __m128i *v49; // rdx
  __int64 v50; // rax
  __m128i *v51; // rdi
  unsigned int v52; // r8d
  const __m128i *v53; // rbx
  const __m128i *v54; // rcx
  __int64 v55; // r15
  __m128i *v56; // r14
  __int64 v57; // rax
  __m128i *v58; // rdx
  __m128i *v59; // rax

  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) )
    return sub_DE2D20(a1, (_DWORD *)a2);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2) )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(unsigned int *)(a1 + 40);
    v6 = *(__int64 **)(a1 + 32);
    v7 = *(_DWORD *)(v4 + 12);
    v8 = v5 - 1;
    v5 *= 16;
    v9 = (__int64 *)((char *)v6 + v5);
    v10 = 16LL * (v7 & v8);
    v11 = &v6[(unsigned __int64)v10 / 8];
    if ( v10 != v5 )
    {
      for ( i = &v6[(unsigned __int64)v10 / 8]; v9 != i; i += 2 )
      {
        v13 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v13 + 12) == v7 && v4 == v13 )
          {
LABEL_57:
            v42 = i + 2;
            if ( v9 == i + 2 )
              v42 = *(_QWORD **)(a1 + 32);
            v43 = *(_DWORD *)(a1 + 44) - 1;
            if ( *v42 )
            {
              *i = 1;
              v44 = *(_DWORD *)(a1 + 48);
              *(_DWORD *)(a1 + 44) = v43;
              v45 = v44 + 1;
              if ( v43 < 0x40 )
                v43 = 64;
              *(_DWORD *)(a1 + 48) = v45;
              if ( v43 < v45 && !(unsigned __int8)sub_186AF10(v11) )
              {
                v46 = *(_DWORD *)(a1 + 40);
                v47 = (__m128i *)sub_186B270(16LL * v46);
                v48 = v47;
                v49 = &v47[v46];
                if ( v46 )
                {
                  if ( ((16 * (_BYTE)v46) & 0x10) == 0 || (*v47 = 0, ++v47, v49 != v47) )
                  {
                    do
                    {
                      *v47 = 0;
                      v47 += 2;
                      v47[-1] = 0;
                    }
                    while ( v49 != v47 );
                  }
                }
                v50 = *(unsigned int *)(a1 + 40);
                v51 = *(__m128i **)(a1 + 32);
                v52 = v50 - 1;
                v50 *= 16;
                v53 = v51;
                v54 = (__m128i *)((char *)v51 + v50);
                v55 = v50;
                v56 = (__m128i *)((char *)v48 + v50);
                if ( v51 != (__m128i *)&v51->m128i_i8[v50] )
                {
                  do
                  {
                    if ( v53->m128i_i64[0] > 1uLL )
                    {
                      v57 = 16LL * (*(_DWORD *)(v53->m128i_i64[0] + 12) & v52);
                      v58 = &v48[(unsigned __int64)v57 / 0x10];
                      if ( v55 == v57 )
                      {
LABEL_79:
                        if ( v48 == v58 )
                        {
LABEL_97:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v59 = v48;
                        while ( v59->m128i_i64[0] )
                        {
                          if ( v58 == ++v59 )
                            goto LABEL_97;
                        }
                      }
                      else
                      {
                        v59 = &v48[(unsigned __int64)v57 / 0x10];
                        while ( v59->m128i_i64[0] )
                        {
                          if ( v56 == ++v59 )
                            goto LABEL_79;
                        }
                      }
                      *v59 = _mm_loadu_si128(v53);
                    }
                    ++v53;
                  }
                  while ( v54 != v53 );
                  v51 = *(__m128i **)(a1 + 32);
                }
                if ( v51 )
                  sub_186B220(v51);
                *(_QWORD *)(a1 + 32) = v48;
                *(_DWORD *)(a1 + 48) = 0;
              }
            }
            else
            {
              *i = 0;
              *(_DWORD *)(a1 + 44) = v43;
            }
            return sub_DE2D20(a1, (_DWORD *)a2);
          }
        }
        else if ( !v13 )
        {
          return sub_DE2D20(a1, (_DWORD *)a2);
        }
      }
    }
    if ( v6 != v11 )
    {
      for ( i = *(__int64 **)(a1 + 32); v11 != i; i += 2 )
      {
        v41 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v41 + 12) == v7 && v4 == v41 )
            goto LABEL_57;
        }
        else if ( !v41 )
        {
          return sub_DE2D20(a1, (_DWORD *)a2);
        }
      }
    }
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 104LL))(a2);
    v16 = *(_QWORD *)(a1 + 56);
    v17 = v15;
    v18 = *(unsigned int *)(a1 + 64);
    v19 = v18 - 1;
    v18 *= 16;
    v20 = v16 + v18;
    v21 = 16LL * (v17 & v19);
    v22 = v16 + v21;
    if ( v21 == v18 )
      goto LABEL_19;
    v16 += v21;
    while ( 1 )
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)(v16 + 8);
        if ( v23 > 1 )
          break;
        if ( !v23 )
          return sub_DE2D20(a1, (_DWORD *)a2);
        v16 += 16;
        if ( v20 == v16 )
        {
LABEL_18:
          v16 = *(_QWORD *)(a1 + 56);
LABEL_19:
          if ( v22 == v16 )
            return sub_DE2D20(a1, (_DWORD *)a2);
          while ( 1 )
          {
            v23 = *(_QWORD *)(v16 + 8);
            if ( v23 > 1 )
            {
              if ( v17 == *(_DWORD *)v16
                && (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v23 + 112LL))(v23, a2) )
              {
                goto LABEL_27;
              }
            }
            else if ( !v23 )
            {
              return sub_DE2D20(a1, (_DWORD *)a2);
            }
            v16 += 16;
            if ( v22 == v16 )
              return sub_DE2D20(a1, (_DWORD *)a2);
          }
        }
      }
      if ( v17 == *(_DWORD *)v16
        && (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v23 + 112LL))(v23, a2) )
      {
        break;
      }
      v16 += 16;
      if ( v20 == v16 )
        goto LABEL_18;
    }
LABEL_27:
    v24 = v16 + 16;
    if ( v20 == v16 + 16 )
      v24 = *(_QWORD *)(a1 + 56);
    v25 = *(_DWORD *)(a1 + 68) - 1;
    if ( !*(_QWORD *)(v24 + 8) )
    {
      *(_QWORD *)(v16 + 8) = 0;
      *(_DWORD *)(a1 + 68) = v25;
      return sub_DE2D20(a1, (_DWORD *)a2);
    }
    v26 = *(_DWORD *)(a1 + 72);
    *(_QWORD *)(v16 + 8) = 1;
    *(_DWORD *)(a1 + 68) = v25;
    *(_DWORD *)(a1 + 72) = v26 + 1;
    if ( v25 < 0x40 )
      v25 = 64;
    if ( v25 < v26 + 1 && !(unsigned __int8)sub_186AF10(v23) )
    {
      v27 = *(_DWORD *)(a1 + 64);
      v28 = sub_186B270(16LL * v27);
      v29 = (__m128i *)v28;
      v30 = v28 + 16LL * v27;
      if ( v27 )
      {
        if ( ((16 * (_BYTE)v27) & 0x10) == 0 || (*(_QWORD *)(v28 + 8) = 0, v28 += 16, v28 != v30) )
        {
          do
          {
            *(_QWORD *)(v28 + 8) = 0;
            v28 += 32;
            *(_QWORD *)(v28 - 8) = 0;
          }
          while ( v28 != v30 );
        }
      }
      v31 = *(unsigned int *)(a1 + 64);
      v32 = *(__m128i **)(a1 + 56);
      v33 = v31 - 1;
      v31 *= 16;
      v34 = v32;
      v35 = (__m128i *)((char *)v32 + v31);
      v36 = v31;
      v37 = (__m128i *)((char *)v29 + v31);
      if ( v32 != (__m128i *)&v32->m128i_i8[v31] )
      {
        do
        {
          if ( v34->m128i_i64[1] > 1uLL )
          {
            v38 = 16LL * (v34->m128i_i32[0] & v33);
            v39 = &v29[(unsigned __int64)v38 / 0x10];
            if ( v36 == v38 )
            {
LABEL_84:
              if ( v29 == v39 )
              {
LABEL_98:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v40 = v29;
              while ( v40->m128i_i64[1] )
              {
                if ( v39 == ++v40 )
                  goto LABEL_98;
              }
            }
            else
            {
              v40 = &v29[(unsigned __int64)v38 / 0x10];
              while ( v40->m128i_i64[1] )
              {
                if ( v37 == ++v40 )
                  goto LABEL_84;
              }
            }
            *v40 = _mm_loadu_si128(v34);
          }
          ++v34;
        }
        while ( v35 != v34 );
        v32 = *(__m128i **)(a1 + 56);
      }
      if ( v32 )
        sub_186B220(v32);
      *(_QWORD *)(a1 + 56) = v29;
      *(_DWORD *)(a1 + 72) = 0;
    }
  }
  return sub_DE2D20(a1, (_DWORD *)a2);
}

