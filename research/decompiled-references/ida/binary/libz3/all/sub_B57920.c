__int64 __fastcall sub_B57920(__int64 *a1, unsigned int *a2, double a3)
{
  unsigned int v3; // r14d
  __int64 v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // r15
  _QWORD *v8; // r12
  __int64 v9; // r9
  _BYTE **v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdi
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int **v16; // rbx
  unsigned int **v17; // rbp
  unsigned int *v18; // rsi
  __int64 v19; // r13
  unsigned int v20; // eax
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r15
  unsigned int **v24; // rax
  __int64 v25; // rbx
  _BYTE **v26; // rbx
  _BYTE **v27; // rax
  _BYTE *v28; // rbp
  _DWORD *v29; // r10
  __int64 v30; // r15
  __int64 *v31; // rsi
  unsigned int v32; // r8d
  unsigned int v33; // r11d
  __int64 v34; // r15
  __int64 *v35; // rdi
  __int64 v36; // rax
  __int64 *v37; // r13
  __int64 *i; // rax
  _DWORD *v39; // rdx
  _DWORD *v40; // rdx
  int v41; // r8d
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 *v44; // r11
  __int64 *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  char v53; // al
  unsigned int *v54; // r10
  unsigned int v55; // edx
  unsigned int v56; // eax
  unsigned int *v57; // rdi
  unsigned int v58; // r8d
  unsigned int *v59; // r8
  unsigned int **v60; // rdx
  __int64 v61; // r13
  __int64 v62; // rax
  unsigned int **v63; // r15
  unsigned int *v64; // rdi
  unsigned int **v65; // r8
  int v66; // ecx
  __int64 v67; // rbp
  unsigned int v68; // r10d
  __int64 v69; // rax
  unsigned int **v70; // r11
  unsigned int **v71; // rax
  unsigned int **v72; // rax
  unsigned int **j; // rax
  char v74; // al
  __int64 v75; // rbp
  __int64 v76; // [rsp+0h] [rbp-68h]
  __int64 v77; // [rsp+0h] [rbp-68h]
  unsigned int v78; // [rsp+0h] [rbp-68h]
  unsigned int *v79; // [rsp+0h] [rbp-68h]
  unsigned int **v80; // [rsp+0h] [rbp-68h]
  __int64 v81; // [rsp+8h] [rbp-60h]
  _BYTE **v82; // [rsp+8h] [rbp-60h]
  __int64 v83; // [rsp+10h] [rbp-58h]
  unsigned int *v84; // [rsp+10h] [rbp-58h]
  __int64 v85; // [rsp+18h] [rbp-50h]
  _BYTE *v86; // [rsp+18h] [rbp-50h]
  unsigned int *v87; // [rsp+20h] [rbp-48h]
  _BYTE **v88; // [rsp+28h] [rbp-40h]

  v76 = *a1;
  v3 = sub_BE5C80(*a1 + 64);
  if ( v3 )
    return v3;
  v5 = v76;
  if ( (unsigned int)sub_B58D80(v76) != 1 )
  {
    if ( (unsigned int)sub_180B130(v76) <= 1 )
      return 1;
    if ( (unsigned __int8)sub_186A530(a3) )
    {
LABEL_37:
      sub_186A4C0(a3);
      v25 = sub_180B150(v5, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v25, "\n");
      return 1;
    }
LABEL_115:
    sub_180B150(v5, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    return 1;
  }
  sub_B58680(v76);
  v6 = v76;
  v7 = *(_QWORD **)(v76 + 168);
  v8 = &v7[2 * *(unsigned int *)(v76 + 176)];
  if ( v7 != v8 )
  {
    while ( *v7 <= 1u )
    {
      v7 += 2;
      if ( v8 == v7 )
        goto LABEL_17;
    }
    if ( v8 != v7 )
    {
      v9 = v76;
      v10 = (_BYTE **)v7;
      while ( !*v10[1] )
      {
LABEL_11:
        v11 = v10 + 2;
        if ( v8 != v10 + 2 )
        {
          while ( 1 )
          {
            v10 = (_BYTE **)v11;
            if ( *v11 > 1u )
              break;
            v11 += 2;
            if ( v8 == v11 )
              goto LABEL_16;
          }
          if ( v8 != v11 )
            continue;
        }
LABEL_16:
        v6 = v9;
        goto LABEL_17;
      }
      v26 = v10;
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
LABEL_39:
            v27 = v26 + 2;
            if ( v8 == v26 + 2 )
              goto LABEL_11;
            while ( 1 )
            {
              v28 = *v27;
              v26 = v27;
              if ( (unsigned __int64)*v27 > 1 )
                break;
              v27 += 2;
              if ( v8 == v27 )
                goto LABEL_11;
            }
          }
          while ( !*v27[1] );
          v29 = *v10;
          v30 = *(unsigned int *)(v9 + 176);
          v31 = *(__int64 **)(v9 + 168);
          v32 = *((_DWORD *)*v10 + 3);
          v33 = v30 - 1;
          v34 = 16 * v30;
          v35 = &v31[(unsigned __int64)v34 / 8];
          v36 = 16LL * (v33 & v32);
          v37 = &v31[(unsigned __int64)v36 / 8];
          if ( v36 == v34 )
          {
LABEL_52:
            if ( v31 != v37 )
            {
              for ( i = *(__int64 **)(v9 + 168); v37 != i; i += 2 )
              {
                v40 = (_DWORD *)*i;
                if ( (unsigned __int64)*i > 1 )
                {
                  if ( v40[3] == v32 && v29 == v40 )
                    goto LABEL_60;
                }
                else if ( !v40 )
                {
                  break;
                }
              }
            }
LABEL_135:
            BUG();
          }
          i = &v31[(unsigned __int64)v36 / 8];
          while ( 1 )
          {
            while ( 1 )
            {
              v39 = (_DWORD *)*i;
              if ( (unsigned __int64)*i > 1 )
                break;
              if ( !v39 )
                goto LABEL_135;
              i += 2;
              if ( v35 == i )
                goto LABEL_52;
            }
            if ( v39[3] == v32 && v29 == v39 )
              break;
            i += 2;
            if ( v35 == i )
              goto LABEL_52;
          }
LABEL_60:
          v41 = *((_DWORD *)v28 + 3);
          v42 = i[1];
          v43 = 16LL * (v41 & v33);
          v44 = &v31[(unsigned __int64)v43 / 8];
          if ( v43 == v34 )
          {
LABEL_68:
            if ( v31 != v44 )
            {
              while ( 1 )
              {
                v47 = *v31;
                if ( (unsigned __int64)*v31 > 1 )
                {
                  if ( *(_DWORD *)(v47 + 12) == v41 && v28 == (_BYTE *)v47 )
                  {
                    v45 = v31;
                    goto LABEL_77;
                  }
                }
                else if ( !v47 )
                {
                  goto LABEL_135;
                }
                v31 += 2;
                if ( v44 == v31 )
                  goto LABEL_135;
              }
            }
            goto LABEL_135;
          }
          v45 = &v31[(unsigned __int64)v43 / 8];
          while ( 1 )
          {
            while ( 1 )
            {
              v46 = *v45;
              if ( (unsigned __int64)*v45 > 1 )
                break;
              if ( !v46 )
                goto LABEL_135;
              v45 += 2;
              if ( v45 == v35 )
                goto LABEL_68;
            }
            if ( *(_DWORD *)(v46 + 12) == v41 && v28 == (_BYTE *)v46 )
              break;
            v45 += 2;
            if ( v45 == v35 )
              goto LABEL_68;
          }
LABEL_77:
          a2 = *((unsigned int **)v29 + 4);
          v88 = v10;
          v85 = v9;
          v48 = v45[1];
          v87 = (unsigned int *)*v10;
          v79 = *((unsigned int **)v28 + 4);
          v83 = sub_15D1F10(a2);
          v49 = sub_15D1F10(v79);
          v9 = v85;
          v10 = v88;
          if ( v83 == v49 )
          {
            v50 = *(_QWORD *)(*(_QWORD *)(v85 + 8) + 16LL);
            v51 = *(_QWORD *)(v50 + 8656);
            a2 = *(unsigned int **)(*(_QWORD *)(v51 + 8LL * *a2) + 8LL);
            v52 = *(_QWORD *)(*(_QWORD *)(v51 + 8LL * *v79) + 8LL);
            if ( a2 != (unsigned int *)v52 )
              break;
          }
        }
        v81 = *(_QWORD *)(*(_QWORD *)(v51 + 8LL * *v79) + 8LL);
        v53 = sub_8E77E0(v50, (__int64)a2, v52);
        v9 = v85;
        v10 = v88;
        v54 = v87;
        if ( !v53 )
        {
          v5 = *(_QWORD *)(*(_QWORD *)(v85 + 8) + 16LL);
          v74 = sub_8F5D90(v5, (__int64)a2, v81);
          v9 = v85;
          v10 = v88;
          v54 = v87;
          if ( v74 )
            break;
        }
        v55 = *(_DWORD *)(v42 + 52);
        v56 = *(_DWORD *)(v48 + 52);
        a2 = (unsigned int *)(v48 + 40);
        v57 = (unsigned int *)(v42 + 40);
        while ( v56 < v55 )
        {
          v58 = v55;
          v55 = v56;
          v56 = v58;
          v59 = v57;
          v57 = a2;
          a2 = v59;
        }
        v60 = *(unsigned int ***)v57;
        v61 = *(_QWORD *)v57 + 16LL * v57[2];
        if ( *(_QWORD *)v57 != v61 )
        {
          while ( (unsigned __int64)*v60 <= 1 )
          {
            v60 += 2;
            if ( (unsigned int **)v61 == v60 )
              goto LABEL_39;
          }
          if ( (unsigned int **)v61 != v60 )
          {
            v62 = a2[2];
            v63 = *(unsigned int ***)a2;
            v84 = v54;
            v64 = *v60;
            v82 = v10;
            a2 = (unsigned int *)(unsigned int)(v62 - 1);
            v62 *= 16;
            v86 = v28;
            v65 = (unsigned int **)((char *)v63 + v62);
            v66 = (int)a2;
            v67 = v62;
            do
            {
              v68 = *(_DWORD *)(*(_QWORD *)v64 + 12LL);
              v69 = 16LL * (v66 & v68);
              v70 = &v63[(unsigned __int64)v69 / 8];
              if ( v69 != v67 )
              {
                v80 = &v63[(unsigned __int64)v69 / 8];
                v71 = &v63[(unsigned __int64)v69 / 8];
                do
                {
                  a2 = *v71;
                  if ( (unsigned __int64)*v71 > 1 )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)a2 + 12LL) == v68 && a2 == v64 )
                    {
LABEL_111:
                      v5 = v9;
                      a2 = v84;
                      sub_B5AAD0(v9, v84, v86);
                      goto LABEL_112;
                    }
                  }
                  else if ( !a2 )
                  {
                    goto LABEL_96;
                  }
                  v71 += 2;
                }
                while ( v65 != v71 );
                v70 = v80;
              }
              if ( v63 != v70 )
              {
                for ( j = v63; v70 != j; j += 2 )
                {
                  a2 = *j;
                  if ( (unsigned __int64)*j > 1 )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)a2 + 12LL) == v68 && a2 == v64 )
                      goto LABEL_111;
                  }
                  else if ( !a2 )
                  {
                    break;
                  }
                }
              }
