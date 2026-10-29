__int64 __fastcall sub_6447F0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  void **v3; // r12
  _OWORD *v4; // rax
  __int64 result; // rax
  unsigned int v7; // r12d
  __int64 v8; // r8
  unsigned int v9; // r9d
  __int64 *v10; // r14
  __int64 v11; // r10
  unsigned __int8 *v12; // r15
  unsigned __int8 v13; // r11
  char *v14; // rax
  char *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int v18; // edx
  int v19; // ecx
  char *v20; // rsi
  __int64 v21; // rdx
  char *v22; // rdi
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // r13
  unsigned int v27; // r15d
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // rdi
  _QWORD *v32; // r9
  _QWORD *v33; // rax
  _QWORD *v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rbp
  bool v39; // zf
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rsi
  char *i; // rax
  __int64 v44; // rdx
  char *v45; // rax
  char *v46; // r8
  char *v47; // rax
  int v48; // r9d
  char *v49; // rcx
  char *v50; // r13
  __int64 v51; // rdx
  char *v52; // rsi
  char *v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v57; // [rsp+10h] [rbp-A8h]
  int v58; // [rsp+10h] [rbp-A8h]
  size_t v60; // [rsp+28h] [rbp-90h]
  char *v61; // [rsp+28h] [rbp-90h]
  void *v62[3]; // [rsp+50h] [rbp-68h] BYREF
  void *v63; // [rsp+68h] [rbp-50h]

  v2 = 1;
  v3 = v62;
  do
  {
    v4 = (_OWORD *)sub_186B270(0x40u);
    *v3 = v4;
    v3 += 3;
    *(v3 - 2) = &byte_8;
    *((_DWORD *)v3 - 2) = 0;
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = 0;
  }
  while ( v2-- != 0 );
  result = (__int64)a1;
  v7 = 0;
  v8 = a1[1];
