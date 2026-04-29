__int64 __fastcall sub_237940(__int64 a1)
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
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  _QWORD *v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rbp
  int v28; // edx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rsi
  int v34; // edx
  _QWORD *v35; // rcx
  _QWORD *i; // rax
  int v37; // r14d
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rsi
  char tinfo_property; // al
  __int64 v44; // rdi
  __int64 v45; // rax
  unsigned __int64 v46; // r10
  int v47; // eax
  __int64 v48; // r9
  unsigned __int64 v49; // r8
  bool v50; // si
  __int64 v51; // rax
  _QWORD *v52; // rcx
  __int64 v53; // rsi
  _QWORD *v54; // r10
  _QWORD *v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // rsi
  _QWORD *v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  int v64; // edx
  int v65; // r12d
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rdi
  signed int v70; // ecx
  int v71; // eax
  __int64 *v72; // rbp
  int v73; // eax
  int v74; // ecx
  __int64 v75; // rdi
  __int64 v76; // rbp
  __int64 *v77; // r14
  int v78; // edx
  __int64 v79; // rbp
  int v80; // r15d
  __int64 j; // rax
  __int64 v82; // rdi
  __int64 v83; // rbp
  __int64 v84; // r14
  __int64 *v85; // rbp
  __int64 v86; // r13
  signed __int64 v87; // rdx
  signed __int64 v88; // rax
  __int64 v89; // rdi
  __int64 v90; // r15
  int v91; // r13d
  int v92; // r15d
  signed __int64 v93; // rsi
  signed __int64 v94; // rax
  unsigned int v95; // [rsp+Ch] [rbp-6Ch]
  __int64 v96; // [rsp+10h] [rbp-68h] BYREF
  char v97; // [rsp+18h] [rbp-60h]
  signed __int64 v98; // [rsp+20h] [rbp-58h] BYREF
  __int128 v99; // [rsp+28h] [rbp-50h]
  unsigned __int64 v100; // [rsp+38h] [rbp-40h]

  v100 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 112) || *(_DWORD *)(a1 + 192) == -1 )
    return 1;
  if ( (unsigned __int8)sub_22E160(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 176), *(_DWORD *)(a1 + 196)) )
  {
    if ( (**(_DWORD **)(a1 + 8) & 0x8000000) != 0 )
    {
      *(_DWORD *)(a1 + 136) |= 4u;
      return 0xFFFFFFFFLL;
    }
    if ( !under_debugger )
      sub_37E160(52302);
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
    v14 = sub_222750(*(_QWORD *)(a1 + 8), v3, v5);
    if ( v14 )
      goto LABEL_20;
    v27 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(a1 + 120) == v27 )
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
          sub_37E160(52278);
        goto LABEL_245;
      }
      v12 = *(_QWORD *)(a1 + 8);
