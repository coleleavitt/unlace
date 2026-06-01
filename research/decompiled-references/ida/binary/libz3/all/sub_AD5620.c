__int64 __fastcall sub_AD5620(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r14
  int v6; // r12d
  __int64 v7; // rbp
  __int64 result; // rax
  int v9; // edx
  _QWORD *v10; // r8
  _QWORD *v11; // r15
  __int16 v12; // dx
  int v13; // eax
  _DWORD *v14; // rax
  unsigned int v15; // ebp
  unsigned int v16; // edx
  __int64 v17; // rax
  unsigned int *v18; // r10
  unsigned int v19; // ecx
  _DWORD *v20; // rsi
  __int16 v21; // ax
  _DWORD *v22; // rax
  _DWORD *v23; // rsi
  _DWORD *v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // esi
  unsigned int v28; // ebp
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned int **v31; // rdx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rbp
  __int64 v35; // rax
  _QWORD *v36; // rdi
  _DWORD *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rdx
  unsigned int **v42; // rax
  __int64 v43; // rax
  unsigned int v44; // [rsp+0h] [rbp-168h]
  unsigned int *v45; // [rsp+0h] [rbp-168h]
  unsigned int *v46; // [rsp+0h] [rbp-168h]
  unsigned int *v47; // [rsp+0h] [rbp-168h]
  unsigned int *v48; // [rsp+0h] [rbp-168h]
  unsigned int *v49; // [rsp+0h] [rbp-168h]
  unsigned int *v50; // [rsp+8h] [rbp-160h]
  _QWORD *v51; // [rsp+8h] [rbp-160h]
  _QWORD *v52; // [rsp+8h] [rbp-160h]
  __int64 v53; // [rsp+10h] [rbp-158h]
  _QWORD *ptr; // [rsp+20h] [rbp-148h]
  __int64 v55; // [rsp+28h] [rbp-140h]
  _DWORD *v56; // [rsp+30h] [rbp-138h] BYREF
  int v57; // [rsp+38h] [rbp-130h]

  v3 = a3;
  v6 = 1 << *a3;
  v7 = 4LL * (*a3 >> 5);
  if ( *a3 < *(_DWORD *)(a2 + 8) )
  {
    result = v7 + *(_QWORD *)(a2 + 16);
    v9 = *(_DWORD *)result;
    if ( (v6 & *(_DWORD *)result) != 0 )
      return result;
  }
  else
  {
    sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
    result = v7 + *(_QWORD *)(a2 + 16);
    v9 = *(_DWORD *)result;
  }
  v10 = &v56;
  *(_DWORD *)result = v6 | v9;
  ptr = &v56;
  v56 = v3;
  v57 = 0;
  v53 = a2 + 8;
  v55 = 0x1000000001LL;
  LODWORD(result) = 0;
  while ( 1 )
  {
    v11 = &v10[2 * (unsigned int)result];
    v12 = *((_WORD *)v3 + 2);
    if ( v12 == 1 )
      break;
    if ( v12 != 2 )
    {
      if ( v12 )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      v15 = v3[6];
      v16 = *((_DWORD *)v11 + 2);
      if ( v16 < v15 )
      {
        while ( 1 )
        {
          v17 = v16++;
          v18 = *(unsigned int **)&v3[2 * v17 + 8];
          *((_DWORD *)v11 + 2) = v16;
          v19 = *v18;
          if ( *v18 < *(_DWORD *)(a2 + 8) )
          {
            v23 = (_DWORD *)(*(_QWORD *)(a2 + 16) + 4LL * (v19 >> 5));
            if ( ((1 << v19) & *v23) != 0 )
              goto LABEL_24;
            *v23 |= 1 << v19;
            v21 = *((_WORD *)v18 + 2);
            if ( v21 != 1 )
            {
LABEL_20:
              if ( v21 == 2 )
              {
                v30 = (unsigned int)v55;
                if ( (unsigned int)v55 < HIDWORD(v55) )
                  goto LABEL_42;
                v46 = v18;
                v34 = (unsigned int)(2 * HIDWORD(v55));
                v10 = (_QWORD *)sub_186B270(16 * v34);
                v35 = 0;
                v36 = ptr;
                v18 = v46;
                v30 = (unsigned int)v55;
                if ( (_DWORD)v55 )
                {
                  do
                  {
                    *(__m128i *)&v10[v35] = _mm_loadu_si128((const __m128i *)&ptr[v35]);
                    v35 += 2;
                  }
                  while ( v35 != 2LL * (unsigned int)v55 );
                }
LABEL_48:
                if ( v36 != &v56 && v36 )
                {
                  v51 = v10;
                  v47 = v18;
                  sub_186B220(v36);
                  v30 = (unsigned int)v55;
                  v10 = v51;
                  v18 = v47;
                }
                ptr = v10;
                HIDWORD(v55) = v34;
                goto LABEL_43;
              }
              if ( v21 )
              {
                sub_1872CE0("");
                sub_1873130(114, 73);
              }
              if ( v18[6] )
              {
                v41 = (unsigned int)v55;
                if ( (unsigned int)v55 >= HIDWORD(v55) )
                {
                  v49 = v18;
                  v10 = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v55)));
                  v43 = 0;
                  v18 = v49;
                  v41 = (unsigned int)v55;
                  if ( (_DWORD)v55 )
                  {
                    do
                    {
                      *(__m128i *)&v10[v43] = _mm_loadu_si128((const __m128i *)&ptr[v43]);
                      v43 += 2;
                    }
                    while ( v43 != 2LL * (unsigned int)v55 );
                  }
                  if ( ptr != &v56 && ptr )
                  {
                    v52 = v10;
                    sub_186B220(ptr);
                    v41 = (unsigned int)v55;
                    v10 = v52;
                    v18 = v49;
                  }
                  ptr = v10;
                  HIDWORD(v55) *= 2;
                }
                else
                {
                  v10 = ptr;
                }
                v42 = (unsigned int **)&v10[2 * v41];
                *((_DWORD *)v42 + 2) = 0;
                v32 = (unsigned int)v55;
                *v42 = v18;
                v33 = v55 + 1;
                goto LABEL_44;
              }
              v37 = *(_DWORD **)(sub_15D1F10(v18) + 24);
              if ( v37 && *(_DWORD *)(a1 + 56) == *v37 && !v37[1] )
                sub_13CA9A();
              goto LABEL_23;
            }
          }
          else
          {
            v50 = v18;
            v44 = *v18;
            sub_186B510(v53, v19 + 1, 0);
            v18 = v50;
            v20 = (_DWORD *)(*(_QWORD *)(a2 + 16) + 4LL * (v44 >> 5));
            *v20 |= 1 << v44;
            v21 = *((_WORD *)v50 + 2);
            if ( v21 != 1 )
              goto LABEL_20;
          }
          v24 = *(_DWORD **)(sub_15D1F10(v18) + 24);
          if ( v24 && *(_DWORD *)(a1 + 56) == *v24 && !v24[1] )
            sub_13CA9A();
LABEL_23:
          v16 = *((_DWORD *)v11 + 2);
LABEL_24:
          if ( v16 >= v15 )
          {
            LODWORD(result) = v55 - 1;
            break;
          }
        }
      }
      LODWORD(v55) = result;
      v22 = *(_DWORD **)(sub_15D1F10(v3) + 24);
      if ( v22 && *(_DWORD *)(a1 + 56) == *v22 && !v22[1] )
        sub_13CA9A();
      goto LABEL_8;
    }
    v25 = v3[18];
    v26 = *((_DWORD *)v11 + 2);
    v27 = v25 + v3[19] + 1;
    if ( v26 >= v27 )
    {
LABEL_70:
      LODWORD(v55) = v55 - 1;
      v40 = *(_DWORD **)(sub_15D1F10(v3) + 24);
      if ( v40 && *(_DWORD *)(a1 + 56) == *v40 && !v40[1] )
        sub_13CA9A();
LABEL_8:
      v13 = v55;
      v10 = ptr;
      if ( !(_DWORD)v55 )
        goto LABEL_13;
LABEL_9:
      result = (unsigned int)(v13 - 1);
      v3 = (_DWORD *)v10[2 * result];
    }
    else
    {
      if ( !v26 )
      {
        v18 = *((unsigned int **)v3 + 3);
        goto LABEL_39;
      }
      while ( 1 )
      {
        v38 = v26 - 1;
        if ( v25 < v26 )
          v38 = (unsigned int)v38 - v25;
        v18 = *(unsigned int **)&v3[4 * (unsigned int)v3[5] + 20 + 2 * v38];
LABEL_39:
        ++v26;
        v28 = *v18;
        *((_DWORD *)v11 + 2) = v26;
        if ( v28 >= *(_DWORD *)(a2 + 8) )
          break;
        v29 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v29 + 4LL * (v28 >> 5)) & (1 << v28)) == 0 )
          goto LABEL_41;
        if ( v26 >= v27 )
          goto LABEL_70;
        v25 = v3[18];
      }
      v45 = v18;
      sub_186B510(v53, v28 + 1, 0);
      v29 = *(_QWORD *)(a2 + 16);
      v18 = v45;
