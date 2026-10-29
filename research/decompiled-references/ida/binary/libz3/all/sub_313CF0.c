void __fastcall sub_313CF0(char *src, char *a2, __int64 a3)
{
  char *v3; // rbp
  char *v4; // rbx
  __int64 v6; // r10
  __int64 v7; // rax
  _QWORD *v8; // rcx
  int v9; // edi
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  _QWORD *v14; // r9
  _QWORD *i; // rdx
  _QWORD *v16; // r15
  void *v17; // r14
  __int64 v18; // rdx
  _QWORD *v19; // rsi
  int v20; // r9d
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // r10
  _QWORD *j; // rcx
  _QWORD *v26; // r14
  _QWORD *v27; // rsi
  unsigned int v28; // eax
  __int64 v29; // r14
  __int64 v30; // rax
  char *v31; // r15
  __int64 v32; // r13
  __int64 v33; // r14
  __int64 v34; // r11
  __int64 v35; // rax
  _QWORD *v36; // rcx
  int v37; // edi
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // r10
  _QWORD *k; // rdx
  _QWORD *v43; // rbp
  void *v44; // rbx
  __int64 v45; // rdx
  _QWORD *v46; // rsi
  int v47; // r10d
  unsigned int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rcx
  _QWORD *v51; // r11
  _QWORD *m; // rcx
  _QWORD *v53; // rbx
  _QWORD *v54; // rsi
  unsigned int v55; // eax
  __int64 v56; // rax
  __int64 v57; // [rsp+10h] [rbp-88h]
  void *v58; // [rsp+10h] [rbp-88h]
  void *v59; // [rsp+10h] [rbp-88h]
  char *v61; // [rsp+20h] [rbp-78h]
  char *v62; // [rsp+28h] [rbp-70h]
  __int64 v63; // [rsp+38h] [rbp-60h] BYREF
  __int64 v64; // [rsp+40h] [rbp-58h]
  __int64 v65; // [rsp+48h] [rbp-50h] BYREF
  __int64 v66; // [rsp+50h] [rbp-48h]

  if ( src != a2 )
  {
    v3 = src + 8;
    v4 = src;
    if ( a2 != src + 8 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)v4;
        v7 = *(unsigned int *)(a3 + 8);
        v63 = 0;
        v65 = 1;
        v8 = *(_QWORD **)a3;
        v9 = *(_DWORD *)(v6 + 12);
        v10 = v7 - 1;
        v11 = 40 * v7;
        v12 = *(_QWORD *)v3;
        v64 = 0;
        v66 = 0;
        v13 = 40LL * (v9 & v10);
        v14 = &v8[(unsigned __int64)v13 / 8];
        if ( v13 != v11 )
        {
          for ( i = &v8[(unsigned __int64)v13 / 8]; &v8[(unsigned __int64)v11 / 8] != i; i += 5 )
          {
            v16 = (_QWORD *)*i;
            if ( *i > 1u )
            {
              if ( *((_DWORD *)v16 + 3) == v9 && (_QWORD *)v6 == v16 )
              {
                v16 = i;
                goto LABEL_10;
              }
            }
            else if ( !v16 )
            {
              goto LABEL_10;
            }
          }
        }
        if ( v8 == v14 )
        {
LABEL_34:
          v16 = nullptr;
        }
        else
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v16 = (_QWORD *)*v8;
              if ( *v8 > 1u )
                break;
              if ( !v16 )
                goto LABEL_10;
              v8 += 5;
              if ( v14 == v8 )
                goto LABEL_34;
            }
            if ( *((_DWORD *)v16 + 3) == v9 && (_QWORD *)v6 == v16 )
              break;
            v8 += 5;
            if ( v14 == v8 )
              goto LABEL_34;
          }
          v16 = v8;
        }
LABEL_10:
        v17 = qword_1C7F2C0;
        v57 = v12;
        sub_182CBA0(qword_1C7F2C0, &v63);
        sub_182CBA0(v17, &v65);
        v18 = *(unsigned int *)(a3 + 8);
        v63 = 0;
        v65 = 1;
        v19 = *(_QWORD **)a3;
        v20 = *(_DWORD *)(v57 + 12);
        v21 = v18 - 1;
        v64 = 0;
        v22 = 40 * v18;
        v66 = 0;
        v23 = 40LL * (v20 & v21);
        v24 = &v19[(unsigned __int64)v23 / 8];
        if ( v23 != v22 )
        {
          for ( j = &v19[(unsigned __int64)v23 / 8]; &v19[(unsigned __int64)v22 / 8] != j; j += 5 )
          {
            v26 = (_QWORD *)*j;
            if ( *j > 1u )
            {
              if ( *((_DWORD *)v26 + 3) == v20 && (_QWORD *)v57 == v26 )
              {
                v26 = j;
                goto LABEL_17;
              }
            }
            else if ( !v26 )
            {
              goto LABEL_17;
            }
          }
        }
        if ( v19 == v24 )
        {
LABEL_43:
          v26 = nullptr;
        }
        else
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v26 = (_QWORD *)*v19;
              if ( *v19 > 1u )
                break;
              if ( !v26 )
                goto LABEL_17;
              v19 += 5;
              if ( v24 == v19 )
                goto LABEL_43;
            }
            if ( *((_DWORD *)v26 + 3) == v20 && (_QWORD *)v57 == v26 )
              break;
            v19 += 5;
            if ( v24 == v19 )
              goto LABEL_43;
          }
          v26 = v19;
        }
