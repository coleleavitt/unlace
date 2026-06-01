void __fastcall sub_AC7030(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r13
  int v4; // ebp
  __int64 v5; // rbx
  int *v6; // rbx
  int v7; // ecx
  int *v8; // rdx
  int v9; // ecx
  _QWORD *v10; // rbp
  __int16 v11; // cx
  _QWORD *v12; // rbx
  unsigned int v13; // ebp
  unsigned int v14; // esi
  __int64 v15; // rdx
  unsigned int *v16; // r15
  unsigned int v17; // ecx
  int v18; // r10d
  int *v19; // rdx
  int v20; // edi
  __int16 v21; // dx
  _DWORD *v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // esi
  unsigned int *v26; // r9
  unsigned int v27; // ecx
  __int64 v28; // rdi
  __int64 v29; // rdx
  unsigned int **v30; // rdx
  __int64 v31; // rax
  int v32; // edx
  _DWORD *v33; // rdx
  __int64 v34; // rdx
  unsigned int **v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  int *v39; // rbx
  _DWORD *v40; // rax
  __int64 v41; // rdx
  unsigned int **v42; // rax
  __int64 v43; // rax
  unsigned int v44; // [rsp+0h] [rbp-168h]
  unsigned int v45; // [rsp+0h] [rbp-168h]
  unsigned int *v46; // [rsp+0h] [rbp-168h]
  __int64 v47; // [rsp+8h] [rbp-160h]
  unsigned int *v48; // [rsp+18h] [rbp-150h]
  _QWORD *v49; // [rsp+20h] [rbp-148h]
  __int64 v50; // [rsp+28h] [rbp-140h]
  _DWORD *v51; // [rsp+30h] [rbp-138h] BYREF
  int v52; // [rsp+38h] [rbp-130h]

  v3 = a2;
  v4 = 1 << *a2;
  v5 = 4LL * (*a2 >> 5);
  if ( *a2 < *(_DWORD *)(a1 + 8) )
  {
    v39 = (int *)(*(_QWORD *)(a1 + 16) + v5);
    v7 = *v39;
    v8 = v39;
    if ( (v4 & *v39) != 0 )
      return;
  }
  else
  {
    sub_186B510(a1 + 8, (unsigned int)(*a2 + 1), 0);
    v6 = (int *)(*(_QWORD *)(a1 + 16) + v5);
    v7 = *v6;
    v8 = v6;
  }
  v9 = v4 | v7;
  v10 = &v51;
  *v8 = v9;
  v49 = &v51;
  v51 = a2;
  v52 = 0;
  v47 = a1 + 8;
  v50 = 0x1000000001LL;
  LODWORD(v8) = 0;
  while ( 1 )
  {
    v11 = *((_WORD *)v3 + 2);
    v12 = &v10[2 * (unsigned int)v8];
    if ( v11 == 1 )
      break;
    if ( v11 != 2 )
    {
      if ( v11 )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      v13 = v3[6];
      v14 = *((_DWORD *)v12 + 2);
      if ( v14 < v13 )
      {
        while ( 1 )
        {
          v15 = v14++;
          v16 = *(unsigned int **)&v3[2 * v15 + 8];
          *((_DWORD *)v12 + 2) = v14;
          v17 = *v16;
          if ( *v16 < *(_DWORD *)(a1 + 8) )
          {
            v18 = 1 << v17;
            v19 = (int *)(*(_QWORD *)(a1 + 16) + 4LL * (v17 >> 5));
            v20 = *v19;
            if ( ((1 << v17) & *v19) != 0 )
              goto LABEL_24;
          }
          else
          {
            v44 = *v16;
            sub_186B510(v47, v17 + 1, 0);
            v18 = 1 << v44;
            v19 = (int *)(*(_QWORD *)(a1 + 16) + 4LL * (v44 >> 5));
            v20 = *v19;
          }
          *v19 = v20 | v18;
          v21 = *((_WORD *)v16 + 2);
          if ( v21 != 1 )
          {
            if ( v21 == 2 )
            {
              v34 = (unsigned int)v50;
              if ( (unsigned int)v50 >= HIDWORD(v50) )
              {
                v10 = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v50)));
                v38 = 0;
                v34 = (unsigned int)v50;
                if ( (_DWORD)v50 )
                {
                  do
                  {
                    *(__m128i *)&v10[v38] = _mm_loadu_si128((const __m128i *)&v49[v38]);
                    v38 += 2;
                  }
                  while ( v38 != 2LL * (unsigned int)v50 );
                }
                if ( v49 != &v51 && v49 )
                {
                  sub_186B220(v49);
                  v34 = (unsigned int)v50;
                }
                v49 = v10;
                HIDWORD(v50) *= 2;
              }
              else
              {
                v10 = v49;
              }
              v35 = (unsigned int **)&v10[2 * v34];
              *((_DWORD *)v35 + 2) = 0;
              v31 = (unsigned int)v50;
              *v35 = v16;
              v32 = v50 + 1;
              goto LABEL_41;
            }
            if ( v21 )
            {
              sub_1872CE0("");
              sub_1873130(114, 73);
            }
            if ( v16[6] )
            {
              v41 = (unsigned int)v50;
              if ( (unsigned int)v50 >= HIDWORD(v50) )
              {
                v10 = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v50)));
                v43 = 0;
                v41 = (unsigned int)v50;
                if ( (_DWORD)v50 )
                {
                  do
                  {
                    *(__m128i *)&v10[v43] = _mm_loadu_si128((const __m128i *)&v49[v43]);
                    v43 += 2;
                  }
                  while ( v43 != 2LL * (unsigned int)v50 );
                }
                if ( v49 != &v51 && v49 )
                {
                  sub_186B220(v49);
                  v41 = (unsigned int)v50;
                }
                v49 = v10;
                HIDWORD(v50) *= 2;
              }
              else
              {
                v10 = v49;
              }
              v42 = (unsigned int **)&v10[2 * v41];
              *v42 = v16;
              *((_DWORD *)v42 + 2) = 0;
              v31 = (unsigned int)v50;
              v32 = v50 + 1;
              goto LABEL_41;
            }
            v33 = *(_DWORD **)(*((_QWORD *)v16 + 2) + 24LL);
            if ( v33 && *v33 == 3 && !v33[1] )
              sub_13CA6E();
          }
          v14 = *((_DWORD *)v12 + 2);
