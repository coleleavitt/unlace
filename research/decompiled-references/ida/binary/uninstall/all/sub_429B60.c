__int64 __fastcall sub_429B60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r14
  int v8; // r13d
  __int64 v9; // rbp
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  int v16; // r12d
  _BYTE *v17; // rcx
  _BYTE *v18; // rcx
  int v19; // edx
  int v20; // eax
  int v21; // edx
  _BYTE *v22; // rcx
  int v23; // ebp
  _BYTE *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  bool v29; // zf
  int v30; // eax
  char v31; // al
  _BYTE *v32; // rcx
  __int64 v33; // rcx
  int v34; // edx
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  _BYTE *v37; // rcx
  _BYTE *v38; // rcx
  _BYTE *v39; // rcx
  _BYTE *v40; // rcx
  __int64 v41; // rcx
  int v42; // eax
  _BYTE *v43; // rcx
  unsigned int v44; // eax
  _BYTE *v45; // rcx
  unsigned int v46; // eax
  _BYTE *v47; // rcx
  unsigned int v48; // eax
  _BYTE *v49; // rcx
  int v50; // edx
  _BYTE *v51; // rcx
  int v52; // eax
  int v53; // edx
  int v54; // eax
  int v55; // ebp
  _BYTE *v56; // rcx
  _BYTE *v57; // rcx
  _BYTE *v58; // rcx
  _BYTE *v59; // rcx
  __int64 v60; // rax
  int v61; // edx
  int v62; // eax
  char v63; // al
  _BYTE *v64; // rcx
  char v65; // al
  _BYTE *v66; // rcx
  _BYTE *v67; // rcx
  unsigned int v68; // eax
  _BYTE *v69; // rcx
  char v70; // al
  _BYTE *v71; // rcx
  char v72; // al
  _BYTE *v73; // rcx
  __int64 v74; // rcx
  char v75; // al
  _BYTE *v76; // rcx
  char v77; // al
  _BYTE *v78; // rcx
  char v79; // al
  _BYTE *v80; // rcx
  _BYTE *v81; // rcx
  unsigned int v82; // eax
  _BYTE *v83; // rcx
  char v84; // al
  _BYTE *v85; // rcx
  char v86; // al
  _BYTE *v87; // rcx
  _BYTE *v88; // rcx
  unsigned int v89; // eax
  _BYTE *v90; // rcx
  __int64 v91; // rcx
  char v92; // al
  _BYTE *v93; // rcx
  char v94; // al
  _BYTE *v95; // rcx
  _BYTE *v96; // rcx
  unsigned int v97; // eax
  _BYTE *v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // [rsp+18h] [rbp-50h]
  int v103; // [rsp+2Ch] [rbp-3Ch] BYREF
  int v104; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v105[13]; // [rsp+34h] [rbp-34h] BYREF

  result = 1;
  v7 = *(_QWORD *)(a4 + 3264);
  if ( *(int *)(a2 + 28) > 2 )
  {
    v8 = 2;
    v9 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24;
    v10 = 24LL * (*(_DWORD *)(v7 + 28) - 1);
    sub_41F660(
      a1,
      v9,
      a4,
      1u,
      (unsigned int *)&v103,
      &v104,
      v105,
      *(_DWORD *)(*(_QWORD *)(v10 + *(_QWORD *)(v7 + 16) + 8) + 4LL),
      *(_QWORD *)(*(_QWORD *)(v10 + *(_QWORD *)(v7 + 16) + 16) + 8LL));
    v11 = *(_DWORD *)(a2 + 28);
    if ( v11 > 2 )
    {
      v102 = v10;
      do
      {
        while ( 1 )
        {
          v15 = v9 + 24LL * *(int *)(v9 + 20);
          v9 = v15 + 24;
          if ( *(_DWORD *)(v15 + 24) == 2 )
            break;
          v12 = *(_QWORD *)(v7 + 16);
          *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v102 + v12 + 8) + 4LL * v8);
          v13 = *(_QWORD *)(v102 + v12 + 16);
          v14 = *(unsigned int *)(v15 + 44);
          *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v13 + 8LL * v8);
          sub_4399D0(a1, v15 + 48, v14, a4);
LABEL_5:
          v11 = *(_DWORD *)(a2 + 28);
          if ( v11 <= ++v8 )
            goto LABEL_18;
        }
        v16 = sub_471010(a4, *(_QWORD *)(v15 + 56), *(unsigned int *)(v15 + 64), 0);
        if ( v16 > 255 )
        {
          v36 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v36 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v36 = *(_BYTE **)(a4 + 120);
          }
          *v36 = 2;
          v37 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v37;
          *v37 = HIBYTE(v16);
          v38 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v38;
          *v38 = BYTE2(v16);
          v39 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v39;
          *v39 = BYTE1(v16);
          v40 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v40;
          *v40 = v16;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v19 = dword_65444C;
        }
        else
        {
          v17 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v17 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v17 = *(_BYTE **)(a4 + 120);
          }
          *v17 = 1;
          v18 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v18;
          *v18 = v16;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v19 = dword_65442C;
        }
        if ( !v19 )
          goto LABEL_5;
        if ( v19 == 0x80000000 )
          v19 = 1 - v16;
        if ( v19 < 0 )
        {
          v20 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v20 )
          {
            *(_DWORD *)(a4 + 44) = v20;
            *(_DWORD *)(a4 + 48) = v19 + v20;
            goto LABEL_17;
          }
        }
        else
        {
          v20 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v19 + v20;
LABEL_17:
        v11 = *(_DWORD *)(a2 + 28);
        ++v8;
      }
      while ( v11 > v8 );
    }