LABEL_145:
      v65 = 0;
      v66 = 0;
      if ( *(_QWORD *)(v12 + 440) )
      {
        do
        {
          v67 = *(_QWORD *)(v12 + 432) + 104 * v66;
          if ( *(_QWORD *)(v67 + 16) == *(_QWORD *)(a1 + 184) )
          {
            sub_1BF120(v67, &v96, &v98, *(_DWORD *)(v67 + 88));
            if ( *(_QWORD *)(a1 + 176) == v96 && v98 - v96 == *(_DWORD *)(a1 + 196) )
            {
              sub_235980(a1, v65, 1);
              return 1;
            }
            v12 = *(_QWORD *)(a1 + 8);
          }
          v66 = ++v65;
        }
        while ( (unsigned __int64)v65 < *(_QWORD *)(v12 + 440) );
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
        v31 = *(_QWORD *)(a1 + 128);
        v32 = *(_QWORD *)(a1 + 112);
        if ( v32 == *(_QWORD *)(a1 + 120) )
        {
          v34 = v31 + 1;
          v33 = -1;
        }
        else
        {
          v33 = *(_QWORD *)(v32 + 56);
          v34 = v31 - *(_DWORD *)(v32 + 56);
        }
        v14 = sub_222750(v12, v33, v34);
        if ( v14 )
        {
          v10 = *(_DWORD *)(a1 + 296);
          v11 = *(_DWORD *)(a1 + 300);
          v14 = 0;
          v12 = *(_QWORD *)(a1 + 8);
        }
        else
        {
          v61 = *(_QWORD *)(a1 + 112);
          if ( v61 == *(_QWORD *)(a1 + 120) )
          {
            *(_QWORD *)(a1 + 176) = -1;
            v62 = *(_QWORD *)(a1 + 128);
            LODWORD(v63) = -1;
          }
          else
          {
            *(_QWORD *)(a1 + 176) = *(_QWORD *)(v61 + 56);
            v62 = *(_QWORD *)(a1 + 128);
            v63 = *(_QWORD *)(v61 + 56);
          }
          v64 = v62 - v63;
          v10 = *(_DWORD *)(a1 + 296);
          v11 = *(_DWORD *)(a1 + 300);
          *(_DWORD *)(a1 + 196) = v64;
          v12 = *(_QWORD *)(a1 + 8);
        }
        goto LABEL_27;
      }
      goto LABEL_239;
    }
    while ( 1 )
    {
      v28 = *(_DWORD *)(v27 + 80);
      if ( (v28 & 1) != 0 )
        break;
      if ( (v28 & 2) == 0 )
        goto LABEL_120;
      if ( *(_QWORD *)(v27 + 64) != -1 )
      {
        tinfo_property = get_tinfo_property(*(_QWORD *)(v27 + 48), 2);
        v28 = *(_DWORD *)(v27 + 80);
        if ( (tinfo_property & 0xF) == 0xB )
          break;
        if ( (v28 & 2) == 0 )
        {
LABEL_120:
          v29 = *(_QWORD *)(a1 + 120);
          if ( (v28 & 0x20) != 0 )
          {
LABEL_121:
            v49 = *(_QWORD *)(v27 + 56);
            v44 = *(_QWORD *)(a1 + 112);
LABEL_110:
            if ( v29 == v44 )
              v51 = -1;
            else
              v51 = *(_QWORD *)(v44 + 56);
            if ( v51 != v49 )
              goto LABEL_55;
          }
LABEL_54:
          if ( (v28 & 0x1018) != 0 )
            goto LABEL_94;
          goto LABEL_55;
        }
      }
      v29 = *(_QWORD *)(a1 + 120);
      if ( (v28 & 0x1018) != 0 )
      {
        if ( (v28 & 0x20) == 0 )
        {
LABEL_94:
          v40 = *(int *)(v27 + 76);
          if ( (_DWORD)v40 )
          {
            v41 = *(_QWORD *)(a1 + 112);
            v42 = v41 == v29 ? -1LL : *(_QWORD *)(v41 + 56);
            if ( v40 != *(_QWORD *)(a1 + 128) - v42 )
              goto LABEL_20;
          }
          goto LABEL_55;
        }
        goto LABEL_121;
      }
      v44 = *(_QWORD *)(a1 + 112);
      v45 = *(_QWORD *)(a1 + 128);
      if ( v44 == v29 )
      {
        v47 = v45 + 1;
        v46 = -1;
      }
      else
      {
        v46 = *(_QWORD *)(v44 + 56);
        v47 = v45 - *(_DWORD *)(v44 + 56);
      }
      v48 = *(int *)(v27 + 76);
      v49 = *(_QWORD *)(v27 + 56);
      v50 = v46 >= v49 && v48 != 0;
      if ( v47 )
      {
        if ( !v50 || v48 + v49 - 1 < v46 + v47 - 1 )
          goto LABEL_55;
      }
      else if ( !v50 || v48 + v49 - 1 < v46 )
      {
        goto LABEL_55;
      }
      if ( (v28 & 0x20) != 0 )
        goto LABEL_110;
LABEL_55:
      if ( (*(_QWORD *)v27 & 2) == 0 )
      {
        v30 = *(_QWORD *)(v27 + 16);
        if ( (*(_BYTE *)v30 & 2) != 0 )
        {
          v55 = (_QWORD *)(*(_QWORD *)v27 & 0xFFFFFFFFFFFFFFFCLL);
          v56 = *v55;
          if ( (*v55 & 2) != 0 || v55[2] != v27 )
          {
LABEL_123:
            v27 = (unsigned __int64)v55;
          }
          else
          {
            while ( 1 )
            {
              v27 = v56 & 0xFFFFFFFFFFFFFFFCLL;
              v56 = *(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v56 & 2) != 0 )
                break;
              v57 = v55;
              v55 = (_QWORD *)v27;
              if ( *(_QWORD **)(v27 + 16) != v57 )
                goto LABEL_123;
            }
          }
        }
        else
        {
          do
          {
            v27 = v30;
            v30 = *(_QWORD *)(v30 + 8);
          }
          while ( (*(_BYTE *)v30 & 2) == 0 );
        }
      }
      if ( v29 == v27 )
        goto LABEL_59;
    }
    v29 = *(_QWORD *)(a1 + 120);
    goto LABEL_54;
  }
  if ( (*(_BYTE *)(a1 + 203) & 0x20) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(a1 + 88) == v7 || (*(_BYTE *)(v7 + 83) & 0x10) == 0 )
    {
      if ( !under_debugger )
        sub_37E160(52290);
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
    v16 = sub_188E80(v12);
  }
  v17 = 0;
  if ( v16 <= v15 )
    v17 = (*(_BYTE *)(v12 + 5) & 0x10) == 0
       || (v72 = *(__int64 **)(v12 + 944), v72[1] == -1) && !(unsigned __int8)sub_219EE0(v72)
       || !v72[2]
       || v72[1] > v15;
  v18 = *(_QWORD *)(a1 + 168);
  if ( (_BYTE)v18 )
  {
    v19 = *(_QWORD *)(a1 + 112);
    v20 = v19 == *(_QWORD *)(a1 + 120) ? -1LL : *(_QWORD *)(v19 + 56);
    if ( *(_QWORD *)(a1 + 176) != v20
      || (get_tinfo_property(v18, 2) & 0xF) == 0xB
      && (v83 = *(_QWORD *)(a1 + 8), v84 = *(_QWORD *)(a1 + 176), v84 >= sub_188E80(v83))
      && ((*(_BYTE *)(v83 + 5) & 0x10) == 0
       || (v85 = *(__int64 **)(v83 + 944), v85[1] == -1) && !(unsigned __int8)sub_219EE0(v85)
       || !v85[2]
       || v84 < v85[1])
      || *(_DWORD *)(a1 + 196) && *(_DWORD *)(a1 + 196) != get_tinfo_size(0, *(_QWORD *)(a1 + 168), 0) )
    {
      clear_tinfo_t(a1 + 168);
    }
  }
  v21 = *(_DWORD *)(a1 + 136);
  if ( (v21 & 8) == 0 )
    goto LABEL_75;
  if ( (v21 & 0x10) == 0 )
  {
    if ( !under_debugger )
      sub_37E160(52500);
    goto LABEL_245;
  }
  v22 = *(_QWORD **)(a1 + 120);
  v23 = *(_QWORD **)(a1 + 112);
