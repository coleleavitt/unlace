__int64 __fastcall sub_E00BD0(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 *v6; // r15
  __int64 v7; // rcx
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rbp
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r9
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 i; // rax
  int v32; // edx
  __int64 v33; // rsi
  __int64 v34; // rdi
  unsigned int v35; // edx
  int v36; // edx
  int v37; // eax
  _QWORD *v38; // rsi
  unsigned int v39; // eax
  __int64 v40; // rdi
  int v41; // eax
  _QWORD *v42; // rdi
  unsigned int v43; // r8d
  unsigned int *v44; // rax
  __int64 v45; // rdi
  int v46; // eax
  unsigned int v47; // eax
  __m128i *v48; // rax
  __m128i *v49; // rbp
  __m128i *v50; // rdx
  __int64 v51; // rdx
  const __m128i *v52; // rax
  unsigned int v53; // r11d
  __int64 v54; // r9
  __m128i *v55; // r8
  __m128i *v56; // r10
  __int64 v57; // rdx
  __m128i *v58; // rsi
  __m128i *v59; // rdx
  _QWORD *v60; // rax
  _QWORD *v61; // rsi
  __int64 v62; // [rsp+8h] [rbp-80h]
  __int64 v63; // [rsp+8h] [rbp-80h]
  unsigned int v65; // [rsp+14h] [rbp-74h]
  unsigned int v66; // [rsp+14h] [rbp-74h]
  __int64 v67[11]; // [rsp+30h] [rbp-58h] BYREF

  result = *(_QWORD *)(a1 + 728);
  v5 = 8LL * a2;
  v6 = (unsigned __int64 *)(result + v5);
  if ( result )
  {
    v7 = 8LL * *(unsigned int *)(result - 4);
    v8 = (unsigned __int64 *)(result + v7);
    if ( v5 == v7 )
      goto LABEL_33;
  }
  else
  {
    v8 = nullptr;
    if ( !v5 )
      return result;
  }
  do
  {
    v9 = *v6;
    v10 = *(_QWORD *)(a1 + 672);
    v11 = *(unsigned int *)(a1 + 680);
    if ( *v6 )
    {
      if ( (*v6 & 7) == 1 )
        v12 = v9 >> 3;
      else
        LODWORD(v12) = *(_DWORD *)(v9 - 8);
    }
    else
    {
      LODWORD(v12) = -1640531495;
    }
    v13 = v11 - 1;
    v14 = 24 * v11;
    v15 = v10 + v14;
    v16 = 24LL * ((unsigned int)v12 & v13);
    v17 = v10 + v16;
    if ( v16 != v14 )
    {
      v18 = v10 + v16;
      do
      {
        v19 = *(_DWORD *)(v18 + 4);
        if ( v19 == 2 )
        {
          if ( (_DWORD)v12 == *(_DWORD *)v18 && v9 == *(_QWORD *)(v18 + 8) )
          {
            v20 = *(_QWORD *)(a1 + 312);
            v21 = *(_QWORD *)(v18 + 16);
            if ( !v20 )
              goto LABEL_51;
            goto LABEL_14;
          }
        }
        else if ( !v19 )
        {
          goto LABEL_54;
        }
        v18 += 24;
      }
      while ( v15 != v18 );
    }
    if ( v10 == v17 )
    {
LABEL_54:
      sub_1872CE0("");
      sub_1873130(114, 1645);
    }
    while ( 1 )
    {
      v37 = *(_DWORD *)(v10 + 4);
      if ( v37 != 2 )
      {
        if ( !v37 )
          goto LABEL_54;
        goto LABEL_46;
      }
      if ( (_DWORD)v12 == *(_DWORD *)v10 && v9 == *(_QWORD *)(v10 + 8) )
        break;
LABEL_46:
      v10 += 24;
      if ( v17 == v10 )
        goto LABEL_54;
    }
    v20 = *(_QWORD *)(a1 + 312);
    v21 = *(_QWORD *)(v10 + 16);
    if ( !v20 )
    {
LABEL_51:
      sub_DFBCB0(a1);
      v20 = *(_QWORD *)(a1 + 312);
    }
LABEL_14:
    if ( v21 )
    {
      if ( (*(_DWORD *)(v21 + 16))-- == 1 )
      {
        v38 = *(_QWORD **)(v20 + 80);
        if ( v38 )
        {
          v39 = *((_DWORD *)v38 - 1);
          if ( v39 == *((_DWORD *)v38 - 2) )
          {
            v43 = (3 * v39 + 1) >> 1;
            if ( 8 * v39 + 8 >= 8 * v43 + 8 || v39 >= v43 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_DF63A0(v67, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v67);
              sub_233E40((__int64)v67);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v65 = (3 * v39 + 1) >> 1;
            v62 = v20;
            v44 = (unsigned int *)sub_186B300(v38 - 1, 8 * v43 + 8);
            v20 = v62;
            v45 = v44[1];
            v38 = v44 + 2;
            *(_QWORD *)(v62 + 80) = v44 + 2;
            *v44 = v65;
            LODWORD(v44) = v45;
            v42 = &v38[v45];
            v41 = (_DWORD)v44 + 1;
          }
          else
          {
            v40 = v39;
            v41 = v39 + 1;
            v42 = &v38[v40];
          }
        }
        else
        {
          v63 = v20;
          v60 = (_QWORD *)sub_186B270(0x18u);
          v20 = v63;
          v61 = v60;
          *v60 = 2;
          v41 = 1;
          v38 = v61 + 1;
          *(_QWORD *)(v63 + 80) = v38;
          v42 = v38;
        }
        *v42 = v21;
        *((_DWORD *)v38 - 1) = v41;
      }
      sub_DE3700(v20);
    }
    v23 = *v6;
    if ( *v6 )
    {
      if ( (*v6 & 7) == 1 )
        v24 = v23 >> 3;
      else
        LODWORD(v24) = *(_DWORD *)(v23 - 8);
    }
    else
    {
      LODWORD(v24) = -1640531495;
    }
    v25 = *(unsigned int *)(a1 + 680);
    v26 = *(_QWORD *)(a1 + 672);
    v27 = v25 - 1;
    v25 *= 24;
    v28 = v26 + v25;
    v29 = 24LL * ((unsigned int)v24 & v27);
    v30 = v26 + v29;
    if ( v29 != v25 )
    {
      for ( i = v26 + v29; v28 != i; i += 24 )
      {
        v32 = *(_DWORD *)(i + 4);
        if ( v32 == 2 )
        {
          if ( (_DWORD)v24 == *(_DWORD *)i && v23 == *(_QWORD *)(i + 8) )
          {
LABEL_27:
            v33 = i + 24;
            v34 = *(unsigned int *)(a1 + 684);
            if ( v28 == i + 24 )
              v33 = *(_QWORD *)(a1 + 672);
            v35 = v34 - 1;
            if ( *(_DWORD *)(v33 + 4) )
            {
              *(_DWORD *)(i + 4) = 1;
              v46 = *(_DWORD *)(a1 + 688);
              *(_DWORD *)(a1 + 684) = v35;
              v47 = v46 + 1;
              if ( v35 < 0x40 )
                v35 = 64;
              *(_DWORD *)(a1 + 688) = v47;
              if ( v35 < v47 && !(unsigned __int8)sub_186AF10(v34) )
              {
                v66 = *(_DWORD *)(a1 + 680);
                v48 = (__m128i *)sub_186B270(24LL * v66);
                v49 = v48;
                v50 = (__m128i *)((char *)v48 + 24 * v66);
                if ( v66 )
                {
                  do
                  {
                    v48->m128i_i64[0] = 0;
                    v48 = (__m128i *)((char *)v48 + 24);
                    v48[-1].m128i_i64[0] = 0;
                  }
                  while ( v48 != v50 );
                }
                v51 = *(unsigned int *)(a1 + 680);
                v52 = *(const __m128i **)(a1 + 672);
                v53 = v51 - 1;
                v54 = 24 * v51;
                v55 = (__m128i *)((char *)v52 + 24 * v51);
                v56 = (__m128i *)((char *)v49 + 24 * v51);
                if ( v52 != v55 )
                {
                  do
                  {
                    if ( v52->m128i_i32[1] == 2 )
                    {
                      v57 = 24LL * (v52->m128i_i32[0] & v53);
                      v58 = (__m128i *)((char *)v49 + v57);
                      if ( v54 == v57 )
                      {
LABEL_86:
                        if ( v58 == v49 )
                        {
LABEL_91:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v59 = v49;
                        while ( v59->m128i_i32[1] )
                        {
                          v59 = (__m128i *)((char *)v59 + 24);
                          if ( v58 == v59 )
                            goto LABEL_91;
                        }
                      }
                      else
                      {
                        v59 = (__m128i *)((char *)v49 + v57);
                        while ( v59->m128i_i32[1] )
                        {
                          v59 = (__m128i *)((char *)v59 + 24);
                          if ( v56 == v59 )
                            goto LABEL_86;
                        }
                      }
                      *v59 = _mm_loadu_si128(v52);
                      v59[1].m128i_i64[0] = v52[1].m128i_i64[0];
                    }
                    v52 = (const __m128i *)((char *)v52 + 24);
                  }
                  while ( v55 != v52 );
                  v55 = *(__m128i **)(a1 + 672);
                }
                if ( v55 )
                  sub_186B220(v55);
                *(_QWORD *)(a1 + 672) = v49;
                *(_DWORD *)(a1 + 688) = 0;
              }
            }
            else
            {
              *(_DWORD *)(i + 4) = 0;
              *(_DWORD *)(a1 + 684) = v35;
            }
            goto LABEL_31;
          }
        }
        else if ( !v32 )
        {
          goto LABEL_31;
        }
      }
    }
    if ( v26 != v30 )
    {
      for ( i = *(_QWORD *)(a1 + 672); v30 != i; i += 24 )
      {
        v36 = *(_DWORD *)(i + 4);
        if ( v36 == 2 )
        {
          if ( (_DWORD)v24 == *(_DWORD *)i && v23 == *(_QWORD *)(i + 8) )
            goto LABEL_27;
        }
        else if ( !v36 )
        {
          break;
        }
      }
    }
LABEL_31:
    ++v6;
  }
  while ( v6 != v8 );
  result = *(_QWORD *)(a1 + 728);
  if ( result )
LABEL_33:
    *(_DWORD *)(result - 4) = a2;
  return result;
}

