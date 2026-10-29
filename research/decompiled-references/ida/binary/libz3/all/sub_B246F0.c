int *__fastcall sub_B246F0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  int v6; // r12d
  __int64 v7; // rbp
  int *result; // rax
  int v9; // edx
  __int64 *v10; // rdx
  __int64 v11; // rcx
  __int16 v12; // si
  __int64 *v13; // r15
  unsigned int v14; // ebp
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // ecx
  int v19; // esi
  int *v20; // rdi
  int v21; // r10d
  __int16 v22; // dx
  unsigned int v23; // ecx
  unsigned int v24; // esi
  unsigned int v25; // edi
  bool v26; // cc
  unsigned int v27; // ebp
  __int64 v28; // r10
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // rbp
  __int64 v34; // rax
  __int64 *v35; // rdi
  __int64 v36; // r10
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // rax
  unsigned int v41; // [rsp+10h] [rbp-158h]
  __int64 v42; // [rsp+10h] [rbp-158h]
  __int64 v43; // [rsp+10h] [rbp-158h]
  __int64 v44; // [rsp+10h] [rbp-158h]
  __int64 v45; // [rsp+10h] [rbp-158h]
  __int64 v46; // [rsp+10h] [rbp-158h]
  __int64 v47; // [rsp+18h] [rbp-150h]
  __int64 *v48; // [rsp+18h] [rbp-150h]
  __int64 *v49; // [rsp+18h] [rbp-150h]
  __int64 *v50; // [rsp+20h] [rbp-148h]
  __int64 v51; // [rsp+28h] [rbp-140h]
  __int64 v52; // [rsp+30h] [rbp-138h] BYREF
  int v53; // [rsp+38h] [rbp-130h]

  v3 = (__int64)a3;
  if ( a3[2] > 1u )
  {
    v6 = 1 << *a3;
    v7 = 4LL * (*a3 >> 5);
    if ( *a3 >= *(_DWORD *)(a2 + 8) )
    {
      sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
      result = (int *)(v7 + *(_QWORD *)(a2 + 16));
      v9 = *result;
    }
    else
    {
      result = (int *)(v7 + *(_QWORD *)(a2 + 16));
      v9 = *result;
      if ( (v6 & *result) != 0 )
        return result;
    }
    *result = v6 | v9;
  }
  v10 = &v52;
  v52 = v3;
  LODWORD(v11) = 0;
  v50 = &v52;
  v53 = 0;
  v51 = 0x1000000001LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(_WORD *)(v3 + 4);
      v13 = &v10[2 * (unsigned int)v11];
      if ( v12 == 1 )
        goto LABEL_27;
      if ( v12 != 2 )
        break;
      v23 = *(_DWORD *)(v3 + 72);
      v24 = *((_DWORD *)v13 + 2);
      v25 = v23 + *(_DWORD *)(v3 + 76) + 1;
      if ( v24 >= v25 )
      {
LABEL_26:
        LODWORD(v11) = v51 - 1;
LABEL_27:
        LODWORD(v51) = v11;
        if ( !(_DWORD)v11 )
          goto LABEL_31;
        goto LABEL_28;
      }
      if ( !v24 )
      {
        v17 = *(_QWORD *)(v3 + 24);
        goto LABEL_37;
      }
      while ( 1 )
      {
        v36 = v24 - 1;
        if ( v23 < v24 )
          v36 = (unsigned int)v36 - v23;
        v17 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v36 + 80);
LABEL_37:
        ++v24;
        v26 = *(_DWORD *)(v17 + 8) <= 1u;
        *((_DWORD *)v13 + 2) = v24;
        if ( v26 )
          break;
        v27 = *(_DWORD *)v17;
        if ( *(_DWORD *)v17 >= *(_DWORD *)(a2 + 8) )
        {
          v42 = v17;
          sub_186B510(a2 + 8, v27 + 1, 0);
          v28 = *(_QWORD *)(a2 + 16);
          v17 = v42;
LABEL_40:
          *(_DWORD *)(v28 + 4LL * (v27 >> 5)) |= 1 << v27;
          break;
        }
        v28 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v28 + 4LL * (v27 >> 5)) & (1 << v27)) == 0 )
          goto LABEL_40;
        if ( v24 >= v25 )
          goto LABEL_26;
        v23 = *(_DWORD *)(v3 + 72);
      }
      v29 = (unsigned int)v51;
      if ( (unsigned int)v51 >= HIDWORD(v51) )
      {
        v45 = v17;
        v33 = (unsigned int)(2 * HIDWORD(v51));
        v10 = (__int64 *)sub_186B270(16 * v33);
        v37 = 0;
        v35 = v50;
        v17 = v45;
        v29 = (unsigned int)v51;
        if ( (_DWORD)v51 )
        {
          do
          {
            *(__m128i *)&v10[v37] = _mm_loadu_si128((const __m128i *)&v50[v37]);
            v37 += 2;
          }
          while ( v37 != 2LL * (unsigned int)v51 );
        }
        goto LABEL_50;
      }
