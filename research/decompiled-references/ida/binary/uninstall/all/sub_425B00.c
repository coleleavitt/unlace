__int64 __fastcall sub_425B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // ebx
  _DWORD *v7; // rbp
  int v8; // r13d
  bool v9; // cc
  int v10; // r13d
  __int64 v11; // rdi
  int *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  bool i; // cc
  _DWORD *v16; // rax
  int v17; // edx
  __int64 v18; // rax
  int v19; // eax
  int v20; // r13d
  int v21; // ebx
  int v22; // r13d
  int v23; // r14d
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  _BYTE *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rsi
  int v31; // edx
  _BYTE *v32; // rsi
  int v33; // eax
  int v34; // edx
  int v35; // eax
  _BYTE *v36; // rsi
  _BYTE *v37; // rsi
  _BYTE *v38; // rsi
  _BYTE *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rsi
  _BYTE *v42; // rsi
  _BYTE *v43; // rsi
  _BYTE *v44; // rsi
  _BYTE *v45; // rsi
  __int64 v46; // rax
  int v47; // edx
  __int64 v48; // rdi
  bool v49; // zf
  _BYTE *v50; // rsi
  int v51; // eax
  _BYTE *v52; // rsi
  _BYTE *v53; // rsi
  _BYTE *v54; // rsi
  _BYTE *v55; // rsi
  int v56; // edx
  int v57; // eax
  __int64 v58; // rsi
  __int64 v59; // rax
  int v60; // edx
  int v61; // eax
  __int64 v62; // rdx
  _BYTE *v63; // rsi
  __int64 v64; // rdx
  int v65; // edx
  __int64 v66; // rcx
  _BYTE *v67; // rsi
  int v68; // eax
  int v69; // r13d
  int v70; // ebx
  _BYTE *v71; // rsi
  __int64 v72; // rcx
  _BYTE *v73; // rsi
  _BYTE *v74; // rsi
  __int64 v75; // rsi
  int v76; // edx
  __int64 v77; // rsi
  int v78; // eax
  int v79; // ebx
  _BYTE *v80; // rcx
  int v81; // ebx
  _BYTE *v82; // rsi
  _BYTE *v83; // rsi
  int v84; // eax
  int v85; // eax
  _BYTE *v86; // rsi
  _BYTE *v87; // rsi
  _BYTE *v88; // rsi
  __int64 v89; // rdx
  _BYTE *v90; // rsi
  _BYTE *v91; // rsi
  __int64 v92; // rsi
  int v93; // eax
  __int64 v94; // [rsp+0h] [rbp-B8h]
  _DWORD *v95; // [rsp+8h] [rbp-B0h]
  int v96; // [rsp+14h] [rbp-A4h]
  __int64 v97; // [rsp+18h] [rbp-A0h]
  int *v98; // [rsp+20h] [rbp-98h]
  int v99; // [rsp+28h] [rbp-90h]
  unsigned int v100; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v101; // [rsp+30h] [rbp-88h]
  int v102; // [rsp+34h] [rbp-84h]
  int v103; // [rsp+38h] [rbp-80h]
  int v104; // [rsp+3Ch] [rbp-7Ch]
  _DWORD *v105; // [rsp+40h] [rbp-78h]
  int *v106; // [rsp+48h] [rbp-70h]
  int v108; // [rsp+5Ch] [rbp-5Ch] BYREF
  __int64 v109; // [rsp+60h] [rbp-58h] BYREF
  int v110; // [rsp+6Ch] [rbp-4Ch] BYREF
  _BYTE v111[4]; // [rsp+70h] [rbp-48h] BYREF
  int v112; // [rsp+74h] [rbp-44h]

  v100 = 0;
  v99 = *(_DWORD *)(a4 + 48);
  result = 1;
  v97 = *(_QWORD *)(a4 + 3264);
  v96 = *(_DWORD *)(v97 + 28) - 1;
  if ( *(_QWORD *)(a4 + 24) )
  {
    v6 = *(_DWORD *)(a2 + 28);
    v103 = v6;
    if ( v6 <= 3 || (v6 & 1) != 0 )
      return 1;
    v7 = *(_DWORD **)(a2 + 32);
    v8 = 0;
    v9 = v6 - 1 <= 0;
    while ( !v9 )
    {
      v9 = v6 - 1 <= ++v8;
      v7 += 6 * v7[5] + 6;
    }
    v105 = v7;
    result = 1;
    if ( *v7 == 2 )
    {
      v10 = 0;
      v11 = (unsigned int)(8 * ((v6 - 2) / 2) + 24);
      v102 = (v6 - 2) / 2;
      v12 = (int *)sub_40FB00(v11);
      *v12 = 0;
      v106 = v12;
      v98 = (int *)sub_47B0B0(v11, a2, v13);
      v14 = *(_QWORD *)(a2 + 32);
      for ( i = v6 - 1 <= 0; !i; i = v6 - 1 <= v10 )
      {
        if ( v10 % 2 == 1 )
        {
          if ( !(unsigned int)sub_439010(v14, v98) || (unsigned int)sub_46FB10(0, v98, &v110) || !v110 )
            goto LABEL_110;
          v16 = (_DWORD *)sub_40FB00(4 * v110 + 8);
          v17 = v110;
          v101 = 0;
          v95 = v16;
          *v16 = v110;
          ++*v106;
          *(_QWORD *)&v106[2 * (v10 / 2) + 4] = v16;
          if ( v17 > 0 )
          {
            while ( 1 )
            {
              sub_46FB70(0, v98, v101, &v109);
              v18 = sub_47ACD0(v109, &v108);
              v19 = sub_41FD80(v18, v108, a4);
              v95[v101 + 1] = v19;
              if ( v19 < 0 )
                break;
              if ( (int)++v101 >= v110 )
                goto LABEL_18;
            }
LABEL_110:
            v100 = 1;
            sub_425AB0(v106);
LABEL_97:
            if ( !v98 )
              return v100;
            v85 = *v98 - 1;
            v49 = *v98 == 1;
            *v98 = v85;
            if ( v85 >= 0 && !v49 )
              return v100;
            sub_47B120(v98);
            return v100;
          }
LABEL_18:
          sub_48E1A0(v98, 0);
        }
        ++v10;
        v14 += 24LL * *(int *)(v14 + 20) + 24;
      }
      v20 = 1;
      v21 = sub_439880(nullptr);
      v106[1] = v21;
      while ( v20 < v102 )
      {
        ++v20;
        sub_439880(nullptr);
      }
      v22 = 0;
      v106[2] = sub_439880(nullptr);
      v23 = sub_43C390(v106, &off_6543A0, a4);
      v104 = sub_43C240(0, a4);
      v24 = *(_QWORD *)(a2 + 32);
      if ( v103 - 1 > 0 )
      {
        v94 = 24LL * v96;
        while ( v22 <= 0 || (v22 & 1) != 0 )
        {
LABEL_25:
          ++v22;
          v24 += 24LL * *(int *)(v24 + 20) + 24;
          if ( v103 - 1 <= v22 )
            goto LABEL_50;
        }
        v25 = *(_QWORD *)(v97 + 16);
        *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v94 + v25 + 8) + 4LL * v22);
        v26 = *(_QWORD *)(v94 + v25 + 16);
        v27 = *(unsigned int *)(v24 + 20);
        *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v26 + 8LL * v22);
        sub_4399D0(a1, v24 + 24, v27, a4);
        if ( v21 > 255 )
        {
          v36 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v36 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v36 = *(_BYTE **)(a4 + 120);
          }
          *v36 = 18;
          v37 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v37;
          *v37 = HIBYTE(v21);
          v38 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v38;
          *v38 = BYTE2(v21);
          v39 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v39;
          *v39 = BYTE1(v21);
          v40 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v40 + 1;
          *(_BYTE *)(v40 + 1) = v21;
          v41 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v31 = dword_65464C;
          v32 = (_BYTE *)(v41 + 1);
          *(_QWORD *)(a4 + 120) = v32;
        }
        else
        {
          v28 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v28 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v28 = *(_BYTE **)(a4 + 120);
          }
          *v28 = 17;
          v29 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v29 + 1;
          *(_BYTE *)(v29 + 1) = v21;
          v30 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v31 = dword_65462C;
          v32 = (_BYTE *)(v30 + 1);
          *(_QWORD *)(a4 + 120) = v32;
        }
        if ( v31 )
        {
          if ( v31 == 0x80000000 )
            v31 = 1 - v21;
          if ( v31 < 0 )
          {
            v33 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v33 )
              *(_DWORD *)(a4 + 44) = v33;
          }
          else
          {
            v33 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v31 + v33;
        }
        if ( v32 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v32 = *(_BYTE **)(a4 + 120);
        }
        *v32 = 3;
        *(_DWORD *)(a4 + 3276) = 0;
        v34 = dword_65446C;
        ++*(_QWORD *)(a4 + 120);
        if ( !v34 )
        {
LABEL_44:
          ++v21;
          goto LABEL_25;
        }
        if ( v34 == 0x80000000 )
        {
          v34 = 1;
        }
        else if ( v34 < 0 )
        {
          v35 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v35 )
            *(_DWORD *)(a4 + 44) = v35;
          goto LABEL_43;
        }
        v35 = *(_DWORD *)(a4 + 48);
