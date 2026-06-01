__int64 __fastcall sub_4143B0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // r14d
  size_t v7; // r12
  __int64 v8; // rbx
  char *v9; // rdi
  char *v10; // rbx
  _QWORD *v11; // rbp
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rsi
  int v16; // r13d
  __int64 v17; // rax
  int v18; // r13d
  int i; // r14d
  int v20; // ebp
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdx
  int v26; // r14d
  int *v27; // rdi
  int v28; // eax
  bool v29; // zf
  int *v30; // rdi
  int v31; // eax
  unsigned int v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  int v37; // edx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  char *v50; // [rsp+8h] [rbp-B0h]
  char *v51; // [rsp+10h] [rbp-A8h]
  char *v52; // [rsp+18h] [rbp-A0h]
  char *v53; // [rsp+28h] [rbp-90h]
  char *v54; // [rsp+30h] [rbp-88h]
  char *v55; // [rsp+38h] [rbp-80h]
  char *v56; // [rsp+40h] [rbp-78h]
  char *v57; // [rsp+48h] [rbp-70h]
  char *v58; // [rsp+50h] [rbp-68h]
  char *s; // [rsp+58h] [rbp-60h]
  __int64 v60; // [rsp+60h] [rbp-58h]
  int v61; // [rsp+6Ch] [rbp-4Ch]
  int v62; // [rsp+70h] [rbp-48h]
  unsigned int v63; // [rsp+74h] [rbp-44h]

  v63 = 0;
  v61 = (a3 - 2) / 2;
  if ( a3 <= 3 || (a3 & 1) != 0 )
  {
    sub_458930(a2, 1, a4, "varList list ?varList list ...? command");
    return 1;
  }
  v6 = 0;
  v7 = 16LL * v61;
  s = (char *)sub_4495F0(a2, (unsigned int)(12 * v61));
  v58 = &s[4 * v61];
  v8 = 8LL * v61;
  v55 = &s[v8];
  memset(s, 0, 12LL * v61);
  v57 = (char *)sub_4495F0(a2, (unsigned int)v7);
  v54 = &v57[v8];
  memset(v57, 0, v7);
  v9 = (char *)sub_4495F0(a2, (unsigned int)v7);
  v56 = v9;
  v53 = &v9[v8];
  memset(v9, 0, v7);
  v62 = 0;
  if ( v61 > 0 )
  {
    v10 = v57;
    v11 = (_QWORD *)(a4 + 16);
    v52 = &s[8 * v61];
    v51 = v54;
    v50 = &s[4 * v61];
    while ( 1 )
    {
      v17 = sub_470170(a2, *(v11 - 1));
      *(_QWORD *)&v56[8 * v6] = v17;
      if ( !v17 )
        break;
      if ( *(_UNKNOWN ***)(v17 + 24) == &off_655E20 )
      {
        v12 = (_DWORD)s + 4 * v61;
        *(_QWORD *)&v57[8 * v6] = *(_QWORD *)(v17 + 32) + 16LL;
        *(_DWORD *)&v58[4 * v6] = *(_DWORD *)(*(_QWORD *)(v17 + 32) + 8LL);
      }
      else
      {
        sub_46FD90(0, v17, v50, v10);
      }
      if ( *(int *)&v58[4 * v6] <= 0 )
      {
        sub_48B710(a2, (unsigned int)"foreach varlist is empty", 0, v12, v13, v14);
        break;
      }
      v9 = (char *)a2;
      v15 = sub_470170(a2, *v11);
      *(_QWORD *)&v53[8 * v6] = v15;
      if ( !v15 )
        break;
      if ( *(_UNKNOWN ***)(v15 + 24) == &off_655E20 )
      {
        *(_QWORD *)&v54[8 * v6] = *(_QWORD *)(v15 + 32) + 16LL;
        *(_DWORD *)&v55[4 * v6] = *(_DWORD *)(*(_QWORD *)(v15 + 32) + 8LL);
      }
      else
      {
        v9 = nullptr;
        sub_46FD90(0, v15, v52, v51);
      }
      v16 = *(_DWORD *)&v55[4 * v6] / *(_DWORD *)&v58[4 * v6]
          - ((*(_DWORD *)&v55[4 * v6] % *(_DWORD *)&v58[4 * v6] == 0)
           - 1);
      if ( v16 <= v62 )
        v16 = v62;
      ++v6;
      v10 += 8;
      v50 += 4;
      v11 += 2;
      v51 += 8;
      v52 += 4;
      v62 = v16;
      if ( v6 >= v61 )
        goto LABEL_17;
    }
LABEL_50:
    v63 = 1;
    goto LABEL_30;
  }
