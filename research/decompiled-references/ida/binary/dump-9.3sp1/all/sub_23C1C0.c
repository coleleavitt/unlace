__int64 __fastcall sub_23C1C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rbp
  int v13; // edx
  bool v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  char v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  _QWORD *v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  int v27; // edx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rsi
  int v33; // edx
  _QWORD *v34; // rcx
  _QWORD *i; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // r14d
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rsi
  char tinfo_property; // al
  __int64 v45; // rdi
  __int64 v46; // rax
  unsigned __int64 v47; // r10
  int v48; // eax
  __int64 v49; // r9
  unsigned __int64 v50; // r8
  bool v51; // si
  __int64 v52; // rax
  _QWORD *v53; // rcx
  __int64 v54; // rsi
  _QWORD *v55; // r10
  _QWORD *v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // rsi
  _QWORD *v59; // rdx
  __int64 v60; // rcx
  unsigned __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  int v65; // edx
  int v66; // r12d
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rdi
  signed int v71; // ecx
  int v72; // eax
  __int64 *v73; // rbp
  int v74; // eax
  int v75; // ecx
  __int64 v76; // rdi
  __int64 v77; // rbp
  _QWORD *v78; // r14
  int v79; // edx
  __int64 v80; // rbp
  int v81; // r15d
  __int64 j; // rax
  __int64 v83; // rdi
  __int64 v84; // rbp
  __int64 v85; // r14
  __int64 *v86; // rbp
  __int64 v87; // r13
  char *v88; // rdx
  char *v89; // rax
  __int64 v90; // rdi
  __int64 v91; // r15
  int v92; // r13d
  int v93; // r15d
  signed __int64 v94; // rsi
  signed __int64 v95; // rax
  unsigned int v96; // [rsp+Ch] [rbp-6Ch]
  __int64 v97; // [rsp+10h] [rbp-68h] BYREF
  char v98; // [rsp+18h] [rbp-60h]
  char *v99; // [rsp+20h] [rbp-58h] BYREF
  __int128 v100; // [rsp+28h] [rbp-50h]
  unsigned __int64 v101; // [rsp+38h] [rbp-40h]

  v101 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 112) || *(_DWORD *)(a1 + 192) == -1 )
    return 1;
  if ( (unsigned __int8)sub_2329E0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 176), *(_DWORD *)(a1 + 196)) )
  {
    if ( (**(_DWORD **)(a1 + 8) & 0x8000000) != 0 )
    {
      *(_DWORD *)(a1 + 136) |= 4u;
      return 0xFFFFFFFFLL;
    }
    if ( !under_debugger )
      sub_383060(52302);
LABEL_245:
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 176);
  v4 = *(_QWORD *)(a1 + 128);
  v5 = *(int *)(a1 + 196);
  v6 = v3 + v5;
  if ( (_DWORD)v5 == -1 )
    v6 = *(_QWORD *)(a1 + 176);
  if ( v4 >= v6 )
  {
    v14 = sub_226FD0(*(_QWORD *)(a1 + 8), v3, v5);
    if ( v14 )
      goto LABEL_20;
    v26 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(a1 + 120) == v26 )
    {
LABEL_59:
      v13 = *(_DWORD *)(a1 + 200);
      if ( (v13 & 4) == 0 )
      {
        if ( *(_QWORD *)(a1 + 184) != -1 )
        {
          v12 = *(_QWORD *)(a1 + 8);
          goto LABEL_62;
        }
LABEL_239:
        if ( !under_debugger )
          sub_383060(52278);
        goto LABEL_245;
      }
      v12 = *(_QWORD *)(a1 + 8);
LABEL_145:
      v66 = 0;
      v67 = 0;
      if ( *(_QWORD *)(v12 + 440) )
      {
        do
        {
          v68 = *(_QWORD *)(v12 + 432) + 104 * v67;
          if ( *(_QWORD *)(v68 + 16) == *(_QWORD *)(a1 + 184) )
          {
            sub_1C34E0(v68, &v97, (signed __int64 *)&v99, *(_DWORD *)(v68 + 88));
            if ( *(_QWORD *)(a1 + 176) == v97 && &v99[-v97] == (char *)*(int *)(a1 + 196) )
            {
              sub_23A200(a1, v66, 1);
              return 1;
            }
            v12 = *(_QWORD *)(a1 + 8);
          }
          v67 = ++v66;
        }
        while ( (unsigned __int64)v66 < *(_QWORD *)(v12 + 440) );
        v13 = *(_DWORD *)(a1 + 200);
      }
      if ( (v13 & 0x80) != 0 )
        goto LABEL_205;
      if ( *(_QWORD *)(a1 + 184) != -1 )
      {
        if ( v14 )
        {
          v10 = *(_DWORD *)(a1 + 296);
          v11 = *(_DWORD *)(a1 + 300);
          goto LABEL_27;
        }
LABEL_62:
        v30 = *(_QWORD *)(a1 + 128);
        v31 = *(_QWORD *)(a1 + 112);
        if ( v31 == *(_QWORD *)(a1 + 120) )
        {
          v33 = v30 + 1;
          v32 = -1;
        }
        else
        {
          v32 = *(_QWORD *)(v31 + 56);
          v33 = v30 - *(_DWORD *)(v31 + 56);
        }
        v14 = sub_226FD0(v12, v32, v33);
        if ( v14 )
        {
          v10 = *(_DWORD *)(a1 + 296);
          v11 = *(_DWORD *)(a1 + 300);
          v14 = 0;
          v12 = *(_QWORD *)(a1 + 8);
        }
        else
        {
          v62 = *(_QWORD *)(a1 + 112);
          if ( v62 == *(_QWORD *)(a1 + 120) )
          {
            *(_QWORD *)(a1 + 176) = -1;
            v63 = *(_QWORD *)(a1 + 128);
            LODWORD(v64) = -1;
          }
          else
          {
            *(_QWORD *)(a1 + 176) = *(_QWORD *)(v62 + 56);
            v63 = *(_QWORD *)(a1 + 128);
            v64 = *(_QWORD *)(v62 + 56);
          }
          v65 = v63 - v64;
          v10 = *(_DWORD *)(a1 + 296);
          v11 = *(_DWORD *)(a1 + 300);
          *(_DWORD *)(a1 + 196) = v65;
          v12 = *(_QWORD *)(a1 + 8);
        }
        goto LABEL_27;
      }
      goto LABEL_239;
    }
    while ( 1 )
    {
      v27 = *(_DWORD *)(v26 + 80);
      if ( (v27 & 1) != 0 )
        break;
      if ( (v27 & 2) == 0 )
        goto LABEL_120;
      if ( *(_QWORD *)(v26 + 64) != -1 )
      {
        tinfo_property = get_tinfo_property();
        v27 = *(_DWORD *)(v26 + 80);
        if ( (tinfo_property & 0xF) == 0xB )
          break;
        if ( (v27 & 2) == 0 )
        {
LABEL_120:
          v28 = *(_QWORD *)(a1 + 120);
          if ( (v27 & 0x20) != 0 )
          {
LABEL_121:
            v50 = *(_QWORD *)(v26 + 56);
            v45 = *(_QWORD *)(a1 + 112);
LABEL_110:
            if ( v28 == v45 )
              v52 = -1;
            else
              v52 = *(_QWORD *)(v45 + 56);
            if ( v52 != v50 )
              goto LABEL_55;
          }
LABEL_54:
          if ( (v27 & 0x1018) != 0 )
            goto LABEL_94;
          goto LABEL_55;
        }
      }
      v28 = *(_QWORD *)(a1 + 120);
      if ( (v27 & 0x1018) != 0 )
      {
        if ( (v27 & 0x20) == 0 )
        {
LABEL_94:
          v41 = *(int *)(v26 + 76);
          if ( (_DWORD)v41 )
          {
            v42 = *(_QWORD *)(a1 + 112);
            v43 = v42 == v28 ? -1LL : *(_QWORD *)(v42 + 56);
            if ( v41 != *(_QWORD *)(a1 + 128) - v43 )
              goto LABEL_20;
          }
          goto LABEL_55;
        }
        goto LABEL_121;
      }
      v45 = *(_QWORD *)(a1 + 112);
      v46 = *(_QWORD *)(a1 + 128);
      if ( v45 == v28 )
      {
        v48 = v46 + 1;
        v47 = -1;
      }
      else
      {
        v47 = *(_QWORD *)(v45 + 56);
        v48 = v46 - *(_DWORD *)(v45 + 56);
      }
      v49 = *(int *)(v26 + 76);
      v50 = *(_QWORD *)(v26 + 56);
      v51 = v47 >= v50 && v49 != 0;
      if ( v48 )
      {
        if ( !v51 || v49 + v50 - 1 < v47 + v48 - 1 )
          goto LABEL_55;
      }
      else if ( !v51 || v49 + v50 - 1 < v47 )
      {
        goto LABEL_55;
      }
      if ( (v27 & 0x20) != 0 )
        goto LABEL_110;
LABEL_55:
      if ( (*(_QWORD *)v26 & 2) == 0 )
      {
        v29 = *(_QWORD *)(v26 + 16);
        if ( (*(_BYTE *)v29 & 2) != 0 )
        {
          v56 = (_QWORD *)(*(_QWORD *)v26 & 0xFFFFFFFFFFFFFFFCLL);
          v57 = *v56;
          if ( (*v56 & 2) != 0 || v56[2] != v26 )
          {
LABEL_123:
            v26 = (unsigned __int64)v56;
          }
          else
          {
            while ( 1 )
            {
              v26 = v57 & 0xFFFFFFFFFFFFFFFCLL;
              v57 = *(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v57 & 2) != 0 )
                break;
              v58 = v56;
              v56 = (_QWORD *)v26;
              if ( *(_QWORD **)(v26 + 16) != v58 )
                goto LABEL_123;
            }
          }
        }
        else
        {
          do
          {
            v26 = v29;
            v29 = *(_QWORD *)(v29 + 8);
          }
          while ( (*(_BYTE *)v29 & 2) == 0 );
        }
      }
      if ( v28 == v26 )
        goto LABEL_59;
    }
    v28 = *(_QWORD *)(a1 + 120);
    goto LABEL_54;
  }
  if ( (*(_BYTE *)(a1 + 203) & 0x20) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(a1 + 88) == v7 || (*(_BYTE *)(v7 + 83) & 0x10) == 0 )
    {
      if ( !under_debugger )
        sub_383060(52290);
      goto LABEL_245;
    }
  }
  v8 = *(_QWORD *)(a1 + 112);
  if ( v8 == *(_QWORD *)(a1 + 120) )
    LODWORD(v9) = -1;
  else
    v9 = *(_QWORD *)(v8 + 56);
  *(_DWORD *)(a1 + 196) = v4 - v9;
