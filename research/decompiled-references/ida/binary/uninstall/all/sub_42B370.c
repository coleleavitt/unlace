__int64 __fastcall sub_42B370(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  _QWORD *v14; // rbp
  _DWORD *v15; // rax
  __int64 v16; // rdi
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // esi
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int *v33; // rdi
  int v34; // eax
  __int64 v36; // rsi
  __int64 v37; // rbp
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  _BYTE *v48; // rcx
  int v49; // eax
  int v50; // edx
  char *v51; // rsi
  __int64 v52; // rdx
  int v53; // ebx
  _BYTE *v54; // rcx
  _BYTE *v55; // rcx
  int v56; // eax
  int v57; // edx
  _BYTE *v58; // rcx
  _BYTE *v59; // rcx
  _BYTE *v60; // rcx
  __int64 v61; // rdx
  _BYTE *v62; // rcx
  int *v63; // rdi
  int v64; // eax
  _BYTE *v65; // rcx
  int v66; // eax
  int v67; // edx
  int v68; // ebx
  _BYTE *v69; // rcx
  _BYTE *v70; // rcx
  __int64 v71; // rcx
  int v72; // eax
  int v73; // edx
  int v74; // ebx
  _BYTE *v75; // rcx
  _BYTE *v76; // rcx
  int v77; // eax
  int v78; // edx
  _BYTE *v79; // rcx
  _BYTE *v80; // rcx
  _BYTE *v81; // rcx
  __int64 v82; // rdx
  _BYTE *v83; // rcx
  _BYTE *v84; // rcx
  _BYTE *v85; // rcx
  _BYTE *v86; // rcx
  __int64 v87; // rdx
  _BYTE *v88; // rcx
  __int64 v89; // rcx
  int v90; // [rsp+4h] [rbp-94h]
  __int64 v91; // [rsp+8h] [rbp-90h]
  int v92; // [rsp+14h] [rbp-84h]
  _BOOL4 v93; // [rsp+18h] [rbp-80h]
  int v94; // [rsp+1Ch] [rbp-7Ch]
  int v96; // [rsp+2Ch] [rbp-6Ch] BYREF
  int *v97; // [rsp+30h] [rbp-68h] BYREF
  int v98; // [rsp+38h] [rbp-60h] BYREF
  int v99; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v100; // [rsp+40h] [rbp-58h]
  __int64 v101; // [rsp+48h] [rbp-50h]
  __int64 v102; // [rsp+50h] [rbp-48h]
  int v103; // [rsp+58h] [rbp-40h]

  v5 = *(_DWORD *)(a2 + 28);
  v93 = (v5 & 1) == 0;
  v92 = v5 - v93 - 1;
  v6 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL);
  v7 = v6 + 24;
  v91 = *(_QWORD *)(a4 + 3264);
  v90 = *(_DWORD *)(v91 + 28) - 1;
  if ( v5 == 4
    && *(_DWORD *)(v6 + 24) == 2
    && *(_DWORD *)(v6 + 64) == 8
    && !memcmp(*(const void **)(v6 + 56), "-options", 8u) )
  {
    v36 = v6 + 24 + 24LL * *(int *)(v6 + 44);
    v37 = v36 + 24 + 24LL * *(int *)(v36 + 44) + 24;
    if ( *(_DWORD *)(v36 + 24) == 2 )
    {
      v74 = sub_471010(a4, *(_QWORD *)(v36 + 56), *(unsigned int *)(v36 + 64), 0);
      if ( v74 > 255 )
      {
        v79 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v79 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v79 = *(_BYTE **)(a4 + 120);
        }
        *v79 = 2;
        v80 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v80;
        *v80 = HIBYTE(v74);
        v81 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v81;
        *v81 = BYTE2(v74);
        v82 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v82 + 1;
        *(_BYTE *)(v82 + 1) = BYTE1(v74);
        v83 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v83;
        *v83 = v74;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v77 = dword_65444C;
      }
      else
      {
        v75 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v75 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v75 = *(_BYTE **)(a4 + 120);
        }
        *v75 = 1;
        v76 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v76;
        *v76 = v74;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v77 = dword_65442C;
      }
      if ( v77 )
      {
        if ( v77 == 0x80000000 )
          v77 = 1 - v74;
        if ( v77 < 0 )
        {
          v78 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v78 )
            *(_DWORD *)(a4 + 44) = v78;
        }
        else
        {
          v78 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v77 + v78;
      }
    }
    else
    {
      v38 = *(_QWORD *)(v91 + 16);
      v39 = 24LL * v90;
      v40 = *(_QWORD *)(v39 + v38 + 8);
      v41 = *(_QWORD *)(*(_QWORD *)(v39 + v38 + 16) + 16LL);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v40 + 8);
      v42 = *(unsigned int *)(v36 + 44);
      *(_QWORD *)(a4 + 3288) = v41;
      sub_4399D0(a1, v36 + 48, v42, a4);
    }
    if ( *(_DWORD *)v37 == 2 )
    {
      v68 = sub_471010(a4, *(_QWORD *)(v37 + 32), *(unsigned int *)(v37 + 40), 0);
      if ( v68 > 255 )
      {
        v84 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v84 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v84 = *(_BYTE **)(a4 + 120);
        }
        *v84 = 2;
        v85 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v85;
        *v85 = HIBYTE(v68);
        v86 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v86;
        *v86 = BYTE2(v68);
        v87 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v87 + 1;
        *(_BYTE *)(v87 + 1) = BYTE1(v68);
        v88 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v88;
        *v88 = v68;
        v89 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v72 = dword_65444C;
        v48 = (_BYTE *)(v89 + 1);
        *(_QWORD *)(a4 + 120) = v48;
      }
      else
      {
        v69 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v69 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v69 = *(_BYTE **)(a4 + 120);
        }
        *v69 = 1;
        v70 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v70;
        *v70 = v68;
        v71 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v72 = dword_65442C;
        v48 = (_BYTE *)(v71 + 1);
        *(_QWORD *)(a4 + 120) = v48;
      }
      if ( v72 )
      {
        if ( v72 == 0x80000000 )
          v72 = 1 - v68;
        if ( v72 < 0 )
        {
          v73 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v73 )
            *(_DWORD *)(a4 + 44) = v73;
        }
        else
        {
          v73 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v72 + v73;
      }
    }
    else
    {
      v43 = *(_QWORD *)(v91 + 16);
      v44 = 24LL * v90;
      v45 = *(_QWORD *)(v44 + v43 + 8);
      v46 = *(_QWORD *)(*(_QWORD *)(v44 + v43 + 16) + 24LL);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v45 + 12);
      v47 = *(unsigned int *)(v37 + 20);
      *(_QWORD *)(a4 + 3288) = v46;
      sub_4399D0(a1, v37 + 24, v47, a4);
      v48 = *(_BYTE **)(a4 + 120);
    }
    if ( v48 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v48 = *(_BYTE **)(a4 + 120);
    }
    *v48 = 109;
    *(_DWORD *)(a4 + 3276) = 0;
    v49 = dword_6551AC;
    ++*(_QWORD *)(a4 + 120);
    if ( !v49 )
      return 0;
    if ( v49 == 0x80000000 )
    {
      v49 = 1;
    }
    else if ( v49 < 0 )
    {
      v50 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v50 )
        *(_DWORD *)(a4 + 44) = v50;
      goto LABEL_45;
    }
    v50 = *(_DWORD *)(a4 + 48);