LABEL_24:
          if ( v14 >= v13 )
          {
            LODWORD(v8) = v50 - 1;
            break;
          }
        }
      }
      LODWORD(v50) = (_DWORD)v8;
      if ( !*((_WORD *)v3 + 2) )
      {
        v22 = *(_DWORD **)(*((_QWORD *)v3 + 2) + 24LL);
        if ( v22 )
        {
          if ( *v22 == 3 && !v22[1] )
            sub_13CA6E();
        }
      }
      v10 = v49;
      goto LABEL_9;
    }
    v23 = v3[18];
    v24 = *((_DWORD *)v12 + 2);
    v25 = v23 + v3[19] + 1;
    if ( v24 >= v25 )
    {
LABEL_70:
      LODWORD(v8) = v50 - 1;
      LODWORD(v50) = v50 - 1;
      if ( !*((_WORD *)v3 + 2) )
      {
        v40 = *(_DWORD **)(*((_QWORD *)v3 + 2) + 24LL);
        if ( v40 )
        {
          if ( *v40 == 3 && !v40[1] )
            sub_13CA6E();
        }
      }
LABEL_9:
      if ( !(_DWORD)v8 )
        goto LABEL_12;
LABEL_10:
      v8 = (int *)(unsigned int)((_DWORD)v8 - 1);
      v3 = (_DWORD *)v10[2 * (_QWORD)v8];
    }
    else
    {
      if ( !v24 )
      {
        v26 = *((unsigned int **)v3 + 3);
        goto LABEL_36;
      }
      while ( 1 )
      {
        v36 = v24 - 1;
        if ( v23 < v24 )
          v36 = (unsigned int)v36 - v23;
        v26 = *(unsigned int **)&v3[4 * (unsigned int)v3[5] + 20 + 2 * v36];
LABEL_36:
        ++v24;
        v27 = *v26;
        *((_DWORD *)v12 + 2) = v24;
        if ( v27 >= *(_DWORD *)(a1 + 8) )
          break;
        v28 = *(_QWORD *)(a1 + 16);
        if ( (*(_DWORD *)(v28 + 4LL * (v27 >> 5)) & (1 << v27)) == 0 )
          goto LABEL_38;
        if ( v24 >= v25 )
          goto LABEL_70;
        v23 = v3[18];
      }
      v48 = v26;
      v45 = v27;
      sub_186B510(v47, v27 + 1, 0);
      v28 = *(_QWORD *)(a1 + 16);
      v26 = v48;
      v27 = v45;
LABEL_38:
      *(_DWORD *)(v28 + 4LL * (v27 >> 5)) |= 1 << v27;
      v29 = (unsigned int)v50;
      if ( (unsigned int)v50 >= HIDWORD(v50) )
      {
        v46 = v26;
        v10 = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v50)));
        v37 = 0;
        v26 = v46;
        v29 = (unsigned int)v50;
        if ( (_DWORD)v50 )
        {
          do
          {
            *(__m128i *)&v10[v37] = _mm_loadu_si128((const __m128i *)&v49[v37]);
            v37 += 2;
          }
          while ( v37 != 2LL * (unsigned int)v50 );
        }
        if ( v49 != &v51 && v49 )
        {
          sub_186B220(v49);
          v29 = (unsigned int)v50;
          v26 = v46;
        }
        v49 = v10;
        HIDWORD(v50) *= 2;
      }
      else
      {
        v10 = v49;
      }
      v30 = (unsigned int **)&v10[2 * v29];
      *((_DWORD *)v30 + 2) = 0;
      v31 = (unsigned int)v50;
      *v30 = v26;
      v32 = v50 + 1;
LABEL_41:
      LODWORD(v50) = v32;
      LODWORD(v8) = v32 - 1;
      v3 = (_DWORD *)v10[2 * v31];
    }
  }
  LODWORD(v50) = (_DWORD)v8;
  if ( (_DWORD)v8 )
    goto LABEL_10;
LABEL_12:
  if ( v10 )
  {
    if ( v10 != &v51 )
      sub_186B220(v10);
  }
}