LABEL_17:
  v18 = 0;
  v60 = *(_QWORD *)(a4 + 8LL * a3 - 8);
  if ( v62 > 0 )
  {
    while ( 2 )
    {
      for ( i = 0; i < v61; ++i )
      {
        v20 = 0;
        if ( *(int *)&v58[4 * i] > 0 )
        {
          while ( 1 )
          {
            v25 = *(unsigned int *)&s[4 * i];
            *(_DWORD *)&s[4 * i] = v25 + 1;
            v21 = *(_DWORD *)&v55[4 * i] > (int)v25
                ? *(_QWORD *)(*(_QWORD *)&v54[8 * i] + 8LL * (int)v25)
                : sub_47B0B0(v9, v55, v25);
            v9 = (char *)a2;
            if ( !sub_4A4160(a2, *(_QWORD *)(*(_QWORD *)&v57[8 * i] + 8LL * v20), 0, v21, 512) )
              break;
            if ( *(_DWORD *)&v58[4 * i] <= ++v20 )
              goto LABEL_46;
          }
          v37 = (int)v57;
          v38 = *(_QWORD *)(*(_QWORD *)&v57[8 * i] + 8LL * v20);
          v39 = *(_QWORD *)(v38 + 8);
          if ( !v39 )
            LODWORD(v39) = sub_47B3B0(v38);
          v40 = sub_48F930((unsigned int)"\n    (setting foreach loop variable \"%s\")", v39, v37, v22, v23, v24);
          sub_40ABA0(a2, v40, v41, v42, v43, v44);
          goto LABEL_50;
        }
LABEL_46:
        ;
      }
      v9 = (char *)a2;
      v32 = sub_40B720(a2, v60, 0, *(_QWORD **)(a2 + 952), a3 - 1);
      v63 = v32;
      if ( v32 )
      {
        if ( v32 != 4 )
        {
          if ( v32 == 3 )
          {
            v63 = 0;
            goto LABEL_29;
          }
          if ( v32 == 1 )
          {
            v45 = sub_48F930((unsigned int)"\n    (\"foreach\" body line %d)", *(_DWORD *)(a2 + 16), v33, v34, v35, v36);
            sub_40ABA0(a2, v45, v46, v47, v48, v49);
            goto LABEL_30;
          }
          break;
        }
        v63 = 0;
      }
      if ( ++v18 < v62 )
        continue;
      break;
    }
    if ( v63 )
      goto LABEL_30;
  }
LABEL_29:
  sub_48B350(a2);
LABEL_30:
  v26 = 0;
  while ( v26 < v61 )
  {
    v27 = *(int **)&v56[8 * v26];
    if ( v27 )
    {
      v28 = *v27 - 1;
      v29 = *v27 == 1;
      *v27 = v28;
      if ( v28 < 0 || v29 )
        sub_47B120(v27);
    }
    v30 = *(int **)&v53[8 * v26];
    if ( v30 && (v31 = *v30 - 1, v29 = *v30 == 1, *v30 = v31, v31 < 0 || v29) )
    {
      ++v26;
      sub_47B120(v30);
    }
    else
    {
      ++v26;
    }
  }
  sub_449510(a2, v56);
  sub_449510(a2, v57);
  sub_449510(a2, s);
  return v63;
}

