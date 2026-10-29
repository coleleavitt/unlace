void __fastcall sub_C3C540(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r14
  int v5; // ebp
  __int64 v6; // rbx
  int *v7; // rbx
  int v8; // ecx
  int *v9; // rdx
  int v10; // ecx
  __int64 *v11; // rbp
  __int16 v12; // cx
  __int64 *v13; // rbx
  unsigned int v14; // ebp
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // r13
  unsigned int v18; // ecx
  int v19; // r10d
  int *v20; // rdx
  int v21; // edi
  __int16 v22; // dx
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // esi
  unsigned int *v26; // r8
  unsigned int v27; // ecx
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 *v30; // rdx
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rdx
  __int64 *v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  int *v38; // rbx
  __int64 v39; // rdx
  __int64 *v40; // rax
  __int64 v41; // rax
  unsigned int v43; // [rsp+10h] [rbp-168h]
  unsigned int v44; // [rsp+10h] [rbp-168h]
  unsigned int *v45; // [rsp+10h] [rbp-168h]
  __int64 v46; // [rsp+18h] [rbp-160h]
  unsigned int *v47; // [rsp+28h] [rbp-150h]
  __int64 *ptr; // [rsp+30h] [rbp-148h]
  __int64 v49; // [rsp+38h] [rbp-140h]
  __int64 v50; // [rsp+40h] [rbp-138h] BYREF
  int v51; // [rsp+48h] [rbp-130h]

  v4 = (__int64)a3;
  v5 = 1 << *a3;
  v6 = 4LL * (*a3 >> 5);
  if ( *a3 < *(_DWORD *)(a2 + 8) )
  {
    v38 = (int *)(*(_QWORD *)(a2 + 16) + v6);
    v8 = *v38;
    v9 = v38;
    if ( (v5 & *v38) != 0 )
      return;
  }
  else
  {
    sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
    v7 = (int *)(*(_QWORD *)(a2 + 16) + v6);
    v8 = *v7;
    v9 = v7;
  }
  v10 = v5 | v8;
  v11 = &v50;
  *v9 = v10;
  ptr = &v50;
  v50 = v4;
  v51 = 0;
  v46 = a2 + 8;
  v49 = 0x1000000001LL;
  LODWORD(v9) = 0;
  while ( 1 )
  {
    v12 = *(_WORD *)(v4 + 4);
    v13 = &v11[2 * (unsigned int)v9];
    if ( v12 == 1 )
      break;
    if ( v12 != 2 )
    {
      if ( v12 )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      v14 = *(_DWORD *)(v4 + 24);
      v15 = *((_DWORD *)v13 + 2);
      if ( v15 < v14 )
      {
        while ( 1 )
        {
          v16 = v15++;
          v17 = *(_QWORD *)(v4 + 8 * v16 + 32);
          *((_DWORD *)v13 + 2) = v15;
          v18 = *(_DWORD *)v17;
          if ( *(_DWORD *)v17 < *(_DWORD *)(a2 + 8) )
          {
            v19 = 1 << v18;
            v20 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v18 >> 5));
            v21 = *v20;
            if ( ((1 << v18) & *v20) != 0 )
              goto LABEL_22;
          }
          else
          {
            v43 = *(_DWORD *)v17;
            sub_186B510(v46, v18 + 1, 0);
            v19 = 1 << v43;
            v20 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v43 >> 5));
            v21 = *v20;
          }
          *v20 = v21 | v19;
          v22 = *(_WORD *)(v17 + 4);
          if ( v22 == 1 )
          {
            v15 = *((_DWORD *)v13 + 2);
            *(_BYTE *)(a1 + 97) = 0;
          }
          else
          {
            if ( v22 == 2 )
            {
              v33 = (unsigned int)v49;
              if ( (unsigned int)v49 >= HIDWORD(v49) )
              {
                v11 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v49)));
                v37 = 0;
                v33 = (unsigned int)v49;
                if ( (_DWORD)v49 )
                {
                  do
                  {
                    *(__m128i *)&v11[v37] = _mm_loadu_si128((const __m128i *)&ptr[v37]);
                    v37 += 2;
                  }
                  while ( v37 != 2LL * (unsigned int)v49 );
                }
                if ( ptr != &v50 && ptr )
                {
                  sub_186B220(ptr);
                  v33 = (unsigned int)v49;
                }
                ptr = v11;
                HIDWORD(v49) *= 2;
              }
              else
              {
                v11 = ptr;
              }
              v34 = &v11[2 * v33];
              *((_DWORD *)v34 + 2) = 0;
              v31 = (unsigned int)v49;
              *v34 = v17;
              v32 = v49 + 1;
              goto LABEL_35;
            }
            if ( v22 )
            {
              sub_1872CE0("");
              sub_1873130(114, 73);
            }
            if ( *(_DWORD *)(v17 + 24) )
            {
              v39 = (unsigned int)v49;
              if ( (unsigned int)v49 >= HIDWORD(v49) )
              {
                v11 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v49)));
                v41 = 0;
                v39 = (unsigned int)v49;
                if ( (_DWORD)v49 )
                {
                  do
                  {
                    *(__m128i *)&v11[v41] = _mm_loadu_si128((const __m128i *)&ptr[v41]);
                    v41 += 2;
                  }
                  while ( v41 != 2LL * (unsigned int)v49 );
                }
                if ( ptr != &v50 && ptr )
                {
                  sub_186B220(ptr);
                  v39 = (unsigned int)v49;
                }
                ptr = v11;
                HIDWORD(v49) *= 2;
              }
              else
              {
                v11 = ptr;
              }
              v40 = &v11[2 * v39];
              *v40 = v17;
              *((_DWORD *)v40 + 2) = 0;
              v31 = (unsigned int)v49;
              v32 = v49 + 1;
              goto LABEL_35;
            }
            sub_C38ED0((__int64 *)a1, v17);
            v15 = *((_DWORD *)v13 + 2);
          }
