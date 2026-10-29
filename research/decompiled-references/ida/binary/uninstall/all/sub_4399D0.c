__int64 __fastcall sub_4399D0(__int64 a1, _DWORD *a2, int a3, __int64 a4)
{
  int v4; // r14d
  int v6; // esi
  _DWORD *v8; // rcx
  int v9; // r15d
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  int v13; // ebx
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  int v16; // edx
  int v17; // ebx
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx
  int v20; // edx
  int v21; // eax
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  _BYTE *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  const char *v29; // r12
  int v30; // edx
  signed int v31; // ebx
  signed int v32; // esi
  _BYTE *i; // rdi
  int v34; // ebx
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  _BYTE *v37; // rcx
  _BYTE *v38; // rcx
  _BYTE *v39; // rcx
  int v40; // edx
  int v41; // eax
  __int64 v42; // rax
  int v43; // ebx
  _BYTE *v44; // rcx
  _BYTE *v45; // rcx
  int v46; // edx
  _BYTE *v47; // rcx
  _BYTE *v48; // rcx
  _BYTE *v49; // rcx
  _BYTE *v50; // rcx
  _BYTE *v51; // rcx
  _BYTE *v52; // rcx
  _BYTE *v53; // rcx
  _BYTE *v54; // rcx
  _BYTE *v55; // rcx
  _BYTE *v56; // rcx
  _BYTE *v57; // rcx
  _BYTE *v58; // rcx
  _BYTE *v59; // rcx
  _BYTE *v60; // rcx
  _BYTE *v61; // rcx
  int v62; // eax
  _BYTE *v63; // rcx
  _BYTE *v64; // rcx
  _BYTE *v65; // rcx
  _BYTE *v66; // rcx
  unsigned int v67; // ebx
  int v68; // eax
  int v69; // ebx
  __int64 v70; // rax
  int v71; // ebx
  _BYTE *v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rcx
  int v75; // edx
  _BYTE *v76; // rcx
  int v77; // eax
  __int64 v78; // rax
  int v79; // edx
  bool v80; // zf
  int v81; // eax
  __int64 v82; // rax
  int v83; // edx
  int v84; // eax
  __int64 result; // rax
  _BYTE *v86; // rcx
  _BYTE *v87; // rcx
  _BYTE *v88; // rcx
  _BYTE *v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rcx
  _BYTE *v92; // rcx
  _BYTE *v93; // rcx
  int v94; // ebx
  _BYTE *v95; // rcx
  _BYTE *v96; // rcx
  int v97; // edx
  int v98; // eax
  _BYTE *v99; // rcx
  _BYTE *v100; // rcx
  _BYTE *v101; // rcx
  _BYTE *v102; // rcx
  _BYTE *v103; // rcx
  void *v104; // [rsp+10h] [rbp-158h]
  int v105; // [rsp+1Ch] [rbp-14Ch]
  int v106; // [rsp+20h] [rbp-148h]
  int v107; // [rsp+24h] [rbp-144h]
  _BYTE *v108; // [rsp+28h] [rbp-140h]
  int v109; // [rsp+34h] [rbp-134h]
  _BYTE v111[16]; // [rsp+40h] [rbp-128h] BYREF
  __int64 v112; // [rsp+50h] [rbp-118h] BYREF
  int v113; // [rsp+58h] [rbp-110h]

  v4 = a3;
  v6 = 0;
  v104 = nullptr;
  v105 = 0;
  v106 = 0;
  v108 = *(_BYTE **)(a4 + 120);
  v107 = 1;
  if ( a3 <= 0 )
  {
LABEL_5:
    v106 = 20;
    v104 = (void *)sub_40FB00(80);
  }
  else
  {
    v8 = a2;
    while ( *v8 == 8 || *v8 == 4 )
    {
      ++v6;
      v8 += 6;
      if ( v6 >= a3 )
        goto LABEL_5;
    }
    v107 = 0;
  }
  v9 = 0;
  sub_49EDC0(&v112);
  while ( v4 > 0 )
  {
    v12 = *a2;
    if ( *a2 == 8 )
    {
      v67 = sub_47D9F0(*((_QWORD *)a2 + 1), (unsigned int)a2[4], 0, v111);
      sub_49EDE0(&v112, v111, v67);
      if ( v67 == 1 && v111[0] == 32 && *(_BYTE *)(*((_QWORD *)a2 + 1) + 1LL) == 10 && v107 )
      {
        v68 = v106;
        v69 = v113;
        if ( v105 >= v106 )
        {
          v106 *= 2;
          v104 = (void *)sub_40FC10(v104, 8 * v68);
        }
        v70 = v105++;
        *((_DWORD *)v104 + v70) = v69;
      }
    }
    else if ( v12 <= 8 )
    {
      if ( v12 != 4 )
        goto LABEL_8;
      sub_49EDE0(&v112, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
    }
    else
    {
      if ( v12 != 16 )
      {
        if ( v12 != 32 )
        {
LABEL_8:
          sub_47D740(
            (unsigned int)"Unexpected token type in TclCompileTokens: %d; %.*s",
            *a2,
            a2[4],
            *((_QWORD *)a2 + 1),
            v10,
            v11);
          goto LABEL_9;
        }
        if ( v113 > 0 )
        {
          v13 = sub_471010(a4, v112, (unsigned int)v113, 0);
          if ( v13 > 255 )
          {
            v22 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v22 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v22 = *(_BYTE **)(a4 + 120);
            }
            *v22 = 2;
            v23 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v23;
            *v23 = HIBYTE(v13);
            v24 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v24;
            *v24 = BYTE2(v13);
            v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v25;
            *v25 = BYTE1(v13);
            v26 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v26;
            *v26 = v13;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v16 = dword_65444C;
          }
          else
          {
            v14 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v14 + 2) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v14 = *(_BYTE **)(a4 + 120);
            }
            *v14 = 1;
            v15 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v15;
            *v15 = v13;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v16 = dword_65442C;
          }
          if ( v16 )
          {
            if ( v16 == 0x80000000 )
              v16 = 1 - v13;
            if ( v16 < 0 )
            {
              v27 = *(_DWORD *)(a4 + 48);
              if ( *(_DWORD *)(a4 + 44) < v27 )
                *(_DWORD *)(a4 + 44) = v27;
            }
            else
            {
              v27 = *(_DWORD *)(a4 + 48);
            }
            *(_DWORD *)(a4 + 48) = v16 + v27;
          }
          ++v9;
          sub_49F100(&v112);
        }
        v28 = *(_QWORD *)(a4 + 24);
        v29 = *((const char **)a2 + 4);
        v30 = -1;
        v31 = a2[10];
        if ( v28 )
        {
          v32 = 0;
          v30 = 1;
          for ( i = *((_BYTE **)a2 + 4); v32 < v31; ++i )
          {
            if ( *i == 58 )
            {
              if ( v31 - 1 > v32 && i[1] == 58 )
              {
                v30 = -1;
                break;
              }
            }
            else if ( *i == 40 && a2[5] == 1 && v29[v31 - 1] == 41 )
            {
              v30 = 0;
              break;
            }
            ++v32;
          }
        }
        v109 = -1;
        if ( v30 == -1 || (v109 = sub_439880(v29, v31, v30, v28), v109 < 0) )
        {
          v43 = sub_471010(a4, v29, (unsigned int)v31, 0);
          if ( v43 > 255 )
          {
            v57 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v57 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v57 = *(_BYTE **)(a4 + 120);
            }
            *v57 = 2;
            v58 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v58;
            *v58 = HIBYTE(v43);
            v59 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v59;
            *v59 = BYTE2(v43);
            v60 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v60;
            *v60 = BYTE1(v43);
            v61 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v61;
            *v61 = v43;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v46 = dword_65444C;
          }
          else
          {
            v44 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v44 + 2) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v44 = *(_BYTE **)(a4 + 120);
            }
            *v44 = 1;
            v45 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v45;
            *v45 = v43;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v46 = dword_65442C;
          }
          if ( v46 )
          {
            if ( v46 == 0x80000000 )
              v46 = 1 - v43;
            if ( v46 >= 0 )
            {
              v62 = *(_DWORD *)(a4 + 48);
              goto LABEL_99;
            }
            v62 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) >= v62 )
            {
LABEL_99:
              *(_DWORD *)(a4 + 48) = v46 + v62;
            }
            else
            {
              *(_DWORD *)(a4 + 44) = v62;
              *(_DWORD *)(a4 + 48) = v46 + v62;
            }
          }
        }
        v34 = a2[5];
        if ( v34 == 1 )
        {
          if ( v109 >= 0 )
          {
            if ( v109 <= 255 )
            {
              v65 = *(_BYTE **)(a4 + 120);
              if ( (unsigned __int64)(v65 + 2) > *(_QWORD *)(a4 + 128) )
              {
                sub_439150(a4);
                v65 = *(_BYTE **)(a4 + 120);
              }
              *v65 = 10;
              v66 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v66;
              *v66 = v109;
              ++*(_QWORD *)(a4 + 120);
              *(_DWORD *)(a4 + 3276) = 0;
              v40 = dword_65454C;
            }
            else
            {
              v35 = *(_BYTE **)(a4 + 120);
              if ( (unsigned __int64)(v35 + 5) > *(_QWORD *)(a4 + 128) )
              {
                sub_439150(a4);
                v35 = *(_BYTE **)(a4 + 120);
              }
              *v35 = 11;
              v36 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v36;
              *v36 = HIBYTE(v109);
              v37 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v37;
              *v37 = BYTE2(v109);
              v38 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v38;
              *v38 = BYTE1(v109);
              v39 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v39;
              *v39 = v109;
              ++*(_QWORD *)(a4 + 120);
              *(_DWORD *)(a4 + 3276) = 0;
              v40 = dword_65456C;
            }
            if ( v40 )
            {
              if ( v40 == 0x80000000 )
                v40 = 1 - v109;
              if ( v40 >= 0 )
              {
LABEL_66:
                v41 = *(_DWORD *)(a4 + 48);
                goto LABEL_67;
              }
LABEL_85:
              v41 = *(_DWORD *)(a4 + 48);
              if ( *(_DWORD *)(a4 + 44) < v41 )
                *(_DWORD *)(a4 + 44) = v41;
LABEL_67:
              *(_DWORD *)(a4 + 48) = v40 + v41;
            }
LABEL_68:
            v42 = (int)a2[5];
            ++v9;
            v4 -= v42;
            a2 += 6 * v42;
            goto LABEL_9;
          }
          v93 = *(_BYTE **)(a4 + 120);
          if ( v93 == *(_BYTE **)(a4 + 128) )
          {
            sub_439150(a4);
            v93 = *(_BYTE **)(a4 + 120);
          }
          *v93 = 12;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v40 = dword_65458C;
LABEL_159:
          if ( !v40 )
            goto LABEL_68;
          if ( v40 == 0x80000000 )
          {
            v41 = *(_DWORD *)(a4 + 48);
            v40 = 1;
            goto LABEL_67;
          }
        }
        else
        {
          sub_4399D0(a1, a2 + 12, (unsigned int)(v34 - 1), a4);
          if ( v109 < 0 )
          {
            v92 = *(_BYTE **)(a4 + 120);
            if ( v92 == *(_BYTE **)(a4 + 128) )
            {
              sub_439150(a4);
              v92 = *(_BYTE **)(a4 + 120);
            }
            *v92 = 15;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v40 = dword_6545EC;
            goto LABEL_159;
          }
          if ( v109 <= 255 )
          {
            v63 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v63 + 2) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v63 = *(_BYTE **)(a4 + 120);
            }
            *v63 = 13;
            v64 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v64;
            *v64 = v109;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v40 = dword_6545AC;
          }
          else
          {
            v47 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v47 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v47 = *(_BYTE **)(a4 + 120);
            }
            *v47 = 14;
            v48 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v48;
            *v48 = HIBYTE(v109);
            v49 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v49;
            *v49 = BYTE2(v109);
            v50 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v50;
            *v50 = BYTE1(v109);
            v51 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v51;
            *v51 = v109;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v40 = dword_6545CC;
          }
          if ( !v40 )
            goto LABEL_68;
          if ( v40 == 0x80000000 )
            v40 = 1 - v109;
        }
        if ( v40 >= 0 )
          goto LABEL_66;
        goto LABEL_85;
      }
      if ( v113 > 0 )
      {
        v17 = sub_471010(a4, v112, (unsigned int)v113, 0);
        if ( v17 > 255 )
        {
          v52 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v52 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v52 = *(_BYTE **)(a4 + 120);
          }
          *v52 = 2;
          v53 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v53;
          *v53 = HIBYTE(v17);
          v54 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v54;
          *v54 = BYTE2(v17);
          v55 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v55;
          *v55 = BYTE1(v17);
          v56 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v56;
          *v56 = v17;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v20 = dword_65444C;
        }
        else
        {
          v18 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v18 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v18 = *(_BYTE **)(a4 + 120);
          }
          *v18 = 1;
          v19 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v19;
          *v19 = v17;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v20 = dword_65442C;
        }
        if ( v20 )
        {
          if ( v20 == 0x80000000 )
            v20 = 1 - v17;
          if ( v20 < 0 )
          {
            v21 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v21 )
              *(_DWORD *)(a4 + 44) = v21;
          }
          else
          {
            v21 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v20 + v21;
        }
        ++v9;
        sub_49F100(&v112);
        if ( v105 )
          sub_47AC10(*(_QWORD *)(32LL * v17 + *(_QWORD *)(a4 + 144) + 8), (unsigned int)v105, v104);
        v105 = 0;
      }
      ++v9;
      sub_43ADB0(a1, *((_QWORD *)a2 + 1) + 1LL, (unsigned int)(a2[4] - 2), a4);
    }