LABEL_18:
    v21 = v104;
    if ( !v104 )
      goto LABEL_74;
    if ( v103 >= 0 )
    {
      v22 = *(_BYTE **)(a4 + 120);
      goto LABEL_21;
    }
    if ( v105[0] )
LABEL_74:
      v55 = v11 - 2;
    else
      v55 = v11 - 1;
    v56 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v56 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v56 = *(_BYTE **)(a4 + 120);
    }
    *v56 = 95;
    v57 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v57;
    *v57 = HIBYTE(v55);
    v58 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v58;
    *v58 = BYTE2(v55);
    v59 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v59;
    *v59 = BYTE1(v55);
    v60 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v60 + 1;
    *(_BYTE *)(v60 + 1) = v55;
    *(_DWORD *)(a4 + 3276) = 0;
    v61 = dword_654FEC;
    v22 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    v29 = dword_654FEC == 0;
    *(_QWORD *)(a4 + 120) = v22;
    if ( !v29 )
    {
      if ( v61 == 0x80000000 )
        v61 = 1 - v55;
      if ( v61 < 0 )
      {
        v62 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v62 )
        {
          *(_DWORD *)(a4 + 44) = v62;
          *(_DWORD *)(a4 + 48) = v61 + v62;
          goto LABEL_83;
        }
      }
      else
      {
        v62 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v61 + v62;
    }
LABEL_83:
    v21 = v104;