LABEL_22:
          if ( v15 >= v14 )
          {
            LODWORD(v9) = v49 - 1;
            break;
          }
        }
      }
      LODWORD(v49) = (_DWORD)v9;
      sub_C38ED0((__int64 *)a1, v4);
      LODWORD(v9) = v49;
      v11 = ptr;
      goto LABEL_8;
    }
    v23 = *(_DWORD *)(v4 + 72);
    v24 = *((_DWORD *)v13 + 2);
    v25 = v23 + *(_DWORD *)(v4 + 76) + 1;
    if ( v24 >= v25 )
    {
LABEL_62:
      LODWORD(v9) = v49 - 1;
      LODWORD(v49) = v49 - 1;
      *(_BYTE *)(a1 + 97) = 0;
LABEL_8:
      if ( !(_DWORD)v9 )
        goto LABEL_11;
LABEL_9:
      v9 = (int *)(unsigned int)((_DWORD)v9 - 1);
      v4 = v11[2 * (_QWORD)v9];
    }
    else
    {
      if ( !v24 )
      {
        v26 = *(unsigned int **)(v4 + 24);
        goto LABEL_30;
      }
      while ( 1 )
      {
        v35 = v24 - 1;
        if ( v23 < v24 )
          v35 = (unsigned int)v35 - v23;
        v26 = *(unsigned int **)(16LL * *(unsigned int *)(v4 + 20) + v4 + 8 * v35 + 80);
LABEL_30:
        ++v24;
        v27 = *v26;
        *((_DWORD *)v13 + 2) = v24;
        if ( v27 >= *(_DWORD *)(a2 + 8) )
          break;
        v28 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v28 + 4LL * (v27 >> 5)) & (1 << v27)) == 0 )
          goto LABEL_32;
        if ( v24 >= v25 )
          goto LABEL_62;
        v23 = *(_DWORD *)(v4 + 72);
      }
      v47 = v26;
      v44 = v27;
      sub_186B510(v46, v27 + 1, 0);
      v28 = *(_QWORD *)(a2 + 16);
      v26 = v47;
      v27 = v44;
LABEL_32:
      *(_DWORD *)(v28 + 4LL * (v27 >> 5)) |= 1 << v27;
      v29 = (unsigned int)v49;
      if ( (unsigned int)v49 >= HIDWORD(v49) )
      {
        v45 = v26;
        v11 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v49)));
        v36 = 0;
        v26 = v45;
        v29 = (unsigned int)v49;
        if ( (_DWORD)v49 )
        {
          do
          {
            *(__m128i *)&v11[v36] = _mm_loadu_si128((const __m128i *)&ptr[v36]);
            v36 += 2;
          }
          while ( v36 != 2LL * (unsigned int)v49 );
        }
        if ( ptr != &v50 && ptr )
        {
          sub_186B220(ptr);
          v29 = (unsigned int)v49;
          v26 = v45;
        }
        ptr = v11;
        HIDWORD(v49) *= 2;
      }
      else
      {
        v11 = ptr;
      }
      v30 = &v11[2 * v29];
      *((_DWORD *)v30 + 2) = 0;
      v31 = (unsigned int)v49;
      *v30 = (__int64)v26;
      v32 = v49 + 1;
LABEL_35:
      LODWORD(v49) = v32;
      LODWORD(v9) = v32 - 1;
      v4 = v11[2 * v31];
    }
  }
  LODWORD(v49) = (_DWORD)v9;
  *(_BYTE *)(a1 + 97) = 0;
  if ( (_DWORD)v9 )
    goto LABEL_9;
LABEL_11:
  if ( v11 )
  {
    if ( v11 != &v50 )
      sub_186B220(v11);
  }
}