LABEL_9:
    --v4;
    a2 += 6;
  }
  if ( v113 <= 0 )
  {
LABEL_150:
    v76 = *(_BYTE **)(a4 + 120);
    goto LABEL_125;
  }
  v71 = sub_471010(a4, v112, (unsigned int)v113, 0);
  if ( v71 > 255 )
  {
    v86 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v86 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v86 = *(_BYTE **)(a4 + 120);
    }
    *v86 = 2;
    v87 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v87;
    *v87 = HIBYTE(v71);
    v88 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v88;
    *v88 = BYTE2(v71);
    v89 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v89;
    *v89 = BYTE1(v71);
    v90 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v90 + 1;
    *(_BYTE *)(v90 + 1) = v71;
    v91 = *(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v75 = dword_65444C;
    v76 = (_BYTE *)(v91 + 1);
    *(_QWORD *)(a4 + 120) = v76;
  }
  else
  {
    v72 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v72 + 2) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v72 = *(_BYTE **)(a4 + 120);
    }
    *v72 = 1;
    v73 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v73 + 1;
    *(_BYTE *)(v73 + 1) = v71;
    v74 = *(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v75 = dword_65442C;
    v76 = (_BYTE *)(v74 + 1);
    *(_QWORD *)(a4 + 120) = v76;
  }
  if ( v75 )
  {
    if ( v75 == 0x80000000 )
      v75 = 1 - v71;
    if ( v75 < 0 )
    {
      v77 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v77 )
        *(_DWORD *)(a4 + 44) = v77;
    }
    else
    {
      v77 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v75 + v77;
  }
  ++v9;
  if ( v105 )
  {
    sub_47AC10(*(_QWORD *)(32LL * v71 + *(_QWORD *)(a4 + 144) + 8), (unsigned int)v105, v104);
    goto LABEL_150;
  }