LABEL_21:
    if ( !v21 )
      goto LABEL_47;
    if ( v105[0] )
    {
LABEL_34:
      if ( v21 )
      {
        if ( v105[0] )
        {
          if ( v103 >= 0 )
          {
            if ( v103 > 255 )
            {
              if ( (unsigned __int64)(v22 + 5) > *(_QWORD *)(a4 + 128) )
              {
                sub_439150(a4);
                v22 = *(_BYTE **)(a4 + 120);
              }
              *v22 = 11;
              v92 = HIBYTE(v103);
              v93 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v93;
              *v93 = v92;
              v94 = BYTE2(v103);
              v95 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v95;
              *v95 = v94;
              v96 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              v97 = (unsigned int)v103 >> 8;
              *(_QWORD *)(a4 + 120) = v96;
              *v96 = v97;
              LOBYTE(v97) = v103;
              v98 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v98;
              *v98 = v97;
              v99 = *(_QWORD *)(a4 + 120);
              *(_DWORD *)(a4 + 3276) = 0;
              v34 = dword_65456C;
              v35 = (_BYTE *)(v99 + 1);
              *(_QWORD *)(a4 + 120) = v35;
            }
            else
            {
              if ( (unsigned __int64)(v22 + 2) > *(_QWORD *)(a4 + 128) )
              {
                sub_439150(a4);
                v22 = *(_BYTE **)(a4 + 120);
              }
              *v22 = 10;
              v72 = v103;
              v73 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v73;
              *v73 = v72;
              v74 = *(_QWORD *)(a4 + 120);
              *(_DWORD *)(a4 + 3276) = 0;
              v34 = dword_65454C;
              v35 = (_BYTE *)(v74 + 1);
              *(_QWORD *)(a4 + 120) = v35;
            }
            goto LABEL_41;
          }
          if ( v22 == *(_BYTE **)(a4 + 128) )
          {
            sub_439150(a4);
            v22 = *(_BYTE **)(a4 + 120);
          }
          *v22 = 12;
          v101 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v34 = dword_65458C;
          v35 = (_BYTE *)(v101 + 1);
          *(_QWORD *)(a4 + 120) = v35;
        }
        else
        {
          if ( v103 >= 0 )
          {
            if ( v103 > 255 )
            {
              if ( (unsigned __int64)(v22 + 5) > *(_QWORD *)(a4 + 128) )
              {
                sub_439150(a4);
                v22 = *(_BYTE **)(a4 + 120);
              }
              *v22 = 14;
              v84 = HIBYTE(v103);
              v85 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v85;
              *v85 = v84;
              v86 = BYTE2(v103);
              v87 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v87;
              *v87 = v86;
              v88 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              v89 = (unsigned int)v103 >> 8;
              *(_QWORD *)(a4 + 120) = v88;
              *v88 = v89;
              LOBYTE(v89) = v103;
              v90 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v90;
              *v90 = v89;
              v91 = *(_QWORD *)(a4 + 120);
              *(_DWORD *)(a4 + 3276) = 0;
              v34 = dword_6545CC;
              v35 = (_BYTE *)(v91 + 1);
              *(_QWORD *)(a4 + 120) = v35;
            }
            else
            {
              if ( (unsigned __int64)(v22 + 2) > *(_QWORD *)(a4 + 128) )
              {
                sub_439150(a4);
                v22 = *(_BYTE **)(a4 + 120);
              }
              *v22 = 13;
              v31 = v103;
              v32 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v32;
              *v32 = v31;
              v33 = *(_QWORD *)(a4 + 120);
              *(_DWORD *)(a4 + 3276) = 0;
              v34 = dword_6545AC;
              v35 = (_BYTE *)(v33 + 1);
              *(_QWORD *)(a4 + 120) = v35;
            }
LABEL_41:
            if ( !v34 )
              goto LABEL_55;
            if ( v34 == 0x80000000 )
              v34 = 1 - v103;
            goto LABEL_52;
          }
          if ( v22 == *(_BYTE **)(a4 + 128) )
          {
            sub_439150(a4);
            v22 = *(_BYTE **)(a4 + 120);
          }
          *v22 = 15;
          v100 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v34 = dword_6545EC;
          v35 = (_BYTE *)(v100 + 1);
          *(_QWORD *)(a4 + 120) = v35;
        }
LABEL_50:
        if ( !v34 )
          goto LABEL_55;
        if ( v34 == 0x80000000 )
        {
          v42 = *(_DWORD *)(a4 + 48);
          v34 = 1;
LABEL_54:
          *(_DWORD *)(a4 + 48) = v34 + v42;
LABEL_55:
          if ( *(_DWORD *)(a2 + 28) == 4 )
          {
            if ( v35 == *(_BYTE **)(a4 + 128) )
            {
              sub_439150(a4);
              v35 = *(_BYTE **)(a4 + 120);
            }
            *v35 = 96;
            *(_DWORD *)(a4 + 3276) = 0;
            v50 = dword_65500C;
            v51 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            v29 = dword_65500C == 0;
            *(_QWORD *)(a4 + 120) = v51;
            if ( !v29 )
            {
              if ( v50 == 0x80000000 )
              {
                v52 = *(_DWORD *)(a4 + 48);
                v50 = 1;
LABEL_63:
                *(_DWORD *)(a4 + 48) = v50 + v52;
                goto LABEL_64;
              }
LABEL_61:
              if ( v50 < 0 )
              {
                v52 = *(_DWORD *)(a4 + 48);
                if ( *(_DWORD *)(a4 + 44) < v52 )
                  *(_DWORD *)(a4 + 44) = v52;
              }
              else
              {
                v52 = *(_DWORD *)(a4 + 48);
              }
              goto LABEL_63;
            }
          }
          else
          {
            if ( (unsigned __int64)(v35 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v35 = *(_BYTE **)(a4 + 120);
            }
            *v35 = 97;
            v43 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            v44 = (unsigned int)(*(_DWORD *)(a2 + 28) - 1) >> 24;
            *(_QWORD *)(a4 + 120) = v43;
            *v43 = v44;
            v45 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            v46 = (unsigned int)(*(_DWORD *)(a2 + 28) - 1) >> 16;
            *(_QWORD *)(a4 + 120) = v45;
            *v45 = v46;
            v47 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            v48 = (unsigned int)(*(_DWORD *)(a2 + 28) - 1) >> 8;
            *(_QWORD *)(a4 + 120) = v47;
            *v47 = v48;
            v49 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            LOBYTE(v48) = *(_BYTE *)(a2 + 28) - 1;
            *(_QWORD *)(a4 + 120) = v49;
            *v49 = v48;
            *(_DWORD *)(a4 + 3276) = 0;
            v50 = dword_65502C;
            v51 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            v29 = dword_65502C == 0;
            *(_QWORD *)(a4 + 120) = v51;
            if ( !v29 )
            {
              if ( v50 == 0x80000000 )
                v50 = 2 - *(_DWORD *)(a2 + 28);
              goto LABEL_61;
            }
          }
LABEL_64:
          if ( !v104 )
          {
            if ( v51 == *(_BYTE **)(a4 + 128) )
            {
              sub_439150(a4);
              v51 = *(_BYTE **)(a4 + 120);
            }
            *v51 = 23;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v53 = dword_6546EC;
            goto LABEL_68;
          }
          if ( v105[0] )
          {
            if ( v103 >= 0 )
            {
              if ( v103 <= 255 )
              {
                if ( (unsigned __int64)(v51 + 2) > *(_QWORD *)(a4 + 128) )
                {
                  sub_439150(a4);
                  v51 = *(_BYTE **)(a4 + 120);
                }
                *v51 = 17;
                v75 = v103;
                v76 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                *(_QWORD *)(a4 + 120) = v76;
                *v76 = v75;
                ++*(_QWORD *)(a4 + 120);
                *(_DWORD *)(a4 + 3276) = 0;
                v53 = dword_65462C;
              }
              else
              {
                if ( (unsigned __int64)(v51 + 5) > *(_QWORD *)(a4 + 128) )
                {
                  sub_439150(a4);
                  v51 = *(_BYTE **)(a4 + 120);
                }
                *v51 = 18;
                v63 = HIBYTE(v103);
                v64 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                *(_QWORD *)(a4 + 120) = v64;
                *v64 = v63;
                v65 = BYTE2(v103);
                v66 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                *(_QWORD *)(a4 + 120) = v66;
                *v66 = v65;
                v67 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                v68 = (unsigned int)v103 >> 8;
                *(_QWORD *)(a4 + 120) = v67;
                *v67 = v68;
                LOBYTE(v68) = v103;
                v69 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                *(_QWORD *)(a4 + 120) = v69;
                *v69 = v68;
                ++*(_QWORD *)(a4 + 120);
                *(_DWORD *)(a4 + 3276) = 0;
                v53 = dword_65464C;
              }
LABEL_90:
              if ( !v53 )
                return 0;
              if ( v53 == 0x80000000 )
                v53 = 1 - v103;
              goto LABEL_70;
            }
            if ( v51 == *(_BYTE **)(a4 + 128) )
            {
              sub_439150(a4);
              v51 = *(_BYTE **)(a4 + 120);
            }
            *v51 = 19;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v53 = dword_65466C;
          }
          else
          {
            if ( v103 >= 0 )
            {
              if ( v103 > 255 )
              {
                if ( (unsigned __int64)(v51 + 5) > *(_QWORD *)(a4 + 128) )
                {
                  sub_439150(a4);
                  v51 = *(_BYTE **)(a4 + 120);
                }
                *v51 = 21;
                v77 = HIBYTE(v103);
                v78 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                *(_QWORD *)(a4 + 120) = v78;
                *v78 = v77;
                v79 = BYTE2(v103);
                v80 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                *(_QWORD *)(a4 + 120) = v80;
                *v80 = v79;
                v81 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                v82 = (unsigned int)v103 >> 8;
                *(_QWORD *)(a4 + 120) = v81;
                *v81 = v82;
                LOBYTE(v82) = v103;
                v83 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                *(_QWORD *)(a4 + 120) = v83;
                *v83 = v82;
                ++*(_QWORD *)(a4 + 120);
                *(_DWORD *)(a4 + 3276) = 0;
                v53 = dword_6546AC;
              }
              else
              {
                if ( (unsigned __int64)(v51 + 2) > *(_QWORD *)(a4 + 128) )
                {
                  sub_439150(a4);
                  v51 = *(_BYTE **)(a4 + 120);
                }
                *v51 = 20;
                v70 = v103;
                v71 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                *(_QWORD *)(a4 + 120) = v71;
                *v71 = v70;
                ++*(_QWORD *)(a4 + 120);
                *(_DWORD *)(a4 + 3276) = 0;
                v53 = dword_65468C;
              }
              goto LABEL_90;
            }
            if ( v51 == *(_BYTE **)(a4 + 128) )
            {
              sub_439150(a4);
              v51 = *(_BYTE **)(a4 + 120);
            }
            *v51 = 22;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v53 = dword_6546CC;
          }
LABEL_68:
          if ( !v53 )
            return 0;
          if ( v53 == 0x80000000 )
          {
            v54 = *(_DWORD *)(a4 + 48);
            v53 = 1;
LABEL_72:
            *(_DWORD *)(a4 + 48) = v53 + v54;
            return 0;
          }
LABEL_70:
          if ( v53 < 0 )
          {
            v54 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v54 )
            {
              *(_DWORD *)(a4 + 44) = v54;
              *(_DWORD *)(a4 + 48) = v53 + v54;
              return 0;
            }
          }
          else
          {
            v54 = *(_DWORD *)(a4 + 48);
          }
          goto LABEL_72;
        }
LABEL_52:
        if ( v34 < 0 )
        {
          v42 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v42 )
            *(_DWORD *)(a4 + 44) = v42;
        }
        else
        {
          v42 = *(_DWORD *)(a4 + 48);
        }
        goto LABEL_54;
      }
