__int64 __fastcall sub_713C40(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  __int64 v3; // rdx
  char **exception; // rbp
  __int64 v5; // rdx
  __int64 v6; // r12
  unsigned int **v7; // rdi
  int v8; // ebx
  unsigned int *v9; // r11
  int v10; // eax
  int v11; // ebp
  __int64 *v12; // r10
  unsigned int v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // edi
  __int64 *v19; // rsi
  __int64 v20; // rcx
  __int64 *v21; // r8
  __int64 *i; // rax
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // rax
  char *v26; // rsi
  __int64 v27; // r8
  int v28; // ecx
  char *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // r9
  char *k; // rax
  unsigned int v33; // r14d
  unsigned int v34; // r15d
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // r13
  __int64 v40; // rbp
  __int64 v41; // rbx
  __int64 v42; // rax
  int v43; // edi
  char *v44; // rsi
  unsigned int v45; // ecx
  char *v46; // r11
  __int64 v47; // rcx
  char *v48; // r10
  char *m; // rax
  __int64 v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rsi
  int v53; // eax
  _QWORD *v54; // rsi
  unsigned int v56; // eax
  unsigned int v57; // esi
  __int64 v58; // rax
  _QWORD *v59; // rcx
  __int64 *j; // rax
  __int64 v61; // rcx
  unsigned int v62; // r9d
  size_t v63; // rsi
  unsigned int *v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // [rsp+8h] [rbp-70h]
  int v68; // [rsp+10h] [rbp-68h]
  unsigned int v69; // [rsp+14h] [rbp-64h]
  __int64 v71; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v72; // [rsp+28h] [rbp-50h]
  unsigned int v73; // [rsp+2Ch] [rbp-4Ch]

  v6 = a1;
  v7 = (unsigned int **)(a1 + 160);
  v8 = 0;
  v9 = *v7;
  if ( *v7 )
  {
    v8 = *(v9 - 1);
    v10 = v8;
    if ( v8 != *(v9 - 2) )
      goto LABEL_3;
    v7 = (unsigned int **)(v6 + 160);
  }
  sub_23A6F0(v7);
  v9 = *(unsigned int **)(v6 + 160);
  v10 = *(v9 - 1);
LABEL_3:
  v11 = v8;
  *(_QWORD *)&v9[2 * v10] = a2;
  v12 = *(__int64 **)(v6 + 168);
  *(v9 - 1) = v10 + 1;
  v13 = 0;
  if ( v9 )
    goto LABEL_37;
  while ( 1 )
  {
    v14 = *(_DWORD *)(v6 + 176);
    if ( !v11 )
      return sub_710940(v12, v14, a2)[1];
    while ( 2 )
    {
      v15 = v14 - 1;
      v16 = *(_QWORD *)&v9[2 * v13 - 2];
      v17 = 16LL * v14;
      v18 = *(_DWORD *)(v16 + 12);
      v19 = &v12[(unsigned __int64)v17 / 8];
      v20 = 16LL * (v18 & v15);
      v21 = &v12[(unsigned __int64)v20 / 8];
      if ( v20 != v17 )
      {
        for ( i = &v12[(unsigned __int64)v20 / 8]; v19 != i; i += 2 )
        {
          v23 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v23 + 12) == v18 && v16 == v23 )
            {
LABEL_61:
              v13 = --*(v9 - 1);
              goto LABEL_38;
            }
          }
          else if ( !v23 )
          {
            goto LABEL_12;
          }
        }
      }
      if ( v21 != v12 )
      {
        for ( j = v12; v21 != j; j += 2 )
        {
          v61 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v61 + 12) == v18 && v16 == v61 )
              goto LABEL_61;
          }
          else if ( !v61 )
          {
            break;
          }
        }
      }
LABEL_12:
      v24 = *(_QWORD *)(v16 + 16);
      v25 = *(unsigned int *)(v6 + 200);
      v26 = *(char **)(v6 + 192);
      v27 = *(unsigned int *)(v24 + 12);
      v28 = v25 - 1;
      v25 *= 16;
      v29 = &v26[v25];
      v30 = 16LL * ((unsigned int)v27 & v28);
      v31 = (__int64)&v26[v30];
      if ( v30 != v25 )
      {
        for ( k = &v26[v30]; v29 != k; k += 16 )
        {
          v30 = *(_QWORD *)k;
          if ( *(_QWORD *)k > 1u )
          {
            if ( *(_DWORD *)(v30 + 12) == (_DWORD)v27 && v24 == v30 )
            {
LABEL_76:
              v34 = *((_DWORD *)k + 2);
              v33 = *((_DWORD *)k + 3);
              goto LABEL_20;
            }
          }
          else if ( !v30 )
          {
            goto LABEL_19;
          }
        }
      }
      for ( ; (char *)v31 != v26; v26 += 16 )
      {
        v66 = *(_QWORD *)v26;
        if ( *(_QWORD *)v26 > 1u )
        {
          if ( *(_DWORD *)(v66 + 12) == (_DWORD)v27 && v24 == v66 )
          {
            k = v26;
            goto LABEL_76;
          }
        }
        else if ( !v66 )
        {
          break;
        }
      }
LABEL_19:
      v33 = -1;
      v34 = -1;