LABEL_45:
    *(_DWORD *)(a4 + 48) = v49 + v50;
    return 0;
  }
  v8 = a1;
  v9 = 0;
  v10 = 8LL * v92;
  v11 = sub_4495F0(a1, v10);
  v13 = v11;
  if ( v92 <= 0 )
  {
LABEL_6:
    v94 = sub_48C160(a1, (unsigned int)v9, v13, &v97, &v98, &v99);
  }
  else
  {
    v14 = (_QWORD *)v11;
    while ( 1 )
    {
      v15 = (_DWORD *)sub_47B0B0(v8, v10, v12);
      ++*v15;
      v10 = (__int64)v15;
      *v14 = v15;
      v8 = v7;
      if ( !(unsigned int)sub_439010(v7, v15) )
        break;
      ++v9;
      ++v14;
      v7 += 24LL * *(int *)(v7 + 20) + 24;
      if ( v9 >= v92 )
        goto LABEL_6;
    }
    ++v9;
    v94 = 1;
  }
LABEL_7:
  while ( --v9 >= 0 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(v13 + 8LL * v9);
      v17 = *(_DWORD *)v16 - 1;
      v18 = *(_DWORD *)v16 == 1;
      *(_DWORD *)v16 = v17;
      if ( v17 >= 0 && !v18 )
        break;
      v19 = *(_QWORD *)(v16 + 24);
      if ( v19 && *(_QWORD *)(v19 + 8) )
      {
        sub_47B120(v16);
        goto LABEL_7;
      }
      v20 = *(__int64 **)(v16 + 8);
      if ( v20 && v20 != off_656088 )
        Tcl_Free((__int64)v20);
      v21 = *(_QWORD *)(v13 + 8LL * v9);
      *(_DWORD *)(v21 + 16) = -1;
      sub_496830(v21);
      if ( --v9 < 0 )
        goto LABEL_15;
    }
  }
