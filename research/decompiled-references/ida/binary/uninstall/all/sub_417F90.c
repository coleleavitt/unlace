__int64 __fastcall sub_417F90(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // r13d
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 *v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rax
  __int64 *v19; // rdi
  unsigned int v21; // esi
  int v22; // ecx
  int j; // ebp
  __int64 v24; // rax
  int v25; // r13d
  __int64 k; // r15
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ebp
  __int64 v32; // r12
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r12
  int m; // ebp
  __int64 v37; // rdi
  _DWORD *v38; // rdi
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  int v42; // ecx
  __int64 v43; // rbx
  int v44; // r13d
  __int64 v45; // rsi
  int v46; // edx
  __int64 v47; // rax
  int v48; // ebp
  bool i; // cc
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // r13
  __int64 v62; // rbp
  int v63; // ebx
  _DWORD *v64; // rax
  _DWORD *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  int v69; // ecx
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rax
  __int64 *v73; // rdi
  __int64 v74; // rax
  __int64 *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 *v78; // rdi
  const char *v79; // rsi
  __int64 v80; // [rsp+18h] [rbp-1D0h]
  __int64 v81; // [rsp+20h] [rbp-1C8h]
  int v82; // [rsp+2Ch] [rbp-1BCh]
  int v83; // [rsp+30h] [rbp-1B8h]
  int v84; // [rsp+34h] [rbp-1B4h]
  __int64 v86; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v87; // [rsp+48h] [rbp-1A0h] BYREF
  int v88; // [rsp+54h] [rbp-194h] BYREF
  __int64 v89; // [rsp+58h] [rbp-190h] BYREF
  __int64 v90; // [rsp+60h] [rbp-188h] BYREF
  int v91; // [rsp+6Ch] [rbp-17Ch] BYREF
  _QWORD v92[32]; // [rsp+70h] [rbp-178h]
  int v93; // [rsp+170h] [rbp-78h] BYREF
  int v94; // [rsp+174h] [rbp-74h]
  _DWORD *v95; // [rsp+178h] [rbp-70h]
  char *v96; // [rsp+180h] [rbp-68h]
  int v97; // [rsp+188h] [rbp-60h] BYREF
  char v98; // [rsp+18Ch] [rbp-5Ch] BYREF
  int v99; // [rsp+190h] [rbp-58h]
  unsigned int v100; // [rsp+194h] [rbp-54h]
  __int64 v101; // [rsp+198h] [rbp-50h]
  unsigned int v102; // [rsp+1A0h] [rbp-48h]

  v83 = 0;
  if ( a3 <= 1 )
  {
    sub_458930(a2, 1, a4, "?options? list");
    return 1;
  }
  v93 = 1;
  v6 = 1;
  v94 = 0;
  v96 = nullptr;
  v97 = 0;
  v99 = 0;
  v101 = a2;
  v102 = 0;
  v81 = 0;
  v84 = 0;
  if ( a3 - 1 <= 1 )
  {
LABEL_23:
    v10 = v94;
    goto LABEL_24;
  }
  do
  {
    while ( 2 )
    {
      if ( (unsigned int)sub_4584C0(
                           a2,
                           *(_QWORD *)(a4 + 8LL * v6),
                           (unsigned int)off_654060,
                           8,
                           (unsigned int)"option",
                           0,
                           (__int64)&v91) )
        goto LABEL_21;
      switch ( v91 )
      {
        case 0:
          ++v6;
          v94 = 0;
          if ( a3 - 1 > v6 )
            continue;
          goto LABEL_7;
        case 1:
          if ( a3 - 2 == v6 )
          {
            if ( v97 > 1 )
              Tcl_Free((__int64)v96);
            v79 = "\"-command\" option must be followed by comparison command";
            goto LABEL_150;
          }
          v43 = *(_QWORD *)(a4 + 8LL * v6 + 8);
          v94 = 3;
          v44 = v6 + 1;
          v81 = v43;
          break;
        case 2:
          ++v6;
          v93 = 0;
          if ( a3 - 1 > v6 )
            continue;
          goto LABEL_7;
        case 3:
          ++v6;
          v94 = 4;
          if ( a3 - 1 > v6 )
            continue;
          goto LABEL_7;
        case 4:
          ++v6;
          v93 = 1;
          if ( a3 - 1 > v6 )
            continue;
          goto LABEL_7;
        case 5:
          if ( v97 > 1 )
            Tcl_Free((__int64)v96);
          if ( a3 - 2 == v6 )
          {
            v79 = "\"-index\" option must be followed by list index";
LABEL_150:
            sub_48B710(a2, (_DWORD)v79, 0, v7, v8, v9);
            return 1;
          }
          v45 = *(_QWORD *)(a4 + 8LL * v6 + 8);
          if ( *(_UNKNOWN ***)(v45 + 24) == &off_655E20 )
          {
            v55 = *(_QWORD *)(v45 + 32);
            v56 = v55 + 16;
            LODWORD(v55) = *(_DWORD *)(v55 + 8);
            v90 = v56;
            v97 = v55;
          }
          else if ( (unsigned int)sub_46FD90(a2, v45, &v97, &v90) )
          {
            return 1;
          }
          v46 = v97;
          if ( v97 )
          {
            if ( v97 == 1 )
            {
              v96 = &v98;
            }
            else
            {
              v47 = sub_40FB00(4 * v97);
              v46 = v97;
              v96 = (char *)v47;
            }
          }
          else
          {
            v96 = nullptr;
          }
          v48 = 0;
          for ( i = v46 <= 0; !i; i = v97 <= v48 )
          {
            if ( (unsigned int)sub_49FAC0(a2, *(_QWORD *)(v90 + 8LL * v48), 4294967294LL, &v96[4 * v48]) )
            {
              if ( v97 > 1 )
                Tcl_Free((__int64)v96);
              v67 = sub_48F930((unsigned int)"\n    (-index option item number %d)", v48, v50, v51, v52, v53);
              sub_40ABA0(a2, v67, v68, v69, v70, v71);
              return 1;
            }
            ++v48;
          }
          v44 = v6 + 1;
          break;
        case 6:
          v84 = 1;
          goto LABEL_6;
        case 7:
          ++v6;
          v94 = 1;
          if ( a3 - 1 > v6 )
            continue;
          goto LABEL_7;
        case 8:
          ++v6;
          v83 = 1;
          if ( a3 - 1 > v6 )
            continue;
          goto LABEL_7;
        case 9:
          ++v6;
          v94 = 2;
          if ( a3 - 1 > v6 )
            continue;
          goto LABEL_7;
        case 10:
          ++v6;
          v99 = 1;
          if ( a3 - 1 > v6 )
            continue;
          goto LABEL_7;
        default:
LABEL_6:
          if ( a3 - 1 <= ++v6 )
            goto LABEL_7;
          continue;
      }
      break;
    }
    v6 = v44 + 1;
  }
  while ( a3 - 1 > v6 );
LABEL_7:
  if ( !v83 )
    goto LABEL_23;
  v10 = v94;
  if ( !v94 )
  {
    v94 = 8;
    v80 = *(_QWORD *)(a4 + 8LL * a3 - 8);
    goto LABEL_25;
  }
LABEL_24:
  v80 = *(_QWORD *)(a4 + 8LL * a3 - 8);
  if ( v10 == 3 )
  {
    v80 = sub_470170(a2, *(_QWORD *)(a4 + 8LL * a3 - 8));
    if ( v80 )
    {
      v11 = sub_47B2A0(v81);
      v12 = sub_496740();
      *(_DWORD *)v12 = 0;
      v13 = off_656088;
      ++*(_DWORD *)v11;
      *(_DWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 8) = v13;
      if ( !(unsigned int)sub_46FBF0(a2, v11, v12) )
      {
        v76 = sub_47B0B0(a2, v11, v14);
        sub_46FBF0(a2, v11, v76);
        v95 = (_DWORD *)v11;
        goto LABEL_25;
      }
      v15 = *(_DWORD *)v11 - 1;
      v16 = *(_DWORD *)v11 == 1;
      *(_DWORD *)v11 = v15;
      if ( v15 < 0 || v16 )
      {
        v57 = *(_QWORD *)(v11 + 24);
        if ( v57 && *(_QWORD *)(v57 + 8) )
        {
          sub_47B120(v11);
        }
        else
        {
          v58 = *(__int64 **)(v11 + 8);
          if ( v58 && v58 != off_656088 )
            Tcl_Free((__int64)v58);
          *(_DWORD *)(v11 + 16) = -1;
          sub_496830(v11);
        }
      }
      v17 = *(_DWORD *)v80 - 1;
      v16 = *(_DWORD *)v80 == 1;
      *(_DWORD *)v80 = v17;
      if ( v17 < 0 || v16 )
      {
        v77 = *(_QWORD *)(v80 + 24);
        if ( v77 && *(_QWORD *)(v77 + 8) )
        {
          sub_47B120(v80);
        }
        else
        {
          v78 = *(__int64 **)(v80 + 8);
          if ( v78 && v78 != off_656088 )
            Tcl_Free((__int64)v78);
          *(_DWORD *)(v80 + 16) = -1;
          sub_496830(v80);
        }
      }
      if ( *(int *)v12 <= 0 )
      {
        v18 = *(_QWORD *)(v12 + 24);
        if ( v18 && *(_QWORD *)(v18 + 8) )
        {
          sub_47B120(v12);
        }
        else
        {
          v19 = *(__int64 **)(v12 + 8);
          if ( v19 && v19 != off_656088 )
            Tcl_Free((__int64)v19);
          *(_DWORD *)(v12 + 16) = -1;
          sub_496830(v12);
        }
      }
    }
LABEL_21:
    if ( v97 > 1 )
    {
      Tcl_Free((__int64)v96);
      return 1;
    }
    return 1;
  }
LABEL_25:
  if ( *(_UNKNOWN ***)(v80 + 24) == &off_655E20 )
  {
    v41 = *(_QWORD *)(v80 + 32);
    v21 = 0;
    v42 = *(_DWORD *)(v41 + 8);
    v89 = v41 + 16;
    v88 = v42;
  }
  else
  {
    v21 = sub_46FD90(a2, v80, &v88, &v89);
  }
  v102 = v21;
  if ( !v21 )
  {
    v22 = v88;
    if ( v88 > 0 )
    {
      v100 = v88;
      v82 = v97;
      if ( v94 != 8 && v94 != 4 )
        v21 = v94;
      for ( j = 0; j <= 30; ++j )
      {
        v24 = j;
        v92[v24] = 0;
      }
      v25 = 0;
      for ( k = sub_40FB00(24 * v22); v25 < v88; v92[v31] = v32 )
      {
        if ( v82 )
        {
          v27 = v25;
          v28 = sub_417E40(*(_QWORD *)(v89 + 8LL * v25), (__int64)&v93);
          if ( v102 )
            goto LABEL_51;
        }
        else
        {
          v27 = v25;
          v28 = *(_QWORD *)(v89 + 8LL * v25);
        }
        if ( v21 )
        {
          if ( v21 == 1 )
          {
            if ( *(_UNKNOWN ***)(v28 + 24) == &off_6560E0 )
            {
              v54 = *(_QWORD *)(v28 + 32);
              v87 = v54;
            }
            else
            {
              if ( (unsigned int)sub_47BF00(v101, v28, &v87) )
                goto LABEL_146;
              v54 = v87;
            }
            *(_QWORD *)(k + 24 * v27) = v54;
          }
          else if ( v21 == 2 )
          {
            if ( (unsigned int)sub_47BA50(v101, v28, &v86) )
            {
LABEL_146:
              v102 = 1;
              goto LABEL_51;
            }
            *(_QWORD *)(k + 24 * v27) = v86;
          }
          else
          {
            *(_QWORD *)(k + 24 * v27) = v28;
          }
        }
        else
        {
          v29 = *(_QWORD *)(v28 + 8);
          if ( !v29 )
            v29 = sub_47B3B0(v28);
          *(_QWORD *)(24 * v27 + k) = v29;
        }
        v30 = v27;
        if ( !v84 )
          v30 = *(_QWORD *)(v89 + 8 * v27);
        *(_QWORD *)(24 * v27 + k + 8) = v30;
        v31 = 0;
        *(_QWORD *)(24 * v27 + k + 16) = 0;
        v32 = 24 * v27 + k;
        if ( v92[0] )
        {
          v33 = 0;
          do
          {
            ++v31;
            v34 = sub_417CD0(v92[v33], v32, (__int64)&v93);
            v92[v33] = 0;
            v33 = v31;
            v32 = v34;
          }
          while ( v92[v31] );
          if ( v31 >= 30 )
            v31 = 29;
        }
        ++v25;
      }
      v35 = v92[0];
      for ( m = 1; m <= 29; ++m )
      {
        v37 = v92[m];
        v35 = sub_417CD0(v37, v35, (__int64)&v93);
      }
      if ( !v102 )
      {
        v59 = sub_46EEB0(v100, 0);
        v60 = *(_QWORD *)(v59 + 32);
        v61 = v59;
        v62 = v60 + 16;
        if ( v84 )
        {
          v63 = 0;
          while ( v35 )
          {
            v64 = (_DWORD *)sub_47BD00(*(_QWORD *)(v35 + 8));
            v35 = *(_QWORD *)(v35 + 16);
            ++*v64;
            *(_QWORD *)(v62 + 8LL * v63++) = v64;
          }
        }
        else
        {
          v63 = 0;
          while ( v35 )
          {
            v65 = *(_DWORD **)(v35 + 8);
            v35 = *(_QWORD *)(v35 + 16);
            v66 = v63++;
            ++*v65;
            *(_QWORD *)(v62 + 8 * v66) = v65;
          }
        }
        *(_DWORD *)(v60 + 8) = v63;
        sub_48AFD0(a2, v61);
      }
LABEL_51:
      Tcl_Free(k);
      if ( v21 == 3 )
      {
        v38 = v95;
        v39 = *v95 - 1;
        v16 = *v95 == 1;
        *v95 = v39;
        if ( v39 < 0 || v16 )
        {
          v74 = *((_QWORD *)v38 + 3);
          if ( v74 && *(_QWORD *)(v74 + 8) )
          {
            sub_47B120(v38);
          }
          else
          {
            v75 = *((__int64 **)v38 + 1);
            if ( v75 && v75 != off_656088 )
            {
              Tcl_Free(*((_QWORD *)v38 + 1));
              v38 = v95;
            }
            v38[4] = -1;
            sub_496830(v38);
          }
        }
        v40 = *(_DWORD *)v80 - 1;
        v16 = *(_DWORD *)v80 == 1;
        *(_DWORD *)v80 = v40;
        if ( v40 < 0 || v16 )
        {
          v72 = *(_QWORD *)(v80 + 24);
          if ( v72 && *(_QWORD *)(v72 + 8) )
          {
            sub_47B120(v80);
          }
          else
          {
            v73 = *(__int64 **)(v80 + 8);
            if ( v73 && v73 != off_656088 )
              Tcl_Free((__int64)v73);
            *(_DWORD *)(v80 + 16) = -1;
            sub_496830(v80);
          }
        }
        v95 = nullptr;
      }
    }
  }
  if ( v97 > 1 )
    Tcl_Free((__int64)v96);
  return v102;
}