LABEL_41:
      *(_DWORD *)(v29 + 4LL * (v28 >> 5)) |= 1 << v28;
      v30 = (unsigned int)v55;
      if ( (unsigned int)v55 >= HIDWORD(v55) )
      {
        v48 = v18;
        v34 = (unsigned int)(2 * HIDWORD(v55));
        v10 = (_QWORD *)sub_186B270(16 * v34);
        v39 = 0;
        v36 = ptr;
        v18 = v48;
        v30 = (unsigned int)v55;
        if ( (_DWORD)v55 )
        {
          do
          {
            *(__m128i *)&v10[v39] = _mm_loadu_si128((const __m128i *)&ptr[v39]);
            v39 += 2;
          }
          while ( v39 != 2LL * (unsigned int)v55 );
        }
        goto LABEL_48;
      }
LABEL_42:
      v10 = ptr;
LABEL_43:
      v31 = (unsigned int **)&v10[2 * v30];
      *v31 = v18;
      *((_DWORD *)v31 + 2) = 0;
      v32 = (unsigned int)v55;
      v33 = v55 + 1;
LABEL_44:
      LODWORD(v55) = v33;
      LODWORD(result) = v33 - 1;
      v3 = (_DWORD *)v10[2 * v32];
    }
  }
  v14 = *(_DWORD **)(sub_15D1F10(v3) + 24);
  if ( v14 && *(_DWORD *)(a1 + 56) == *v14 && !v14[1] )
    sub_13CA9A();
  v10 = ptr;
  v13 = v55 - 1;
  LODWORD(v55) = v13;
  if ( v13 )
    goto LABEL_9;
LABEL_13:
  result = (__int64)&v56;
  if ( v10 != &v56 )
  {
    if ( v10 )
      return sub_186B220(v10);
  }
  return result;
}