LABEL_17:
        v58 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v63);
        sub_182CBA0(v58, &v65);
        v27 = v16 + 1;
        if ( (*((_BYTE *)v16 + 28) & 1) != 0
          || *((_DWORD *)v16 + 6) != 1
          || (*((_BYTE *)v26 + 28) & 1) != 0
          || *((_DWORD *)v26 + 6) != 1 )
        {
          LOBYTE(v28) = sub_1848D40(qword_1C7F2C0, v27, v26 + 1);
        }
        else if ( (*((_BYTE *)v16 + 12) & 1) != 0 || (*((_BYTE *)v26 + 12) & 1) != 0 )
        {
          v28 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v27, v26 + 1) >> 31;
        }
        else
        {
          LOBYTE(v28) = *((_DWORD *)v16 + 2) < *((_DWORD *)v26 + 2);
        }
        v29 = *(_QWORD *)v3;
        if ( !(_BYTE)v28 )
          break;
        if ( v3 - v4 <= 8 )
        {
          if ( v3 - v4 == 8 )
            *(_QWORD *)v3 = *(_QWORD *)v4;
        }
        else
        {
          memmove(v4 + 8, v4, v3 - v4);
        }
        *(_QWORD *)v4 = v29;
LABEL_24:
        v3 += 8;
        if ( a2 == v3 )
          return;
      }
      v61 = v3;
      v30 = a3;
      v31 = v3;
      v32 = *(_QWORD *)v3;
      v62 = v4;
      v33 = v30;
      while ( 1 )
      {
        v34 = *((_QWORD *)v31 - 1);
        v35 = *(unsigned int *)(v33 + 8);
        v63 = 0;
        v65 = 1;
        v36 = *(_QWORD **)v33;
        v37 = *(_DWORD *)(v34 + 12);
        v38 = v35 - 1;
        v64 = 0;
        v39 = 40 * v35;
        v66 = 0;
        v40 = 40LL * (v37 & v38);
        v41 = &v36[(unsigned __int64)v40 / 8];
        if ( v40 != v39 )
        {
          for ( k = &v36[(unsigned __int64)v40 / 8]; &v36[(unsigned __int64)v39 / 8] != k; k += 5 )
          {
            v43 = (_QWORD *)*k;
            if ( *k > 1u )
            {
              if ( *((_DWORD *)v43 + 3) == v37 && (_QWORD *)v34 == v43 )
              {
                v43 = k;
                goto LABEL_52;
              }
            }
            else if ( !v43 )
            {
              goto LABEL_52;
            }
          }
        }
        if ( v36 == v41 )
        {
LABEL_81:
          v43 = nullptr;
        }
        else
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v43 = (_QWORD *)*v36;
              if ( *v36 > 1u )
                break;
              if ( !v43 )
                goto LABEL_52;
              v36 += 5;
              if ( v41 == v36 )
                goto LABEL_81;
            }
            if ( *((_DWORD *)v43 + 3) == v37 && (_QWORD *)v34 == v43 )
              break;
            v36 += 5;
            if ( v41 == v36 )
              goto LABEL_81;
          }
          v43 = v36;
        }
LABEL_52:
        v44 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v63);
        sub_182CBA0(v44, &v65);
        v45 = *(unsigned int *)(v33 + 8);
        v46 = *(_QWORD **)v33;
        v63 = 0;
        v65 = 1;
        v47 = *(_DWORD *)(v32 + 12);
        v48 = v45 - 1;
        v64 = 0;
        v49 = 40 * v45;
        v66 = 0;
        v50 = 40LL * (v47 & v48);
        v51 = &v46[(unsigned __int64)v50 / 8];
        if ( v50 != v49 )
        {
          for ( m = &v46[(unsigned __int64)v50 / 8]; &v46[(unsigned __int64)v49 / 8] != m; m += 5 )
          {
            v53 = (_QWORD *)*m;
            if ( *m > 1u )
            {
              if ( *((_DWORD *)v53 + 3) == v47 && (_QWORD *)v32 == v53 )
              {
                v53 = m;
                goto LABEL_59;
              }
            }
            else if ( !v53 )
            {
              goto LABEL_59;
            }
          }
        }
        if ( v46 == v51 )
        {
LABEL_72:
          v53 = nullptr;
        }
        else
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v53 = (_QWORD *)*v46;
              if ( *v46 > 1u )
                break;
              if ( !v53 )
                goto LABEL_59;
              v46 += 5;
              if ( v51 == v46 )
                goto LABEL_72;
            }
            if ( *((_DWORD *)v53 + 3) == v47 && (_QWORD *)v32 == v53 )
              break;
            v46 += 5;
            if ( v51 == v46 )
              goto LABEL_72;
          }
          v53 = v46;
        }
LABEL_59:
        v59 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v63);
        sub_182CBA0(v59, &v65);
        v54 = v43 + 1;
        if ( (*((_BYTE *)v43 + 28) & 1) != 0
          || *((_DWORD *)v43 + 6) != 1
          || (*((_BYTE *)v53 + 28) & 1) != 0
          || *((_DWORD *)v53 + 6) != 1 )
        {
          break;
        }
        if ( (*((_BYTE *)v43 + 12) & 1) != 0 || (*((_BYTE *)v53 + 12) & 1) != 0 )
        {
          v55 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v54, v53 + 1) >> 31;
LABEL_62:
          if ( !(_BYTE)v55 )
            goto LABEL_87;
          goto LABEL_63;
        }
        if ( *((_DWORD *)v43 + 2) >= *((_DWORD *)v53 + 2) )
        {
LABEL_87:
          v3 = v61;
          v4 = v62;
          *(_QWORD *)v31 = v32;
          a3 = v33;
          goto LABEL_24;
        }
LABEL_63:
        v56 = *((_QWORD *)v31 - 1);
        v31 -= 8;
        *((_QWORD *)v31 + 1) = v56;
      }
      LOBYTE(v55) = sub_1848D40(qword_1C7F2C0, v54, v53 + 1);
      goto LABEL_62;
    }
  }
}

