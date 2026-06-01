__int64 __fastcall sub_CF6360(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 *v7; // rdx
  unsigned __int64 v8; // rsi
  int v9; // r8d
  int v10; // r9d
  __int64 *v11; // rax
  __int64 v12; // rcx
  char v13; // dl
  unsigned int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // r15
  void *v17; // r14
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  char v22; // r15
  unsigned int *v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // edx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdi
  bool v31; // zf
  __int64 v32; // rdi
  unsigned int v33; // edx
  __int64 *v34; // rbp
  __int64 v35; // rdi
  __int64 v36; // rax
  int v37; // ecx
  unsigned int **v38; // rax
  __int64 v39; // r15
  unsigned int v40; // edx
  unsigned int v41; // ebp
  _QWORD *v42; // r14
  unsigned int *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rbp
  __int64 v49; // rax
  _QWORD *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned int *v53; // r15
  __int64 v54; // rax
  __int64 v55; // rdi
  int v56; // r8d
  int v57; // esi
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rcx
  int v64; // esi
  unsigned int **v65; // rcx
  __int64 v66; // rdx
  char j; // al
  int v68; // eax
  __int64 v69; // rdi
  std::ostream *v70; // rdx
  _BYTE *v71; // rdi
  std::ostream *v72; // rdi
  unsigned int *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rdi
  int v77; // edx
  int v78; // ecx
  int v79; // r8d
  int v80; // r9d
  __int64 v81; // rax
  char i; // al
  __int64 k; // rax
  std::ostream *v84; // rdx
  _BYTE *v85; // rdi
  std::ostream *v86; // rax
  __int64 (__fastcall *v87)(__int64, unsigned int); // rax
  char v88; // al
  __int64 (__fastcall *v89)(__int64, unsigned int); // rax
  char v90; // al
  __int64 v91; // [rsp+10h] [rbp-98h]
  unsigned int v92; // [rsp+10h] [rbp-98h]
  __int64 v93; // [rsp+18h] [rbp-90h]
  __int64 v94; // [rsp+20h] [rbp-88h]
  __int64 *v95; // [rsp+20h] [rbp-88h]
  std::ostream *v96; // [rsp+20h] [rbp-88h]
  std::ostream *v97; // [rsp+20h] [rbp-88h]
  int v98; // [rsp+28h] [rbp-80h]
  unsigned int v99; // [rsp+2Ch] [rbp-7Ch]
  char v100[8]; // [rsp+38h] [rbp-70h] BYREF
  unsigned int *v101; // [rsp+40h] [rbp-68h] BYREF
  __int64 v102; // [rsp+48h] [rbp-60h]
  __int64 v103; // [rsp+50h] [rbp-58h] BYREF
  __int64 v104; // [rsp+58h] [rbp-50h]

  v7 = (__int64 *)*a2;
  v8 = (unsigned __int64)"propagate-values";
  sub_EE4940(v100, "propagate-values", v7);
  v11 = (__int64 *)*a2;
  v12 = *(_QWORD *)(*a2 + 72);
  *(_QWORD *)(a1 + 48) = *a2;
  if ( v12 )
  {
    v13 = *(_BYTE *)(v12 + 3) >> 6;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
LABEL_4:
        if ( v13 == 2 )
          v14 = *(_DWORD *)(v12 + 4) - 1;
        else
          v14 = *(_DWORD *)(v12 + 4);
        goto LABEL_6;
      }
    }
    else
    {
      do
      {
        v12 = *(_QWORD *)(v12 + 16);
        v13 = *(_BYTE *)(v12 + 3) >> 6;
      }
      while ( !v13 );
      if ( v13 != 1 )
        goto LABEL_4;
    }
    v14 = *(_DWORD *)(v12 + 4) + 1;
  }
  else
  {
    v14 = 0;
  }
LABEL_6:
  *(_DWORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 104) = 0;
  LODWORD(v15) = *((unsigned __int8 *)v11 + 123);
  if ( (v15 & 0x20) != 0 )
    goto LABEL_37;
  v10 = *(_DWORD *)(a1 + 100);
  if ( !v10 )
    goto LABEL_37;
  LODWORD(v15) = v15 & 8;
  if ( (_DWORD)v15 )
    goto LABEL_37;
  v16 = sub_186B270(0x38u);
  sub_1694A90(v16, *(_QWORD *)(a1 + 16), (*(_BYTE *)(*a2 + 123) & 0x10) != 0, (*(_BYTE *)(*a2 + 123) & 8) != 0);
  v17 = *(void **)(a1 + 40);
  if ( (void *)v16 != v17 )
  {
    if ( v17 )
    {
      sub_1695230(*(_QWORD *)(a1 + 40));
      sub_186B220(v17);
    }
    *(_QWORD *)(a1 + 40) = v16;
  }
  sub_14B64E0(a1 + 24, v16);
  v8 = *(_QWORD *)(a1 + 48);
  v93 = a1 + 56;
  sub_EE0DD0(a1 + 56, v8, v18, v19, v20, v21);
  v98 = 0;
  v22 = 1;
