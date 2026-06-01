__int64 __fastcall sub_8F5580(__int64 a1, __int64 a2, __m128i a3, __m128 a4)
{
  char **exception; // r13
  __int64 v6; // rbp
  unsigned int *v7; // rdi
  __int64 v8; // rcx
  unsigned int *v9; // rdx
  unsigned int v10; // eax
  char *v11; // rdi
  int v12; // edx
  char *v13; // rcx
  char *v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  __int64 v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rdx
  __int64 *v20; // rbx
  __int64 *v21; // r12
  __int64 v22; // rdi
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rbx
  __int64 *v32; // r12
  __int64 v33; // rax
  __int64 *v34; // rbp
  __int64 *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rbp
  __int64 v39; // rdi
  unsigned int v40; // eax
  unsigned int v41; // r15d
  unsigned int v42; // r13d
  __int64 v43; // rax
  __m128i *v44; // r13
  __int64 v45; // rdx
  __int64 v46; // r10
  __int64 v47; // rdx
  __int64 v48; // rdi
  int v49; // ecx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // edx
  _QWORD *v54; // rsi
  __m128i *v55; // rdi
  const __m128i *v56; // r10
  __int64 v57; // rdx
  __m128i *v58; // rsi
  __m128i *v59; // rdx
  unsigned int v60; // r13d
  size_t v61; // rsi
  unsigned int *v62; // rdx
  _QWORD *v63; // rax
  int v64; // [rsp+0h] [rbp-B8h]
  __int64 v65; // [rsp+8h] [rbp-B0h]
  __int64 v66; // [rsp+8h] [rbp-B0h]
  __int64 v67; // [rsp+10h] [rbp-A8h]
  unsigned int v68; // [rsp+18h] [rbp-A0h]
  unsigned int v69; // [rsp+1Ch] [rbp-9Ch]
  int v70[2]; // [rsp+20h] [rbp-98h]
  __int64 v71; // [rsp+28h] [rbp-90h]
  __int64 v72; // [rsp+30h] [rbp-88h]
  __m128i *v73; // [rsp+38h] [rbp-80h]
  __int64 *v74; // [rsp+58h] [rbp-60h] BYREF
  __int64 v75[11]; // [rsp+60h] [rbp-58h] BYREF

  v6 = a2;
  v7 = *(unsigned int **)(a1 + 9336);
  if ( v7 )
  {
    a2 = (__int64)&v7[*(v7 - 1)];
    if ( v7 != (unsigned int *)a2 )
    {
      v8 = *(_QWORD *)(a1 + 8872);
      v9 = v7;
      do
      {
        v10 = *v9++;
        *(_BYTE *)(v8 + 16LL * (v10 >> 1) + 11) &= ~2u;
      }
      while ( v9 != (unsigned int *)a2 );
    }
    *(v7 - 1) = 0;
  }
  if ( !*(_DWORD *)(a1 + 9356) && !*(_DWORD *)(a1 + 9360) )
    goto LABEL_25;
  v11 = *(char **)(a1 + 9344);
  v12 = 0;
  a2 = *(unsigned int *)(a1 + 9352);
  v13 = &v11[24 * a2];
  v14 = v11;
  if ( v11 != v13 )
  {
    do
    {
      while ( *((_DWORD *)v14 + 1) )
      {
        *((_DWORD *)v14 + 1) = 0;
        v14 += 24;
        if ( v13 == v14 )
          goto LABEL_13;
      }
      v14 += 24;
      ++v12;
    }
    while ( v13 != v14 );
LABEL_13:
    if ( (unsigned int)a2 > 0x10 && 3 * (int)a2 < (unsigned int)(4 * v12) )
    {
      if ( v11 )
      {
        sub_186B220(v11);
        v15 = *(_DWORD *)(a1 + 9352);
        *(_QWORD *)(a1 + 9344) = 0;
        v16 = v15 >> 1;
        *(_DWORD *)(a1 + 9352) = v16;
        v17 = sub_186B270(24LL * v16);
        if ( !v16 )
        {
LABEL_23:
          *(_QWORD *)(a1 + 9344) = v17;
          goto LABEL_24;
        }
        if ( v16 == 1 )
        {
          v19 = (_QWORD *)v17;
LABEL_22:
          *v19 = 0;
          goto LABEL_23;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 9344) = 0;
        v16 = (unsigned int)a2 >> 1;
        *(_DWORD *)(a1 + 9352) = (unsigned int)a2 >> 1;
        v17 = sub_186B270(24LL * ((unsigned int)a2 >> 1));
      }
      v18 = (_QWORD *)v17;
      do
      {
        *v18 = 0;
        v18 += 6;
        *(v18 - 3) = 0;
      }
      while ( (_QWORD *)(v17 + 48LL * (v16 >> 1)) != v18 );
      if ( (v16 & 1) == 0 )
        goto LABEL_23;
      a2 = v16 & 0x7FFFFFFE;
      v19 = (_QWORD *)(v17 + 24 * a2);
      goto LABEL_22;
    }
  }
LABEL_24:
  *(_QWORD *)(a1 + 9356) = 0;
LABEL_25:
  v20 = *(__int64 **)(a1 + 9376);
  if ( v20 )
  {
    v21 = &v20[*((unsigned int *)v20 - 1)];
    if ( v20 >= v21 )
      goto LABEL_33;
    do
    {
      while ( 1 )
      {
        a2 = *v20;
        if ( *v20 )
        {
          v22 = *(_QWORD *)(a1 + 9368);
          if ( (*(_DWORD *)(a2 + 8))-- == 1 )
            break;
        }
        if ( ++v20 >= v21 )
          goto LABEL_32;
      }
      sub_15D7BC0(v22, a2);
      ++v20;
    }
    while ( v20 < v21 );
LABEL_32:
    v20 = *(__int64 **)(a1 + 9376);
    if ( v20 )
LABEL_33:
      *((_DWORD *)v20 - 1) = 0;
  }
  v24 = *(_QWORD *)(v6 + 8);
  if ( !v24 || !*(_DWORD *)(v24 - 4) )
    goto LABEL_36;
  sub_8F5330(a1, a3, a4);
  result = *(_QWORD *)(a1 + 8984);
  if ( qword_1C7EC50 == result && !*(_BYTE *)(a1 + 2416) )
  {
    result = sub_8E6FA0(a1);
    if ( !(_BYTE)result )
    {
      v26 = *(_QWORD *)(a1 + 112);
      if ( *(_DWORD *)(v26 + 640) != 3 )
      {
        if ( *(_BYTE *)(v26 + 644) )
          sub_8E90A0(a1, a2, *(double *)a3.m128i_i64);
        else
          sub_8E9770(a1, a2, *(double *)a3.m128i_i64);
        *(_DWORD *)(a1 + 10332) = 0;
        v27 = *(_QWORD *)(a1 + 112);
        if ( *(_DWORD *)(v27 + 640) == 1 )
          *(_DWORD *)(a1 + 10368) = (int)((double)*(int *)(a1 + 10368) * *(double *)(v27 + 656));
      }
      sub_8EC360(a1);
      v74 = nullptr;
      sub_8ECD50(a1, v6, &v74);
      v31 = v74;
      if ( v74 )
      {
        *(_QWORD *)v70 = &v74[3 * *((unsigned int *)v74 - 1)];
        if ( *(__int64 **)v70 == v74 )
          goto LABEL_50;
        v32 = v74;
        while ( 1 )
        {
          if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
            goto LABEL_50;
          v38 = v32[1];
          v67 = v32[2];
          if ( v38 )
            ++*(_DWORD *)(v38 + 8);
          v39 = *(_QWORD *)(a1 + 104);
          if ( *(_QWORD *)(v39 + 856) == v38
            || (v65 = *v32,
                sub_15DE060(v39, v38, v28, v29, v30),
                sub_B6F170(a1, v64, v65, v67, v68, v70[0], v71, v72, v73),
                v40 = sub_B645B0(a1, v38),
                v41 = v40,
                v40 == dword_1C7EC64)
            || v40 == dword_1C7EC60 )
          {
            sub_8E4E90(v38, v67);
            goto LABEL_77;
          }
          v42 = *(_DWORD *)(a1 + 9352);
          v68 = 2 * v42;
          if ( 3 * v42 < 4 * (*(_DWORD *)(a1 + 9356) + *(_DWORD *)(a1 + 9360)) )
          {
            v72 = 24LL * v68;
            v71 = v72;
            v43 = sub_186B270(v72);
            if ( v68 )
            {
              v54 = (_QWORD *)v43;
              do
              {
                *v54 = 0;
                v54 += 6;
                *(v54 - 3) = 0;
              }
              while ( v54 != (_QWORD *)(v43 + 48LL * (v42 & 0x7FFFFFFF)) );
            }
            v55 = *(__m128i **)(a1 + 9344);
            v69 = v68 - 1;
            v56 = v55;
            v73 = (__m128i *)((char *)v55 + 24 * *(unsigned int *)(a1 + 9352));
            v44 = (__m128i *)(v43 + v72);
            if ( v55 != v73 )
            {
              do
              {
                if ( v56->m128i_i32[1] == 2 )
                {
                  v57 = 24LL * (v56->m128i_i32[0] & v69);
                  v58 = (__m128i *)(v43 + v57);
                  if ( v72 == v57 )
                  {
LABEL_104:
                    if ( (__m128i *)v43 == v58 )
                    {
LABEL_121:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v59 = (__m128i *)v43;
                    while ( v59->m128i_i32[1] )
                    {
                      v59 = (__m128i *)((char *)v59 + 24);
                      if ( v58 == v59 )
                        goto LABEL_121;
                    }
                  }
                  else
                  {
                    v59 = (__m128i *)(v43 + v57);
                    while ( v59->m128i_i32[1] )
                    {
                      v59 = (__m128i *)((char *)v59 + 24);
                      if ( v44 == v59 )
                        goto LABEL_104;
                    }
                  }
                  *v59 = _mm_loadu_si128(v56);
                  v59[1].m128i_i64[0] = v56[1].m128i_i64[0];
                }
                v56 = (const __m128i *)((char *)v56 + 24);
              }
              while ( v73 != v56 );
              v55 = *(__m128i **)(a1 + 9344);
            }
            if ( v55 )
            {
              v72 = v43;
              sub_186B220(v55);
              v43 = v72;
            }
            *(_QWORD *)(a1 + 9344) = v43;
            *(_DWORD *)(a1 + 9360) = 0;
            *(_DWORD *)(a1 + 9352) = v68;
          }
          else
          {
            v69 = v42 - 1;
            v43 = *(_QWORD *)(a1 + 9344);
            v71 = 24LL * v42;
            v44 = (__m128i *)(v43 + v71);
          }
          v45 = 24LL * (v41 & v69);
          v46 = v43 + v45;
          if ( v45 == v71 )
          {
            v48 = 0;
            while ( 1 )
            {
LABEL_82:
              if ( v46 == v43 )
              {
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v53 = *(_DWORD *)(v43 + 4);
              if ( v53 == 2 )
              {
                if ( v41 == *(_DWORD *)v43 && v41 == *(_DWORD *)(v43 + 8) )
                {
                  *(_DWORD *)(v43 + 8) = v41;
                  *(_DWORD *)(v43 + 4) = 2;
                  *(_QWORD *)(v43 + 16) = v66;
                  goto LABEL_74;
                }
              }
              else
              {
                if ( !v53 )
                {
                  if ( v48 )
                  {
                    --*(_DWORD *)(a1 + 9360);
                    v43 = v48;
                  }
                  *(_DWORD *)(v43 + 8) = v41;
                  *(_DWORD *)(v43 + 4) = 2;
                  *(_QWORD *)(v43 + 16) = v66;
                  *(_DWORD *)v43 = v41;
                  ++*(_DWORD *)(a1 + 9356);
                  goto LABEL_74;
                }
                v48 = v43;
              }
              v43 += 24;
            }
          }
          v47 = v43 + v45;
          v48 = 0;
          while ( 1 )
          {
            v49 = *(_DWORD *)(v47 + 4);
            if ( v49 != 2 )
              break;
            if ( v41 == *(_DWORD *)v47 && v41 == *(_DWORD *)(v47 + 8) )
            {
              *(_DWORD *)(v47 + 8) = v41;
              *(_DWORD *)(v47 + 4) = 2;
              *(_QWORD *)(v47 + 16) = v66;
              goto LABEL_74;
            }
LABEL_69:
            v47 += 24;
            if ( (__m128i *)v47 == v44 )
              goto LABEL_82;
          }
          if ( v49 )
            break;
          if ( v48 )
          {
            --*(_DWORD *)(a1 + 9360);
            v47 = v48;
          }
          *(_DWORD *)(v47 + 8) = v41;
          *(_DWORD *)(v47 + 4) = 2;
          *(_QWORD *)(v47 + 16) = v66;
          *(_DWORD *)v47 = v41;
          ++*(_DWORD *)(a1 + 9356);
LABEL_74:
          v50 = *(_QWORD **)(a1 + 9336);
          if ( v50 )
          {
            v51 = *((unsigned int *)v50 - 1);
            if ( (_DWORD)v51 == *((_DWORD *)v50 - 2) )
            {
              v60 = (unsigned int)(3 * v51 + 1) >> 1;
              v61 = 4 * v60 + 8;
              if ( 4 * (int)v51 + 8 >= (unsigned int)v61 || (unsigned int)v51 >= v60 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_8E4EB0(v75, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v75);
                sub_233E40((__int64)v75);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v62 = (unsigned int *)sub_186B300(v50 - 1, v61);
              v50 = v62 + 2;
              *v62 = v60;
              v51 = v62[1];
              *(_QWORD *)(a1 + 9336) = v50;
            }
          }
          else
          {
            v63 = (_QWORD *)sub_186B270(0x10u);
            *v63 = 2;
            v50 = v63 + 1;
            v51 = 0;
            *(_QWORD *)(a1 + 9336) = v50;
          }
          *((_DWORD *)v50 + v51) = v41;
          ++*((_DWORD *)v50 - 1);
          v52 = *(_QWORD *)(a1 + 8872) + 16LL * (v41 >> 1);
          *(_BYTE *)(v52 + 11) |= 2u;
          sub_8E4E90(v38, v67);
LABEL_77:
          v32 += 3;
          if ( *(__int64 **)v70 == v32 )
          {
LABEL_50:
            v33 = *((unsigned int *)v31 - 1);
            if ( (_DWORD)v33 )
            {
              v34 = v31;
              v35 = &v31[3 * v33];
              do
              {
                v36 = v34[2];
                v37 = v34[1];
                v34 += 3;
                sub_8E4E90(v37, v36);
              }
              while ( v35 != v34 );
            }
            sub_186B220(v31 - 1);
            goto LABEL_36;
          }
        }
        v48 = v47;
        goto LABEL_69;
      }
LABEL_36:
      result = *(unsigned int *)(a1 + 9464);
      *(_DWORD *)(a1 + 9472) = result;
    }
  }
  return result;
}

