__int64 __fastcall sub_ADFA70(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // ebx
  bool v8; // cc
  __int64 *v9; // rsi
  int v10; // ebx
  __int64 v11; // rax
  __int16 v12; // dx
  __int64 *v13; // r13
  unsigned int v14; // r14d
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // r15
  char v18; // al
  int v19; // eax
  char *v20; // rsi
  __int16 v21; // ax
  int *v22; // rdx
  int v23; // ebp
  char *v24; // rax
  char *v25; // rdi
  char *v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // edi
  __int64 v31; // r14
  char v32; // dl
  __int64 v33; // r10
  __int64 v34; // rdx
  __int64 *v35; // rdx
  __int64 v36; // rdx
  int v37; // eax
  int v38; // edx
  _QWORD *v39; // r12
  int *v40; // rax
  int v41; // ebp
  int v42; // eax
  __int64 v43; // rcx
  __int64 *v44; // rcx
  __int64 v45; // rbp
  _QWORD *v46; // rdi
  unsigned __int64 v47; // r10
  __int64 v48; // r11
  __int64 v49; // rbp
  char *v50; // rdi
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rbp
  char *v54; // rax
  _QWORD *v55; // rdi
  unsigned __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rbp
  char *v59; // rdi
  unsigned __int64 v60; // rax
  __int64 v61; // r8
  unsigned __int64 v62; // r10
  __int64 v63; // r11
  unsigned __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 *v67; // rax
  __int64 v68; // rbp
  char *v69; // rdi
  unsigned __int64 v70; // rax
  __int64 v71; // r8
  int v72; // [rsp+Ch] [rbp-20Ch]
  __int64 v73; // [rsp+18h] [rbp-200h]
  _BYTE v74[8]; // [rsp+30h] [rbp-1E8h] BYREF
  _BYTE v75[8]; // [rsp+38h] [rbp-1E0h] BYREF
  void *v76; // [rsp+40h] [rbp-1D8h]
  __int64 v77; // [rsp+48h] [rbp-1D0h]
  _QWORD v78[16]; // [rsp+50h] [rbp-1C8h] BYREF
  void *v79; // [rsp+D0h] [rbp-148h] BYREF
  __int64 v80; // [rsp+D8h] [rbp-140h]
  __int64 v81; // [rsp+E0h] [rbp-138h] BYREF
  int v82; // [rsp+E8h] [rbp-130h]

  v2 = a2;
  v3 = *a1;
  sub_180C5A0(&v79, "specrels");
  v73 = v3 + 560;
  v4 = sub_15DA4C0(v3 + 560, &v79);
  v5 = v3;
  v6 = 1;
  if ( !*(_BYTE *)(sub_15D2690(v5, v4) + 72) )
    return v6;
  v8 = *(_DWORD *)(a2 + 8) <= 1u;
  v76 = v78;
  v77 = 0x1000000000LL;
  if ( !v8 )
  {
    v6 = *(_BYTE *)(a2 + 6) & 1;
    if ( (*(_BYTE *)(a2 + 6) & 1) != 0 )
      return v6;
    *(_BYTE *)(a2 + 6) |= 1u;
    v78[0] = a2;
    LODWORD(v77) = 1;
  }
  v9 = &v81;
  v10 = 0;
  v81 = v2;
  v79 = &v81;
  v82 = 0;
  v72 = -1;
  v80 = 0x1000000001LL;
  LODWORD(v11) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(_WORD *)(v2 + 4);
      v13 = &v9[2 * (unsigned int)v11];
      if ( v12 == 1 )
        goto LABEL_41;
      if ( v12 != 2 )
        break;
      v28 = *(_DWORD *)(v2 + 72);
      v29 = *((_DWORD *)v13 + 2);
      v30 = v28 + *(_DWORD *)(v2 + 76) + 1;
      if ( v29 >= v30 )
        goto LABEL_40;
      if ( v29 )
        goto LABEL_49;
      v31 = *(_QWORD *)(v2 + 24);
      v29 = 1;
      for ( *((_DWORD *)v13 + 2) = 1; *(_DWORD *)(v31 + 8) > 1u; *((_DWORD *)v13 + 2) = v29 )
      {
        v32 = *(_BYTE *)(v31 + 6);
        if ( (v32 & 1) == 0 )
        {
          *(_BYTE *)(v31 + 6) = v32 | 1;
          v38 = v77;
          if ( (unsigned int)v77 >= HIDWORD(v77) )
          {
            v53 = (unsigned int)(2 * HIDWORD(v77));
            v54 = (char *)sub_186B270(8 * v53);
            v38 = v77;
            v55 = v76;
            v39 = v54;
            if ( (_DWORD)v77 )
            {
              if ( (unsigned int)(v77 - 1) <= 2 || v54 == (char *)v76 + 8 )
              {
                v64 = 0;
                v65 = 8LL * (unsigned int)v77;
                do
                {
                  v39[v64 / 8] = v55[v64 / 8];
                  v64 += 8LL;
                }
                while ( v65 != v64 );
              }
              else
              {
                v56 = 0;
                v57 = 16LL * ((unsigned int)v77 >> 1);
                do
                {
                  *(__m128i *)&v39[v56 / 8] = _mm_loadu_si128((const __m128i *)&v55[v56 / 8]);
                  v56 += 16LL;
                }
                while ( v56 != v57 );
                if ( (v38 & 1) != 0 )
                  v39[v38 & 0xFFFFFFFE] = v55[v38 & 0xFFFFFFFE];
              }
            }
            if ( v55 && v55 != v78 )
            {
              sub_186B220(v55);
              v38 = v77;
            }
            v76 = v39;
            HIDWORD(v77) = v53;
          }
          else
          {
            v39 = v76;
          }
          v39[v38] = v31;
          LODWORD(v77) = v38 + 1;
          break;
        }
        if ( v29 >= v30 )
        {
LABEL_40:
          LODWORD(v11) = v80 - 1;
LABEL_41:
          LODWORD(v80) = v11;
          if ( !(_DWORD)v11 )
            goto LABEL_30;
          goto LABEL_42;
        }
        v28 = *(_DWORD *)(v2 + 72);
LABEL_49:
        v33 = v29 - 1;
        if ( v28 < v29 )
          v33 = (unsigned int)v33 - v28;
        ++v29;
        v31 = *(_QWORD *)(16LL * *(unsigned int *)(v2 + 20) + v2 + 8 * v33 + 80);
      }
      v34 = (unsigned int)v80;
      if ( (unsigned int)v80 >= HIDWORD(v80) )
      {
        v49 = (unsigned int)(2 * HIDWORD(v80));
        v9 = (__int64 *)sub_186B270(16 * v49);
        v50 = (char *)v79;
        v51 = 0;
        v34 = (unsigned int)v80;
        v52 = 16LL * (unsigned int)v80;
        if ( (_DWORD)v80 )
        {
          do
          {
            *(__m128i *)&v9[v51 / 8] = _mm_loadu_si128((const __m128i *)&v50[v51]);
            v51 += 16LL;
          }
          while ( v51 != v52 );
        }
        if ( v50 && v50 != (char *)&v81 )
        {
          sub_186B220(v50);
          v34 = (unsigned int)v80;
        }
        v79 = v9;
        HIDWORD(v80) = v49;
      }
      else
      {
        v9 = (__int64 *)v79;
      }
      v35 = &v9[2 * v34];
      *v35 = v31;
      *((_DWORD *)v35 + 2) = 0;
      v36 = (unsigned int)v80;
      v37 = v80 + 1;
LABEL_55:
      LODWORD(v80) = v37;
      LODWORD(v11) = v37 - 1;
      v2 = v9[2 * v36];
    }
    if ( v12 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v14 = *(_DWORD *)(v2 + 24);
    v15 = *((_DWORD *)v13 + 2);
    if ( v15 < v14 )
    {
      while ( 1 )
      {
        v16 = v15++;
        v17 = *(_QWORD *)(v2 + 8 * v16 + 32);
        *((_DWORD *)v13 + 2) = v15;
        if ( *(_DWORD *)(v17 + 8) > 1u )
        {
          v18 = *(_BYTE *)(v17 + 6);
          if ( (v18 & 1) != 0 )
            goto LABEL_21;
          *(_BYTE *)(v17 + 6) = v18 | 1;
          v19 = v77;
          if ( (unsigned int)v77 >= HIDWORD(v77) )
          {
            v45 = (unsigned int)(2 * HIDWORD(v77));
            v20 = (char *)sub_186B270(8 * v45);
            v19 = v77;
            v46 = v76;
            if ( (_DWORD)v77 )
            {
              if ( (unsigned int)(v77 - 1) <= 2 || v20 == (char *)v76 + 8 )
              {
                v62 = 0;
                v63 = 8LL * (unsigned int)v77;
                do
                {
                  *(_QWORD *)&v20[v62] = v46[v62 / 8];
                  v62 += 8LL;
                }
                while ( v62 != v63 );
              }
              else
              {
                v47 = 0;
                v48 = 16LL * ((unsigned int)v77 >> 1);
                do
                {
                  *(__m128i *)&v20[v47] = _mm_loadu_si128((const __m128i *)&v46[v47 / 8]);
                  v47 += 16LL;
                }
                while ( v47 != v48 );
                if ( (v19 & 1) != 0 )
                  *(_QWORD *)&v20[8 * (v19 & 0xFFFFFFFE)] = v46[v19 & 0xFFFFFFFE];
              }
            }
            if ( v46 != v78 && v46 )
            {
              sub_186B220(v46);
              v19 = v77;
            }
            v76 = v20;
            HIDWORD(v77) = v45;
          }
          else
          {
            v20 = (char *)v76;
          }
          *(_QWORD *)&v20[8 * v19] = v17;
          LODWORD(v77) = v19 + 1;
        }
        v21 = *(_WORD *)(v17 + 4);
        if ( v21 == 1 )
        {
          v15 = *((_DWORD *)v13 + 2);
        }
        else
        {
          if ( v21 == 2 )
          {
            v43 = (unsigned int)v80;
            if ( (unsigned int)v80 >= HIDWORD(v80) )
            {
              v58 = (unsigned int)(2 * HIDWORD(v80));
              v9 = (__int64 *)sub_186B270(16 * v58);
              v59 = (char *)v79;
              v60 = 0;
              v43 = (unsigned int)v80;
              v61 = 16LL * (unsigned int)v80;
              if ( (_DWORD)v80 )
              {
                do
                {
                  *(__m128i *)&v9[v60 / 8] = _mm_loadu_si128((const __m128i *)&v59[v60]);
                  v60 += 16LL;
                }
                while ( v61 != v60 );
              }
              if ( v59 != (char *)&v81 && v59 )
              {
                sub_186B220(v59);
                v43 = (unsigned int)v80;
              }
              v79 = v9;
              HIDWORD(v80) = v58;
            }
            else
            {
              v9 = (__int64 *)v79;
            }
            v44 = &v9[2 * v43];
            *((_DWORD *)v44 + 2) = 0;
            v36 = (unsigned int)v80;
            *v44 = v17;
            v37 = v36 + 1;
            goto LABEL_55;
          }
          if ( v21 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v17 + 24) )
          {
            v66 = (unsigned int)v80;
            if ( (unsigned int)v80 >= HIDWORD(v80) )
            {
              v68 = (unsigned int)(2 * HIDWORD(v80));
              v9 = (__int64 *)sub_186B270(16 * v68);
              v69 = (char *)v79;
              v70 = 0;
              v66 = (unsigned int)v80;
              v71 = 16LL * (unsigned int)v80;
              if ( (_DWORD)v80 )
              {
                do
                {
                  *(__m128i *)&v9[v70 / 8] = _mm_loadu_si128((const __m128i *)&v69[v70]);
                  v70 += 16LL;
                }
                while ( v71 != v70 );
              }
              if ( v69 != (char *)&v81 && v69 )
              {
                sub_186B220(v69);
                v66 = (unsigned int)v80;
              }
              v79 = v9;
              HIDWORD(v80) = v68;
            }
            else
            {
              v9 = (__int64 *)v79;
            }
            v67 = &v9[2 * v66];
            *((_DWORD *)v67 + 2) = 0;
            v36 = (unsigned int)v80;
            *v67 = v17;
            v37 = v36 + 1;
            goto LABEL_55;
          }
          v40 = *(int **)(*(_QWORD *)(v17 + 16) + 24LL);
          if ( v40 )
            v41 = *v40;
          else
            v41 = -1;
          if ( v72 == -1 )
          {
            sub_180C5A0(v74, "specrels");
            v72 = sub_15D1320(v73, v74);
          }
          v42 = v72;
          v15 = *((_DWORD *)v13 + 2);
          LOBYTE(v42) = v41 == v72;
          v10 |= v42;
        }
LABEL_21:
        if ( v15 >= v14 )
        {
          LODWORD(v11) = v80 - 1;
          break;
        }
      }
    }
    LODWORD(v80) = v11;
    if ( *(_WORD *)(v2 + 4) )
    {
      LODWORD(v22) = 0;
    }
    else
    {
      v22 = *(int **)(*(_QWORD *)(v2 + 16) + 24LL);
      if ( v22 )
        v23 = *v22;
      else
        v23 = -1;
      if ( v72 == -1 )
      {
        sub_180C5A0(v75, "specrels");
        v72 = sub_15D1320(v73, v75);
        LODWORD(v11) = v80;
      }
      LOBYTE(v22) = v23 == v72;
    }
    v9 = (__int64 *)v79;
    v10 |= (unsigned int)v22;
    if ( !(_DWORD)v11 )
      break;
LABEL_42:
    v11 = (unsigned int)(v11 - 1);
    v2 = v9[2 * v11];
  }
LABEL_30:
  if ( v9 && v9 != &v81 )
    sub_186B220(v9);
  v24 = (char *)v76;
  v6 = v10 ^ 1;
  v25 = (char *)v76 + 8 * (unsigned int)v77;
  if ( v76 != v25 )
  {
    v26 = (char *)v76;
    do
    {
      v27 = *(_QWORD *)v26;
      v26 += 8;
      *(_BYTE *)(v27 + 6) &= ~1u;
    }
    while ( v26 != v25 );
    v25 = v24;
  }
  LODWORD(v77) = 0;
  if ( v24 && v24 != (char *)v78 )
    sub_186B220(v25);
  return v6;
}