LABEL_14:
  if ( !v22 )
  {
LABEL_28:
    v14 = *(_DWORD *)(a1 + 96);
    if ( !v14 )
    {
      v22 = *(_BYTE *)(a1 + 104);
      if ( v22 )
      {
        sub_1694B10(*(_QWORD *)(a1 + 40));
        sub_14B64E0(a1 + 24, *(_QWORD *)(a1 + 40));
        v8 = *(_QWORD *)(a1 + 48);
        v69 = v93;
        *(_BYTE *)(a1 + 104) = 0;
        sub_EE0DD0(v93, v8, v77, v78, v79, v80);
        v81 = *(_QWORD *)(a1 + 48);
        *(_DWORD *)(a1 + 96) = 0;
        v15 = *(_QWORD *)(v81 + 72);
        if ( v15 )
        {
          for ( i = *(_BYTE *)(v15 + 3) >> 6; !i; i = *(_BYTE *)(v15 + 3) >> 6 )
            v15 = *(_QWORD *)(v15 + 16);
          if ( i == 1 )
          {
            v14 = *(_DWORD *)(v15 + 4) + 1;
          }
          else if ( i == 2 )
          {
            v14 = *(_DWORD *)(v15 + 4) - 1;
          }
          else
          {
            v14 = *(_DWORD *)(v15 + 4);
          }
        }
        goto LABEL_98;
      }
      goto LABEL_36;
    }
    v33 = v14 - 1;
    v34 = *(__int64 **)(a1 + 48);
    *(_DWORD *)(a1 + 96) = v33;
    v35 = *v34;
    if ( (*((_BYTE *)v34 + 123) & 0x20) != 0 )
    {
      v23 = *(unsigned int **)(v35 + 864);
      goto LABEL_17;
    }
    v36 = v34[9];
    v37 = 18;
    while ( 1 )
    {
      if ( !--v37 )
      {
        v92 = v33;
        sub_233F80((__int64 *)(v35 + 616), (_DWORD *)v34 + 18);
        v38 = (unsigned int **)(*(_QWORD *)(v34[9] + 16) + 8LL * v92);
        goto LABEL_35;
      }
      if ( *(char *)(v36 + 3) >= 0 )
      {
        if ( v33 == *(_DWORD *)(v36 + 4) )
        {
          v38 = (unsigned int **)(v36 + 8);
LABEL_35:
          v23 = *v38;
LABEL_17:
          v24 = *(_QWORD *)(a1 + 40);
          v25 = *(_QWORD *)(a1 + 16);
          v101 = nullptr;
          v103 = 0;
          v26 = *(_DWORD *)(v24 + 20);
          v102 = v25;
          v104 = v25;
          if ( v26 )
          {
            sub_14BB8A0(a1 + 24, v23, &v101, &v103);
LABEL_48:
            v44 = v101;
            if ( v101 == v23 )
            {
              v28 = v103;
            }
            else
            {
              *(_BYTE *)(a1 + 104) = 1;
              v28 = v103;
              v23 = v44;
            }
            goto LABEL_21;
          }
          if ( v23 )
            ++v23[2];
          v27 = *(_DWORD *)(v25 + 712);
          v101 = v23;
          v28 = 0;
          if ( v27 )
          {
            v45 = sub_15DE1B0(v25);
            if ( v45 )
              ++*(_DWORD *)(v45 + 8);
            v46 = v103;
            if ( v103 )
            {
              v47 = v104;
              v31 = (*(_DWORD *)(v103 + 8))-- == 1;
              if ( v31 )
              {
                v91 = v45;
                sub_15D7BC0(v47, v46);
                v45 = v91;
              }
            }
            v103 = v45;
            goto LABEL_48;
          }
LABEL_21:
          sub_CF57E0(a1, v23, v28);
          v29 = v103;
          if ( v103 )
          {
            v30 = v104;
            v31 = (*(_DWORD *)(v103 + 8))-- == 1;
            if ( v31 )
              sub_15D7BC0(v30, v29);
          }
          v8 = (unsigned __int64)v101;
          if ( v101 )
          {
            v32 = v102;
            v31 = v101[2]-- == 1;
            if ( v31 )
              sub_15D7BC0(v32, v8);
          }
          v11 = *(__int64 **)(a1 + 48);
          if ( (*((_BYTE *)v11 + 123) & 0x20) != 0 )
            goto LABEL_37;
          goto LABEL_28;
        }
      }
      else if ( *(_BYTE *)(v36 + 3) >> 6 != 2 )
      {
        v38 = (unsigned int **)(*(_QWORD *)(v36 + 16) + 8LL * v33);
        goto LABEL_35;
      }
      v36 = *(_QWORD *)(v36 + 16);
    }
  }
  v52 = *(unsigned int *)(a1 + 96);
  v11 = *(__int64 **)(a1 + 48);
  if ( (unsigned int)v52 >= v14 )
    goto LABEL_90;
  while ( 2 )
  {
    v62 = *v11;
    if ( (*((_BYTE *)v11 + 123) & 0x20) != 0 )
    {
      v53 = *(unsigned int **)(v62 + 864);
      goto LABEL_71;
    }
    v63 = v11[9];
    v64 = 18;
    while ( 1 )
    {
      if ( !--v64 )
      {
        v99 = v52;
        v95 = v11;
        sub_233F80((__int64 *)(v62 + 616), (_DWORD *)v11 + 18);
        v65 = (unsigned int **)(*(_QWORD *)(v95[9] + 16) + 8LL * v99);
        goto LABEL_89;
      }
      if ( *(char *)(v63 + 3) >= 0 )
        break;
      if ( *(_BYTE *)(v63 + 3) >> 6 != 2 )
      {
        v65 = (unsigned int **)(*(_QWORD *)(v63 + 16) + 8 * v52);
        goto LABEL_89;
      }
LABEL_106:
      v63 = *(_QWORD *)(v63 + 16);
    }
    if ( (_DWORD)v52 != *(_DWORD *)(v63 + 4) )
      goto LABEL_106;
    v65 = (unsigned int **)(v63 + 8);
LABEL_89:
    v53 = *v65;
LABEL_71:
    v54 = *(_QWORD *)(a1 + 40);
    v55 = *(_QWORD *)(a1 + 16);
    v101 = nullptr;
    v103 = 0;
    v56 = *(_DWORD *)(v54 + 20);
    v102 = v55;
    v104 = v55;
    if ( v56 )
    {
      sub_14BB8A0(a1 + 24, v53, &v101, &v103);
LABEL_108:
      v73 = v101;
      if ( v101 == v53 )
      {
        v58 = v103;
      }
      else
      {
        *(_BYTE *)(a1 + 104) = 1;
        v58 = v103;
        v53 = v73;
      }
      goto LABEL_75;
    }
    if ( v53 )
      ++v53[2];
    v57 = *(_DWORD *)(v55 + 712);
    v101 = v53;
    v58 = 0;
    if ( v57 )
    {
      v74 = sub_15DE1B0(v55);
      if ( v74 )
        ++*(_DWORD *)(v74 + 8);
      v75 = v103;
      if ( v103 )
      {
        v76 = v104;
        v31 = (*(_DWORD *)(v103 + 8))-- == 1;
        if ( v31 )
        {
          v94 = v74;
          sub_15D7BC0(v76, v75);
          v74 = v94;
        }
      }
      v103 = v74;
      goto LABEL_108;
    }
LABEL_75:
    sub_CF57E0(a1, v53, v58);
    v59 = v103;
    if ( v103 )
    {
      v60 = v104;
      v31 = (*(_DWORD *)(v103 + 8))-- == 1;
      if ( v31 )
        sub_15D7BC0(v60, v59);
    }
    v8 = (unsigned __int64)v101;
    if ( v101 )
    {
      v61 = v102;
      v31 = v101[2]-- == 1;
      if ( v31 )
        sub_15D7BC0(v61, v8);
    }
    v11 = *(__int64 **)(a1 + 48);
    if ( (*((_BYTE *)v11 + 123) & 0x20) == 0 )
    {
      v52 = (unsigned int)(*(_DWORD *)(a1 + 96) + 1);
      *(_DWORD *)(a1 + 96) = v52;
      if ( (unsigned int)v52 < v14 )
        continue;
LABEL_90:
      v15 = *(_QWORD *)(a1 + 40);
      LODWORD(v12) = *(_DWORD *)(v15 + 20);
      if ( (_DWORD)v12 || *(_BYTE *)(a1 + 104) )
      {
        sub_EE0DD0(v93, (_DWORD)v11, v15, v12, v9, v10);
        v66 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL);
        if ( v66 )
        {
          for ( j = *(_BYTE *)(v66 + 3) >> 6; !j; j = *(_BYTE *)(v66 + 3) >> 6 )
            v66 = *(_QWORD *)(v66 + 16);
          if ( j == 1 )
          {
            v68 = *(_DWORD *)(v66 + 4) + 1;
          }
          else if ( j == 2 )
          {
            v68 = *(_DWORD *)(v66 + 4) - 1;
          }
          else
          {
            v68 = *(_DWORD *)(v66 + 4);
          }
        }
        else
        {
          v68 = 0;
        }
        *(_DWORD *)(a1 + 96) = v68;
        sub_1694B10(*(_QWORD *)(a1 + 40));
        v8 = *(_QWORD *)(a1 + 40);
        v69 = a1 + 24;
        sub_14B64E0(a1 + 24, v8);
        v22 = 0;
LABEL_98:
        if ( (unsigned int)++v98 < *(_DWORD *)(a1 + 100) )
        {
          if ( (unsigned int)sub_180B130(v69) > 0x63 )
          {
            if ( (unsigned __int8)sub_186A530(a4) )
            {
              sub_186A4C0(a4);
              sub_180B150(v69, v8);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_ED6430(*(_QWORD *)(a1 + 48));
              v70 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
              v71 = *(_BYTE **)((char *)v70 + *(_QWORD *)(*(_QWORD *)v70 - 24LL) + 240);
              if ( !v71 )
                std::__throw_bad_cast();
              if ( v71[56] )
              {
                v8 = (unsigned int)(char)v71[67];
              }
              else
              {
                v97 = v70;
                std::ctype<char>::_M_widen_init();
                v70 = v97;
                v8 = 10;
                v89 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v71 + 48LL);
                if ( v89 != sub_26BE90 )
                {
                  v90 = v89((__int64)v71, 10u);
                  v70 = v97;
                  v8 = (unsigned int)v90;
                }
              }
              v72 = (std::ostream *)std::ostream::put(v70, v8);
              std::ostream::flush(v72);
              sub_186A500(v72, v8);
            }
            else
            {
              sub_180B150(v69, v8);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_ED6430(*(_QWORD *)(a1 + 48));
              v84 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
              v85 = *(_BYTE **)((char *)v84 + *(_QWORD *)(*(_QWORD *)v84 - 24LL) + 240);
              if ( !v85 )
                std::__throw_bad_cast();
              if ( v85[56] )
              {
                LODWORD(v8) = (char)v85[67];
              }
              else
              {
                v96 = v84;
                std::ctype<char>::_M_widen_init();
                v84 = v96;
                LODWORD(v8) = 10;
                v87 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v85 + 48LL);
                if ( v87 != sub_26BE90 )
                {
                  v88 = v87((__int64)v85, 10u);
                  v84 = v96;
                  LODWORD(v8) = v88;
                }
              }
              v86 = (std::ostream *)std::ostream::put(v84, v8);
              std::ostream::flush(v86);
            }
          }
          goto LABEL_14;
        }