LABEL_39:
  while ( v23 != v22 )
  {
    if ( (v23[10] & 1) != 0 )
    {
      v24 = v23[8];
      if ( v24 != -1 )
      {
        v25 = *(_QWORD *)(a1 + 112);
        while ( v22 != (_QWORD *)v25 )
        {
          do
          {
            if ( v24 == *(_QWORD *)(v25 + 64)
              && *(_QWORD *)(v25 + 56) == *(_QWORD *)(a1 + 176)
              && (*(_BYTE *)(v25 + 80) & 0x40) != 0 )
            {
              goto LABEL_67;
            }
          }
          while ( (*(_QWORD *)v25 & 2) != 0 );
          v26 = *(_QWORD *)(v25 + 16);
          if ( (*(_BYTE *)v26 & 2) != 0 )
          {
            v52 = (_QWORD *)(*(_QWORD *)v25 & 0xFFFFFFFFFFFFFFFCLL);
            v53 = *v52;
            if ( (*v52 & 2) != 0 || v52[2] != v25 )
            {
LABEL_115:
              v25 = (unsigned __int64)v52;
            }
            else
            {
              while ( 1 )
              {
                v25 = v53 & 0xFFFFFFFFFFFFFFFCLL;
                v53 = *(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v53 & 2) != 0 )
                  break;
                v54 = v52;
                v52 = (_QWORD *)v25;
                if ( *(_QWORD **)(v25 + 16) != v54 )
                  goto LABEL_115;
              }
            }
          }
          else
          {
            do
            {
              v25 = v26;
              v26 = *(_QWORD *)(v26 + 8);
            }
            while ( (*(_BYTE *)v26 & 2) == 0 );
          }
        }
        *(_QWORD *)(a1 + 184) = v24;
        goto LABEL_75;
      }
    }