LABEL_47:
      if ( v22 == *(_BYTE **)(a4 + 128) )
      {
        sub_439150(a4);
        v22 = *(_BYTE **)(a4 + 120);
      }
      *v22 = 16;
      v41 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v34 = dword_65460C;
      v35 = (_BYTE *)(v41 + 1);
      *(_QWORD *)(a4 + 120) = v35;
      goto LABEL_50;
    }
    if ( v103 < 0 )
      v23 = *(_DWORD *)(a2 + 28) - 1;
    else
      v23 = *(_DWORD *)(a2 + 28) - 2;
    if ( (unsigned __int64)(v22 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v22 = *(_BYTE **)(a4 + 120);
    }
    *v22 = 95;
    v24 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v24;
    *v24 = HIBYTE(v23);
    v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v25;
    *v25 = BYTE2(v23);
    v26 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v26;
    *v26 = BYTE1(v23);
    v27 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v27 + 1;
    *(_BYTE *)(v27 + 1) = v23;
    *(_DWORD *)(a4 + 3276) = 0;
    v28 = dword_654FEC;
    v22 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    v29 = dword_654FEC == 0;
    *(_QWORD *)(a4 + 120) = v22;
    if ( !v29 )
    {
      if ( v28 == 0x80000000 )
        v28 = 1 - v23;
      if ( v28 < 0 )
      {
        v30 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v30 )
        {
          *(_DWORD *)(a4 + 44) = v30;
          *(_DWORD *)(a4 + 48) = v28 + v30;
          goto LABEL_33;
        }
      }
      else
      {
        v30 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v28 + v30;
    }
LABEL_33:
    v21 = v104;
    goto LABEL_34;
  }
  return result;
}