LABEL_36:
        v11 = *(__int64 **)(a1 + 48);
      }
    }
    break;
  }
LABEL_37:
  sub_EDC6C0((_DWORD)v11, v8, v15, v12, v9, v10);
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 120LL) = (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 120LL) + 1) & 0x3FFFFFF
                                            | *(_DWORD *)(*(_QWORD *)(a1 + 48) + 120LL) & 0xFC000000;
  v39 = *(_QWORD *)(a1 + 48);
  if ( v39 )
    ++*(_DWORD *)(v39 + 32);
  v40 = *(_DWORD *)(a3 + 8);
  v41 = *(_DWORD *)(a3 + 12);
  if ( v40 >= v41 )
  {
    v48 = 2 * v41;
    v49 = sub_186B270(8 * v48);
    v40 = *(_DWORD *)(a3 + 8);
    v50 = *(_QWORD **)a3;
    v42 = (_QWORD *)v49;
    if ( v40 )
    {
      if ( v40 - 1 <= 2 || (_QWORD *)v49 == v50 + 1 )
      {
        for ( k = 0; k != v40; ++k )
          v42[k] = v50[k];
      }
      else
      {
        v51 = 0;
        do
        {
          *(__m128i *)&v42[v51] = _mm_loadu_si128((const __m128i *)&v50[v51]);
          v51 += 2;
        }
        while ( 2LL * (v40 >> 1) != v51 );
        if ( (v40 & 1) != 0 )
          v42[v40 & 0xFFFFFFFE] = v50[v40 & 0xFFFFFFFE];
      }
    }
    if ( v50 != (_QWORD *)(a3 + 16) && v50 )
    {
      sub_186B220(v50);
      v40 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v42;
    *(_DWORD *)(a3 + 12) = v48;
  }
  else
  {
    v42 = *(_QWORD **)a3;
  }
  v42[v40] = v39;
  *(_DWORD *)(a3 + 8) = v40 + 1;
  *(_QWORD *)(a1 + 48) = 0;
  return sub_EE4A00(v100);
}