LABEL_96:
              v72 = v60 + 2;
              if ( (unsigned int **)v61 == v60 + 2 )
                break;
              while ( 1 )
              {
                v64 = *v72;
                v60 = v72;
                if ( (unsigned __int64)*v72 > 1 )
                  break;
                v72 += 2;
                if ( (unsigned int **)v61 == v72 )
                  goto LABEL_101;
              }
            }
            while ( (unsigned int **)v61 != v72 );
LABEL_101:
            v10 = v82;
          }
        }
      }
LABEL_112:
      if ( (unsigned int)sub_180B130(v5) <= 1 )
        return 1;
      if ( (unsigned __int8)sub_186A530(a3) )
        goto LABEL_37;
      goto LABEL_115;
    }
  }
LABEL_17:
  v12 = v6;
  v77 = v6;
  v13 = sub_B5A400(v6);
  if ( v13 == 1 )
  {
    v5 = v77;
    v14 = sub_B5EAA0(v77);
    v15 = v77;
    if ( v14 != 1 )
    {
      if ( (unsigned int)sub_180B130(v77) <= 1 )
        return 1;
      if ( (unsigned __int8)sub_186A530(a3) )
        goto LABEL_37;
      goto LABEL_115;
    }
    v16 = *(unsigned int ***)(v77 + 168);
    v17 = &v16[2 * *(unsigned int *)(v77 + 176)];
    if ( v16 != v17 )
    {
      while ( (unsigned __int64)*v16 <= 1 )
      {
        v16 += 2;
        if ( v17 == v16 )
          return v3;
      }
      if ( v17 != v16 )
      {
        v78 = v3;
        v18 = *v16;
        v19 = v15;
        while ( 1 )
        {
          v20 = sub_B645B0(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL), v18);
          v21 = v20;
          v22 = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL);
          v23 = *(_QWORD *)(*(_QWORD *)(v22 + 8840) + 8LL * (v20 >> 1));
          if ( (!(unsigned int)sub_8E7030(v22)
             || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v22 + 7488) + 56LL))(
                  *(_QWORD *)(v22 + 7488),
                  v23))
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL) + 8848LL) + v21) == 1 )
          {
            if ( *(_BYTE *)v16[1] )
            {
              a2 = *v16;
              v5 = v19;
              if ( (unsigned int)sub_B5F440(v19, *v16) != 1 )
                break;
            }
          }
          v24 = v16 + 2;
          if ( v17 != v16 + 2 )
          {
            while ( 1 )
            {
              v18 = *v24;
              v16 = v24;
              if ( (unsigned __int64)*v24 > 1 )
                break;
              v24 += 2;
              if ( v17 == v24 )
                return v78;
            }
            if ( v17 != v24 )
              continue;
          }
          return v78;
        }
        if ( (unsigned int)sub_180B130(v19) <= 1 )
          return 1;
        if ( (unsigned __int8)sub_186A530(a3) )
          goto LABEL_37;
        goto LABEL_115;
      }
    }
  }
  else
  {
    if ( (unsigned int)sub_180B130(v12) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v75 = sub_180B150(v12, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v75, "\n");
      }
      else
      {
        sub_180B150(v12, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v3 = 2;
    if ( v13 == -1 )
      return 1;
  }
  return v3;
}