LABEL_42:
      v10 = v50;
LABEL_43:
      v30 = &v10[2 * v29];
      *((_DWORD *)v30 + 2) = 0;
      v31 = (unsigned int)v51;
      *v30 = v17;
      v32 = v51 + 1;
LABEL_44:
      LODWORD(v51) = v32;
      LODWORD(v11) = v32 - 1;
      v3 = v10[2 * v31];
    }
    if ( v12 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v14 = *(_DWORD *)(v3 + 24);
    v15 = *((_DWORD *)v13 + 2);
    if ( v15 < v14 )
    {
      while ( 1 )
      {
        v16 = v15++;
        v17 = *(_QWORD *)(v3 + 8 * v16 + 32);
        *((_DWORD *)v13 + 2) = v15;
        if ( *(_DWORD *)(v17 + 8) > 1u )
        {
          v18 = *(_DWORD *)v17;
          if ( *(_DWORD *)v17 < *(_DWORD *)(a2 + 8) )
          {
            v20 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v18 >> 5));
            v21 = *v20;
            v19 = 1 << v18;
            if ( ((1 << v18) & *v20) != 0 )
              goto LABEL_21;
          }
          else
          {
            v47 = v17;
            v41 = *(_DWORD *)v17;
            sub_186B510(a2 + 8, v18 + 1, 0);
            v17 = v47;
            v19 = 1 << v41;
            v20 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v41 >> 5));
            v21 = *v20;
          }
          *v20 = v21 | v19;
        }
        v22 = *(_WORD *)(v17 + 4);
        if ( v22 != 1 )
        {
          if ( v22 == 2 )
          {
            v29 = (unsigned int)v51;
            if ( (unsigned int)v51 < HIDWORD(v51) )
              goto LABEL_42;
            v43 = v17;
            v33 = (unsigned int)(2 * HIDWORD(v51));
            v10 = (__int64 *)sub_186B270(16 * v33);
            v34 = 0;
            v35 = v50;
            v17 = v43;
            v29 = (unsigned int)v51;
            if ( (_DWORD)v51 )
            {
              do
              {
                *(__m128i *)&v10[v34] = _mm_loadu_si128((const __m128i *)&v50[v34]);
                v34 += 2;
              }
              while ( v34 != 2LL * (unsigned int)v51 );
            }
LABEL_50:
            if ( v35 != &v52 && v35 )
            {
              v48 = v10;
              v44 = v17;
              sub_186B220(v35);
              v29 = (unsigned int)v51;
              v10 = v48;
              v17 = v44;
            }
            v50 = v10;
            HIDWORD(v51) = v33;
            goto LABEL_43;
          }
          if ( v22 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v17 + 24) )
          {
            v38 = (unsigned int)v51;
            if ( (unsigned int)v51 >= HIDWORD(v51) )
            {
              v46 = v17;
              v10 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v51)));
              v40 = 0;
              v17 = v46;
              v38 = (unsigned int)v51;
              if ( (_DWORD)v51 )
              {
                do
                {
                  *(__m128i *)&v10[v40] = _mm_loadu_si128((const __m128i *)&v50[v40]);
                  v40 += 2;
                }
                while ( v40 != 2LL * (unsigned int)v51 );
              }
              if ( v50 != &v52 && v50 )
              {
                v49 = v10;
                sub_186B220(v50);
                v38 = (unsigned int)v51;
                v10 = v49;
                v17 = v46;
              }
              v50 = v10;
              HIDWORD(v51) *= 2;
            }
            else
            {
              v10 = v50;
            }
            v39 = &v10[2 * v38];
            *v39 = v17;
            *((_DWORD *)v39 + 2) = 0;
            v31 = (unsigned int)v51;
            v32 = v51 + 1;
            goto LABEL_44;
          }
          sub_B24290(*(_QWORD *)a1, *(_DWORD *)(a1 + 8), v17);
        }
        v15 = *((_DWORD *)v13 + 2);
LABEL_21:
        if ( v15 >= v14 )
        {
          LODWORD(v11) = v51 - 1;
          break;
        }
      }
    }
    LODWORD(v51) = v11;
    sub_B24290(*(_QWORD *)a1, *(_DWORD *)(a1 + 8), v3);
    LODWORD(v11) = v51;
    v10 = v50;
    if ( !(_DWORD)v51 )
      break;
LABEL_28:
    v11 = (unsigned int)(v11 - 1);
    v3 = v10[2 * v11];
  }
LABEL_31:
  result = (int *)&v52;
  if ( v10 != &v52 )
  {
    if ( v10 )
      return (int *)sub_186B220(v10);
  }
  return result;
}

