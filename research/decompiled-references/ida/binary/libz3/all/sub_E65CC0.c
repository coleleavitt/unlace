void __fastcall sub_E65CC0(__int64 a1, _DWORD *a2)
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
  unsigned int v13; // r15d
  unsigned int v14; // esi
  __int64 v15; // rdx
  unsigned int *v16; // r9
  unsigned int v17; // ebp
  int *v18; // rdx
  int v19; // ecx
  int v20; // edi
  __int16 v21; // dx
  unsigned int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // esi
  unsigned int *v25; // r15
  unsigned int v26; // ecx
  __int64 v27; // rdi
  __int64 v28; // rdx
  unsigned int **v29; // rdx
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rdx
  unsigned int **v33; // rax
  __int64 v34; // rdx
  unsigned int **v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  int *v39; // rbx
  __int64 v40; // rax
  unsigned int *v41; // [rsp+8h] [rbp-160h]
  unsigned int v42; // [rsp+8h] [rbp-160h]
  unsigned int *v43; // [rsp+8h] [rbp-160h]
  unsigned int *v44; // [rsp+8h] [rbp-160h]
  __int64 v45; // [rsp+10h] [rbp-158h]
  _QWORD *v46; // [rsp+20h] [rbp-148h]
  __int64 v47; // [rsp+28h] [rbp-140h]
  _DWORD *v48; // [rsp+30h] [rbp-138h] BYREF
  int v49; // [rsp+38h] [rbp-130h]

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
  v10 = &v48;
  *v8 = v9;
  v46 = &v48;
  v48 = a2;
  v49 = 0;
  v45 = a1 + 8;
  v47 = 0x1000000001LL;
  LODWORD(v8) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *((_WORD *)v3 + 2);
      v12 = &v10[2 * (unsigned int)v8];
      if ( v11 == 1 )
        goto LABEL_17;
      if ( v11 != 2 )
        break;
      v22 = v3[18];
      v23 = *((_DWORD *)v12 + 2);
      v24 = v22 + v3[19] + 1;
      if ( v23 >= v24 )
      {
LABEL_62:
        LODWORD(v8) = v47 - 1;
        goto LABEL_17;
      }
      if ( !v23 )
      {
        v25 = *((unsigned int **)v3 + 3);
        goto LABEL_29;
      }
      while ( 1 )
      {
        v36 = v23 - 1;
        if ( v22 < v23 )
          v36 = (unsigned int)v36 - v22;
        v25 = *(unsigned int **)&v3[4 * (unsigned int)v3[5] + 20 + 2 * v36];
LABEL_29:
        ++v23;
        v26 = *v25;
        *((_DWORD *)v12 + 2) = v23;
        if ( v26 >= *(_DWORD *)(a1 + 8) )
          break;
        v27 = *(_QWORD *)(a1 + 16);
        if ( (*(_DWORD *)(v27 + 4LL * (v26 >> 5)) & (1 << v26)) == 0 )
          goto LABEL_31;
        if ( v23 >= v24 )
          goto LABEL_62;
        v22 = v3[18];
      }
      v42 = v26;
      sub_186B510(v45, v26 + 1, 0);
      v27 = *(_QWORD *)(a1 + 16);
      v26 = v42;
LABEL_31:
      *(_DWORD *)(v27 + 4LL * (v26 >> 5)) |= 1 << v26;
      v28 = (unsigned int)v47;
      if ( (unsigned int)v47 >= HIDWORD(v47) )
      {
        v10 = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v47)));
        v37 = 0;
        v28 = (unsigned int)v47;
        if ( (_DWORD)v47 )
        {
          do
          {
            *(__m128i *)&v10[v37] = _mm_loadu_si128((const __m128i *)&v46[v37]);
            v37 += 2;
          }
          while ( v37 != 2LL * (unsigned int)v47 );
        }
        if ( v46 && v46 != &v48 )
        {
          sub_186B220(v46);
          v28 = (unsigned int)v47;
        }
        v46 = v10;
        HIDWORD(v47) *= 2;
      }
      else
      {
        v10 = v46;
      }
      v29 = (unsigned int **)&v10[2 * v28];
      *((_DWORD *)v29 + 2) = 0;
      v30 = (unsigned int)v47;
      *v29 = v25;
      v31 = v47 + 1;
