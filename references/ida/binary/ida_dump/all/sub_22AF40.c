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
  int v20; // eax
  char tinfo_property; // al
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rcx
  bool v25; // dl
  __int64 *v26; // rax
  __int64 *v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rsi
  unsigned __int64 v30; // r12
  __int64 v31; // r13
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rsi
  unsigned __int64 v35; // rdx
  __int64 *v36; // rdi
  __int64 *v37; // rdx
  __int64 *v38; // rsi
  __int64 *n; // rdx
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rsi
  __int64 v45; // rdx
  int v46; // eax
  char v47; // al
  __int64 v48; // rdx
  int v49; // r12d
  __int64 *v50; // rdx
  __int64 *j; // rax
  __int64 *v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r12
  __int64 v57; // rax
  __int64 v58; // rdx
  _QWORD **v59; // rdi
  __int64 *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  unsigned __int64 v65; // rax
  unsigned int *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdi
  __int64 v69; // rsi
  _QWORD *v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // rsi
  unsigned __int64 v74; // rcx
  __int64 m; // rcx
  unsigned __int64 v76; // rsi
  __int64 v77; // rax
  __int64 i; // rcx
  __int64 v79; // rdx
  unsigned __int64 k; // rdx
  __int64 v81; // rsi
  unsigned __int64 v82; // rdi
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // [rsp+0h] [rbp-A8h]
  __int64 *v91; // [rsp+10h] [rbp-98h]
  __int64 *v92; // [rsp+10h] [rbp-98h]
  __int64 v93; // [rsp+18h] [rbp-90h]
  __int64 v94; // [rsp+20h] [rbp-88h]
  __int64 v95; // [rsp+30h] [rbp-78h]
  __int64 tinfo_size; // [rsp+38h] [rbp-70h]
  __int64 *v99; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v100; // [rsp+58h] [rbp-50h] BYREF
  __int64 v101; // [rsp+60h] [rbp-48h]
  unsigned __int64 v102; // [rsp+68h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v102 = __readfsqword(0x28u);
  v6 = a1 + 144;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 936) + 40LL))(*(_QWORD *)(v5 + 936));
  v8 = *(_QWORD *)(v5 + 136);
  v9 = *(__int64 **)(a1 + 88);
  v10 = v7;
  v11 = *(__int64 **)(a1 + 120);
  v91 = v9;
  if ( v8 <= v7 )
    v10 = v8;
  if ( v7 != -1 )
    v8 = v10;
  if ( v11 == v9 )
    return 0;
  v12 = v11[7];
  v89 = 0;
  v13 = v11 + 3;
  v14 = *(__int64 **)(a1 + 88);
  if ( v8 <= v12 )
    v12 = v8;
  v94 = v12 - *(_QWORD *)(a1 + 176);
  while ( 1 )
  {
    v15 = v13[4];
    if ( (__int64)v15 < v89 )
      goto LABEL_62;
    v16 = *(int *)(v6 + 52);
    v17 = *(_QWORD *)(v6 + 32);
    if ( (int)v16 <= 0 )
      v16 = 1;
    if ( v17 + v16 - 1 < v15 )
      goto LABEL_62;
    v18 = *((int *)v13 + 13);
    LOBYTE(v93) = 1;
    if ( (int)v18 <= 0 )
      v18 = 1;
    if ( v15 + v18 - 1 < v17 )
    {
LABEL_62:
      LOBYTE(v93) = 0;
      if ( v91 != v14 )
      {
        v40 = *v14;
        v41 = (unsigned __int64)v14;
        if ( (*v14 & 2) == 0 )
        {
          v41 = v14[2];
          if ( (*(_BYTE *)v41 & 2) != 0 )
          {
            v41 = v40 & 0xFFFFFFFFFFFFFFFCLL;
            v42 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v42 & 2) == 0 )
            {
              v43 = (unsigned __int64)v14;
              do
              {
                if ( *(_QWORD *)(v41 + 16) != v43 )
                  break;
                v43 = v41;
                v44 = v42 & 0xFFFFFFFFFFFFFFFCLL;
                v42 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFCLL);
                v41 = v44;
              }
              while ( (v42 & 2) == 0 );
            }
          }
          else
          {
            while ( (**(_BYTE **)(v41 + 8) & 2) == 0 )
              v41 = *(_QWORD *)(v41 + 8);
          }
        }
        v45 = v8;
        if ( (__int64 *)v41 != v9 )
        {
          v45 = *(_QWORD *)(v41 + 56);
          if ( v8 <= v45 )
            v45 = v8;
        }
        v94 = v45 - *(_QWORD *)(a1 + 176);
        if ( *((_DWORD *)v14 + 19) > *a3 && !a4 && (*(_BYTE *)(a1 + 201) & 4) == 0 )
        {
          v99 = v14;
          sub_22A6C0(a1, a3, (__int64)&v99, v94);
        }
        v91 = v14;
        LOBYTE(v93) = 0;
      }
    }
    if ( (v13[7] & 0x101C) != 0 )
      break;
    if ( v13[4] >= v8 )
      goto LABEL_33;
    v19 = v13[3];
    if ( (get_tinfo_property() & 0x2F) == 0xD && *((_DWORD *)v13 + 13) > *a3 )
      goto LABEL_33;
    v20 = *((_DWORD *)v13 + 14);
    if ( (v20 & 0x400) != 0 )
    {
      tinfo_property = get_tinfo_property();
      v101 = 0;
      if ( (tinfo_property & 0xF) == 0xB )
        v101 = get_tinfo_property();
      else
        copy_tinfo_t();
      tinfo_size = get_tinfo_size();
      v95 = *a3;
      clear_tinfo_t();
      if ( v95 != tinfo_size )
        goto LABEL_33;
      v19 = a1;
      v100 = v11;
      sub_22A6C0(a1, a3, (__int64)&v100, v94);
      v20 = *((_DWORD *)v13 + 14);
    }
    if ( (v20 & 1) != 0 || (v20 & 2) != 0 && v13[5] != -1 && (v19 = v13[3], (get_tinfo_property() & 0xF) == 0xB) )
    {
      v22 = v13[4];
      if ( (__int64)v22 >= v89 )
      {
        if ( (_BYTE)v93 )
        {
          if ( (*(_BYTE *)(v6 + 56) & 1) != 0 )
            goto LABEL_33;
          v19 = *(_QWORD *)(v6 + 32);
          v23 = *(int *)(v6 + 52);
          v24 = *((int *)v13 + 13);
          v25 = v23 != 0 && v22 >= v19;
          if ( (_DWORD)v24 )
          {
            if ( !v25 )
              goto LABEL_33;
            v22 = v22 + v24 - 1;
          }
          else if ( !v25 )
          {
            goto LABEL_33;
          }
          if ( v19 + v23 - 1 < v22 )
            goto LABEL_33;
        }
        v46 = *((_DWORD *)v13 + 14);
        if ( (v46 & 1) != 0 )
        {
          if ( !*((_DWORD *)v13 + 13) )
          {
            v47 = get_tinfo_property();
            v48 = 2;
            if ( (v47 & 0xF) != 0xB )
            {
              v48 = 0;
              if ( !*((_DWORD *)v13 + 13) )
              {
                v93 = v13[9];
                v49 = v93;
                if ( (get_tinfo_property() & 0x2F) == 0xD )
                {
                  v48 = (int)v93;
                }
                else
                {
                  v77 = v13[8];
                  for ( i = v77 + 40 * v13[9]; i != v77; v77 += 40 )
                  {
                    v79 = *(_QWORD *)(v77 + 16);
                    if ( *(_DWORD *)v79 == 12 )
                    {
                      ++v49;
                    }
                    else if ( *(_BYTE *)(v79 + 64) == 8 )
                    {
                      v49 += *(_DWORD *)(*(_QWORD *)(v79 + 72) + 284LL) == 2;
                    }
                  }
                  v48 = v49;
                }
              }
            }
            if ( 2 * v13[9] != v48 )
              goto LABEL_33;
            goto LABEL_82;
          }
          if ( v13[9] != 1 || *a3 && *a3 != *((_DWORD *)v13 + 13) )
            goto LABEL_33;
          v55 = v13[8];
          if ( *(_DWORD *)(v55 + 32) == 1 )
          {
            v56 = *(_QWORD *)(v55 + 16);
            if ( (*(_DWORD *)v56 == 4 || *(_DWORD *)v56 == 67 && *(_DWORD *)(v56 + 36) == *(_DWORD *)(v56 + 68))
              && *(_QWORD *)(v55 + 24) == v56 + 64
              && v56 == *(_QWORD *)(v55 + 8) )
            {
              if ( *(_BYTE *)(v56 + 32) == 1 )
              {
                v57 = *(_QWORD *)(a1 + 8);
                if ( *(_DWORD *)(v57 + 64) <= 1u )
                  sub_226E40(v19);
                if ( sub_129010(
                       *(_QWORD *)(*(_QWORD *)(v57 + 528) + 8LL),
                       *(_DWORD *)(v56 + 40),
                       *(_QWORD *)(v56 + 16),
                       0,
                       nullptr) )
                {
                  goto LABEL_82;
                }
                if ( !(unsigned __int8)sub_36E210(*(_QWORD *)(a1 + 8), *(unsigned int *)(v56 + 40), v58) )
                  goto LABEL_33;
              }
              v59 = *(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL);
              v60 = sub_1FBD10(v59, v56 + 32);
              if ( v60 )
              {
                v64 = *v60;
                v65 = *((int *)v60 + 4);
                if ( *(_QWORD *)(v64 + 440) < v65 )
                  sub_226EC0(v59, v56 + 32, v64, v61, v62, v63, v89, a3, v91, v93, v94);
                v66 = (unsigned int *)(*(_QWORD *)(v64 + 432) + 104 * v65);
                v67 = *v66;
                if ( (unsigned int)(v67 - 3) <= 1 && !v66[23] && (*((_BYTE *)v66 + 25) & 1) == 0 )
                {
                  v68 = *(_QWORD *)(a1 + 8);
                  if ( *(_BYTE *)(v68 + 320) )
                    goto LABEL_33;
                  v69 = v66[2];
                  if ( (_DWORD)v67 == 4 )
                    v69 = (unsigned __int16)v69;
                  if ( !(unsigned __int8)sub_36E210(v68, v69, v67) )
                  {
LABEL_33:
                    v26 = *(__int64 **)(a1 + 88);
                    v27 = v26;
                    goto LABEL_34;
                  }
                }
              }
LABEL_82:
              v46 = *((_DWORD *)v13 + 14);
            }
          }
        }
        if ( (v46 & 2) != 0 && v13[5] != -1 && (get_tinfo_property() & 0xF) == 0xB )
        {
          v100 = v11;
          v89 = sub_22A3E0((_QWORD *)a1, v11);
          if ( v89 == -1 )
            goto LABEL_33;
        }
      }
      v6 = (__int64)v13;
      v14 = v11;
    }
    if ( (*v11 & 2) == 0 )
    {
      v50 = (__int64 *)v11[2];
      if ( (*(_BYTE *)v50 & 2) != 0 )
      {
        v52 = (__int64 *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
        v53 = *v52;
        if ( (*v52 & 2) == 0 )
        {
          while ( (__int64 *)v52[2] == v11 )
          {
            v11 = v52;
            v54 = v53 & 0xFFFFFFFFFFFFFFFCLL;
            v53 = *(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v53 & 2) != 0 )
            {
              v11 = (__int64 *)v54;
              goto LABEL_90;
            }
            v52 = (__int64 *)v54;
          }
        }
        v11 = v52;
      }
      else
      {
        for ( j = (__int64 *)v50[1]; (*(_BYTE *)j & 2) == 0; j = (__int64 *)j[1] )
          v50 = j;
        v11 = v50;
      }
    }
