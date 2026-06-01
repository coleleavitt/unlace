__int64 __fastcall sub_3463D0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // r15
  unsigned int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 *v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 *v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r14
  int v37; // eax
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // rcx
  unsigned int v43; // ecx
  size_t v44; // rsi
  unsigned int v45; // r15d
  unsigned int *v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // r14
  int v51; // eax
  _QWORD *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 *v56; // rcx
  unsigned int v57; // r14d
  size_t v58; // rsi
  unsigned int *v59; // rax
  __int64 v60; // rcx
  unsigned int v61; // r13d
  size_t v62; // rsi
  unsigned int *v63; // rax
  __int64 v64; // rcx
  unsigned int v65; // ebp
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  char **v72; // r12
  char **exception; // rbp
  char **v74; // r12
  char **v75; // r12
  __int64 v76; // [rsp+0h] [rbp-B8h]
  int v77; // [rsp+0h] [rbp-B8h]
  __int64 v78; // [rsp+8h] [rbp-B0h]
  __int64 v79; // [rsp+10h] [rbp-A8h]
  __int64 v80; // [rsp+18h] [rbp-A0h]
  __int64 v81; // [rsp+28h] [rbp-90h]
  int v85; // [rsp+4Ch] [rbp-6Ch]
  __int64 v86[11]; // [rsp+60h] [rbp-58h] BYREF

  v81 = a1[1];
  result = *a3;
  if ( *a3 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v79 = 0;
    v9 = 1;
    v80 = 0;
    while ( v9 < *(_DWORD *)(result - 4) )
    {
      v10 = *(_QWORD *)(result + v79);
      v76 = v10;
      if ( v9 == 1 )
      {
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        if ( v7 )
        {
          v12 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v81, v7);
        }
        v7 = v76;
      }
      else if ( v9 == 2 )
      {
        v49 = sub_15E1B70(a1[1]);
        v50 = v49;
        if ( v49 )
        {
          v51 = *(_DWORD *)(v49 + 8) + 1;
          *(_DWORD *)(v50 + 8) = v51;
          if ( v7 )
          {
            v12 = (*(_DWORD *)(v7 + 8))-- == 1;
            if ( v12 )
              sub_15D7BC0(v81, v7);
            v51 = *(_DWORD *)(v50 + 8);
          }
          *(_DWORD *)(v50 + 8) = v51 + 1;
        }
        else if ( v7 )
        {
          v12 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v81, v7);
        }
        v52 = (_QWORD *)a1[27];
        if ( v52 )
        {
          v53 = *((_DWORD *)v52 - 1);
          if ( v53 == *((_DWORD *)v52 - 2) )
          {
            v65 = (3 * v53 + 1) >> 1;
            v66 = 8 * v65 + 8;
            if ( 8 * v53 + 8 >= (unsigned int)v66 || v53 >= v65 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v86, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v86);
              sub_233E40((__int64)v86);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v67 = (unsigned int *)sub_186B300(v52 - 1, v66);
            v68 = v67[1];
            v52 = v67 + 2;
            *v67 = v65;
            a1[27] = v67 + 2;
            LODWORD(v67) = v68;
            v56 = &v52[v68];
            v55 = (_DWORD)v67 + 1;
          }
          else
          {
            v54 = v53;
            v55 = v53 + 1;
            v56 = &v52[v54];
          }
        }
        else
        {
          v71 = (_QWORD *)sub_186B270(0x18u);
          v52 = v71 + 1;
          *v71 = 2;
          v55 = 1;
          a1[27] = v52;
          v56 = v52;
        }
        *v56 = v50;
        v7 = v50;
        *((_DWORD *)v52 - 1) = v55;
      }
      else
      {
        v11 = sub_300BE0(a1, "d");
        v78 = v11;
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        if ( v6 )
        {
          v12 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v81, v6);
        }
        v13 = sub_15E1B70(a1[1]);
        v14 = v13;
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        if ( v80 )
        {
          v85 = *(_DWORD *)(v80 + 8);
          *(_DWORD *)(v80 + 8) = v85 - 1;
          if ( v85 == 1 )
            sub_15D7BC0(v81, v80);
        }
        v15 = sub_2FF8B0((__int64)a1);
        sub_E5EBF0(v15, v14);
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        v16 = (_QWORD *)a1[29];
        if ( v16 )
        {
          v17 = *((_DWORD *)v16 - 1);
          if ( v17 == *((_DWORD *)v16 - 2) )
          {
            v61 = (3 * v17 + 1) >> 1;
            v62 = 8 * v61 + 8;
            if ( 8 * v17 + 8 >= (unsigned int)v62 || v17 >= v61 )
            {
              v72 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v86, "Overflow encountered when expanding vector");
              *v72 = (char *)off_1C63128;
              sub_2333C0(v72 + 1, v86);
              sub_233E40((__int64)v86);
              __cxa_throw(v72, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v63 = (unsigned int *)sub_186B300(v16 - 1, v62);
            v64 = v63[1];
            v16 = v63 + 2;
            *v63 = v61;
            a1[29] = v63 + 2;
            LODWORD(v63) = v64;
            v20 = &v16[v64];
            v19 = (_DWORD)v63 + 1;
          }
          else
          {
            v18 = v17;
            v19 = v17 + 1;
            v20 = &v16[v18];
          }
        }
        else
        {
          v70 = (_QWORD *)sub_186B270(0x18u);
          v16 = v70 + 1;
          *v70 = 2;
          v19 = 1;
          a1[29] = v16;
          v20 = v16;
        }
        v21 = a1[1];
        *v20 = v14;
        *((_DWORD *)v16 - 1) = v19;
        v22 = sub_15E1B70(v21);
        v23 = v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
        if ( v14 )
        {
          v12 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v81, v14);
        }
        v24 = sub_2FF8B0((__int64)a1);
        sub_E5EBF0(v24, v23);
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        v25 = (_QWORD *)a1[29];
        if ( v25 )
        {
          v26 = *((_DWORD *)v25 - 1);
          if ( v26 == *((_DWORD *)v25 - 2) )
          {
            v57 = (3 * v26 + 1) >> 1;
            v58 = 8 * v57 + 8;
            if ( 8 * v26 + 8 >= (unsigned int)v58 || v26 >= v57 )
            {
              v75 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v86, "Overflow encountered when expanding vector");
              *v75 = (char *)off_1C63128;
              sub_2333C0(v75 + 1, v86);
              sub_233E40((__int64)v86);
              __cxa_throw(v75, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v59 = (unsigned int *)sub_186B300(v25 - 1, v58);
            v60 = v59[1];
            v25 = v59 + 2;
            *v59 = v57;
            a1[29] = v59 + 2;
            LODWORD(v59) = v60;
            v29 = &v25[v60];
            v28 = (_DWORD)v59 + 1;
          }
          else
          {
            v27 = v26;
            v28 = v26 + 1;
            v29 = &v25[v27];
          }
        }
        else
        {
          v69 = (_QWORD *)sub_186B270(0x18u);
          v25 = v69 + 1;
          *v69 = 2;
          v28 = 1;
          a1[29] = v25;
          v29 = v25;
        }
        v30 = a1[1];
        *v29 = v23;
        *((_DWORD *)v25 - 1) = v28;
        v31 = sub_15E1B70(v30);
        v80 = v31;
        if ( v31 )
          ++*(_DWORD *)(v31 + 8);
        if ( v23 )
        {
          v12 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v81, v23);
        }
        v32 = a1[17];
        if ( v32 )
        {
          sub_1374250(v86, a1[17], v80);
          sub_135F9B0(v32, *(_QWORD *)(v78 + 16), v86[0]);
          v33 = v86[0];
          if ( v86[0] && (v34 = v86[1], v12 = *(_DWORD *)(v86[0] + 8) == 1, --*(_DWORD *)(v86[0] + 8), v12) )
          {
            sub_15D7BC0(v34, v33);
            if ( v78 != v7 )
            {
LABEL_39:
              if ( v7 )
              {
                v12 = (*(_DWORD *)(v7 + 8))-- == 1;
                if ( v12 )
                  sub_15D7BC0(v81, v7);
              }
LABEL_42:
              ++*(_DWORD *)(v78 + 8);
              v6 = v78;
              v7 = v78;
              goto LABEL_45;
            }
          }
          else if ( v78 != v7 )
          {
            goto LABEL_39;
          }
LABEL_44:
          v6 = v7;
          goto LABEL_45;
        }
        if ( v78 == v7 )
          goto LABEL_44;
        if ( v7 )
        {
          v12 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v81, v7);
        }
        if ( v78 )
          goto LABEL_42;
        v6 = 0;
        v7 = 0;
      }