LABEL_15:
  sub_449510(a1, v13);
  if ( v94 != 1 )
  {
    if ( (v5 & 1) != 0 )
    {
      v51 = "";
      v52 = 0;
    }
    else
    {
      if ( *(_DWORD *)v7 != 2 )
      {
        v22 = *(_QWORD *)(v91 + 16);
        v23 = 24LL * v90;
        v24 = *(_QWORD *)(v23 + v22 + 8);
        v25 = *(_QWORD *)(*(_QWORD *)(v23 + v22 + 16) + 8LL * v5 - 8);
        *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v24 + 4LL * v5 - 4);
        v26 = *(unsigned int *)(v7 + 20);
        *(_QWORD *)(a4 + 3288) = v25;
        sub_4399D0(a1, v7 + 24, v26, a4);
        goto LABEL_19;
      }
      v52 = *(unsigned int *)(v7 + 40);
      v51 = *(char **)(v7 + 32);
    }
    v53 = sub_471010(a4, v51, v52, 0);
    if ( v53 > 255 )
    {
      v58 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v58 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v58 = *(_BYTE **)(a4 + 120);
      }
      *v58 = 2;
      v59 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v59;
      *v59 = HIBYTE(v53);
      v60 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v60;
      *v60 = BYTE2(v53);
      v61 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v61 + 1;
      *(_BYTE *)(v61 + 1) = BYTE1(v53);
      v62 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v62;
      *v62 = v53;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v56 = dword_65444C;
    }
    else
    {
      v54 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v54 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v54 = *(_BYTE **)(a4 + 120);
      }
      *v54 = 1;
      v55 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v55;
      *v55 = v53;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v56 = dword_65442C;
    }
    if ( v56 )
    {
      if ( v56 == 0x80000000 )
        v56 = 1 - v53;
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
LABEL_19:
    if ( v5 - v93 != 1 || !*(_QWORD *)(a4 + 24) )
      goto LABEL_26;
    v27 = *(_DWORD *)(a4 + 176) - 1;
    if ( v27 >= 0 )
    {
      v28 = *(_QWORD *)(a4 + 168);
      v29 = 28LL * v27;
      while ( 1 )
      {
        v100 = *(_QWORD *)(v29 + v28);
        v101 = *(_QWORD *)(v29 + v28 + 8);
        v102 = *(_QWORD *)(v29 + v28 + 16);
        v30 = *(_DWORD *)(v29 + v28 + 24);
        v103 = v30;
        if ( (_DWORD)v100 == 1 && v30 == -1 )
          break;
        v29 -= 28;
        if ( --v27 < 0 )
          goto LABEL_69;
      }
LABEL_26:
      sub_4408B0(0, v97, &v96);
      if ( v96 )
      {
        v31 = v99;
      }
      else
      {
        v31 = v99;
        if ( !v99 )
        {
          v32 = v98;
          if ( !v98 )
          {
            v33 = v97;
            v34 = *v97 - 1;
            v18 = *v97 == 1;
            *v97 = v34;
            if ( v34 < 0 || v18 )
              sub_47B120(v33);
            return 0;
          }
          goto LABEL_50;
        }
      }
      v32 = v98;
LABEL_50:
      sub_42B0C0(a4, 0x62u, v32, v31, (__int64)v97);
      return 0;
    }
LABEL_69:
    v63 = v97;
    v64 = *v97 - 1;
    v18 = *v97 == 1;
    *v97 = v64;
    if ( v64 < 0 || v18 )
      sub_47B120(v63);
    v65 = *(_BYTE **)(a4 + 120);
    if ( v65 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v65 = *(_BYTE **)(a4 + 120);
    }
    *v65 = 0;
    *(_DWORD *)(a4 + 3276) = 0;
    v66 = dword_65440C;
    ++*(_QWORD *)(a4 + 120);
    if ( !v66 )
      return 0;
    if ( v66 == 0x80000000 )
    {
      v66 = 1;
    }
    else if ( v66 < 0 )
    {
      v67 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v67 )
        *(_DWORD *)(a4 + 44) = v67;
      goto LABEL_77;
    }
    v67 = *(_DWORD *)(a4 + 48);
LABEL_77:
    *(_DWORD *)(a4 + 48) = v67 + v66;
    return 0;
  }
  sub_48B350(a1);
  return 1;
}