LABEL_4:
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 - 4);
      if ( v7 >= v9 )
        break;
      v10 = (__int64 *)(v8 + 8LL * v7);
      v11 = *a2;
      v12 = (unsigned __int8 *)(*a2 + v7);
      v13 = *v12;
      v14 = (char *)v62 + (-*v12 & 0x18);
      v15 = *(char **)v14;
      v16 = *((unsigned int *)v14 + 2);
      v17 = *v10;
      v18 = v16 - 1;
      v16 *= 8;
      v19 = *(_DWORD *)(*v10 + 12);
      v57 = *a1;
      v20 = &v15[v16];
      v21 = 8LL * (v19 & v18);
      v22 = &v15[v21];
      if ( v21 == v16 )
      {
LABEL_49:
        if ( v15 != v22 )
        {
          for ( i = v15; v22 != i; i += 8 )
          {
            v44 = *(_QWORD *)i;
            if ( *(_QWORD *)i > 1u )
            {
              if ( *(_DWORD *)(v44 + 12) == v19 && v17 == v44 )
                goto LABEL_37;
            }
            else if ( !v44 )
            {
              break;
            }
          }
        }
LABEL_13:
        v25 = v13;
        v26 = LODWORD(v62[3 * v13 + 1]);
        v58 = HIDWORD(v62[3 * v13 + 1]);
        v27 = 2 * v26;
        if ( 3 * (int)v26 >= (unsigned int)(4 * (LODWORD(v62[3 * v13 + 2]) + v58)) )
        {
LABEL_14:
          v28 = v62[3 * v25];
          v29 = 8LL * (v19 & (unsigned int)(v26 - 1));
          v30 = 8LL * (unsigned int)v26;
          v31 = &v28[(unsigned __int64)v29 / 8];
          v32 = &v28[(unsigned __int64)v30 / 8];
          if ( v29 == v30 )
          {
            v34 = nullptr;
LABEL_22:
            if ( v28 == v31 )
            {
LABEL_30:
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            while ( 1 )
            {
              while ( 1 )
              {
                v36 = *v28;
                if ( *v28 <= 1u )
                  break;
                if ( *(_DWORD *)(v36 + 12) == v19 && v17 == v36 )
                {
                  *v28 = v17;
                  goto LABEL_31;
                }
                if ( v31 == ++v28 )
                  goto LABEL_30;
              }
              if ( !v36 )
                break;
              v34 = v28++;
              if ( v31 == v28 )
                goto LABEL_30;
            }
            if ( v34 )
              --LODWORD(v62[3 * v25 + 2]);
            else
              v34 = v28;
            *v34 = v17;
            HIDWORD(v62[3 * v25 + 1]) = v58 + 1;
          }
          else
          {
            v33 = &v28[(unsigned __int64)v29 / 8];
            v34 = nullptr;
            while ( 1 )
            {
              while ( 1 )
              {
                v35 = *v33;
                if ( *v33 <= 1u )
                  break;
                if ( *(_DWORD *)(v35 + 12) == v19 && v17 == v35 )
                {
                  *v33 = v17;
                  goto LABEL_31;
                }
                if ( v32 == ++v33 )
                  goto LABEL_22;
              }
              if ( !v35 )
                break;
              v34 = v33++;
              if ( v32 == v33 )
                goto LABEL_22;
            }
            if ( v34 )
              --LODWORD(v62[3 * v25 + 2]);
            else
              v34 = v33;
            *v34 = v17;
            HIDWORD(v62[3 * v25 + 1]) = v58 + 1;
          }
LABEL_31:
          result = (__int64)a1;
          ++v7;
          v8 = a1[1];
          if ( !v8 )
            break;
          continue;
        }
        v60 = 8LL * v27;
        v45 = (char *)sub_186B270(v60);
        v46 = v45;
        if ( v27 )
        {
          v47 = (char *)memset(v45, 0, 8LL * v27);
          v48 = v27 - 1;
          v49 = &v15[8 * v26];
          v46 = v47;
          v45 = &v47[v60];
LABEL_60:
          v50 = v15;
          do
          {
            while ( *(_QWORD *)v50 <= 1u )
            {
              v50 += 8;
              if ( v49 == v50 )
                goto LABEL_68;
            }
            v51 = 8LL * (*(_DWORD *)(*(_QWORD *)v50 + 12LL) & (unsigned int)v48);
            v52 = &v46[v51];
            if ( v60 == v51 )
            {
LABEL_71:
              if ( v46 == v52 )
              {
LABEL_79:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v53 = v46;
              while ( *(_QWORD *)v53 )
              {
                v53 += 8;
                if ( v52 == v53 )
                  goto LABEL_79;
              }
            }
            else
            {
              v53 = &v46[v51];
              while ( *(_QWORD *)v53 )
              {
                v53 += 8;
                if ( v53 == v45 )
                  goto LABEL_71;
              }
            }
            v54 = *(_QWORD *)v50;
            v50 += 8;
            *(_QWORD *)v53 = v54;
          }
          while ( v49 != v50 );
        }
        else
        {
          v49 = &v15[8 * v26];
          v48 = -1;
          if ( v15 != v49 )
            goto LABEL_60;
        }
LABEL_68:
        if ( v15 )
        {
          v61 = v46;
          sub_186B220(v15);
          v46 = v61;
        }
        v19 = *(_DWORD *)(v17 + 12);
        LODWORD(v26) = v27;
        v55 = 3 * v25;
        v62[v55] = v46;
        LODWORD(v62[v55 + 1]) = v27;
        LODWORD(v62[v55 + 2]) = 0;
        goto LABEL_14;
      }
      v23 = (__int64 *)&v15[v21];
      while ( 1 )
      {
        v24 = *v23;
        if ( (unsigned __int64)*v23 > 1 )
          break;
        if ( !v24 )
          goto LABEL_13;
LABEL_10:
        if ( v20 == (char *)++v23 )
          goto LABEL_49;
      }
      if ( *(_DWORD *)(v24 + 12) != v19 || v17 != v24 )
        goto LABEL_10;
LABEL_37:
      v37 = v9 - 1;
      if ( (_DWORD)v37 != v7 )
      {
        v38 = *(_QWORD *)(v8 + 8 * v37);
        if ( v38 )
          ++*(_DWORD *)(v38 + 8);
        v39 = (*(_DWORD *)(v17 + 8))-- == 1;
        if ( v39 )
        {
          sub_15D7BC0(v57, v17);
          v11 = *a2;
          v8 = a1[1];
          v12 = (unsigned __int8 *)(*a2 + v7);
          v57 = *a1;
        }
        *v10 = v38;
        v40 = 0xFFFFFFFFLL;
        if ( v11 )
          v40 = (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
        *v12 = *(_BYTE *)(v11 + v40);
      }
      result = *(unsigned int *)(v8 - 4);
      v41 = (unsigned int)(result - 1);
      v42 = *(_QWORD *)(v8 + 8 * v41);
      *(_DWORD *)(v8 - 4) = v41;
      if ( v42 )
      {
        v39 = (*(_DWORD *)(v42 + 8))-- == 1;
        if ( v39 )
        {
          sub_15D7BC0(v57, v42);
          v11 = *a2;
          result = (__int64)a1;
          v8 = a1[1];
        }
        --*(_DWORD *)(v11 - 4);
        goto LABEL_4;
      }
      --*(_DWORD *)(v11 - 4);
    }
  }
  if ( v63 )
    result = sub_186B220(v63);
  if ( v62[0] )
    return sub_186B220(v62[0]);
  return result;
}

