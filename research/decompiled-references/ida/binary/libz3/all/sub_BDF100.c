void __fastcall sub_BDF100(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  unsigned int v3; // eax
  __int64 v6; // r9
  __int64 *v7; // r10
  __int64 v8; // r8
  unsigned int v9; // r11d
  __int64 v10; // r9
  int v11; // esi
  __int64 *v12; // rcx
  __int64 v13; // r11
  __int64 *v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // r13
  __int64 *i; // rax
  __int64 v19; // rdx
  __int64 *v20; // r12
  __int64 *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdx
  _QWORD *v27; // rsi
  __int64 v28; // rdi
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // r15
  __m128i *v33; // r14
  __m128i *v34; // rdx
  __m128i *v35; // rax
  __int64 v36; // rax
  const __m128i *v37; // r12
  unsigned int v38; // r9d
  __m128i *v39; // rcx
  __int64 v40; // r15
  __m128i *v41; // r8
  __int64 v42; // rax
  __m128i *v43; // rdx
  __m128i *v44; // rax

  v2 = *(_QWORD *)(a1 + 112);
  if ( !v2 )
    return;
  v3 = *(_DWORD *)(v2 - 4);
  if ( a2 >= v3 )
    return;
  do
  {
    v6 = *(unsigned int *)(a1 + 128);
    v7 = *(__int64 **)(a1 + 120);
    v8 = *(_QWORD *)(v2 + 8LL * (v3 - 1));
    v9 = v6 - 1;
    v10 = 16 * v6;
    v11 = *(_DWORD *)(v8 + 12);
    v12 = &v7[(unsigned __int64)v10 / 8];
    v13 = 16LL * (v11 & v9);
    v14 = &v7[(unsigned __int64)v13 / 8];
    if ( v13 == v10 )
    {
LABEL_32:
      v15 = *(__int64 **)(a1 + 120);
      if ( v7 != v14 )
      {
        do
        {
          v25 = *v15;
          if ( (unsigned __int64)*v15 > 1 )
          {
            if ( *(_DWORD *)(v25 + 12) == v11 && v8 == v25 )
              goto LABEL_13;
          }
          else if ( !v25 )
          {
            v3 = *(_DWORD *)(v2 - 4) - 1;
            *(_DWORD *)(v2 - 4) = v3;
            goto LABEL_11;
          }
          v15 += 2;
        }
        while ( v14 != v15 );
      }
LABEL_10:
      v3 = *(_DWORD *)(v2 - 4) - 1;
      *(_DWORD *)(v2 - 4) = v3;
      continue;
    }
    v15 = &v7[(unsigned __int64)v13 / 8];
    while ( 1 )
    {
      v16 = *v15;
      if ( (unsigned __int64)*v15 > 1 )
        break;
      if ( !v16 )
        goto LABEL_10;
LABEL_7:
      v15 += 2;
      if ( v12 == v15 )
        goto LABEL_32;
    }
    if ( *(_DWORD *)(v16 + 12) != v11 || v8 != v16 )
      goto LABEL_7;
LABEL_13:
    v17 = (__int64 *)v15[1];
    i = &v7[(unsigned __int64)v13 / 8];
    if ( v13 != v10 )
    {
      do
      {
        v19 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v19 + 12) == v11 && v8 == v19 )
          {
LABEL_48:
            v27 = i + 2;
            v28 = *(unsigned int *)(a1 + 132);
            if ( v12 == i + 2 )
              v27 = *(_QWORD **)(a1 + 120);
            v29 = v28 - 1;
            if ( *v27 )
            {
              *i = 1;
              v30 = *(_DWORD *)(a1 + 136);
              *(_DWORD *)(a1 + 132) = v29;
              v31 = v30 + 1;
              if ( v29 < 0x40 )
                v29 = 64;
              *(_DWORD *)(a1 + 136) = v31;
              if ( v29 < v31 && !(unsigned __int8)sub_186AF10(v28) )
              {
                v32 = *(unsigned int *)(a1 + 128);
                v33 = (__m128i *)sub_186B270(16 * v32);
                v34 = v33;
                v35 = &v33[v32];
                if ( (_DWORD)v32 )
                {
                  if ( ((16 * (_BYTE)v32) & 0x10) == 0 || (v34 = v33 + 1, *v33 = 0, v35 != &v33[1]) )
                  {
                    do
                    {
                      *v34 = 0;
                      v34 += 2;
                      v34[-1] = 0;
                    }
                    while ( v35 != v34 );
                  }
                }
                v36 = *(unsigned int *)(a1 + 128);
                v37 = *(const __m128i **)(a1 + 120);
                v38 = v36 - 1;
                v36 *= 16;
                v39 = (__m128i *)((char *)v37 + v36);
                v40 = v36;
                v41 = (__m128i *)((char *)v33 + v36);
                if ( v37 != (const __m128i *)&v37->m128i_i8[v36] )
                {
                  do
                  {
                    if ( v37->m128i_i64[0] > 1uLL )
                    {
                      v42 = 16LL * (*(_DWORD *)(v37->m128i_i64[0] + 12) & v38);
                      v43 = &v33[(unsigned __int64)v42 / 0x10];
                      if ( v40 == v42 )
                      {
LABEL_69:
                        if ( v33 == v43 )
                        {
LABEL_78:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v44 = v33;
                        while ( v44->m128i_i64[0] )
                        {
                          if ( v43 == ++v44 )
                            goto LABEL_78;
                        }
                      }
                      else
                      {
                        v44 = &v33[(unsigned __int64)v42 / 0x10];
                        while ( v44->m128i_i64[0] )
                        {
                          if ( v41 == ++v44 )
                            goto LABEL_69;
                        }
                      }
                      *v44 = _mm_loadu_si128(v37);
                    }
                    ++v37;
                  }
                  while ( v39 != v37 );
                  v39 = *(__m128i **)(a1 + 120);
                }
                if ( v39 )
                  sub_186B220(v39);
                *(_QWORD *)(a1 + 120) = v33;
                *(_DWORD *)(a1 + 136) = 0;
              }
            }
            else
            {
              *i = 0;
              *(_DWORD *)(a1 + 132) = v29;
            }
            goto LABEL_20;
          }
        }
        else if ( !v19 )
        {
          goto LABEL_20;
        }
        i += 2;
      }
      while ( v12 != i );
    }
    if ( v7 != v14 )
    {
      for ( i = *(__int64 **)(a1 + 120); v14 != i; i += 2 )
      {
        v26 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v26 + 12) == v11 && v8 == v26 )
            goto LABEL_48;
        }
        else if ( !v26 )
        {
          break;
        }
      }
    }
LABEL_20:
    if ( v17 )
    {
      v20 = (__int64 *)v17[1];
      if ( v20 )
      {
        v21 = &v20[*((unsigned int *)v20 - 1)];
        if ( v20 >= v21 )
          goto LABEL_29;
        do
        {
          while ( 1 )
          {
            v22 = *v20;
            if ( *v20 )
            {
              v23 = *v17;
              if ( (*(_DWORD *)(v22 + 8))-- == 1 )
                break;
            }
            if ( ++v20 >= v21 )
              goto LABEL_28;
          }
          sub_15D7BC0(v23, v22);
          ++v20;
        }
        while ( v20 < v21 );
LABEL_28:
        v20 = (__int64 *)v17[1];
        if ( v20 )
LABEL_29:
          sub_186B220(v20 - 1);
      }
      sub_186B220(v17);
    }
    v2 = *(_QWORD *)(a1 + 112);
    v3 = *(_DWORD *)(v2 - 4) - 1;
    *(_DWORD *)(v2 - 4) = v3;
LABEL_11:
    ;
  }
  while ( a2 < v3 );
}