LABEL_45:
      v35 = sub_15E1B70(a1[1]);
      v36 = v35;
      if ( v35 )
      {
        v37 = *(_DWORD *)(v35 + 8) + 1;
        *(_DWORD *)(v36 + 8) = v37;
        if ( v8 )
        {
          v12 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v81, v8);
          v37 = *(_DWORD *)(v36 + 8);
        }
        *(_DWORD *)(v36 + 8) = v37 + 1;
LABEL_51:
        v38 = (_QWORD *)a1[27];
        if ( v38 )
          goto LABEL_52;
        goto LABEL_81;
      }
      if ( !v8 )
        goto LABEL_51;
      v12 = (*(_DWORD *)(v8 + 8))-- == 1;
      if ( !v12 )
        goto LABEL_51;
      sub_15D7BC0(v81, v8);
      v38 = (_QWORD *)a1[27];
      if ( v38 )
      {
LABEL_52:
        v39 = *((_DWORD *)v38 - 1);
        if ( v39 == *((_DWORD *)v38 - 2) )
        {
          v43 = (3 * v39 + 1) >> 1;
          v44 = 8 * v43 + 8;
          v45 = v43;
          if ( 8 * v39 + 8 >= (unsigned int)v44 || v39 >= v43 )
          {
            v74 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v86, "Overflow encountered when expanding vector");
            *v74 = (char *)off_1C63128;
            sub_2333C0(v74 + 1, v86);
            sub_233E40((__int64)v86);
            __cxa_throw(v74, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v46 = (unsigned int *)sub_186B300(v38 - 1, v44);
          v47 = v46[1];
          v38 = v46 + 2;
          *v46 = v45;
          a1[27] = v46 + 2;
          LODWORD(v46) = v47;
          v42 = &v38[v47];
          v41 = (_DWORD)v46 + 1;
        }
        else
        {
          v40 = v39;
          v41 = v39 + 1;
          v42 = &v38[v40];
        }
        goto LABEL_54;
      }
LABEL_81:
      v48 = (_QWORD *)sub_186B270(0x18u);
      v38 = v48 + 1;
      *v48 = 2;
      v41 = 1;
      a1[27] = v38;
      v42 = v38;
LABEL_54:
      *v42 = v36;
      *((_DWORD *)v38 - 1) = v41;
      sub_343E80((__int64)a1, a2, v36, a4);
      v79 += 8;
      ++v9;
      result = *a3;
      if ( !*a3 )
        goto LABEL_57;
      v8 = v36;
    }
    v36 = v8;
LABEL_57:
    if ( v6 )
    {
      v12 = (*(_DWORD *)(v6 + 8))-- == 1;
      if ( v12 )
        result = sub_15D7BC0(v81, v6);
    }
    if ( v7 )
    {
      v12 = (*(_DWORD *)(v7 + 8))-- == 1;
      if ( v12 )
        result = sub_15D7BC0(v81, v7);
    }
    if ( v36 )
    {
      v12 = (*(_DWORD *)(v36 + 8))-- == 1;
      if ( v12 )
        result = sub_15D7BC0(v81, v36);
    }
    if ( v80 )
    {
      v77 = *(_DWORD *)(v80 + 8);
      result = (unsigned int)(v77 - 1);
      *(_DWORD *)(v80 + 8) = result;
      if ( v77 == 1 )
        return sub_15D7BC0(v81, v80);
    }
  }
  return result;
}

