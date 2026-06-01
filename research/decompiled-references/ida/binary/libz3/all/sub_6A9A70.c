__int64 __fastcall sub_6A9A70(_QWORD *a1, __int64 a2, _DWORD *a3, int a4, int a5, int a6)
{
  _QWORD *exception; // rax
  __int64 v7; // r15
  int v9; // r12d
  __int64 v10; // rbp
  __int64 result; // rax
  int v12; // edx
  __int64 *v13; // rcx
  __int16 v14; // dx
  __int64 *v15; // r12
  unsigned int v16; // r13d
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned int v20; // ecx
  int v21; // edi
  int *v22; // rax
  int v23; // esi
  __int16 v24; // ax
  __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // esi
  _DWORD *v28; // r13
  bool v29; // cc
  __int64 v30; // rdx
  __int64 *v31; // rdx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // [rsp+0h] [rbp-168h]
  __int64 v43; // [rsp+8h] [rbp-160h]
  __int64 *v44; // [rsp+10h] [rbp-158h]
  _QWORD *v45; // [rsp+18h] [rbp-150h]
  __int64 *v46; // [rsp+20h] [rbp-148h]
  __int64 v47; // [rsp+28h] [rbp-140h]
  __int64 v48; // [rsp+30h] [rbp-138h] BYREF
  int v49; // [rsp+38h] [rbp-130h]
  __int64 v50; // [rsp+40h] [rbp-128h]
  __int64 v51; // [rsp+48h] [rbp-120h]
  int v52; // [rsp+50h] [rbp-118h]
  __int64 v53; // [rsp+58h] [rbp-110h]

  v7 = (__int64)a3;
  v45 = a1;
  if ( a3[2] > 1u )
  {
    v9 = 1 << *a3;
    v10 = 4LL * (*a3 >> 5);
    if ( *a3 >= *(_DWORD *)(a2 + 8) )
    {
      sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
      result = v10 + *(_QWORD *)(a2 + 16);
      v12 = *(_DWORD *)result;
    }
    else
    {
      result = v10 + *(_QWORD *)(a2 + 16);
      v12 = *(_DWORD *)result;
      if ( (v9 & *(_DWORD *)result) != 0 )
        return result;
    }
    *(_DWORD *)result = v9 | v12;
  }
  v13 = &v48;
  v48 = v7;
  v44 = &v48;
  v46 = &v48;
  v49 = 0;
  v47 = 0x1000000001LL;
  result = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = *(_WORD *)(v7 + 4);
      v15 = &v13[2 * (unsigned int)result];
      if ( v14 != 1 )
        break;
LABEL_23:
      LODWORD(v47) = result;
      if ( !(_DWORD)result )
        goto LABEL_29;
LABEL_24:
      result = (unsigned int)(result - 1);
      v7 = v13[2 * result];
    }
    if ( v14 != 2 )
    {
      if ( v14 )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      v16 = *(_DWORD *)(v7 + 24);
      v17 = *((_DWORD *)v15 + 2);
      if ( v17 < v16 )
      {
        while ( 1 )
        {
          v18 = v17++;
          v19 = *(_QWORD *)(v7 + 8 * v18 + 32);
          *((_DWORD *)v15 + 2) = v17;
          if ( *(_DWORD *)(v19 + 8) > 1u )
          {
            v20 = *(_DWORD *)v19;
            if ( *(_DWORD *)v19 < *(_DWORD *)(a2 + 8) )
            {
              v21 = 1 << v20;
              v22 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v20 >> 5));
              v23 = *v22;
              if ( ((1 << v20) & *v22) != 0 )
                goto LABEL_21;
            }
            else
            {
              LODWORD(v43) = *(_DWORD *)v19;
              sub_186B510(a2 + 8, v20 + 1, 0);
              v21 = 1 << v43;
              v22 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * ((unsigned int)v43 >> 5));
              v23 = *v22;
            }
            *v22 = v23 | v21;
          }
          v24 = *(_WORD *)(v19 + 4);
          if ( v24 != 1 )
          {
            if ( v24 == 2 )
            {
              v36 = (unsigned int)v47;
              if ( (unsigned int)v47 >= HIDWORD(v47) )
              {
                v13 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v47)));
                v40 = 0;
                v36 = (unsigned int)v47;
                if ( (_DWORD)v47 )
                {
                  do
                  {
                    *(__m128i *)&v13[v40] = _mm_loadu_si128((const __m128i *)&v46[v40]);
                    v40 += 2;
                  }
                  while ( v40 != 2LL * (unsigned int)v47 );
                }
                if ( v46 != v44 && v46 )
                {
                  v43 = (__int64)v13;
                  sub_186B220(v46);
                  v36 = (unsigned int)v47;
                  v13 = (__int64 *)v43;
                }
                v46 = v13;
                HIDWORD(v47) *= 2;
              }
              else
              {
                v13 = v46;
              }
              v37 = &v13[2 * v36];
              *v37 = v19;
              *((_DWORD *)v37 + 2) = 0;
              v32 = (unsigned int)v47;
              v33 = v47 + 1;
              goto LABEL_42;
            }
            if ( v24 )
            {
              sub_1872CE0("");
              sub_1873130(114, 73);
            }
            if ( *(_DWORD *)(v19 + 24) )
            {
              v34 = (unsigned int)v47;
              if ( (unsigned int)v47 >= HIDWORD(v47) )
              {
                v13 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v47)));
                v41 = 0;
                v34 = (unsigned int)v47;
                if ( (_DWORD)v47 )
                {
                  do
                  {
                    *(__m128i *)&v13[v41] = _mm_loadu_si128((const __m128i *)&v46[v41]);
                    v41 += 2;
                  }
                  while ( v41 != 2LL * (unsigned int)v47 );
                }
                if ( v46 != v44 )
                {
                  if ( v46 )
                  {
                    v43 = (__int64)v13;
                    sub_186B220(v46);
                    v34 = (unsigned int)v47;
                    v13 = (__int64 *)v43;
                  }
                }
                v46 = v13;
                HIDWORD(v47) *= 2;
              }
              else
              {
                v13 = v46;
              }
              v35 = &v13[2 * v34];
              *((_DWORD *)v35 + 2) = 0;
              v32 = (unsigned int)v47;
              *v35 = v19;
              v33 = v47 + 1;
              goto LABEL_42;
            }
          }
          v17 = *((_DWORD *)v15 + 2);