LABEL_90:
    v9 = *(__int64 **)(a1 + 88);
    v26 = v9;
    if ( v9 == v11 )
      goto LABEL_138;
    v13 = v11 + 3;
  }
  v26 = *(__int64 **)(a1 + 88);
  v89 = 0;
  v27 = v26;
LABEL_34:
  if ( v11 != v26 )
    goto LABEL_35;
LABEL_138:
  v91 = v14;
  v27 = v11;
LABEL_35:
  if ( v91 == v27 )
    return 0;
  v28 = v91[7];
  v29 = *((int *)v91 + 19);
  if ( (_DWORD)v29 != -1 )
    v28 += v29;
  if ( v91[7] == v28 )
  {
    if ( !(_DWORD)v29 )
    {
      ++v28;
      goto LABEL_39;
    }
    if ( !under_debugger )
      sub_383060(52559);
LABEL_197:
    BUG();
  }
LABEL_39:
  v30 = *(_QWORD *)(a1 + 120);
  v31 = v89;
  if ( v28 >= v89 )
    v31 = v28;
  if ( v91 != (__int64 *)v30 )
  {
    do
    {
      v32 = *(_DWORD *)(v30 + 80);
      if ( (v32 & 1) != 0 || (v32 & 2) != 0 && *(_QWORD *)(v30 + 64) != -1 && (get_tinfo_property() & 0xF) == 0xB )
      {
        v33 = *(_QWORD *)(v30 + 56);
        v34 = *(int *)(v30 + 76);
        if ( (_DWORD)v34 != -1 )
          v33 += v34;
        if ( v33 > v31 && v11[7] >= v33 )
          v31 = v33;
      }
      if ( (*(_QWORD *)v30 & 2) == 0 )
      {
        v35 = *(_QWORD *)(v30 + 16);
        if ( (*(_BYTE *)v35 & 2) != 0 )
        {
          v71 = (_QWORD *)(*(_QWORD *)v30 & 0xFFFFFFFFFFFFFFFCLL);
          v72 = *v71;
          if ( (*v71 & 2) != 0 || v30 != v71[2] )
          {
LABEL_144:
            v30 = (unsigned __int64)v71;
          }
          else
          {
            while ( 1 )
            {
              v30 = v72 & 0xFFFFFFFFFFFFFFFCLL;
              v72 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v72 & 2) != 0 )
                break;
              v73 = v71;
              v71 = (_QWORD *)v30;
              if ( v73 != *(_QWORD **)(v30 + 16) )
                goto LABEL_144;
            }
          }
        }
        else
        {
          do
          {
            v30 = v35;
            v35 = *(_QWORD *)(v35 + 8);
          }
          while ( (*(_BYTE *)v35 & 2) == 0 );
        }
      }
    }
    while ( v91 != (__int64 *)v30 );
    v26 = *(__int64 **)(a1 + 88);
  }
  v36 = v91;
  if ( (*v91 & 2) != 0 )
  {
    v37 = v91;
  }
  else
  {
    v74 = v91[2];
    if ( (*(_BYTE *)v74 & 2) == 0 )
    {
      for ( k = *(_QWORD *)(v74 + 8); (*(_BYTE *)k & 2) == 0; k = *(_QWORD *)(k + 8) )
        v74 = k;
      goto LABEL_166;
    }
    v37 = (__int64 *)(*v91 & 0xFFFFFFFFFFFFFFFCLL);
    for ( m = *v37; (m & 2) == 0; v37 = (__int64 *)v76 )
    {
      if ( v36 != (__int64 *)v37[2] )
        break;
      v36 = v37;
      v76 = m & 0xFFFFFFFFFFFFFFFCLL;
      m = *(_QWORD *)(m & 0xFFFFFFFFFFFFFFFCLL);
    }
  }
  while ( v37 != v26 )
  {
    if ( v37[7] >= v31 )
    {
      v83 = v8;
      v92 = v37;
      if ( v8 < v31 )
        v83 = v31;
      if ( v83 > v37[7] )
        v83 = v37[7];
      goto LABEL_177;
    }
    if ( (*v37 & 2) == 0 )
    {
      v38 = (__int64 *)v37[2];
      if ( (*(_BYTE *)v38 & 2) != 0 )
      {
        v74 = *v37 & 0xFFFFFFFFFFFFFFFCLL;
        v81 = *(_QWORD *)v74;
        if ( (*(_QWORD *)v74 & 2) != 0 || *(__int64 **)(v74 + 16) != v37 )
        {
LABEL_166:
          v37 = (__int64 *)v74;
        }
        else
        {
          while ( 1 )
          {
            v37 = (__int64 *)(v81 & 0xFFFFFFFFFFFFFFFCLL);
            v81 = *(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v81 & 2) != 0 )
              break;
            v82 = v74;
            v74 = (unsigned __int64)v37;
            if ( v37[2] != v82 )
              goto LABEL_166;
          }
        }
      }
      else
      {
        for ( n = (__int64 *)v38[1]; (*(_BYTE *)n & 2) == 0; n = (__int64 *)n[1] )
          v38 = n;
        v37 = v38;
      }
    }
  }
  v83 = v8;
  v92 = v37;
  if ( v8 < v31 )
    v83 = v31;
LABEL_177:
  v84 = *(_QWORD *)(a1 + 112);
  v85 = v83 - *(_QWORD *)(a1 + 176);
  if ( v84 == *(_QWORD *)(a1 + 120) )
    LODWORD(v86) = -1;
  else
    v86 = *(_QWORD *)(v84 + 56);
  v87 = (int)v31 - (int)v86;
  if ( v87 > v85 )
  {
    if ( !under_debugger )
      sub_383060(52560);
    goto LABEL_197;
  }
  if ( *a3 )
  {
    v88 = v85 % *a3;
    if ( v87 <= v85 - v88 )
      v85 -= v88;
  }
  if ( *a2 >= v85 || *(char *)(a1 + 200) < 0 && v85 % *(int *)(a1 + 196) )
    return 0;
  *(_QWORD *)(a1 + 128) = v31;
  *(_QWORD *)(a1 + 120) = v92;
  *a2 = v85;
  return 1;
}
