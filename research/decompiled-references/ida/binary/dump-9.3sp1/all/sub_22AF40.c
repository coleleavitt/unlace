__int64 __fastcall sub_22AF40(__int64 a1, __int64 *a2, int *a3, int a4)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // r14
  __int64 *v14; // r13
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  int v20; // r9d
  int v21; // eax
  char tinfo_property; // al
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rcx
  bool v26; // dl
  __int64 *v27; // rax
  __int64 *v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  unsigned __int64 v31; // r12
  __int64 v32; // r13
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  __int64 *v37; // rdi
  __int64 *v38; // rdx
  __int64 *v39; // rsi
  __int64 *n; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // rsi
  __int64 v46; // rdx
  int v47; // eax
  char v48; // al
  __int64 v49; // rdx
  int v50; // r12d
  __int64 *v51; // rdx
  __int64 *j; // rax
  __int64 *v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r12
  __int64 v58; // rax
  __int64 v59; // rdx
  _QWORD **v60; // rdi
  __int64 *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  unsigned int *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // rsi
  _QWORD *v72; // rax
  __int64 v73; // rdx
  _QWORD *v74; // rsi
  unsigned __int64 v75; // rcx
  __int64 m; // rcx
  unsigned __int64 v77; // rsi
  __int64 v78; // rax
  __int64 i; // rcx
  __int64 v80; // rdx
  unsigned __int64 k; // rdx
  __int64 v82; // rsi
  unsigned __int64 v83; // rdi
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // [rsp+0h] [rbp-A8h]
  __int64 *v92; // [rsp+10h] [rbp-98h]
  __int64 *v93; // [rsp+10h] [rbp-98h]
  __int64 v94; // [rsp+18h] [rbp-90h]
  __int64 v95; // [rsp+20h] [rbp-88h]
  __int64 v96; // [rsp+30h] [rbp-78h]
  __int64 tinfo_size; // [rsp+38h] [rbp-70h]
  __int64 *v100; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v101; // [rsp+58h] [rbp-50h] BYREF
  __int64 v102; // [rsp+60h] [rbp-48h]
  unsigned __int64 v103; // [rsp+68h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v103 = __readfsqword(0x28u);
  v6 = a1 + 144;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 936) + 40LL))(*(_QWORD *)(v5 + 936));
  v8 = *(_QWORD *)(v5 + 136);
  v9 = *(__int64 **)(a1 + 88);
  v10 = v7;
  v11 = *(__int64 **)(a1 + 120);
  v92 = v9;
  if ( v8 <= v7 )
    v10 = v8;
  if ( v7 != -1 )
    v8 = v10;
  if ( v11 == v9 )
    return 0;
  v12 = v11[7];
  v90 = 0;
  v13 = v11 + 3;
  v14 = *(__int64 **)(a1 + 88);
  if ( v8 <= v12 )
    v12 = v8;
  v95 = v12 - *(_QWORD *)(a1 + 176);
  while ( 1 )
  {
    v15 = v13[4];
    if ( (__int64)v15 < v90 )
      goto LABEL_62;
    v16 = *(int *)(v6 + 52);
    v17 = *(_QWORD *)(v6 + 32);
    if ( (int)v16 <= 0 )
      v16 = 1;
    if ( v17 + v16 - 1 < v15 )
      goto LABEL_62;
    v18 = *((int *)v13 + 13);
    LOBYTE(v94) = 1;
    if ( (int)v18 <= 0 )
      v18 = 1;
    if ( v15 + v18 - 1 < v17 )
    {
LABEL_62:
      LOBYTE(v94) = 0;
      if ( v92 != v14 )
      {
        v41 = *v14;
        v42 = (unsigned __int64)v14;
        if ( (*v14 & 2) == 0 )
        {
          v42 = v14[2];
          if ( (*(_BYTE *)v42 & 2) != 0 )
          {
            v42 = v41 & 0xFFFFFFFFFFFFFFFCLL;
            v43 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v43 & 2) == 0 )
            {
              v44 = (unsigned __int64)v14;
              do
              {
                if ( *(_QWORD *)(v42 + 16) != v44 )
                  break;
                v44 = v42;
                v45 = v43 & 0xFFFFFFFFFFFFFFFCLL;
                v43 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
                v42 = v45;
              }
              while ( (v43 & 2) == 0 );
            }
          }
          else
          {
            while ( (**(_BYTE **)(v42 + 8) & 2) == 0 )
              v42 = *(_QWORD *)(v42 + 8);
          }
        }
        v46 = v8;
        if ( (__int64 *)v42 != v9 )
        {
          v46 = *(_QWORD *)(v42 + 56);
          if ( v8 <= v46 )
            v46 = v8;
        }
        v95 = v46 - *(_QWORD *)(a1 + 176);
        if ( *((_DWORD *)v14 + 19) > *a3 && !a4 && (*(_BYTE *)(a1 + 201) & 4) == 0 )
        {
          v100 = v14;
          sub_22A6C0(a1, a3, (__int64)&v100, v95);
        }
        v92 = v14;
        LOBYTE(v94) = 0;
      }
    }
    if ( (v13[7] & 0x101C) != 0 )
      break;
    if ( v13[4] >= v8 )
      goto LABEL_33;
    v19 = v13[3];
    if ( (get_tinfo_property() & 0x2F) == 0xD && *((_DWORD *)v13 + 13) > *a3 )
      goto LABEL_33;
    v21 = *((_DWORD *)v13 + 14);
    if ( (v21 & 0x400) != 0 )
    {
      tinfo_property = get_tinfo_property();
      v102 = 0;
      if ( (tinfo_property & 0xF) == 0xB )
        v102 = get_tinfo_property();
      else
        copy_tinfo_t();
      tinfo_size = get_tinfo_size();
      v96 = *a3;
      clear_tinfo_t();
      if ( v96 != tinfo_size )
        goto LABEL_33;
      v19 = a1;
      v101 = v11;
      sub_22A6C0(a1, a3, (__int64)&v101, v95);
      v21 = *((_DWORD *)v13 + 14);
    }
    if ( (v21 & 1) != 0 || (v21 & 2) != 0 && v13[5] != -1 && (v19 = v13[3], (get_tinfo_property() & 0xF) == 0xB) )
    {
      v23 = v13[4];
      if ( (__int64)v23 >= v90 )
      {
        if ( (_BYTE)v94 )
        {
          if ( (*(_BYTE *)(v6 + 56) & 1) != 0 )
            goto LABEL_33;
          v19 = *(_QWORD *)(v6 + 32);
          v24 = *(int *)(v6 + 52);
          v25 = *((int *)v13 + 13);
          v26 = v24 != 0 && v23 >= v19;
          if ( (_DWORD)v25 )
          {
            if ( !v26 )
              goto LABEL_33;
            v23 = v23 + v25 - 1;
          }
          else if ( !v26 )
          {
            goto LABEL_33;
          }
          if ( v19 + v24 - 1 < v23 )
            goto LABEL_33;
        }
        v47 = *((_DWORD *)v13 + 14);
        if ( (v47 & 1) != 0 )
        {
          if ( !*((_DWORD *)v13 + 13) )
          {
            v48 = get_tinfo_property();
            v49 = 2;
            if ( (v48 & 0xF) != 0xB )
            {
              v49 = 0;
              if ( !*((_DWORD *)v13 + 13) )
              {
                v94 = v13[9];
                v50 = v94;
                if ( (get_tinfo_property() & 0x2F) == 0xD )
                {
                  v49 = (int)v94;
                }
                else
                {
                  v78 = v13[8];
                  for ( i = v78 + 40 * v13[9]; i != v78; v78 += 40 )
                  {
                    v80 = *(_QWORD *)(v78 + 16);
                    if ( *(_DWORD *)v80 == 12 )
                    {
                      ++v50;
                    }
                    else if ( *(_BYTE *)(v80 + 64) == 8 )
                    {
                      v50 += *(_DWORD *)(*(_QWORD *)(v80 + 72) + 284LL) == 2;
                    }
                  }
                  v49 = v50;
                }
              }
            }
            if ( 2 * v13[9] != v49 )
              goto LABEL_33;
            goto LABEL_82;
          }
          if ( v13[9] != 1 || *a3 && *a3 != *((_DWORD *)v13 + 13) )
            goto LABEL_33;
          v56 = v13[8];
          if ( *(_DWORD *)(v56 + 32) == 1 )
          {
            v57 = *(_QWORD *)(v56 + 16);
            if ( (*(_DWORD *)v57 == 4 || *(_DWORD *)v57 == 67 && *(_DWORD *)(v57 + 36) == *(_DWORD *)(v57 + 68))
              && *(_QWORD *)(v56 + 24) == v57 + 64
              && v57 == *(_QWORD *)(v56 + 8) )
            {
              if ( *(_BYTE *)(v57 + 32) == 1 )
              {
                v58 = *(_QWORD *)(a1 + 8);
                if ( *(_DWORD *)(v58 + 64) <= 1u )
                  sub_226E40(v19);
                if ( sub_129010(
                       *(_QWORD *)(*(_QWORD *)(v58 + 528) + 8LL),
                       *(_DWORD *)(v57 + 40),
                       *(_QWORD *)(v57 + 16),
                       0,
                       0,
                       v20) )
                {
                  goto LABEL_82;
                }
                if ( !(unsigned __int8)sub_36E210(*(_QWORD *)(a1 + 8), *(unsigned int *)(v57 + 40), v59) )
                  goto LABEL_33;
              }
              v60 = *(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL);
              v61 = sub_1FBD10(v60, v57 + 32);
              if ( v61 )
              {
                v65 = *v61;
                v66 = *((int *)v61 + 4);
                if ( *(_QWORD *)(v65 + 440) < v66 )
                  sub_226EC0(v60, v57 + 32, v65, v62, v63, v64, v90, a3, v92, v94, v95);
                v67 = (unsigned int *)(*(_QWORD *)(v65 + 432) + 104 * v66);
                v68 = *v67;
                if ( (unsigned int)(v68 - 3) <= 1 && !v67[23] && (*((_BYTE *)v67 + 25) & 1) == 0 )
                {
                  v69 = *(_QWORD *)(a1 + 8);
                  if ( *(_BYTE *)(v69 + 320) )
                    goto LABEL_33;
                  v70 = v67[2];
                  if ( (_DWORD)v68 == 4 )
                    v70 = (unsigned __int16)v70;
                  if ( !(unsigned __int8)sub_36E210(v69, v70, v68) )
                  {
LABEL_33:
                    v27 = *(__int64 **)(a1 + 88);
                    v28 = v27;
                    goto LABEL_34;
                  }
                }
              }
LABEL_82:
              v47 = *((_DWORD *)v13 + 14);
            }
          }
        }
        if ( (v47 & 2) != 0 && v13[5] != -1 && (get_tinfo_property() & 0xF) == 0xB )
        {
          v101 = v11;
          v90 = sub_22A3E0((_QWORD *)a1, v11);
          if ( v90 == -1 )
            goto LABEL_33;
        }
      }
      v6 = (__int64)v13;
      v14 = v11;
    }
    if ( (*v11 & 2) == 0 )
    {
      v51 = (__int64 *)v11[2];
      if ( (*(_BYTE *)v51 & 2) != 0 )
      {
        v53 = (__int64 *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
        v54 = *v53;
        if ( (*v53 & 2) == 0 )
        {
          while ( (__int64 *)v53[2] == v11 )
          {
            v11 = v53;
            v55 = v54 & 0xFFFFFFFFFFFFFFFCLL;
            v54 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v54 & 2) != 0 )
            {
              v11 = (__int64 *)v55;
              goto LABEL_90;
            }
            v53 = (__int64 *)v55;
          }
        }
        v11 = v53;
      }
      else
      {
        for ( j = (__int64 *)v51[1]; (*(_BYTE *)j & 2) == 0; j = (__int64 *)j[1] )
          v51 = j;
        v11 = v51;
      }
    }
