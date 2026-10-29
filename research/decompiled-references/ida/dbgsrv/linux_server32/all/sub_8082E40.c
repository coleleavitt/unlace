/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8082E40
// Address: 0x08082E40

//----- (08082E40) --------------------------------------------------------
unsigned int __cdecl sub_8082E40(int a1, int a2, int a3)
{
  char *v3; // ecx
  int (*v4)(); // edx
  char *v5; // eax
  __m128i v6; // xmm0
  int (*v7)(); // edx
  unsigned int v8; // eax
  unsigned int v9; // edi
  int v10; // edx
  int v11; // edi
  unsigned int v12; // eax
  char *v13; // eax
  int v14; // eax
  char *v15; // edi
  int v16; // eax
  char *v17; // edi
  unsigned int v18; // eax
  int v19; // eax
  char *v20; // edi
  int v21; // eax
  unsigned int v22; // edi
  char *v23; // eax
  int v24; // eax
  int v25; // edx
  char *v26; // eax
  unsigned int result; // eax
  int v28; // eax
  _DWORD *v29; // edi
  int (*v30)(); // edx
  char *v31; // ebx
  int (*v32)(); // eax
  int v33; // eax
  char *v34; // eax
  int v35; // edi
  _DWORD *v36; // edi
  unsigned __int8 *v37; // eax
  _DWORD *v38; // edx
  int (*v39)(); // eax
  unsigned __int8 *v40; // edx
  int v41; // eax
  int v42; // eax
  int v43; // edi
  int v44; // eax
  char *v45; // edi
  int v46; // ebx
  int v47; // eax
  char *v48; // ecx
  int v49; // eax
  int v50; // eax
  char *v51; // eax
  size_t v52; // edx
  int v53; // eax
  char *v54; // edx
  int v55; // ecx
  char *v56; // edi
  unsigned __int8 **v57; // ebx
  unsigned __int8 *v58; // eax
  unsigned __int8 *v59; // ecx
  int v60; // eax
  int v61; // eax
  int v62; // eax
  char *v63; // [esp+4h] [ebp-98h]
  char v64; // [esp+8h] [ebp-94h]
  unsigned __int8 *v65; // [esp+8h] [ebp-94h]
  unsigned __int8 *src; // [esp+Ch] [ebp-90h]
  unsigned __int8 **v67; // [esp+10h] [ebp-8Ch]
  size_t n; // [esp+14h] [ebp-88h]
  unsigned __int8 **v69; // [esp+18h] [ebp-84h]
  unsigned __int8 v70; // [esp+1Ch] [ebp-80h]
  int (*v71)(); // [esp+1Ch] [ebp-80h]
  unsigned __int8 v72; // [esp+1Ch] [ebp-80h]
  int v73; // [esp+1Ch] [ebp-80h]
  char *v74; // [esp+20h] [ebp-7Ch]
  char *s1; // [esp+38h] [ebp-64h]
  int v76; // [esp+3Ch] [ebp-60h]
  unsigned int v77; // [esp+3Ch] [ebp-60h]
  _DWORD *v78; // [esp+3Ch] [ebp-60h]
  int v79; // [esp+3Ch] [ebp-60h]
  int v80; // [esp+40h] [ebp-5Ch]
  char *v81; // [esp+40h] [ebp-5Ch]
  char *v82; // [esp+40h] [ebp-5Ch]
  unsigned __int8 *v83; // [esp+40h] [ebp-5Ch]
  _DWORD *v84; // [esp+40h] [ebp-5Ch]
  const char **v85; // [esp+40h] [ebp-5Ch]
  char *s; // [esp+4Ch] [ebp-50h] BYREF
  unsigned __int8 *v87; // [esp+50h] [ebp-4Ch] BYREF
  unsigned __int8 *v88; // [esp+54h] [ebp-48h] BYREF
  unsigned __int8 *v89; // [esp+58h] [ebp-44h] BYREF
  unsigned __int8 *v90; // [esp+5Ch] [ebp-40h] BYREF
  unsigned __int8 *v91; // [esp+60h] [ebp-3Ch] BYREF
  unsigned __int8 *v92; // [esp+64h] [ebp-38h] BYREF
  unsigned __int8 *v93; // [esp+68h] [ebp-34h] BYREF
  unsigned __int8 *v94; // [esp+6Ch] [ebp-30h] BYREF
  unsigned __int8 *v95; // [esp+70h] [ebp-2Ch] BYREF
  char *v96; // [esp+74h] [ebp-28h] BYREF
  size_t v97; // [esp+78h] [ebp-24h]
  int v98; // [esp+7Ch] [ebp-20h]
  unsigned int v99; // [esp+80h] [ebp-1Ch]

  v99 = __readgsdword(0x14u);
  v3 = *(char **)a3;
  src = (unsigned __int8 *)v3;
  s = *(char **)a3;
  if ( !v3 )
    goto LABEL_52;
  n = *(_DWORD *)(a3 + 4);
  v4 = *(int (**)())(*(_DWORD *)a2 + 20);
  v5 = v3;
  if ( v4 != nullsub_8 )
  {
    ((void (__cdecl *)(int, _DWORD))v4)(a2, 0);
    v5 = s;
  }
  v6 = _mm_cvtsi32_si128((unsigned int)v5);
  *(_QWORD *)(a1 + 88) = _mm_unpacklo_epi32(v6, v6).m128i_u64[0];
  v7 = *(int (**)())(*(_DWORD *)a2 + 12);
  if ( v7 == sub_80828E0 || (v46 = ((int (__cdecl *)(int))v7)(a2), v5 = s, v46 <= 0) )
  {
    *(_DWORD *)(a1 + 96) = 0;
  }
  else
  {
    if ( (v46 & 0xF) != 0 )
      sub_8082CB0((_DWORD *)a1, a2, (v46 & 0xF) - 1, (const char **)&s);
    if ( (v46 & 0x10) != 0 )
      sub_8082DA0(a1, a2, (const char **)&s);
    v5 = s;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v96 = v5;
      v8 = sub_80C7170((unsigned __int8 **)&v96);
      v9 = v8;
      if ( v8 > 0x7F )
        goto LABEL_11;
      if ( !isspace(v8) )
        break;
LABEL_8:
      v10 = sub_80C7170((unsigned __int8 **)&s);
      v5 = s;
      if ( v10 == -1 )
        v5 = ++s;
    }
    if ( !v9 )
      break;
LABEL_11:
    s1 = s;
    if ( *(_DWORD *)(a1 + 48) )
    {
      v11 = *(_DWORD *)(a1 + 44);
      v76 = *(_DWORD *)(a1 + 48);
      v80 = 0;
      while ( 1 )
      {
        v12 = *(_DWORD *)(v11 + 4);
        if ( v12 > 1 && !strncmp(s1, *(const char **)v11, v12 - 1) )
          break;
        ++v80;
        v11 += 24;
        if ( v80 == v76 )
          goto LABEL_16;
      }
      sub_8082980(a1, a2, s1, *(_DWORD *)(a1 + 96));
      s += (*(_DWORD *)(v11 + 4) == 0) + *(_DWORD *)(v11 + 4) - 1;
      sub_8082CB0((_DWORD *)a1, a2, v80, (const char **)&s);
      v13 = s;
    }
    else
    {
LABEL_16:
      v13 = s1;
    }
    v96 = v13;
    v14 = sub_80C7170((unsigned __int8 **)&v96);
    v81 = s;
    if ( *(char *)(a1 + 105) != v14 )
      goto LABEL_21;
    v15 = *(char **)(a1 + 92);
    if ( v15 == *(char **)a3 || v15 == s )
    {
LABEL_48:
      sub_8082980(a1, a2, v81, *(_DWORD *)(a1 + 96));
      sub_8082DA0(a1, a2, (const char **)&s);
      v5 = s;
    }
    else
    {
      while ( (unsigned int)*v15 <= 0x7F && isspace(*v15) )
      {
        if ( ++v15 == v81 )
          goto LABEL_48;
      }
LABEL_21:
      v96 = v81;
      v16 = sub_80C7170((unsigned __int8 **)&v96);
      v17 = s;
      if ( *(char *)(a1 + 102) == v16 || *(char *)(a1 + 100) == v16 )
      {
        *(_BYTE *)(a1 + 56) = v16;
        sub_8082980(a1, a2, v17, *(_DWORD *)(a1 + 96));
        v25 = sub_80C7170((unsigned __int8 **)&s);
        v26 = s;
        if ( v25 == -1 )
          v26 = ++s;
        v5 = sub_8082BD0(a1, a2, v26, *(_BYTE *)(a1 + 56));
        s = v5;
        if ( !v5 )
          goto LABEL_52;
      }
      else
      {
        v18 = *(_DWORD *)(a1 + 36);
        if ( v18 > 1 && !strncmp(s, *(const char **)(a1 + 32), v18 - 1) )
        {
          sub_8082980(a1, a2, v17, *(_DWORD *)(a1 + 96));
          v45 = s;
          s = &v45[strlen(s)];
          sub_8082980(a1, a2, s, *(_DWORD *)(a1 + 64));
          *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 60);
          v5 = s;
        }
        else
        {
          v96 = v17;
          v19 = sub_80C7170((unsigned __int8 **)&v96);
          if ( (v19 & 0xFFFFFFDF) - 65 <= 0x19 )
          {
            v82 = v17;
            do
            {
              do
              {
LABEL_28:
                v20 = v96;
                v21 = sub_80C7170((unsigned __int8 **)&v96);
              }
              while ( (v21 & 0xFFFFFFDF) - 65 <= 0x19 );
            }
            while ( v21 == 95 || (unsigned int)(v21 - 48) <= 9 );
            v74 = (char *)(v20 - v82);
            if ( v20 == v82 )
              goto LABEL_32;
            v96 = nullptr;
            v34 = nullptr;
            v97 = 0;
            v98 = 0;
            v35 = (int)(v74 + 1);
            if ( v74 != (char *)-1 )
            {
              v96 = (char *)sub_80CF920((int)&v96, nullptr, (unsigned int)(v74 + 1), 1u);
              memset(&v96[v97], 0, v35 - v97);
              v97 = (size_t)(v74 + 1);
              v34 = v96;
            }
            v74[(_DWORD)v34] = 0;
            sub_80D0740((unsigned int)v96, s, v35);
            v36 = *(_DWORD **)(a1 + 76);
            v37 = *(unsigned __int8 **)(a1 + 96);
            v38 = &v36[*(_DWORD *)(a1 + 80)];
            v95 = v37;
            v84 = v38;
            if ( v38 == v36 )
              goto LABEL_148;
            do
            {
              v39 = *(int (**)())(*(_DWORD *)*v36 + 12);
              if ( v39 != sub_8082910
                && ((unsigned __int8 (__cdecl *)(_DWORD, unsigned __int8 **, char **))v39)(*v36, &v95, &v96) )
              {
                break;
              }
              ++v36;
            }
            while ( v84 != v36 );
            v40 = *(unsigned __int8 **)(a1 + 96);
            v37 = v95;
            if ( v40 == v95 )
            {
LABEL_148:
              v54 = v96;
              v67 = *(unsigned __int8 ***)(a1 + 24);
              if ( !v67 )
                goto LABEL_160;
              v55 = *(_DWORD *)(a1 + 20);
              v65 = v37;
              v63 = v96;
              v56 = (char *)&dword_80DDFD8;
              if ( v97 )
                v56 = v96;
              v57 = nullptr;
              while ( 1 )
              {
                v85 = *(const char ***)v55;
                if ( *(_DWORD *)v55 != *(_DWORD *)v55 + 4 * *(_DWORD *)(v55 + 4) )
                  break;
LABEL_157:
                v57 = (unsigned __int8 **)((char *)v57 + 1);
                v55 += 16;
                if ( v57 == v67 )
                {
                  v58 = v65;
                  v54 = v63;
                  v59 = v95;
                  goto LABEL_159;
                }
              }
              v73 = v55;
              v69 = v57;
              v79 = *(_DWORD *)v55 + 4 * *(_DWORD *)(v55 + 4);
              while ( strcmp(v56, *v85) )
              {
                if ( (const char **)v79 == ++v85 )
                {
                  v55 = v73;
                  goto LABEL_157;
                }
              }
              v55 = v73;
              if ( (const char **)v79 == v85 )
                goto LABEL_157;
              v59 = *(unsigned __int8 **)(v73 + 12);
              v58 = v65;
              v54 = v63;
              v95 = v59;
LABEL_159:
              if ( v58 == v59 )
              {
LABEL_160:
                if ( v54 )
                {
                  v97 = 0;
                  sub_80CF780(v54);
                }
                goto LABEL_33;
              }
              v40 = v58;
            }
            sub_8082980(a1, a2, s, (int)v40);
            s = &v74[(_DWORD)s];
            sub_8082980(a1, a2, s, (int)v95);
            if ( v96 )
            {
              v97 = 0;
              sub_80CF780(v96);
            }
            v5 = s;
          }
          else
          {
            if ( v19 == 95 )
            {
              v82 = v17;
              goto LABEL_28;
            }
LABEL_32:
            v74 = nullptr;
LABEL_33:
            v83 = (unsigned __int8 *)s;
            if ( !s )
              goto LABEL_63;
            v96 = s;
            v22 = sub_80C7170((unsigned __int8 **)&v96);
            if ( !v22 )
            {
LABEL_62:
              v83 = (unsigned __int8 *)s;
              goto LABEL_63;
            }
            v96 = nullptr;
            v97 = 0;
            v98 = 0;
            if ( !n )
              goto LABEL_36;
            v51 = nullptr;
            v52 = n + 1;
            if ( n != -1 )
            {
              v51 = (char *)sub_80CF920((int)&v96, nullptr, n + 1, 1u);
              v52 = n + 1;
              v96 = v51;
            }
            v97 = v52;
            memmove(v51, src, n);
            v96[n] = 0;
            if ( v97 )
              v23 = v96;
            else
LABEL_36:
              v23 = (char *)&dword_80DDFD8;
            v77 = sub_80C7470(v23) + 1;
            if ( v22 - 48 <= 9 )
            {
              v88 = v83;
              sub_80C73D0(&v88, 1);
              v47 = sub_80C7170(&v88);
              if ( v22 != 48 )
              {
                v70 = v22 - 43;
LABEL_45:
                LOBYTE(v69) = 0;
                goto LABEL_92;
              }
              if ( (v47 & 0xFFFFFFDF) != 0x58 )
              {
                v72 = 0;
                LOBYTE(v69) = 0;
LABEL_114:
                v43 = 1;
                goto LABEL_115;
              }
              v87 = v83;
              sub_80C73D0(&v87, 2);
              v60 = sub_80C7170(&v87);
              if ( (v60 & 0xFFFFFFDF) - 65 <= 0x19 )
              {
                v72 = 1;
                v43 = 2;
                LOBYTE(v69) = 0;
              }
              else
              {
                v72 = v60 == 46 || (unsigned int)(v60 - 48) <= 9;
                if ( !v72 )
                  goto LABEL_102;
                LOBYTE(v69) = 0;
                v43 = 2;
              }
LABEL_115:
              if ( v43 >= v77 )
              {
LABEL_134:
                if ( v96 )
                {
                  v97 = 0;
                  sub_80CF780(v96);
                }
                goto LABEL_136;
              }
LABEL_116:
              v64 = 0;
LABEL_117:
              v94 = v83;
              if ( v43 <= 0 )
              {
                if ( v99 != __readgsdword(0x14u) )
                  sub_80D7AB0();
                sub_8082920();
LABEL_120:
                v48 = (char *)v83;
                while ( 1 )
                {
                  v96 = v48;
                  v49 = sub_80C7170((unsigned __int8 **)&v96);
                  if ( (v49 & 0xFFFFFFDF) - 65 > 0x19 && (unsigned int)(v49 - 48) > 9 && v49 != 46 )
                    break;
                  v50 = sub_80C7170((unsigned __int8 **)&s);
                  v48 = s;
                  if ( v50 == -1 )
                  {
                    ++s;
                    ++v48;
                  }
                }
                v5 = s;
                goto LABEL_72;
              }
              while ( 1 )
              {
                sub_80C73D0(&v94, v43);
                v53 = sub_80C7170(&v94);
                if ( (v53 & 0xFFFFFFDF) - 65 > 0x19 && (unsigned int)(v53 - 48) > 9 && v53 != 46 )
                  goto LABEL_134;
                v95 = v83;
                sub_80C73D0(&v95, v43);
                v28 = sub_80C7170(&v95);
                if ( (unsigned int)(v28 - 48) <= 9 )
                  goto LABEL_164;
                if ( v72 )
                  break;
                if ( v28 == 46 )
                  goto LABEL_59;
                if ( v64 || (v28 & 0xFFFFFFDF) != 0x45 )
                  goto LABEL_143;
                v91 = v83;
                if ( v43 + 1 <= 0 )
                {
                  if ( v99 != __readgsdword(0x14u) )
                    sub_80D7AB0();
                  sub_8082920();
                  goto LABEL_183;
                }
                sub_80C73D0(&v91, v43 + 1);
                if ( ((sub_80C7170(&v91) - 43) & 0xFFFFFFFD) == 0 )
                {
                  v64 = 1;
                  v43 += 2;
LABEL_165:
                  if ( v43 < v77 )
                    goto LABEL_117;
                  goto LABEL_134;
                }
                if ( v43 + 1 >= v77 )
                {
                  ++v43;
                  goto LABEL_134;
                }
                v64 = 1;
                ++v43;
                v94 = v83;
              }
              if ( (v28 & 0xFFFFFFDF) - 65 <= 5 )
              {
LABEL_164:
                ++v43;
                goto LABEL_165;
              }
              if ( v28 == 46 )
              {
LABEL_59:
                if ( (_BYTE)v69 )
                {
                  if ( v96 )
                  {
                    v97 = 0;
                    sub_80CF780(v96);
                  }
                  goto LABEL_62;
                }
                LOBYTE(v69) = 1;
                ++v43;
                goto LABEL_165;
              }
LABEL_143:
              if ( v28 != 76 )
                goto LABEL_102;
              v69 = (unsigned __int8 **)(v43 + 1);
              if ( v43 + 1 < v77 )
              {
                v92 = v83;
                if ( (int)v69 <= 0 )
                {
                  if ( v99 != __readgsdword(0x14u) )
                    sub_80D7AB0();
                  sub_8082920();
                  goto LABEL_148;
                }
                sub_80C73D0(&v92, (int)v69);
                v44 = sub_80C7170(&v92);
                if ( (unsigned int)(v44 - 97) <= 0x19
                  || (unsigned int)(v44 - 65) <= 0x19
                  || (unsigned int)(v44 - 48) <= 9
                  || v44 == 46 )
                {
                  goto LABEL_102;
                }
              }
              v93 = v83;
              v61 = v43 - 1;
              if ( v43 != 1 )
LABEL_183:
                sub_80C73D0(&v93, v61);
              v62 = sub_80C7170(&v93);
              if ( (unsigned int)(v62 - 48) > 9 && (!v72 || (v62 & 0xFFFFFFDF) - 65 > 5) )
                goto LABEL_102;
              if ( v96 )
              {
                v97 = 0;
                sub_80CF780(v96);
              }
              v43 = (int)v69;
LABEL_136:
              sub_8082980(a1, a2, s, *(_DWORD *)(a1 + 96));
              sub_80C73D0((unsigned __int8 **)&s, v43);
              sub_8082980(a1, a2, s, 7);
              v5 = s;
            }
            else
            {
              v70 = v22 - 43;
              if ( ((v22 - 43) & 0xFFFFFFFD) != 0 )
              {
                LOBYTE(v69) = v22 == 46;
                if ( (v22 & 0xFFFFFFDF) != 0x45 && v22 != 46 )
                  goto LABEL_102;
                v88 = v83;
                sub_80C73D0(&v88, 1);
                sub_80C7170(&v88);
              }
              else
              {
                if ( v83 != src )
                {
                  v89 = v83;
                  sub_80C72D0(nullptr, &v89, (unsigned int)src);
                  v24 = sub_80C7170(&v89);
                  if ( (unsigned int)(v24 - 97) <= 0x19
                    || (unsigned int)(v24 - 65) <= 0x19
                    || (unsigned int)(v24 - 48) <= 9
                    || v24 == 46 )
                  {
                    goto LABEL_102;
                  }
                  v88 = v83;
                  v69 = &v88;
                  sub_80C73D0(&v88, 1);
                  sub_80C7170(&v88);
                  goto LABEL_45;
                }
                v88 = v83;
                v69 = &v88;
                sub_80C73D0(&v88, 1);
                sub_80C7170(&v88);
                LOBYTE(v69) = 0;
              }
              if ( v22 > 0x45 )
              {
                if ( v22 == 101 )
                  goto LABEL_93;
                v72 = 0;
                v43 = 1;
                goto LABEL_115;
              }
LABEL_92:
              v41 = 67108869;
              v72 = _bittest(&v41, v70);
              if ( !v72 )
                goto LABEL_114;
LABEL_93:
              if ( v77 > 1 )
              {
                v90 = v83;
                sub_80C73D0(&v90, 1);
                v42 = sub_80C7170(&v90);
                if ( (v42 & 0xFFFFFFDF) - 65 <= 0x19 || (unsigned int)(v42 - 48) <= 9 || v42 == 46 )
                {
                  LOBYTE(v69) = 0;
                  v43 = 1;
                  v72 = 0;
                  goto LABEL_116;
                }
              }
LABEL_102:
              if ( !v96 )
                goto LABEL_62;
              v97 = 0;
              sub_80CF780(v96);
              v83 = (unsigned __int8 *)s;
LABEL_63:
              v29 = *(_DWORD **)(a1 + 76);
              if ( &v29[*(_DWORD *)(a1 + 80)] != v29 )
              {
                v78 = &v29[*(_DWORD *)(a1 + 80)];
                v30 = sub_8082900;
                v31 = (char *)v83;
                do
                {
                  while ( 1 )
                  {
                    v32 = *(int (**)())(*(_DWORD *)*v29 + 8);
                    if ( v32 != v30 )
                    {
                      v71 = v30;
                      v33 = ((int (__cdecl *)(_DWORD, char **, char *))v32)(*v29, &v96, v31);
                      v31 = s;
                      v30 = v71;
                      v69 = (unsigned __int8 **)v33;
                      if ( v33 > 0 )
                        break;
                    }
                    if ( v78 == ++v29 )
                      goto LABEL_69;
                  }
                  ++v29;
                  sub_8082980(a1, a2, s, *(_DWORD *)(a1 + 96));
                  sub_80C73D0((unsigned __int8 **)&s, (int)v69);
                  sub_8082980(a1, a2, s, (int)v96);
                  v30 = v71;
                  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 60);
                  v31 = s;
                }
                while ( v78 != v29 );
LABEL_69:
                v83 = (unsigned __int8 *)v31;
              }
              if ( !v74 )
                goto LABEL_120;
              v5 = (char *)&v83[(_DWORD)v74];
              s = (char *)&v83[(_DWORD)v74];
LABEL_72:
              if ( s1 == v5 )
                goto LABEL_8;
            }
          }
        }
      }
    }
  }
  if ( *(char **)(a1 + 92) != s )
    sub_8082980(a1, a2, s, *(_DWORD *)(a1 + 96));
LABEL_52:
  result = v99 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 8083A5B: variable 'v37' is possibly undefined
// 8083C41: variable 'v69' is possibly undefined
// 8083C9C: variable 'v61' is possibly undefined
// 80828F0: using guessed type int nullsub_8();
// 80DDFD8: using guessed type int dword_80DDFD8;