LABEL_43:
        *(_DWORD *)(a4 + 48) = v34 + v35;
        goto LABEL_44;
      }
LABEL_50:
      v42 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v42 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v42 = *(_BYTE **)(a4 + 120);
      }
      *v42 = 67;
      v43 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v43;
      *v43 = HIBYTE(v23);
      v44 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v44;
      *v44 = BYTE2(v23);
      v45 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v45;
      *v45 = BYTE1(v23);
      v46 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v46 + 1;
      *(_BYTE *)(v46 + 1) = v23;
      *(_DWORD *)(a4 + 3276) = 0;
      v47 = dword_654C6C;
      v48 = *(_QWORD *)(a4 + 120) + 1LL;
      v49 = dword_654C6C == 0;
      v50 = (_BYTE *)v48;
      *(_QWORD *)(a4 + 120) = v48;
      if ( !v49 )
      {
        if ( v47 == 0x80000000 )
          v47 = 1 - v23;
        if ( v47 < 0 )
        {
          v51 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v51 )
            *(_DWORD *)(a4 + 44) = v51;
        }
        else
        {
          v51 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v47 + v51;
      }
      *(_DWORD *)(*(_QWORD *)(a4 + 168) + 28LL * v104 + 20) = v48 - *(_DWORD *)(a4 + 112);
      if ( (unsigned __int64)(v48 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v50 = *(_BYTE **)(a4 + 120);
      }
      *v50 = 68;
      v52 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v52;
      *v52 = HIBYTE(v23);
      v53 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v53;
      *v53 = BYTE2(v23);
      v54 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v54;
      *v54 = BYTE1(v23);
      v55 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v55;
      *v55 = v23;
      *(_DWORD *)(a4 + 3276) = 0;
      v56 = dword_654C8C;
      ++*(_QWORD *)(a4 + 120);
      if ( v56 )
      {
        if ( v56 == 0x80000000 )
          v56 = 1 - v23;
        if ( v56 < 0 )
        {
          v57 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v57 )
            *(_DWORD *)(a4 + 44) = v57;
        }
        else
        {
          v57 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v56 + v57;
      }
      sub_43C580(a4, 2, v111);
      v58 = *(_QWORD *)(v97 + 16);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(24LL * v96 + v58 + 8) + 4LL * v103 - 4);
      v59 = *(_QWORD *)(*(_QWORD *)(24LL * v96 + v58 + 16) + 8LL * v103 - 8);
      v60 = *(_DWORD *)(a4 + 36) + 1;
      *(_DWORD *)(a4 + 36) = v60;
      *(_QWORD *)(a4 + 3288) = v59;
      v61 = *(_DWORD *)(a4 + 40);
      if ( v61 < v60 )
        v61 = v60;
      v62 = *(_QWORD *)(a4 + 168);
      *(_DWORD *)(a4 + 40) = v61;
      *(_DWORD *)(28LL * v104 + v62 + 8) = *(_QWORD *)(a4 + 120) - *(_DWORD *)(a4 + 112);
      sub_43BFD0(a1, v105 + 6, (unsigned int)v105[5], a4);
      v63 = *(_BYTE **)(a4 + 120);
      v64 = *(_QWORD *)(a4 + 168);
      --*(_DWORD *)(a4 + 36);
      *(_DWORD *)(28LL * v104 + v64 + 12) = (_DWORD)v63 - *(_DWORD *)(a4 + 112) - *(_DWORD *)(28LL * v104 + v64 + 8);
      v49 = v63 == *(_BYTE **)(a4 + 128);
      *(_DWORD *)(a4 + 48) = v99 + 1;
      if ( v49 )
      {
        sub_439150(a4);
        v63 = *(_BYTE **)(a4 + 120);
      }
      *v63 = 3;
      *(_DWORD *)(a4 + 3276) = 0;
      v65 = dword_65446C;
      v66 = *(_QWORD *)(a4 + 120) + 1LL;
      v49 = dword_65446C == 0;
      v67 = (_BYTE *)v66;
      *(_QWORD *)(a4 + 120) = v66;
      if ( v49 )
      {
LABEL_75:
        v69 = v66 - *(_DWORD *)(a4 + 112);
        v70 = v69 - *(_DWORD *)(*(_QWORD *)(a4 + 168) + 28LL * v104 + 20);
        if ( v70 <= 120 )
        {
          if ( (unsigned __int64)(v66 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v67 = *(_BYTE **)(a4 + 120);
          }
          *v67 = 34;
          v91 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v91;
          *v91 = -(char)v70;
          v92 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v76 = dword_65484C;
          v77 = v92 + 1;
          *(_QWORD *)(a4 + 120) = v77;
        }
        else
        {
          if ( (unsigned __int64)(v66 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v67 = *(_BYTE **)(a4 + 120);
          }
          *v67 = 35;
          v71 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v71;
          *v71 = (unsigned int)-v70 >> 24;
          v72 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v72 + 1;
          *(_BYTE *)(v72 + 1) = (unsigned int)-v70 >> 16;
          v73 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v73;
          *v73 = (unsigned __int16)-(__int16)v70 >> 8;
          v74 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v74;
          *v74 = -(char)v70;
          v75 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v76 = dword_65486C;
          v77 = v75 + 1;
          *(_QWORD *)(a4 + 120) = v77;
        }
        if ( v76 )
        {
          if ( v76 == 0x80000000 )
            v76 = v70 + 1;
          if ( v76 < 0 )
          {
            v78 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v78 )
              *(_DWORD *)(a4 + 44) = v78;
          }
          else
          {
            v78 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v76 + v78;
        }
        if ( (unsigned int)sub_43C6D0(a4, v111, (unsigned int)(v77 - *(_DWORD *)(a4 + 112) - v112), 127) )
        {
          v79 = v70 + 3;
          v80 = (_BYTE *)(*(_QWORD *)(a4 + 112) + v69 + 3);
          *(_DWORD *)(*(_QWORD *)(a4 + 168) + 28LL * v104 + 8) += 3;
          if ( v79 <= 120 )
          {
            *v80 = 34;
            v80[1] = -(char)v79;
          }
          else
          {
            *v80 = 35;
            v80[1] = (unsigned int)-v79 >> 24;
            v80[3] = (unsigned __int16)-(__int16)v79 >> 8;
            v80[2] = (unsigned int)-v79 >> 16;
            v80[4] = -(char)v79;
          }
        }
        *(_DWORD *)(*(_QWORD *)(a4 + 168) + 28LL * v104 + 16) = *(_QWORD *)(a4 + 120) - *(_DWORD *)(a4 + 112);
        *(_DWORD *)(a4 + 48) = v99;
        v81 = sub_471010(a4, "", 0, 0);
        if ( v81 > 255 )
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
          *v87 = HIBYTE(v81);
          v88 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v88;
          *v88 = BYTE2(v81);
          v89 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v89 + 1;
          *(_BYTE *)(v89 + 1) = BYTE1(v81);
          v90 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v90;
          *v90 = v81;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v84 = dword_65444C;
        }
        else
        {
          v82 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v82 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v82 = *(_BYTE **)(a4 + 120);
          }
          *v82 = 1;
          v83 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v83;
          *v83 = v81;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v84 = dword_65442C;
        }
        if ( v84 )
        {
          if ( v84 == 0x80000000 )
            v84 = 1 - v81;
          if ( v84 < 0 )
          {
            v93 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v93 )
              *(_DWORD *)(a4 + 44) = v93;
          }
        }
        *(_DWORD *)(a4 + 48) = v99 + 1;
        goto LABEL_97;
      }
      if ( v65 == 0x80000000 )
      {
        v65 = 1;
      }
      else if ( v65 < 0 )
      {
        v68 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v68 )
          *(_DWORD *)(a4 + 44) = v68;
        goto LABEL_74;
      }
      v68 = *(_DWORD *)(a4 + 48);
LABEL_74:
      *(_DWORD *)(a4 + 48) = v65 + v68;
      goto LABEL_75;
    }
  }
  return result;
}

