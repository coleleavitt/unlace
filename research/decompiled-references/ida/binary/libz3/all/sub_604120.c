__int64 __fastcall sub_604120(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  char v3; // al
  __int64 v5; // rcx
  __int64 *i; // rax
  __int16 v7; // si
  int v8; // edx
  __int64 *v9; // rbp
  unsigned int v10; // r12d
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r14
  char v14; // dl
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int16 v17; // ax
  _DWORD *v18; // rax
  unsigned int v19; // esi
  unsigned int v20; // edx
  unsigned int v21; // r9d
  __int64 v22; // r12
  char v23; // di
  __int64 v24; // r10
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rcx
  int v28; // edx
  __int64 *v29; // rdi
  __int64 *v30; // rax
  __int64 v31; // rdx
  int v32; // edx
  __int64 *v33; // rbp
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __int64 *v36; // rcx
  __int64 v37; // r10
  __int64 v38; // rbx
  char *v39; // rdi
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbx
  char *v45; // rdi
  unsigned __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r10
  __int64 v50; // rcx
  __int64 *v51; // rdx
  __int64 v52; // rbx
  char *v53; // rdi
  unsigned __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v57; // [rsp+18h] [rbp-1E0h]
  __int64 *v58; // [rsp+18h] [rbp-1E0h]
  __int64 *v59; // [rsp+18h] [rbp-1E0h]
  __int64 *v60; // [rsp+18h] [rbp-1E0h]
  __int64 *v61; // [rsp+20h] [rbp-1D8h]
  __int64 v62; // [rsp+28h] [rbp-1D0h]
  _QWORD v63[16]; // [rsp+30h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-148h]
  __int64 v65; // [rsp+B8h] [rbp-140h]
  __int64 v66; // [rsp+C0h] [rbp-138h] BYREF
  int v67; // [rsp+C8h] [rbp-130h]

  v2 = a1;
  v61 = v63;
  v62 = 0x1000000000LL;
  if ( *(_DWORD *)(a1 + 8) > 1u )
  {
    v3 = *(_BYTE *)(a1 + 6);
    if ( (v3 & 1) != 0 )
      return 0;
    *(_BYTE *)(a1 + 6) = v3 | 1;
    v63[0] = a1;
    LODWORD(v62) = 1;
  }
  v5 = 0;
  v66 = a1;
  ptr = &v66;
  v67 = 0;
  v65 = 0x1000000001LL;
  for ( i = &v66; ; v2 = i[2 * v5] )
  {
    while ( 1 )
    {
      v7 = *(_WORD *)(v2 + 4);
      v8 = v5;
      if ( v7 == 1 )
        goto LABEL_29;
      v9 = &i[2 * v5];
      if ( v7 != 2 )
        break;
      v19 = *(_DWORD *)(v2 + 72);
      v20 = *((_DWORD *)v9 + 2);
      v21 = v19 + *(_DWORD *)(v2 + 76) + 1;
      if ( v20 >= v21 )
        goto LABEL_28;
      if ( v20 )
      {
        while ( 2 )
        {
          v24 = v20 - 1;
          if ( v19 < v20 )
            v24 = (unsigned int)v24 - v19;
          ++v20;
          v22 = *(_QWORD *)(16LL * *(unsigned int *)(v2 + 20) + v2 + 8 * v24 + 80);
          *((_DWORD *)v9 + 2) = v20;
          if ( *(_DWORD *)(v22 + 8) <= 1u )
            goto LABEL_40;
LABEL_34:
          v23 = *(_BYTE *)(v22 + 6);
          if ( (v23 & 1) != 0 )
          {
            if ( v20 >= v21 )
            {
LABEL_28:
              v8 = v65 - 1;
LABEL_29:
              LODWORD(v65) = v8;
              if ( !v8 )
                goto LABEL_47;
              goto LABEL_30;
            }
            v19 = *(_DWORD *)(v2 + 72);
            continue;
          }
          break;
        }
        *(_BYTE *)(v22 + 6) = v23 | 1;
        v32 = v62;
        if ( (unsigned int)v62 < HIDWORD(v62) )
        {
          v33 = v61;
LABEL_59:
          v33[v32] = v22;
          LODWORD(v62) = v32 + 1;
          goto LABEL_40;
        }
        v42 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v62)));
        v32 = v62;
        v33 = (__int64 *)v42;
        if ( (_DWORD)v62 )
        {
          if ( (unsigned int)(v62 - 1) > 2 && (__int64 *)v42 != v61 + 1 )
          {
            v43 = 0;
            do
            {
              *(__m128i *)&v33[v43] = _mm_loadu_si128((const __m128i *)&v61[v43]);
              v43 += 2;
            }
            while ( v43 != 2LL * ((unsigned int)v62 >> 1) );
            if ( (v62 & 1) != 0 )
              v33[(unsigned int)v62 & 0xFFFFFFFE] = v61[(unsigned int)v62 & 0xFFFFFFFE];
            goto LABEL_93;
          }
          v48 = 0;
          do
          {
            v33[v48] = v61[v48];
            ++v48;
          }
          while ( (unsigned int)v62 != v48 );
          if ( !v61 )
          {
LABEL_96:
            v61 = v33;
            HIDWORD(v62) *= 2;
            goto LABEL_59;
          }
        }
        else
        {
LABEL_93:
          if ( !v61 )
            goto LABEL_96;
        }
        if ( v61 != v63 )
        {
          sub_186B220(v61);
          v32 = v62;
        }
        goto LABEL_96;
      }
      v22 = *(_QWORD *)(v2 + 24);
      v20 = 1;
      *((_DWORD *)v9 + 2) = 1;
      if ( *(_DWORD *)(v22 + 8) > 1u )
        goto LABEL_34;
