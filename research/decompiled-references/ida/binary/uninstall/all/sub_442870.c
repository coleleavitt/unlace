__int64 __fastcall sub_442870(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  const char *v7; // rcx
  __int64 v8; // rsi
  int v9; // eax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // edx
  __int64 v15; // rsi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r15
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // rdi
  const char *v29; // rbx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rdi
  int v33; // eax
  bool v34; // zf
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rsi
  int *v39; // r13
  __int64 v40; // r14
  _DWORD *v41; // rax
  unsigned int v42; // ebp
  int v43; // eax
  int v44; // eax
  int v45; // eax
  __int64 v46; // rax
  __int64 *v47; // rdi
  __int64 v48; // rcx
  int *v49; // rax
  int v50; // eax
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // rdi
  int v56; // eax
  int *v57; // rdi
  int v58; // eax
  int v59; // r9d
  __int64 v60; // rax
  __int64 v61; // rdi
  int v62; // eax
  int *v63; // rdi
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  __int64 v69; // rax
  __int64 *v70; // rdi
  int v71; // r8d
  int v72; // r9d
  __int64 v73; // rax
  __int64 *v74; // rax
  __int64 v75; // rax
  __int64 *v76; // rax
  int *v77; // rax
  int *v78; // rbx
  int v79; // eax
  __int64 v80; // rax
  __int64 *v81; // rdi
  __int64 v82; // rax
  __int64 *v83; // rdi
  __int64 v84; // rax
  __int64 *v85; // rdi
  __int64 v86; // rax
  __int64 *v87; // rdi
  __int64 v88; // rax
  __int64 *v89; // rdi
  __int64 v90; // rax
  __int64 *v91; // rdi
  __int64 v92; // rax
  __int64 *v93; // rax
  __int64 v94; // rax
  __int64 *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rdx
  int v98; // ecx
  int v99; // r8d
  int v100; // r9d
  int v101; // r9d
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 *v104; // rdi
  __int64 v105; // rax
  __int64 *v106; // rdi
  __int64 v107; // rax
  __int64 *v108; // rdi
  int v109; // eax
  __int64 v110; // rax
  __int64 *v111; // rdi
  __int64 v112; // [rsp+20h] [rbp-88h]
  int v113; // [rsp+28h] [rbp-80h] BYREF
  int v114; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int64 v115; // [rsp+30h] [rbp-78h] BYREF
  __int64 v116; // [rsp+38h] [rbp-70h] BYREF
  int *v117; // [rsp+40h] [rbp-68h] BYREF
  int v118; // [rsp+48h] [rbp-60h] BYREF
  int v119; // [rsp+4Ch] [rbp-5Ch] BYREF
  _BYTE v120[40]; // [rsp+50h] [rbp-58h] BYREF

  v7 = "dictionary filterType ...";
  if ( a3 <= 2 )
    goto LABEL_11;
  v8 = a4[2];
  v9 = sub_4584C0(a2, v8, (unsigned int)&off_6554E0, 8, (unsigned int)"filterType", 0, (__int64)&v119);
  v13 = 1;
  if ( !v9 )
  {
    if ( v119 == 1 )
    {
      v7 = "dictionary script {keyVar valueVar} filterScript";
      if ( a3 == 5 )
      {
        v15 = a4[3];
        if ( *(_UNKNOWN ***)(v15 + 24) == &off_655E20 )
        {
          v37 = *(_QWORD *)(v15 + 32);
          v115 = v37 + 16;
          v17 = *(_DWORD *)(v37 + 8);
          v114 = v17;
        }
        else
        {
          v16 = sub_46FD90(a2, v15, &v114, &v115);
          v13 = 1;
          if ( v16 )
            return v13;
          v17 = v114;
        }
        if ( v17 != 2 )
        {
          sub_48B860(a2, "must have exactly two variable names", 0);
          return 1;
        }
        v38 = a4[1];
        v39 = *(int **)v115;
        v40 = *(_QWORD *)(v115 + 8);
        v41 = (_DWORD *)a4[4];
        ++**(_DWORD **)v115;
        ++*(_DWORD *)v40;
        v112 = (__int64)v41;
        ++*v41;
        v42 = sub_440900(a2, v38, (__int64)v120, &v116, &v117, &v118);
        if ( v42 )
        {
          v43 = *v39 - 1;
          v34 = *v39 == 1;
          *v39 = v43;
          if ( v43 < 0 || v34 )
          {
            v82 = *((_QWORD *)v39 + 3);
            if ( v82 && *(_QWORD *)(v82 + 8) )
            {
              sub_47B120(v39);
            }
            else
            {
              v83 = *((__int64 **)v39 + 1);
              if ( v83 && v83 != off_656088 )
                Tcl_Free((__int64)v83);
              v39[4] = -1;
              sub_496830(v39);
            }
          }
          v44 = *(_DWORD *)v40 - 1;
          v34 = *(_DWORD *)v40 == 1;
          *(_DWORD *)v40 = v44;
          if ( v44 < 0 || v34 )
          {
            v80 = *(_QWORD *)(v40 + 24);
            if ( v80 && *(_QWORD *)(v80 + 8) )
            {
              sub_47B120(v40);
            }
            else
            {
              v81 = *(__int64 **)(v40 + 8);
              if ( v81 && v81 != off_656088 )
                Tcl_Free((__int64)v81);
              *(_DWORD *)(v40 + 16) = -1;
              sub_496830(v40);
            }
          }
          v45 = *(_DWORD *)v112 - 1;
          v34 = *(_DWORD *)v112 == 1;
          *(_DWORD *)v112 = v45;
          if ( v45 < 0 || v34 )
          {
            v46 = *(_QWORD *)(v112 + 24);
            if ( v46 && *(_QWORD *)(v46 + 8) )
            {
              sub_47B120(v112);
            }
            else
            {
              v47 = *(__int64 **)(v112 + 8);
              if ( v47 && v47 != off_656088 )
                Tcl_Free((__int64)v47);
              *(_DWORD *)(v112 + 16) = -1;
              sub_496830(v112);
            }
          }
          return 1;
        }
        v22 = sub_4401E0(a2, v38);
        while ( !v118 )
        {
          v48 = v116;
          v49 = v117;
          ++*(_DWORD *)v116;
          ++*v49;
          if ( !sub_4A4160(a2, v39, 0, v48, 512) )
          {
            sub_48B350(a2);
            v102 = *((_QWORD *)v39 + 1);
            if ( !v102 )
              LODWORD(v102) = sub_47B3B0(v39);
            sub_48B710(a2, (unsigned int)"couldn't set key variable: \"", v102, (unsigned int)"\"", 0, v101);
LABEL_161:
            v42 = 1;
            goto LABEL_71;
          }
          if ( !sub_4A4160(a2, v40, 0, v117, 512) )
          {
            sub_48B350(a2);
            v60 = *(_QWORD *)(v40 + 8);
            if ( !v60 )
              LODWORD(v60) = sub_47B3B0(v40);
            sub_48B710(a2, (unsigned int)"couldn't set value variable: \"", v60, (unsigned int)"\"", 0, v59);
            goto LABEL_71;
          }
          v50 = sub_40B720(a2, v112, 0, *(_QWORD **)(a2 + 952), 4u);
          v42 = v50;
          if ( v50 == 1 )
          {
            v96 = sub_48F930(
                    (unsigned int)"\n    (\"dict filter\" script line %d)",
                    *(_DWORD *)(a2 + 16),
                    v51,
                    v52,
                    v53,
                    v54);
            sub_40ABA0(a2, v96, v97, v98, v99, v100);
LABEL_71:
            sub_4409E0((__int64)v120);
            v61 = v116;
            v62 = *(_DWORD *)v116 - 1;
            v34 = *(_DWORD *)v116 == 1;
            *(_DWORD *)v116 = v62;
            if ( v62 < 0 || v34 )
            {
              v94 = *(_QWORD *)(v61 + 24);
              if ( v94 && *(_QWORD *)(v94 + 8) )
              {
                sub_47B120(v61);
              }
              else
              {
                v95 = *(__int64 **)(v61 + 8);
                if ( v95 && v95 != off_656088 )
                {
                  Tcl_Free(*(_QWORD *)(v61 + 8));
                  v61 = v116;
                }
                *(_DWORD *)(v61 + 16) = -1;
                sub_496830(v61);
              }
            }
            v63 = v117;
            v64 = *v117 - 1;
            v34 = *v117 == 1;
            *v117 = v64;
            if ( v64 < 0 || v34 )
            {
              v92 = *((_QWORD *)v63 + 3);
              if ( v92 && *(_QWORD *)(v92 + 8) )
              {
                sub_47B120(v63);
              }
              else
              {
                v93 = *((__int64 **)v63 + 1);
                if ( v93 && v93 != off_656088 )
                {
                  Tcl_Free(*((_QWORD *)v63 + 1));
                  v63 = v117;
                }
                v63[4] = -1;
                sub_496830(v63);
              }
            }
            v65 = *v39 - 1;
            v34 = *v39 == 1;
            *v39 = v65;
            if ( v65 < 0 || v34 )
            {
              v105 = *((_QWORD *)v39 + 3);
              if ( v105 && *(_QWORD *)(v105 + 8) )
              {
                sub_47B120(v39);
              }
              else
              {
                v106 = *((__int64 **)v39 + 1);
                if ( v106 && v106 != off_656088 )
                  Tcl_Free((__int64)v106);
                v39[4] = -1;
                sub_496830(v39);
              }
            }
            v66 = *(_DWORD *)v40 - 1;
            v34 = *(_DWORD *)v40 == 1;
            *(_DWORD *)v40 = v66;
            if ( v66 < 0 || v34 )
            {
              v103 = *(_QWORD *)(v40 + 24);
              if ( v103 && *(_QWORD *)(v103 + 8) )
              {
                sub_47B120(v40);
              }
              else
              {
                v104 = *(__int64 **)(v40 + 8);
                if ( v104 && v104 != off_656088 )
                  Tcl_Free((__int64)v104);
                *(_DWORD *)(v40 + 16) = -1;
                sub_496830(v40);
              }
            }
            v67 = *(_DWORD *)v112 - 1;
            v34 = *(_DWORD *)v112 == 1;
            *(_DWORD *)v112 = v67;
            if ( v67 < 0 || v34 )
            {
              v107 = *(_QWORD *)(v112 + 24);
              if ( v107 && *(_QWORD *)(v107 + 8) )
              {
                sub_47B120(v112);
              }
              else
              {
                v108 = *(__int64 **)(v112 + 8);
                if ( v108 && v108 != off_656088 )
                  Tcl_Free((__int64)v108);
                *(_DWORD *)(v112 + 16) = -1;
                sub_496830(v112);
              }
            }
            v68 = *(_DWORD *)v22 - 1;
            v34 = *(_DWORD *)v22 == 1;
            *(_DWORD *)v22 = v68;
            if ( v68 < 0 || v34 )
            {
              v69 = *(_QWORD *)(v22 + 24);
              if ( v69 && *(_QWORD *)(v69 + 8) )
              {
                sub_47B120(v22);
                return v42;
              }
              else
              {
                v70 = *(__int64 **)(v22 + 8);
                if ( v70 && v70 != off_656088 )
                  Tcl_Free((__int64)v70);
                *(_DWORD *)(v22 + 16) = -1;
                sub_496830(v22);
                return v42;
              }
            }
            else
            {
              return v42;
            }
          }
          if ( v50 <= 1 )
          {
            if ( v50 )
              goto LABEL_71;
            v77 = (int *)sub_48B5D0(a2);
            ++*v77;
            v78 = v77;
            sub_48B350(a2);
            if ( (unsigned int)sub_47BB80(a2, v78, &v113) )
            {
              v109 = *v78 - 1;
              v34 = *v78 == 1;
              *v78 = v109;
              if ( v109 < 0 || v34 )
              {
                v110 = *((_QWORD *)v78 + 3);
                if ( v110 && *(_QWORD *)(v110 + 8) )
                {
                  v42 = 1;
                  sub_47B120(v78);
                }
                else
                {
                  v111 = *((__int64 **)v78 + 1);
                  if ( v111 && v111 != off_656088 )
                    Tcl_Free((__int64)v111);
                  v78[4] = -1;
                  v42 = 1;
                  sub_496830(v78);
                }
                goto LABEL_71;
              }
              goto LABEL_161;
            }
            v79 = *v78 - 1;
            v34 = *v78 == 1;
            *v78 = v79;
            if ( v79 < 0 || v34 )
            {
              v90 = *((_QWORD *)v78 + 3);
              if ( v90 && *(_QWORD *)(v90 + 8) )
              {
                sub_47B120(v78);
              }
              else
              {
                v91 = *((__int64 **)v78 + 1);
                if ( v91 && v91 != off_656088 )
                  Tcl_Free((__int64)v91);
                v78[4] = -1;
                sub_496830(v78);
              }
            }
            if ( v113 )
              sub_440560(a2, v22, v116, v117, v53, v54);
          }
          else
          {
            if ( v50 == 3 )
            {
              sub_48B350(a2);
              sub_4409E0((__int64)v120);
            }
            else if ( v50 != 4 )
            {
              goto LABEL_71;
            }
            v42 = 0;
          }
          v55 = v116;
          v56 = *(_DWORD *)v116 - 1;
          v34 = *(_DWORD *)v116 == 1;
          *(_DWORD *)v116 = v56;
          if ( v56 < 0 || v34 )
          {
            v75 = *(_QWORD *)(v55 + 24);
            if ( v75 && *(_QWORD *)(v75 + 8) )
            {
              sub_47B120(v55);
            }
            else
            {
              v76 = *(__int64 **)(v55 + 8);
              if ( v76 && v76 != off_656088 )
              {
                Tcl_Free(*(_QWORD *)(v55 + 8));
                v55 = v116;
              }
              *(_DWORD *)(v55 + 16) = -1;
              sub_496830(v55);
            }
          }
          v57 = v117;
          v58 = *v117 - 1;
          v34 = *v117 == 1;
          *v117 = v58;
          if ( v58 < 0 || v34 )
          {
            v73 = *((_QWORD *)v57 + 3);
            if ( v73 && *(_QWORD *)(v73 + 8) )
            {
              sub_47B120(v57);
            }
            else
            {
              v74 = *((__int64 **)v57 + 1);
              if ( v74 && v74 != off_656088 )
              {
                Tcl_Free(*((_QWORD *)v57 + 1));
                v57 = v117;
              }
              v57[4] = -1;
              sub_496830(v57);
            }
          }
          sub_440A10((__int64)v120, &v116, &v117, &v118, v53, v54);
        }
        v33 = *v39 - 1;
        v34 = *v39 == 1;
        *v39 = v33;
        if ( v33 < 0 || v34 )
        {
          v88 = *((_QWORD *)v39 + 3);
          if ( v88 && *(_QWORD *)(v88 + 8) )
          {
            sub_47B120(v39);
          }
          else
          {
            v89 = *((__int64 **)v39 + 1);
            if ( v89 && v89 != off_656088 )
              Tcl_Free((__int64)v89);
            v39[4] = -1;
            sub_496830(v39);
          }
        }
        v35 = *(_DWORD *)v40 - 1;
        v34 = *(_DWORD *)v40 == 1;
        *(_DWORD *)v40 = v35;
        if ( v35 < 0 || v34 )
        {
          v86 = *(_QWORD *)(v40 + 24);
          if ( v86 && *(_QWORD *)(v86 + 8) )
          {
            sub_47B120(v40);
          }
          else
          {
            v87 = *(__int64 **)(v40 + 8);
            if ( v87 && v87 != off_656088 )
              Tcl_Free((__int64)v87);
            *(_DWORD *)(v40 + 16) = -1;
            sub_496830(v40);
          }
        }
        v36 = *(_DWORD *)v112 - 1;
        v34 = *(_DWORD *)v112 == 1;
        *(_DWORD *)v112 = v36;
        if ( v36 < 0 || v34 )
        {
          v84 = *(_QWORD *)(v112 + 24);
          if ( v84 && *(_QWORD *)(v84 + 8) )
          {
            sub_47B120(v112);
          }
          else
          {
            v85 = *(__int64 **)(v112 + 8);
            if ( v85 && v85 != off_656088 )
              Tcl_Free((__int64)v85);
            *(_DWORD *)(v112 + 16) = -1;
            sub_496830(v112);
          }
        }
        sub_4409E0((__int64)v120);
LABEL_44:
        sub_48AFD0(a2, v22);
        return 0;
      }
    }
    else if ( v119 )
    {
      if ( v119 != 2 )
      {
        sub_47D740((unsigned int)"unexpected fallthrough", v8, 1, v10, v11, v12);
        return 1;
      }
      v7 = "dictionary value globPattern";
      if ( a3 == 4 )
      {
        v18 = a4[1];
        v19 = sub_440900(a2, v18, (__int64)v120, &v116, &v117, &v118);
        v13 = 1;
        if ( v19 )
          return v13;
        v20 = a4[3];
        v21 = *(_QWORD *)(v20 + 8);
        if ( !v21 )
          v21 = sub_47B3B0(v20);
        v22 = sub_4401E0(v20, v18);
        while ( !v118 )
        {
          v25 = *((_QWORD *)v117 + 1);
          if ( !v25 )
            v25 = sub_47B3B0(v117);
          if ( (unsigned int)sub_49EAC0(v25, v21) )
            sub_440560(a2, v22, v116, v117, v23, v24);
          sub_440A10((__int64)v120, &v116, &v117, &v118, v23, v24);
        }
        goto LABEL_44;
      }
    }
    else
    {
      if ( a3 == 4 )
      {
        v26 = a4[1];
        v27 = sub_440900(a2, v26, (__int64)v120, &v116, &v117, &v118);
        v13 = 1;
        if ( v27 )
          return v13;
        v28 = a4[3];
        v29 = *(const char **)(v28 + 8);
        if ( !v29 )
          v29 = (const char *)sub_47B3B0(v28);
        v22 = sub_4401E0(v28, v26);
        if ( strpbrk(v29, "*[?\\") )
        {
          while ( !v118 )
          {
            v32 = *(_QWORD *)(v116 + 8);
            if ( !v32 )
              v32 = sub_47B3B0(v116);
            if ( (unsigned int)sub_49EAC0(v32, v29) )
              sub_440560(a2, v22, v116, v117, v30, v31);
            sub_440A10((__int64)v120, &v116, &v117, &v118, v30, v31);
          }
        }
        else
        {
          sub_4409E0((__int64)v120);
          sub_4406D0(a2, a4[1], a4[3], &v117);
          if ( v117 )
            sub_440560(a2, v22, a4[3], v117, v71, v72);
        }
        goto LABEL_44;
      }
      v7 = "dictionary key globPattern";
    }
LABEL_11:
    sub_458930(a2, 1, a4, v7);
    return 1;
  }
  return v13;
}