LABEL_67:
    if ( (*v23 & 2) == 0 )
    {
      v35 = (_QWORD *)v23[2];
      if ( (*(_BYTE *)v35 & 2) != 0 )
      {
        v58 = (_QWORD *)(*v23 & 0xFFFFFFFFFFFFFFFCLL);
        v59 = *v58;
        if ( (*v58 & 2) == 0 )
        {
          while ( v23 == (_QWORD *)v58[2] )
          {
            v23 = v58;
            v60 = v59 & 0xFFFFFFFFFFFFFFFCLL;
            v59 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v59 & 2) != 0 )
            {
              v23 = (_QWORD *)v60;
              goto LABEL_39;
            }
            v58 = (_QWORD *)v60;
          }
        }
        v23 = v58;
      }
      else
      {
        for ( i = (_QWORD *)v35[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v35 = i;
        v23 = v35;
      }
    }
  }
  v79 = *(_QWORD *)(a1 + 8);
  v80 = 0;
  for ( j = 0; (unsigned __int64)v80 < *(_QWORD *)(v79 + 440); j = ++v80 )
  {
    v82 = *(_QWORD *)(v79 + 432) + 104 * j;
    if ( *(_QWORD *)(v82 + 16) == *(_QWORD *)(a1 + 184) )
    {
      sub_1BF120(v82, &v96, &v98, *(_DWORD *)(v82 + 88));
      if ( *(_QWORD *)(a1 + 176) == v96 && v98 - v96 == *(_DWORD *)(a1 + 196) )
      {
        sub_235980(a1, v80, 0);
        return 1;
      }
      v79 = *(_QWORD *)(a1 + 8);
    }
  }
  if ( *(char *)(a1 + 200) < 0 )
LABEL_205:
    sub_222620();