LABEL_20:
  v10 = *(_DWORD *)(a1 + 296);
  v11 = *(_DWORD *)(a1 + 300);
  if ( v10 != v11 && (v11 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0) )
    return 0xFFFFFFFFLL;
  v12 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v12 + 1496) + 604LL) & 0x10) == 0 )
    return 0xFFFFFFFFLL;
  v13 = *(_DWORD *)(a1 + 200);
  if ( (v13 & 4) != 0 )
  {
    v14 = 1;
    goto LABEL_145;
  }
  if ( *(_QWORD *)(a1 + 184) == -1 )
    goto LABEL_239;
  v14 = 1;
LABEL_27:
  if ( v11 == v10 || v11 == 1 && (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) == 0 )
  {
    v15 = *(_QWORD *)(a1 + 176);
    v16 = *(_QWORD *)(v12 + 144);
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 176);
    v16 = sub_18D080(v12);
  }
  v17 = 0;
  if ( v16 <= v15 )
    v17 = (*(_BYTE *)(v12 + 5) & 0x10) == 0
       || (v73 = *(__int64 **)(v12 + 944), v73[1] == -1) && !(unsigned __int8)sub_21E760(v73)
       || !v73[2]
       || v73[1] > v15;
  if ( (unsigned __int8)*(_QWORD *)(a1 + 168) )
  {
    v18 = *(_QWORD *)(a1 + 112);
    v19 = v18 == *(_QWORD *)(a1 + 120) ? -1LL : *(_QWORD *)(v18 + 56);
    if ( *(_QWORD *)(a1 + 176) != v19
      || (get_tinfo_property() & 0xF) == 0xB
      && (v84 = *(_QWORD *)(a1 + 8), v85 = *(_QWORD *)(a1 + 176), v85 >= sub_18D080(v84))
      && ((*(_BYTE *)(v84 + 5) & 0x10) == 0
       || (v86 = *(__int64 **)(v84 + 944), v86[1] == -1) && !(unsigned __int8)sub_21E760(v86)
       || !v86[2]
       || v85 < v86[1])
      || *(_DWORD *)(a1 + 196) && *(_DWORD *)(a1 + 196) != get_tinfo_size() )
    {
      clear_tinfo_t();
    }
  }
  v20 = *(_DWORD *)(a1 + 136);
  if ( (v20 & 8) == 0 )
    goto LABEL_75;
  if ( (v20 & 0x10) == 0 )
  {
    if ( !under_debugger )
      sub_383060(52500);
    goto LABEL_245;
  }
  v21 = *(_QWORD **)(a1 + 120);
  v22 = *(_QWORD **)(a1 + 112);