LABEL_20:
      v35 = 8LL * *(unsigned int *)(v16 + 24);
      v36 = v16 + 32 + v35;
      if ( !v35 )
        goto LABEL_85;
      v67 = v16;
      v37 = v6;
      v31 = 0;
      v38 = v16 + 32;
      v68 = v11;
      v39 = v37;
      v40 = v36;
      do
      {
        v41 = *(_QWORD *)v38;
        if ( *(_WORD *)(*(_QWORD *)v38 + 4LL) )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_109F38(&v71, "atom is non-ground", v5);
          *exception = (char *)off_1C63670;
          sub_2333C0(exception + 1, &v71);
          sub_233E40((__int64)&v71);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
        }
        v42 = *(unsigned int *)(v39 + 176);
        v43 = *(_DWORD *)(v41 + 12);
        v44 = *(char **)(v39 + 168);
        v45 = v42 - 1;
        v42 *= 16;
        v46 = &v44[v42];
        v47 = 16LL * (v43 & v45);
        v48 = &v44[v47];
        if ( v47 != v42 )
        {
          for ( m = &v44[v47]; v46 != m; m += 16 )
          {
            v50 = *(_QWORD *)m;
            if ( *(_QWORD *)m > 1u )
            {
              if ( *(_DWORD *)(v50 + 12) == v43 && v41 == v50 )
              {
LABEL_41:
                v30 = *((unsigned int *)m + 2);
                v56 = *((_DWORD *)m + 3);
                if ( v34 == -1 )
                {
                  v34 = v30;
                }
                else
                {
                  v57 = v30;
                  if ( v34 >= (unsigned int)v30 )
                    v57 = v34;
                  if ( (_DWORD)v30 != -1 )
                    v34 = v57;
                }
                if ( v33 == -1 )
                {
                  v33 = v56;
                }
                else
                {
                  v30 = v56;
                  if ( v33 >= v56 )
                    v30 = v33;
                  if ( v56 != -1 )
                    v33 = v30;
                }
                goto LABEL_34;
              }
            }
            else if ( !v50 )
            {
              goto LABEL_30;
            }
          }
        }
        if ( v44 == v48 )
        {
LABEL_30:
          v30 = *(_QWORD *)(v39 + 160);
          if ( !v30 )
            goto LABEL_60;
          goto LABEL_31;
        }
        while ( 1 )
        {
          v58 = *(_QWORD *)v44;
          if ( *(_QWORD *)v44 <= 1u )
            break;
          if ( *(_DWORD *)(v58 + 12) == v43 && v41 == v58 )
          {
            m = v44;
            goto LABEL_41;
          }
LABEL_56:
          v44 += 16;
          if ( v48 == v44 )
            goto LABEL_30;
        }
        if ( v58 )
          goto LABEL_56;
        v30 = *(_QWORD *)(v39 + 160);
        if ( !v30 )
        {
LABEL_60:
          v59 = (_QWORD *)sub_186B270(0x18u);
          *v59 = 2;
          v53 = 1;
          v30 = (__int64)(v59 + 1);
          *(_QWORD *)(v39 + 160) = v30;
          v54 = (_QWORD *)v30;
          goto LABEL_33;
        }
LABEL_31:
        v51 = *(_DWORD *)(v30 - 4);
        if ( v51 == *(_DWORD *)(v30 - 8) )
        {
          v62 = (3 * v51 + 1) >> 1;
          v63 = 8 * v62 + 8;
          if ( 8 * v51 + 8 >= (unsigned int)v63 || v51 >= v62 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_109F38(&v71, "Overflow encountered when expanding vector", v3);
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, &v71);
            sub_233E40((__int64)&v71);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v69 = (3 * v51 + 1) >> 1;
          v64 = (unsigned int *)sub_186B300((void *)(v30 - 8), v63);
          v65 = v64[1];
          v30 = (__int64)(v64 + 2);
          *v64 = v69;
          LODWORD(v64) = v65;
          *(_QWORD *)(v39 + 160) = v30;
          v54 = (_QWORD *)(v30 + 8 * v65);
          v53 = (_DWORD)v64 + 1;
        }
        else
        {
          v52 = v51;
          v53 = v51 + 1;
          v54 = (_QWORD *)(v30 + 8 * v52);
        }
LABEL_33:
        *v54 = v41;
        v31 = 1;
        *(_DWORD *)(v30 - 4) = v53;
LABEL_34:
        v38 += 8;
      }
      while ( v40 != v38 );
      v16 = v67;
      v11 = v68;
      v6 = v39;
      if ( !(_BYTE)v31 )
      {
LABEL_85:
        v71 = v16;
        v72 = v34;
        v73 = v33;
        sub_7183C0(v6 + 168, &v71, v16, v30, v27, v31);
        v9 = *(unsigned int **)(v6 + 160);
        v12 = *(__int64 **)(v6 + 168);
        v13 = --*(v9 - 1);
LABEL_38:
        v14 = *(_DWORD *)(v6 + 176);
        if ( v13 == v11 )
          return sub_710940(v12, v14, a2)[1];
        continue;
      }
      break;
    }
    v9 = *(unsigned int **)(v39 + 160);
    v12 = *(__int64 **)(v39 + 168);
    v13 = 0;
    if ( v9 )
    {
LABEL_37:
      v13 = *(v9 - 1);
      goto LABEL_38;
    }
  }
}