LABEL_21:
          if ( v17 >= v16 )
          {
            v13 = v46;
            result = (unsigned int)(v47 - 1);
            goto LABEL_23;
          }
        }
      }
      goto LABEL_23;
    }
    LODWORD(v25) = *(_DWORD *)(v7 + 72);
    v26 = *((_DWORD *)v15 + 2);
    v27 = v25 + *(_DWORD *)(v7 + 76) + 1;
    if ( v26 >= v27 )
      break;
    if ( !v26 )
    {
      v28 = *(_DWORD **)(v7 + 24);
      goto LABEL_35;
    }
    while ( 1 )
    {
      v38 = v26 - 1;
      if ( (unsigned int)v25 < v26 )
        v38 = (unsigned int)(v38 - v25);
      v28 = *(_DWORD **)(16LL * *(unsigned int *)(v7 + 20) + v7 + 8 * v38 + 80);
LABEL_35:
      ++v26;
      v29 = v28[2] <= 1u;
      *((_DWORD *)v15 + 2) = v26;
      if ( v29 )
        break;
      LODWORD(v13) = *v28;
      if ( *v28 >= *(_DWORD *)(a2 + 8) )
      {
        LODWORD(v43) = *v28;
        sub_186B510(a2 + 8, (unsigned int)((_DWORD)v13 + 1), 0);
        v25 = *(_QWORD *)(a2 + 16);
        LODWORD(v13) = v43;
LABEL_38:
        *(_DWORD *)(v25 + 4LL * ((unsigned int)v13 >> 5)) |= 1 << (char)v13;
        break;
      }
      v25 = *(_QWORD *)(a2 + 16);
      if ( (*(_DWORD *)(v25 + 4LL * ((unsigned int)v13 >> 5)) & (1 << (char)v13)) == 0 )
        goto LABEL_38;
      if ( v26 >= v27 )
        goto LABEL_68;
      LODWORD(v25) = *(_DWORD *)(v7 + 72);
    }
    v30 = (unsigned int)v47;
    if ( (unsigned int)v47 >= HIDWORD(v47) )
    {
      v13 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v47)));
      v39 = 0;
      v30 = (unsigned int)v47;
      if ( (_DWORD)v47 )
      {
        do
        {
          *(__m128i *)&v13[v39] = _mm_loadu_si128((const __m128i *)&v46[v39]);
          v39 += 2;
        }
        while ( v39 != 2LL * (unsigned int)v47 );
      }
      if ( v46 && v46 != v44 )
      {
        v43 = (__int64)v13;
        sub_186B220(v46);
        v30 = (unsigned int)v47;
        v13 = (__int64 *)v43;
      }
      v46 = v13;
      HIDWORD(v47) *= 2;
    }
    else
    {
      v13 = v46;
    }
    v31 = &v13[2 * v30];
    *v31 = (__int64)v28;
    *((_DWORD *)v31 + 2) = 0;
    v32 = (unsigned int)v47;
    v33 = v47 + 1;
LABEL_42:
    LODWORD(v47) = v33;
    result = (unsigned int)(v33 - 1);
    v7 = v13[2 * v32];
  }
LABEL_68:
  LODWORD(v47) = v47 - 1;
  if ( (unsigned __int8)sub_15EC800(
                          *v45,
                          *(_QWORD *)(v7 + 24),
                          v25,
                          (_DWORD)v13,
                          a5,
                          a6,
                          v42,
                          v43,
                          (__int64)v44,
                          (_DWORD)v45,
                          (_DWORD)v46,
                          v47,
                          v48,
                          v49,
                          v50,
                          v51,
                          v52,
                          v53) )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = &off_1C69D20;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'qe::has_quantified_uninterpreted(ast_manager &,expr *)::found,
      (void (*)(void *))sub_6A97F0);
  }
  result = (unsigned int)v47;
  v13 = v46;
  if ( (_DWORD)v47 )
    goto LABEL_24;
LABEL_29:
  if ( v13 )
  {
    result = (__int64)v44;
    if ( v13 != v44 )
      return sub_186B220(v13);
  }
  return result;
}