LABEL_90:
    v9 = *(__int64 **)(a1 + 88);
    v27 = v9;
    if ( v9 == v11 )
      goto LABEL_138;
    v13 = v11 + 3;
  }
  v27 = *(__int64 **)(a1 + 88);
  v90 = 0;
  v28 = v27;
LABEL_34:
  if ( v11 != v27 )
    goto LABEL_35;
LABEL_138:
  v92 = v14;
  v28 = v11;
LABEL_35:
  if ( v92 == v28 )
    return 0;
  v29 = v92[7];
  v30 = *((int *)v92 + 19);
  if ( (_DWORD)v30 != -1 )
    v29 += v30;
  if ( v92[7] == v29 )
  {
    if ( !(_DWORD)v30 )
    {
      ++v29;
      goto LABEL_39;
    }
    if ( !under_debugger )
      sub_383060(52559);
LABEL_197:
    BUG();
  }
LABEL_39:
  v31 = *(_QWORD *)(a1 + 120);
  v32 = v90;
  if ( v29 >= v90 )
    v32 = v29;
  if ( v92 != (__int64 *)v31 )
  {
    do
    {
      v33 = *(_DWORD *)(v31 + 80);
      if ( (v33 & 1) != 0 || (v33 & 2) != 0 && *(_QWORD *)(v31 + 64) != -1 && (get_tinfo_property() & 0xF) == 0xB )
      {
        v34 = *(_QWORD *)(v31 + 56);
        v35 = *(int *)(v31 + 76);
        if ( (_DWORD)v35 != -1 )
          v34 += v35;
        if ( v34 > v32 && v11[7] >= v34 )
          v32 = v34;
      }
      if ( (*(_QWORD *)v31 & 2) == 0 )
      {
        v36 = *(_QWORD *)(v31 + 16);
        if ( (*(_BYTE *)v36 & 2) != 0 )
        {
          v72 = (_QWORD *)(*(_QWORD *)v31 & 0xFFFFFFFFFFFFFFFCLL);
          v73 = *v72;
          if ( (*v72 & 2) != 0 || v31 != v72[2] )
          {
LABEL_144:
            v31 = (unsigned __int64)v72;
          }
          else
          {
            while ( 1 )
            {
              v31 = v73 & 0xFFFFFFFFFFFFFFFCLL;
              v73 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v73 & 2) != 0 )
                break;
              v74 = v72;
              v72 = (_QWORD *)v31;
              if ( v74 != *(_QWORD **)(v31 + 16) )
                goto LABEL_144;
            }
          }
        }
        else
        {
          do
          {
            v31 = v36;
            v36 = *(_QWORD *)(v36 + 8);
          }
          while ( (*(_BYTE *)v36 & 2) == 0 );
        }
      }
    }
    while ( v92 != (__int64 *)v31 );
    v27 = *(__int64 **)(a1 + 88);
  }
  v37 = v92;
  if ( (*v92 & 2) != 0 )
  {
    v38 = v92;
  }
  else
  {
    v75 = v92[2];
    if ( (*(_BYTE *)v75 & 2) == 0 )
    {
      for ( k = *(_QWORD *)(v75 + 8); (*(_BYTE *)k & 2) == 0; k = *(_QWORD *)(k + 8) )
        v75 = k;
      goto LABEL_166;
    }
    v38 = (__int64 *)(*v92 & 0xFFFFFFFFFFFFFFFCLL);
    for ( m = *v38; (m & 2) == 0; v38 = (__int64 *)v77 )
    {
      if ( v37 != (__int64 *)v38[2] )
        break;
      v37 = v38;
      v77 = m & 0xFFFFFFFFFFFFFFFCLL;
      m = *(_QWORD *)(m & 0xFFFFFFFFFFFFFFFCLL);
    }
  }
  while ( v38 != v27 )
  {
    if ( v38[7] >= v32 )
    {
      v84 = v8;
      v93 = v38;
      if ( v8 < v32 )
        v84 = v32;
      if ( v84 > v38[7] )
        v84 = v38[7];
      goto LABEL_177;
    }
    if ( (*v38 & 2) == 0 )
    {
      v39 = (__int64 *)v38[2];
      if ( (*(_BYTE *)v39 & 2) != 0 )
      {
        v75 = *v38 & 0xFFFFFFFFFFFFFFFCLL;
        v82 = *(_QWORD *)v75;
        if ( (*(_QWORD *)v75 & 2) != 0 || *(__int64 **)(v75 + 16) != v38 )
        {
LABEL_166:
          v38 = (__int64 *)v75;
        }
        else
        {
          while ( 1 )
          {
            v38 = (__int64 *)(v82 & 0xFFFFFFFFFFFFFFFCLL);
            v82 = *(_QWORD *)(v82 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v82 & 2) != 0 )
              break;
            v83 = v75;
            v75 = (unsigned __int64)v38;
            if ( v38[2] != v83 )
              goto LABEL_166;
          }
        }
      }
      else
      {
        for ( n = (__int64 *)v39[1]; (*(_BYTE *)n & 2) == 0; n = (__int64 *)n[1] )
          v39 = n;
        v38 = v39;
      }
    }
  }
  v84 = v8;
  v93 = v38;
  if ( v8 < v32 )
    v84 = v32;
LABEL_177:
  v85 = *(_QWORD *)(a1 + 112);
  v86 = v84 - *(_QWORD *)(a1 + 176);
  if ( v85 == *(_QWORD *)(a1 + 120) )
    LODWORD(v87) = -1;
  else
    v87 = *(_QWORD *)(v85 + 56);
  v88 = (int)v32 - (int)v87;
  if ( v88 > v86 )
  {
    if ( !under_debugger )
      sub_383060(52560);
    goto LABEL_197;
  }
  if ( *a3 )
  {
    v89 = v86 % *a3;
    if ( v88 <= v86 - v89 )
      v86 -= v89;
  }
  if ( *a2 >= v86 || *(char *)(a1 + 200) < 0 && v86 % *(int *)(a1 + 196) )
    return 0;
  *(_QWORD *)(a1 + 128) = v32;
  *(_QWORD *)(a1 + 120) = v93;
  *a2 = v86;
  return 1;
}