LABEL_39:
  while ( v22 != v21 )
  {
    if ( (v22[10] & 1) != 0 )
    {
      v23 = v22[8];
      if ( v23 != -1 )
      {
        v24 = *(_QWORD *)(a1 + 112);
        while ( v21 != (_QWORD *)v24 )
        {
          do
          {
            if ( v23 == *(_QWORD *)(v24 + 64)
              && *(_QWORD *)(v24 + 56) == *(_QWORD *)(a1 + 176)
              && (*(_BYTE *)(v24 + 80) & 0x40) != 0 )
            {
              goto LABEL_67;
            }
          }
          while ( (*(_QWORD *)v24 & 2) != 0 );
          v25 = *(_QWORD *)(v24 + 16);
          if ( (*(_BYTE *)v25 & 2) != 0 )
          {
            v53 = (_QWORD *)(*(_QWORD *)v24 & 0xFFFFFFFFFFFFFFFCLL);
            v54 = *v53;
            if ( (*v53 & 2) != 0 || v53[2] != v24 )
            {
LABEL_115:
              v24 = (unsigned __int64)v53;
            }
            else
            {
              while ( 1 )
              {
                v24 = v54 & 0xFFFFFFFFFFFFFFFCLL;
                v54 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v54 & 2) != 0 )
                  break;
                v55 = v53;
                v53 = (_QWORD *)v24;
                if ( *(_QWORD **)(v24 + 16) != v55 )
                  goto LABEL_115;
              }
            }
          }
          else
          {
            do
            {
              v24 = v25;
              v25 = *(_QWORD *)(v25 + 8);
            }
            while ( (*(_BYTE *)v25 & 2) == 0 );
          }
        }
        *(_QWORD *)(a1 + 184) = v23;
        goto LABEL_75;
      }
    }