LABEL_75:
  if ( v17 || v14 )
  {
    if ( !*(_DWORD *)(a1 + 196) )
      goto LABEL_140;
    if ( v14 )
    {
LABEL_80:
      v98 = 0;
      v99 = 0;
      result = sub_236DB0(a1, (__int64)&v98);
      if ( (_DWORD)result )
        goto LABEL_91;
      if ( v17 )
      {
        v68 = *(_QWORD *)(a1 + 176);
        v69 = *(_QWORD *)(a1 + 8);
        v70 = *(_DWORD *)(a1 + 196);
        v97 = 5;
        v96 = v68;
        if ( !(unsigned __int8)sub_223650(v69, (__int64)&v96, (__int64 *)(a1 + 168), v70) )
        {
          v71 = *(_DWORD *)(a1 + 300);
          if ( *(_DWORD *)(a1 + 296) != v71 && (v71 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0)
            || (v89 = *(_QWORD *)(a1 + 8), (*(_BYTE *)(*(_QWORD *)(v89 + 1496) + 604LL) & 0x10) == 0) )
          {
LABEL_163:
            result = 0xFFFFFFFFLL;
LABEL_91:
            if ( v98 )
            {
              v95 = result;
              *(_QWORD *)&v99 = 0;
              qfree(v98);
              return v95;
            }
            return result;
          }
          if ( *(_BYTE *)(v89 + 320) )
          {
            v90 = *(_QWORD *)(a1 + 176);
            if ( (int)sub_EEB80(v89) > v90 )
            {
              if ( !under_debugger )
                sub_37E160(52300);
              goto LABEL_245;
            }
          }
          else
          {
            *(_DWORD *)(a1 + 196) = sub_223990(v89, *(_QWORD *)(a1 + 176), (__int64 *)(a1 + 168), *(_DWORD *)(a1 + 196));
            v14 = v17;
          }
        }
      }
      set_tinfo_property(a1 + 168, 6, 192);
      v37 = sub_230BB0(a1, a1 + 144, *(_DWORD *)(a1 + 196), 256);
      if ( v37 != -1 )
      {
        if ( (unsigned __int64)v99 > 1 || v14 )
        {
          v38 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL);
          if ( (unsigned __int8)sub_229780(a1, (__int64)&v98) )
            *(_DWORD *)(v38 + 104LL * v37 + 24) |= 0x400u;
        }
        sub_235980(a1, v37, v17);
        if ( (*(_BYTE *)(a1 + 201) & 0x10) != 0 )
        {
          v39 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v39 + 2) & 4) != 0 )
            *(_DWORD *)(*(_QWORD *)(v39 + 944) + 64LL) = v37;
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
  v73 = *(_DWORD *)(a1 + 200);
  if ( (v73 & 0x1018) == 0 )
  {
    if ( (v73 & 0x400) == 0
      || (get_tinfo_property(*(_QWORD *)(a1 + 168), 2) & 0xF) != 0xB
      && (get_tinfo_property(*(_QWORD *)(a1 + 168), 2) & 0x2F) != 0xD )
    {
      v98 = 0;
      copy_tinfo_t(&v98, a1 + 168);
      v86 = *(_QWORD *)(a1 + 120);
      if ( (unsigned __int8)sub_227200(a1, &v98) )
      {
        clear_tinfo_t(&v98);
        if ( !*(_DWORD *)(a1 + 196) )
          *(_DWORD *)(a1 + 196) = -1;
        goto LABEL_79;
      }
      v87 = v98;
      v88 = *(_QWORD *)(a1 + 168);
      *(_QWORD *)(a1 + 120) = v86;
      *(_QWORD *)(a1 + 168) = v87;
      v98 = v88;
      clear_tinfo_t(&v98);
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
  v74 = *(_DWORD *)(a1 + 196);
  if ( v74 == -1 )
    goto LABEL_79;
  v75 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v75 + 2) & 4) != 0 )
    goto LABEL_79;
  if ( v17 )
  {
    v76 = *(_QWORD *)(a1 + 176);
    v77 = (__int64 *)(a1 + 168);
    LODWORD(v98) = *(_DWORD *)(a1 + 196);
    if ( v76 != sub_2234B0(v75, v76, (__int64 *)(a1 + 168), v74) )
      goto LABEL_178;
  }
  else
  {
    if ( (get_tinfo_property(*(_QWORD *)(a1 + 168), 2) & 0xF) == 9 )
      goto LABEL_79;
    v77 = (__int64 *)(a1 + 168);
    LODWORD(v98) = *(_DWORD *)(a1 + 196);
  }
  v91 = sub_22DF70(*(_QWORD **)(a1 + 8), (int *)&v98, *(_QWORD *)(a1 + 176), v77);
  if ( !v91 )
  {
LABEL_178:
    v78 = *(_DWORD *)(a1 + 300);
    if ( *(_DWORD *)(a1 + 296) != v78 )
    {
      result = 0xFFFFFFFFLL;
      if ( v78 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0 )
        return result;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 604LL) & 0x10) == 0 )
      return 0xFFFFFFFFLL;
    v14 = 1;
    goto LABEL_80;
  }
  v92 = v98;
  if ( *(_DWORD *)(a1 + 196) == (_DWORD)v98 || (get_tinfo_property(*(_QWORD *)(a1 + 168), 2) & 0xF) == 9 )
    goto LABEL_222;
  *(_DWORD *)(a1 + 196) = v92;
  v93 = *(_QWORD *)(a1 + 176);
  if ( v92 == -1 )
    v94 = *(_QWORD *)(a1 + 176);
  else
    v94 = v93 + v92;
  *(_QWORD *)(a1 + 128) = v94;
  sub_22E160(*(_QWORD *)(a1 + 8), v93, v92);
  if ( *(_BYTE *)(a1 + 168) )
    clear_tinfo_t(v77);
  result = 0;
  if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 88) )
  {
LABEL_222:
    if ( v91 == 2 )
      **(_DWORD **)(a1 + 8) |= 0x8000000u;
    goto LABEL_79;
  }
  return result;
}