LABEL_40:
      v25 = (unsigned int)v65;
      if ( (unsigned int)v65 >= HIDWORD(v65) )
      {
        v38 = (unsigned int)(2 * HIDWORD(v65));
        i = (__int64 *)sub_186B270(16 * v38);
        v39 = (char *)ptr;
        v40 = 0;
        v25 = (unsigned int)v65;
        v41 = 16LL * (unsigned int)v65;
        if ( (_DWORD)v65 )
        {
          do
          {
            *(__m128i *)&i[v40 / 8] = _mm_loadu_si128((const __m128i *)&v39[v40]);
            v40 += 16LL;
          }
          while ( v40 != v41 );
        }
        if ( v39 && v39 != (char *)&v66 )
        {
          v58 = i;
          sub_186B220(v39);
          v25 = (unsigned int)v65;
          i = v58;
        }
        ptr = i;
        HIDWORD(v65) = v38;
      }
      else
      {
        i = (__int64 *)ptr;
      }
      v26 = &i[2 * v25];
      *v26 = v22;
      *((_DWORD *)v26 + 2) = 0;
      v27 = (unsigned int)v65;
      v28 = v65 + 1;
LABEL_43:
      LODWORD(v65) = v28;
      v2 = i[2 * v27];
      v5 = (unsigned int)(v28 - 1);
    }
    if ( v7 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v10 = *(_DWORD *)(v2 + 24);
    v11 = *((_DWORD *)v9 + 2);
    if ( v11 < v10 )
    {
      while ( 1 )
      {
        v12 = v11++;
        v13 = *(_QWORD *)(v2 + 8 * v12 + 32);
        *((_DWORD *)v9 + 2) = v11;
        if ( *(_DWORD *)(v13 + 8) > 1u )
        {
          v14 = *(_BYTE *)(v13 + 6);
          if ( (v14 & 1) != 0 )
            goto LABEL_20;
          *(_BYTE *)(v13 + 6) = v14 | 1;
          v15 = v62;
          if ( (unsigned int)v62 >= HIDWORD(v62) )
          {
            v16 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v62)));
            v15 = v62;
            if ( (_DWORD)v62 )
            {
              if ( (unsigned int)(v62 - 1) <= 2 || (__int64 *)v16 == v61 + 1 )
              {
                v49 = 0;
                do
                {
                  *(_QWORD *)(v16 + v49 * 8) = v61[v49];
                  ++v49;
                }
                while ( (unsigned int)v62 != v49 );
              }
              else
              {
                v37 = 0;
                do
                {
                  *(__m128i *)(v16 + v37 * 8) = _mm_loadu_si128((const __m128i *)&v61[v37]);
                  v37 += 2;
                }
                while ( v37 != 2LL * ((unsigned int)v62 >> 1) );
                if ( (v62 & 1) != 0 )
                  *(_QWORD *)(v16 + 8LL * ((unsigned int)v62 & 0xFFFFFFFE)) = v61[(unsigned int)v62 & 0xFFFFFFFE];
              }
            }
            if ( v61 != v63 && v61 )
            {
              v57 = v16;
              sub_186B220(v61);
              v15 = v62;
              v16 = v57;
            }
            v61 = (__int64 *)v16;
            HIDWORD(v62) *= 2;
          }
          else
          {
            v16 = (__int64)v61;
          }
          *(_QWORD *)(v16 + 8LL * v15) = v13;
          LODWORD(v62) = v15 + 1;
        }
        v17 = *(_WORD *)(v13 + 4);
        if ( v17 != 1 )
        {
          if ( v17 == 2 )
          {
            v35 = (unsigned int)v65;
            if ( (unsigned int)v65 >= HIDWORD(v65) )
            {
              v44 = (unsigned int)(2 * HIDWORD(v65));
              i = (__int64 *)sub_186B270(16 * v44);
              v45 = (char *)ptr;
              v46 = 0;
              v35 = (unsigned int)v65;
              v47 = 16LL * (unsigned int)v65;
              if ( (_DWORD)v65 )
              {
                do
                {
                  *(__m128i *)&i[v46 / 8] = _mm_loadu_si128((const __m128i *)&v45[v46]);
                  v46 += 16LL;
                }
                while ( v47 != v46 );
              }
              if ( v45 != (char *)&v66 && v45 )
              {
                v59 = i;
                sub_186B220(v45);
                v35 = (unsigned int)v65;
                i = v59;
              }
              ptr = i;
              HIDWORD(v65) = v44;
            }
            else
            {
              i = (__int64 *)ptr;
            }
            v36 = &i[2 * v35];
            *v36 = v13;
            *((_DWORD *)v36 + 2) = 0;
            v27 = (unsigned int)v65;
            v28 = v65 + 1;
            goto LABEL_43;
          }
          if ( v17 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v13 + 24) )
          {
            v50 = (unsigned int)v65;
            if ( (unsigned int)v65 >= HIDWORD(v65) )
            {
              v52 = (unsigned int)(2 * HIDWORD(v65));
              i = (__int64 *)sub_186B270(16 * v52);
              v53 = (char *)ptr;
              v54 = 0;
              v50 = (unsigned int)v65;
              v55 = 16LL * (unsigned int)v65;
              if ( (_DWORD)v65 )
              {
                do
                {
                  *(__m128i *)&i[v54 / 8] = _mm_loadu_si128((const __m128i *)&v53[v54]);
                  v54 += 16LL;
                }
                while ( v54 != v55 );
              }
              if ( v53 != (char *)&v66 && v53 )
              {
                v60 = i;
                sub_186B220(v53);
                v50 = (unsigned int)v65;
                i = v60;
              }
              ptr = i;
              HIDWORD(v65) = v52;
            }
            else
            {
              i = (__int64 *)ptr;
            }
            v51 = &i[2 * v50];
            *((_DWORD *)v51 + 2) = 0;
            v27 = (unsigned int)v65;
            *v51 = v13;
            v28 = v27 + 1;
            goto LABEL_43;
          }
          v34 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
          if ( v34 && !*v34 && v34[1] == 4 && !(unsigned __int8)sub_15D2CB0(a2, v13) )
            sub_FCE96();
        }
        v11 = *((_DWORD *)v9 + 2);
LABEL_20:
        if ( v11 >= v10 )
        {
          v8 = v65 - 1;
          break;
        }
      }
    }
    LODWORD(v65) = v8;
    if ( !*(_WORD *)(v2 + 4) )
    {
      v18 = *(_DWORD **)(*(_QWORD *)(v2 + 16) + 24LL);
      if ( v18 )
      {
        if ( !*v18 && v18[1] == 4 )
        {
          if ( !(unsigned __int8)sub_15D2CB0(a2, v2) )
            sub_FCE96();
          v8 = v65;
        }
      }
    }
    i = (__int64 *)ptr;
    if ( !v8 )
      break;
LABEL_30:
    v5 = (unsigned int)(v8 - 1);
  }
LABEL_47:
  if ( i && i != &v66 )
    sub_186B220(i);
  v29 = &v61[(unsigned int)v62];
  if ( v61 != v29 )
  {
    v30 = v61;
    do
    {
      v31 = *v30++;
      *(_BYTE *)(v31 + 6) &= ~1u;
    }
    while ( v29 != v30 );
    v29 = v61;
  }
  if ( v61 && v61 != v63 )
    sub_186B220(v29);
  return 0;
}