LABEL_67:
    if ( (*v22 & 2) == 0 )
    {
      v34 = (_QWORD *)v22[2];
      if ( (*(_BYTE *)v34 & 2) != 0 )
      {
        v59 = (_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFFCLL);
        v60 = *v59;
        if ( (*v59 & 2) == 0 )
        {
          while ( v22 == (_QWORD *)v59[2] )
          {
            v22 = v59;
            v61 = v60 & 0xFFFFFFFFFFFFFFFCLL;
            v60 = *(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v60 & 2) != 0 )
            {
              v22 = (_QWORD *)v61;
              goto LABEL_39;
            }
            v59 = (_QWORD *)v61;
          }
        }
        v22 = v59;
      }
      else
      {
        for ( i = (_QWORD *)v34[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v34 = i;
        v22 = v34;
      }
    }
  }
  v80 = *(_QWORD *)(a1 + 8);
  v81 = 0;
  for ( j = 0; (unsigned __int64)v81 < *(_QWORD *)(v80 + 440); j = ++v81 )
  {
    v83 = *(_QWORD *)(v80 + 432) + 104 * j;
    if ( *(_QWORD *)(v83 + 16) == *(_QWORD *)(a1 + 184) )
    {
      sub_1C34E0(v83, &v97, (signed __int64 *)&v99, *(_DWORD *)(v83 + 88));
      if ( *(_QWORD *)(a1 + 176) == v97 && &v99[-v97] == (char *)*(int *)(a1 + 196) )
      {
        sub_23A200(a1, v81, 0);
        return 1;
      }
      v80 = *(_QWORD *)(a1 + 8);
    }
  }
  if ( *(char *)(a1 + 200) < 0 )