LABEL_125:
  if ( v9 > 255 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)(v76 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v76 = *(_BYTE **)(a4 + 120);
      }
      *v76 = 5;
      v78 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v78 + 1;
      *(_BYTE *)(v78 + 1) = -1;
      *(_DWORD *)(a4 + 3276) = 0;
      v79 = dword_6544AC;
      v76 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      v80 = dword_6544AC == 0;
      *(_QWORD *)(a4 + 120) = v76;
      if ( v80 )
        goto LABEL_133;
      if ( v79 == 0x80000000 )
        break;
      if ( v79 < 0 )
        goto LABEL_147;
      v81 = *(_DWORD *)(a4 + 48);
LABEL_132:
      *(_DWORD *)(a4 + 48) = v79 + v81;
LABEL_133:
      v9 -= 254;
      if ( v9 <= 255 )
        goto LABEL_134;
    }
    v79 = -254;
LABEL_147:
    v81 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) < v81 )
      *(_DWORD *)(a4 + 44) = v81;
    goto LABEL_132;
  }
LABEL_134:
  if ( v9 > 1 )
  {
    if ( (unsigned __int64)(v76 + 2) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v76 = *(_BYTE **)(a4 + 120);
    }
    *v76 = 5;
    v82 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v82 + 1;
    *(_BYTE *)(v82 + 1) = v9;
    *(_DWORD *)(a4 + 3276) = 0;
    v83 = dword_6544AC;
    v76 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    v80 = dword_6544AC == 0;
    *(_QWORD *)(a4 + 120) = v76;
    if ( !v80 )
    {
      if ( v83 == 0x80000000 )
        v83 = 1 - v9;
      if ( v83 < 0 )
      {
        v84 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v84 )
          *(_DWORD *)(a4 + 44) = v84;
      }
      else
      {
        v84 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v83 + v84;
    }
  }
  if ( v76 == v108 )
  {
    v94 = sub_471010(a4, "", 0, 0);
    if ( v94 > 255 )
    {
      v99 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v99 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v99 = *(_BYTE **)(a4 + 120);
      }
      *v99 = 2;
      v100 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v100;
      *v100 = HIBYTE(v94);
      v101 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v101;
      *v101 = BYTE2(v94);
      v102 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v102;
      *v102 = BYTE1(v94);
      v103 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v103;
      *v103 = v94;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v97 = dword_65444C;
    }
    else
    {
      v95 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v95 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v95 = *(_BYTE **)(a4 + 120);
      }
      *v95 = 1;
      v96 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v96;
      *v96 = v94;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v97 = dword_65442C;
    }
    if ( v97 )
    {
      if ( v97 == 0x80000000 )
        v97 = 1 - v94;
      if ( v97 >= 0 )
      {
        v98 = *(_DWORD *)(a4 + 48);
LABEL_180:
        *(_DWORD *)(a4 + 48) = v97 + v98;
        goto LABEL_144;
      }
      v98 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) >= v98 )
        goto LABEL_180;
      *(_DWORD *)(a4 + 44) = v98;
      *(_DWORD *)(a4 + 48) = v97 + v98;
    }
  }
LABEL_144:
  result = sub_49F100(&v112);
  if ( v106 )
    return Tcl_Free((__int64)v104);
  return result;
}