LABEL_34:
      LODWORD(v47) = v31;
      LODWORD(v8) = v31 - 1;
      v3 = (_DWORD *)v10[2 * v30];
    }
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
          v18 = (int *)(*(_QWORD *)(a1 + 16) + 4LL * (v17 >> 5));
          v20 = *v18;
          v19 = 1 << v17;
          if ( ((1 << v17) & *v18) != 0 )
            goto LABEL_15;
        }
        else
        {
          v41 = v16;
          sub_186B510(v45, v17 + 1, 0);
          v16 = v41;
          v18 = (int *)(*(_QWORD *)(a1 + 16) + 4LL * (v17 >> 5));
          v19 = 1 << v17;
          v20 = *v18;
        }
        *v18 = v20 | v19;
        v21 = *((_WORD *)v16 + 2);
        if ( v21 != 1 )
        {
          if ( v21 == 2 )
          {
            v34 = (unsigned int)v47;
            if ( (unsigned int)v47 >= HIDWORD(v47) )
            {
              v43 = v16;
              v10 = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v47)));
              v38 = 0;
              v16 = v43;
              v34 = (unsigned int)v47;
              if ( (_DWORD)v47 )
              {
                do
                {
                  *(__m128i *)&v10[v38] = _mm_loadu_si128((const __m128i *)&v46[v38]);
                  v38 += 2;
                }
                while ( v38 != 2LL * (unsigned int)v47 );
              }
              if ( v46 != &v48 && v46 )
              {
                sub_186B220(v46);
                v34 = (unsigned int)v47;
                v16 = v43;
              }
              v46 = v10;
              HIDWORD(v47) *= 2;
            }
            else
            {
              v10 = v46;
            }
            v35 = (unsigned int **)&v10[2 * v34];
            *((_DWORD *)v35 + 2) = 0;
            v30 = (unsigned int)v47;
            *v35 = v16;
            v31 = v47 + 1;
            goto LABEL_34;
          }
          if ( v21 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( v16[6] )
          {
            v32 = (unsigned int)v47;
            if ( (unsigned int)v47 >= HIDWORD(v47) )
            {
              v44 = v16;
              v10 = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v47)));
              v40 = 0;
              v16 = v44;
              v32 = (unsigned int)v47;
              if ( (_DWORD)v47 )
              {
                do
                {
                  *(__m128i *)&v10[v40] = _mm_loadu_si128((const __m128i *)&v46[v40]);
                  v40 += 2;
                }
                while ( v40 != 2LL * (unsigned int)v47 );
              }
              if ( v46 != &v48 )
              {
                if ( v46 )
                {
                  sub_186B220(v46);
                  v32 = (unsigned int)v47;
                  v16 = v44;
                }
              }
              v46 = v10;
              HIDWORD(v47) *= 2;
            }
            else
            {
              v10 = v46;
            }
            v33 = (unsigned int **)&v10[2 * v32];
            *v33 = v16;
            *((_DWORD *)v33 + 2) = 0;
            v30 = (unsigned int)v47;
            v31 = v47 + 1;
            goto LABEL_34;
          }
        }
        v14 = *((_DWORD *)v12 + 2);
LABEL_15:
        if ( v14 >= v13 )
        {
          v10 = v46;
          LODWORD(v8) = v47 - 1;
          break;
        }
      }
    }
LABEL_17:
    LODWORD(v47) = (_DWORD)v8;
    if ( !(_DWORD)v8 )
      break;
    v8 = (int *)(unsigned int)((_DWORD)v8 - 1);
    v3 = (_DWORD *)v10[2 * (_QWORD)v8];
  }
  if ( v10 && v10 != &v48 )
    sub_186B220(v10);
}