LABEL_205:
    sub_226EA0();
LABEL_75:
  if ( v17 || v14 )
  {
    if ( !*(_DWORD *)(a1 + 196) )
      goto LABEL_140;
    if ( v14 )
    {
LABEL_80:
      v99 = nullptr;
      v100 = 0;
      result = sub_23B630(a1, (__int64 *)&v99);
      if ( (_DWORD)result )
        goto LABEL_91;
      if ( v17 )
      {
        v69 = *(_QWORD *)(a1 + 176);
        v70 = *(_QWORD *)(a1 + 8);
        v71 = *(_DWORD *)(a1 + 196);
        v98 = 5;
        v97 = v69;
        if ( !(unsigned __int8)sub_227ED0(v70, (__int64)&v97, (_QWORD *)(a1 + 168), v71) )
        {
          v72 = *(_DWORD *)(a1 + 300);
          if ( *(_DWORD *)(a1 + 296) != v72 && (v72 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0)
            || (v90 = *(_QWORD *)(a1 + 8), (*(_BYTE *)(*(_QWORD *)(v90 + 1496) + 604LL) & 0x10) == 0) )
          {
LABEL_163:
            result = 0xFFFFFFFFLL;
LABEL_91:
            if ( v99 )
            {
              v96 = result;
              *(_QWORD *)&v100 = 0;
              qfree((__int64)v99);
              return v96;
            }
            return result;
          }
          if ( *(_BYTE *)(v90 + 320) )
          {
            v91 = *(_QWORD *)(a1 + 176);
            if ( (int)sub_F2D80(v90) > v91 )
            {
              if ( !under_debugger )
                sub_383060(52300);
              goto LABEL_245;
            }
          }
          else
          {
            *(_DWORD *)(a1 + 196) = sub_228210(v90, *(_QWORD *)(a1 + 176), (_QWORD *)(a1 + 168), *(_DWORD *)(a1 + 196));
            v14 = v17;
          }
        }
      }
      set_tinfo_property();
      v38 = sub_235430(a1, a1 + 144, *(_DWORD *)(a1 + 196), 256);
      if ( v38 != -1 )
      {
        if ( (unsigned __int64)v100 > 1 || v14 )
        {
          v39 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL);
          if ( (unsigned __int8)sub_22E000(a1, (const void **)&v99, v36, v37) )
            *(_DWORD *)(v39 + 104LL * v38 + 24) |= 0x400u;
        }
        sub_23A200(a1, v38, v17);
        if ( (*(_BYTE *)(a1 + 201) & 0x10) != 0 )
        {
          v40 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v40 + 2) & 4) != 0 )
            *(_DWORD *)(*(_QWORD *)(v40 + 944) + 64LL) = v38;
        }
        result = 1;
        goto LABEL_91;
      }
      goto LABEL_163;
    }
    goto LABEL_173;
  }
  if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 196) )
    {
LABEL_79:
      v14 = 0;
      goto LABEL_80;
    }
