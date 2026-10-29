__int64 __fastcall sub_82CEB0(__int64 a1, int *a2, __int64 a3)
{
  char **v3; // rbp
  char **exception; // rbp
  int *v6; // rbp
  char *v7; // rax
  unsigned int *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // r14
  unsigned __int64 v11; // rdx
  void **v12; // r13
  __int64 v13; // rbp
  unsigned int v14; // r13d
  unsigned int v15; // r15d
  size_t v16; // rsi
  unsigned int *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rbp
  __int64 v20; // rdx
  _DWORD *v22; // rdx
  _QWORD *v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // rsi
  int v26; // ecx
  int **v27; // rsi
  _QWORD *v28; // rax
  _DWORD *v29; // rdx
  __int64 v30; // rdx
  unsigned int **v31; // r12
  int **v32; // r13
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r15
  __int64 v37; // r9
  int v38; // esi
  int ***v39; // rbx
  unsigned int v40; // r11d
  __int64 v41; // r9
  int ***v42; // r14
  int v43; // edi
  __int64 v44; // r11
  int ***v45; // r10
  int ***v46; // rax
  int ***v47; // r9
  int **v48; // rdx
  int **v49; // rax
  int ***v50; // rax
  int v51; // r10d
  int ***v52; // rcx
  int *v53; // rax
  __int64 v54; // rbp
  unsigned int **v55; // rcx
  int ***v56; // r12
  int ***v57; // rbx
  int *v58; // r8
  __int64 v59; // rax
  int ***v60; // rdx
  int ***v61; // rax
  _OWORD *v62; // rax
  unsigned int v63; // ebx
  unsigned int v64; // eax
  unsigned int *v65; // rax
  __int64 v66; // rax
  int v67; // ecx
  _QWORD *v68; // rax
  _QWORD *v69; // rdx
  __int64 v70; // [rsp+0h] [rbp-A8h]
  __int64 v72; // [rsp+10h] [rbp-98h]
  __int64 n; // [rsp+18h] [rbp-90h]
  unsigned int na; // [rsp+18h] [rbp-90h]
  int v75; // [rsp+20h] [rbp-88h]
  __int64 v76; // [rsp+20h] [rbp-88h]
  int v77; // [rsp+28h] [rbp-80h]
  __int64 v78[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = a2;
  if ( a2[22] >> 8 != -1 )
  {
    v7 = (char *)(a2 + 22);
    while ( *(_DWORD *)(a1 + 12) != *v7 )
    {
      v7 = *((char **)v7 + 1);
      if ( !v7 )
        goto LABEL_34;
    }
    if ( *(int *)v7 >> 8 != -1 )
    {
      v8 = *(unsigned int **)a2;
      if ( *(_WORD *)(*(_QWORD *)a2 + 4LL) )
        goto LABEL_7;
      v22 = *(_DWORD **)(*((_QWORD *)v8 + 2) + 24LL);
      if ( !v22 )
        goto LABEL_7;
      if ( *v22 != 5 )
      {
        v9 = *(_QWORD **)(a3 + 56);
        if ( !v9 )
          goto LABEL_28;
        goto LABEL_8;
      }
LABEL_37:
      v30 = v8[6];
      if ( (_DWORD)v30 )
      {
        v72 = a3;
        v31 = (unsigned int **)(v8 + 8);
        v70 = (__int64)&v8[2 * v30 + 8];
        while ( 1 )
        {
          v32 = (int **)sub_7E4F00(a1, *v31);
          if ( !v32 )
            goto LABEL_64;
          v33 = *(_QWORD *)(v72 + 56);
          if ( !v33
            || (v34 = **(unsigned int **)v6, (unsigned int)v34 >= *(_DWORD *)(v33 - 4))
            || (v35 = *(_QWORD *)(v33 + 8 * v34), v36 = v35 & 0xFFFFFFFFFFFFFFF8LL, v35 <= 7) )
          {
            v36 = sub_186B270(0x18u);
            v62 = (_OWORD *)sub_186B270(0x40u);
            *(_QWORD *)v36 = v62;
            *v62 = 0;
            v62[1] = 0;
            v62[2] = 0;
            v62[3] = 0;
            *(_DWORD *)(v36 + 16) = 0;
            *(_QWORD *)(v36 + 8) = 8;
            sub_83B750(v72, v6, v36);
          }
          v37 = *(unsigned int *)(v36 + 8);
          v38 = *(_DWORD *)(v36 + 16);
          if ( 3 * (int)v37 < (unsigned int)(4 * (v38 + *(_DWORD *)(v36 + 12))) )
          {
            v75 = 2 * v37;
            n = 8LL * (unsigned int)(2 * v37);
            v50 = (int ***)sub_186B270(n);
            v51 = v75;
            v41 = n;
            v39 = v50;
            if ( v75 )
            {
              memset(v50, 0, n);
              v41 = n;
              v51 = v75;
            }
            v40 = v51 - 1;
            v42 = (int ***)((char *)v39 + v41);
            v52 = (int ***)(*(_QWORD *)v36 + 8LL * *(unsigned int *)(v36 + 8));
            if ( *(int ****)v36 != v52 )
            {
              v53 = v6;
              v54 = *(_QWORD *)v36 + 8LL * *(unsigned int *)(v36 + 8);
              v55 = v31;
              v56 = v39;
              v57 = *(int ****)v36;
              v58 = v53;
              do
              {
                if ( (unsigned __int64)*v57 > 1 )
                {
                  v59 = 8LL * (***v57 & v40);
                  v60 = &v56[(unsigned __int64)v59 / 8];
                  if ( v41 == v59 )
                  {
LABEL_78:
                    if ( v56 == v60 )
                    {
LABEL_88:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v61 = v56;
                    while ( *v61 )
                    {
                      if ( v60 == ++v61 )
                        goto LABEL_88;
                    }
                  }
                  else
                  {
                    v61 = &v56[(unsigned __int64)v59 / 8];
                    while ( *v61 )
                    {
                      if ( v42 == ++v61 )
                        goto LABEL_78;
                    }
                  }
                  *v61 = *v57;
                }
                ++v57;
              }
              while ( (int ***)v54 != v57 );
              v39 = v56;
              v31 = v55;
              v52 = *(int ****)v36;
              v6 = v58;
            }
            if ( v52 )
            {
              v77 = v51;
              v76 = v41;
              na = v51 - 1;
              sub_186B220(v52);
              v51 = v77;
              v41 = v76;
              v40 = na;
            }
            *(_QWORD *)v36 = v39;
            v38 = 0;
            *(_DWORD *)(v36 + 8) = v51;
            *(_DWORD *)(v36 + 16) = 0;
          }
          else
          {
            v39 = *(int ****)v36;
            v40 = v37 - 1;
            v41 = 8 * v37;
            v42 = (int ***)(*(_QWORD *)v36 + v41);
          }
          v43 = **v32;
          v44 = 8LL * (v43 & v40);
          v45 = &v39[(unsigned __int64)v44 / 8];
          if ( v44 != v41 )
          {
            v46 = &v39[(unsigned __int64)v44 / 8];
            v47 = nullptr;
            while ( 1 )
            {
              v48 = *v46;
              if ( (unsigned __int64)*v46 > 1 )
              {
                if ( **v48 == v43 && v32 == v48 )
                {
                  *v46 = v32;
                  goto LABEL_64;
                }
              }
              else
              {
                if ( !v48 )
                {
                  if ( v47 )
                    goto LABEL_62;
                  v47 = v46;
                  goto LABEL_63;
                }
                v47 = v46;
              }
              if ( ++v46 == v42 )
                goto LABEL_57;
            }
          }
          v47 = nullptr;
          while ( 1 )
          {
LABEL_57:
            if ( v45 == v39 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v49 = *v39;
            if ( (unsigned __int64)*v39 <= 1 )
              break;
            if ( **v49 == v43 && v32 == v49 )
            {
              *v39 = v32;
              goto LABEL_64;
            }
LABEL_56:
            ++v39;
          }
          if ( v49 )
            break;
          if ( v47 )
LABEL_62:
            *(_DWORD *)(v36 + 16) = v38 - 1;
          else
            v47 = v39;
LABEL_63:
          *v47 = v32;
          ++*(_DWORD *)(v36 + 12);
LABEL_64:
          if ( (unsigned int **)v70 == ++v31 )
            return 1;
        }
        v47 = v39;
        goto LABEL_56;
      }
LABEL_7:
      v9 = *(_QWORD **)(a3 + 56);
      if ( !v9 )
        goto LABEL_28;
LABEL_8:
      v10 = *v8;
      if ( (unsigned int)v10 < *((_DWORD *)v9 - 1) )
      {
        v11 = v9[v10];
        if ( v11 )
        {
          v12 = (void **)(v11 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v11 <= 7 )
            goto LABEL_23;
          if ( *v12 )
            sub_186B220(*v12);
          sub_186B220(v12);
          v9 = *(_QWORD **)(a3 + 56);
          v10 = **(unsigned int **)a2;
          if ( !v9 )
            goto LABEL_32;
          goto LABEL_14;
        }
      }
LABEL_28:
      v23 = *(_QWORD **)(a3 + 64);
      if ( v23 )
      {
        v24 = *((_DWORD *)v23 - 1);
        if ( v24 == *((_DWORD *)v23 - 2) )
        {
          v63 = (3 * v24 + 1) >> 1;
          v64 = 8 * v63 + 8;
          if ( 8 * v24 + 8 >= v64 || v24 >= v63 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v78, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v78);
            sub_233E40((__int64)v78);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v65 = (unsigned int *)sub_186B300(v23 - 1, v64);
          v23 = v65 + 2;
          *v65 = v63;
          v66 = v65[1];
          *(_QWORD *)(a3 + 64) = v23;
          v9 = *(_QWORD **)(a3 + 56);
          v67 = v66;
          v27 = (int **)&v23[v66];
          v8 = *(unsigned int **)v6;
          v26 = v67 + 1;
        }
        else
        {
          v25 = v24;
          v26 = v24 + 1;
          v27 = (int **)&v23[v25];
        }
      }
      else
      {
        v68 = (_QWORD *)sub_186B270(0x18u);
        v9 = *(_QWORD **)(a3 + 56);
        v26 = 1;
        v69 = v68;
        *v68 = 2;
        v8 = *(unsigned int **)a2;
        v23 = v69 + 1;
        *(_QWORD *)(a3 + 64) = v23;
        v27 = (int **)v23;
      }
      *v27 = v6;
      *((_DWORD *)v23 - 1) = v26;
      v10 = *v8;
      if ( !v9 )
      {
LABEL_32:
        v14 = v10 + 1;
        if ( (_DWORD)v10 != -1 )
        {
          v13 = 0;
          v28 = (_QWORD *)sub_186B270(0x18u);
          v9 = v28 + 1;
          *v28 = 2;
          *(_QWORD *)(a3 + 56) = v28 + 1;
          goto LABEL_20;
        }
        v10 = 0xFFFFFFFFLL;
        goto LABEL_23;
      }
LABEL_14:
      v13 = *((unsigned int *)v9 - 1);
      if ( (unsigned int)v10 >= (unsigned int)v13 )
      {
        v14 = v10 + 1;
        if ( (unsigned int)v13 < (int)v10 + 1 )
        {
LABEL_20:
          while ( 1 )
          {
            v18 = *((_DWORD *)v9 - 2);
            if ( v18 >= v14 )
              break;
            v15 = (3 * v18 + 1) >> 1;
            v16 = 8 * v15 + 8;
            if ( 8 * v18 + 8 >= (unsigned int)v16 || v18 >= v15 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v78, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v78);
              sub_233E40((__int64)v78);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v17 = (unsigned int *)sub_186B300(v9 - 1, v16);
            v9 = v17 + 2;
            *v17 = v15;
            *(_QWORD *)(a3 + 56) = v17 + 2;
          }
          v19 = 8 * v13;
          *((_DWORD *)v9 - 1) = v14;
          v20 = 8LL * v14;
          if ( v19 != v20 )
            memset(&v9[(unsigned __int64)v19 / 8], 0, v20 - v19);
          goto LABEL_23;
        }
        *((_DWORD *)v9 - 1) = v14;
      }
LABEL_23:
      v9[v10] = 1;
      return 1;
    }
  }
LABEL_34:
  v8 = *(unsigned int **)a2;
  if ( !*(_WORD *)(*(_QWORD *)a2 + 4LL) )
  {
    v29 = *(_DWORD **)(*((_QWORD *)v8 + 2) + 24LL);
    if ( v29 )
    {
      if ( *v29 == 5 )
        goto LABEL_37;
    }
  }
  return 0;
}