LABEL_140:
    *(_DWORD *)(a1 + 196) = -1;
    goto LABEL_79;
  }
  v74 = *(_DWORD *)(a1 + 200);
  if ( (v74 & 0x1018) == 0 )
  {
    if ( (v74 & 0x400) == 0 || (get_tinfo_property() & 0xF) != 0xB && (get_tinfo_property() & 0x2F) != 0xD )
    {
      v99 = nullptr;
      copy_tinfo_t();
      v87 = *(_QWORD *)(a1 + 120);
      if ( (unsigned __int8)sub_22BA80(a1, &v99) )
      {
        clear_tinfo_t();
        if ( !*(_DWORD *)(a1 + 196) )
          *(_DWORD *)(a1 + 196) = -1;
        goto LABEL_79;
      }
      v88 = v99;
      v89 = *(char **)(a1 + 168);
      *(_QWORD *)(a1 + 120) = v87;
      *(_QWORD *)(a1 + 168) = v88;
      v99 = v89;
      clear_tinfo_t();
    }
    if ( !*(_DWORD *)(a1 + 196) )
      goto LABEL_140;
LABEL_173:
    if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
      goto LABEL_79;
    goto LABEL_174;
  }
  if ( !*(_DWORD *)(a1 + 196) )
    goto LABEL_140;
LABEL_174:
  v75 = *(_DWORD *)(a1 + 196);
  if ( v75 == -1 )
    goto LABEL_79;
  v76 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v76 + 2) & 4) != 0 )
    goto LABEL_79;
  if ( v17 )
  {
    v77 = *(_QWORD *)(a1 + 176);
    v78 = (_QWORD *)(a1 + 168);
    LODWORD(v99) = *(_DWORD *)(a1 + 196);
    if ( v77 != sub_227D30(v76, v77, (_QWORD *)(a1 + 168), v75) )
      goto LABEL_178;
  }
  else
  {
    if ( (get_tinfo_property() & 0xF) == 9 )
      goto LABEL_79;
    v78 = (_QWORD *)(a1 + 168);
    LODWORD(v99) = *(_DWORD *)(a1 + 196);
  }
  v92 = sub_2327F0(*(_QWORD **)(a1 + 8), (int *)&v99, *(_QWORD *)(a1 + 176), v78);
  if ( !v92 )
  {
LABEL_178:
    v79 = *(_DWORD *)(a1 + 300);
    if ( *(_DWORD *)(a1 + 296) != v79 )
    {
      result = 0xFFFFFFFFLL;
      if ( v79 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0 )
        return result;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 604LL) & 0x10) == 0 )
      return 0xFFFFFFFFLL;
    v14 = 1;
    goto LABEL_80;
  }
  v93 = (int)v99;
  if ( *(_DWORD *)(a1 + 196) == (_DWORD)v99 || (get_tinfo_property() & 0xF) == 9 )
    goto LABEL_222;
  *(_DWORD *)(a1 + 196) = v93;
  v94 = *(_QWORD *)(a1 + 176);
  if ( v93 == -1 )
    v95 = *(_QWORD *)(a1 + 176);
  else
    v95 = v94 + v93;
  *(_QWORD *)(a1 + 128) = v95;
  sub_2329E0(*(_QWORD *)(a1 + 8), v94, v93);
  if ( *(_BYTE *)(a1 + 168) )
    clear_tinfo_t();
  result = 0;
  if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 88) )
  {
LABEL_222:
    if ( v92 == 2 )
      **(_DWORD **)(a1 + 8) |= 0x8000000u;
    goto LABEL_79;
  }
  return result;
}
