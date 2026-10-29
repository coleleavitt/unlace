__int64 __fastcall sub_7C47C0(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v4; // r12
  __int64 v5; // rbx
  unsigned int v6; // r9d
  int v7; // eax
  __int64 v8; // rax
  _DWORD *v9; // r15
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdi
  unsigned int v22; // r9d
  unsigned int v23; // eax
  unsigned int v24; // ebp
  unsigned int v25; // r13d
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(__int64, __int64); // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r11
  int v32; // edx
  unsigned int v33; // ebp
  unsigned int v34; // r14d
  int *v35; // r15
  unsigned int v36; // r13d
  unsigned int v37; // edx
  __int64 (__fastcall *v38)(); // rax
  unsigned int v39; // ecx
  int *v40; // rax
  int v41; // edx
  int v42; // esi
  int v43; // edx
  unsigned int v44; // edx
  unsigned int v45; // ecx
  __int64 (__fastcall *v46)(_QWORD); // rax
  __int64 v47; // rax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rax
  unsigned int v52; // r9d
  __int64 (__fastcall *v53)(); // rax
  int *v54; // rax
  int *v55; // rdx
  int v56; // esi
  int v57; // edi
  int v58; // esi
  __int64 v59; // rsi
  __int64 v60; // rdi
  unsigned int *v61; // r15
  __int64 v62; // rax
  unsigned int *v63; // r13
  __int64 v64; // r15
  _DWORD *v65; // rbx
  unsigned int v66; // r12d
  unsigned int v67; // ebp
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned int v70; // r11d
  __int64 v71; // rbp
  __int64 (__fastcall *v72)(); // rax
  __int64 v73; // rbp
  bool v74; // zf
  __int64 v75; // rbp
  __int64 v76; // rax
  unsigned int v77; // [rsp+Ch] [rbp-6Ch]
  unsigned int v78; // [rsp+10h] [rbp-68h]
  unsigned int *v79; // [rsp+10h] [rbp-68h]
  unsigned int v80; // [rsp+10h] [rbp-68h]
  unsigned int v81; // [rsp+10h] [rbp-68h]
  int v82; // [rsp+18h] [rbp-60h]
  unsigned int v83; // [rsp+18h] [rbp-60h]
  unsigned int v84; // [rsp+18h] [rbp-60h]
  unsigned int v85; // [rsp+18h] [rbp-60h]
  __int64 v86; // [rsp+18h] [rbp-60h]
  unsigned int v87; // [rsp+18h] [rbp-60h]
  _DWORD *v88; // [rsp+20h] [rbp-58h]
  __int64 v89; // [rsp+20h] [rbp-58h]
  int v90; // [rsp+28h] [rbp-50h]
  unsigned int v91; // [rsp+30h] [rbp-48h]
  unsigned int v92; // [rsp+30h] [rbp-48h]
  unsigned int v93; // [rsp+30h] [rbp-48h]
  unsigned int v94; // [rsp+34h] [rbp-44h]
  __int64 v95; // [rsp+38h] [rbp-40h]

  v4 = (_DWORD *)a2;
  v5 = a1;
  if ( dword_1C7DF74 == *(_DWORD *)(a2 + 52) )
  {
    v73 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_7C5DC0(v73, a3);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    a1 = a2;
    a2 = std::ostream::_M_insert<unsigned long>();
    (*(void (__fastcall **)(_DWORD *, __int64, __int64, __int64))(*(_QWORD *)v4 + 136LL))(v4, a2, v5 + 80, 1);
  }
  v6 = v4[17];
  v78 = v4[8];
  v77 = v4[15];
  v7 = v4[16];
  *(_DWORD *)(v5 + 992) = 0;
  v82 = v7;
  v8 = *(_QWORD *)(v5 + 872);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  v9 = v4 + 19;
  v10 = 0;
  if ( !v6 )
    goto LABEL_20;
  v88 = v4;
  v11 = v6;
  while ( 1 )
  {
    a2 = (unsigned int)v9[1];
    if ( (_DWORD)a2 == a3 )
      break;
    v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 536LL);
    if ( v14 == sub_7C55E0 )
    {
      v15 = *(_QWORD *)(v5 + 160);
      if ( !v15 )
      {
        v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 3288LL) + 4 * a2);
        goto LABEL_17;
      }
      a2 = (unsigned int)a2 >> 1;
      if ( *(_DWORD *)(*(_QWORD *)(v15 + 880) + 4 * a2) < *(_DWORD *)(v15 + 888) )
        goto LABEL_8;
LABEL_12:
      ++v10;
      v9 += 2;
      if ( v10 == v11 )
        goto LABEL_19;
    }
    else
    {
      a1 = v5;
      v16 = v14(v5);
LABEL_17:
      if ( !v16 )
      {
LABEL_8:
        v12 = *(_QWORD *)(v5 + 872);
        if ( !v12 || (v13 = *(unsigned int *)(v12 - 4), (_DWORD)v13 == *(_DWORD *)(v12 - 8)) )
        {
          a1 = v5 + 872;
          sub_2FD3F0((unsigned int **)(v5 + 872));
          v12 = *(_QWORD *)(v5 + 872);
          v13 = *(unsigned int *)(v12 - 4);
        }
        *(_DWORD *)(v12 + 4 * v13) = v10;
        ++*(_DWORD *)(v12 - 4);
        if ( *(_DWORD *)(v5 + 992) < *v9 )
          *(_DWORD *)(v5 + 992) = *v9;
        goto LABEL_12;
      }
      ++v10;
      v9 += 2;
      if ( v10 == v11 )
      {
LABEL_19:
        v4 = v88;
        goto LABEL_20;
      }
    }
  }
  v22 = v11;
  v4 = v88;
  if ( v10 == v22 )
  {
LABEL_20:
    dword_1C7DF74 = v4[13];
    sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v17 = std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v18 = sub_180B150(v17, "\n");
    (*(void (__fastcall **)(_DWORD *, __int64, __int64, __int64))(*(_QWORD *)v4 + 136LL))(v4, v18, v5 + 80, 1);
    v19 = sub_180B150(v4, v18);
    std::__ostream_insert<char,std::char_traits<char>>();
    v20 = sub_7C5DC0(v19, a3);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_180B150(v20, "\n");
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1872CE0("");
    sub_1873130(114, 311);
  }
  v23 = *(_DWORD *)(v5 + 992);
  if ( v23 || v10 + 1 >= v22 )
  {
    v31 = v10;
    v32 = v88[2 * v10 + 19];
    v33 = v82 - v32;
    if ( v22 >= v78 )
    {
LABEL_59:
      v50 = v88[13];
      if ( v33 < v77 )
        goto LABEL_86;
      if ( v22 == 1 )
      {
        dword_1C7DF74 = v88[13];
LABEL_83:
        v86 = v31;
        v80 = v22;
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
        v31 = v86;
        v22 = v80;
LABEL_62:
        v51 = *(_QWORD *)v88;
        v52 = v22 - 1;
        v88[16] = v33;
        v88[17] = v52;
        v53 = *(__int64 (__fastcall **)())(v51 + 80);
        if ( v53 == sub_7C5580 )
        {
          v54 = &v88[2 * v31 + 19];
          v55 = &v88[2 * v52 + 19];
          v56 = *v55;
          *v55 = *v54;
          v57 = v88[2 * v31 + 20];
          *v54 = v56;
          v58 = v88[2 * v52 + 20];
          v55[1] = v57;
          v54[1] = v58;
        }
        else
        {
          v81 = v52;
          ((void (__fastcall *)(_DWORD *, _QWORD, _QWORD))v53)(v88, v52, v10);
          v52 = v81;
        }
        v59 = (unsigned int)dword_1C7DF74;
        v60 = (unsigned int)v88[13];
        if ( v33 < *(_DWORD *)(v5 + 992) + v77 )
        {
          if ( dword_1C7DF74 != (_DWORD)v60 )
          {
            v61 = *(unsigned int **)(v5 + 872);
            if ( !v61 )
              return 0;
            goto LABEL_67;
          }
          v87 = v52;
          sub_180B150(v60, (unsigned int)dword_1C7DF74);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::operator<<<std::char_traits<char>>();
          v60 = (unsigned int)v88[13];
          v59 = (unsigned int)dword_1C7DF74;
          v61 = *(unsigned int **)(v5 + 872);
          v52 = v87;
          if ( v61 )
          {
LABEL_67:
            v62 = *(v61 - 1);
            if ( &v61[v62] != v61 )
            {
              v79 = &v61[v62];
              v85 = a3;
              v63 = v61;
              v64 = v5;
              v65 = v88;
              v66 = v33;
              v67 = v52;
              do
              {
                v68 = *v63;
                if ( v67 == (_DWORD)v68 )
                  v68 = v10;
                v69 = v68 + 8;
                v70 = v65[2 * v69 + 4];
                if ( v66 < v65[2 * v69 + 3] + v77 )
                {
                  if ( (_DWORD)v59 == (_DWORD)v60 )
                  {
                    v93 = v65[2 * v69 + 4];
                    v89 = sub_180B150(v60, v59);
                    std::__ostream_insert<char,std::char_traits<char>>();
                    sub_7C5DC0(v89, v93);
                    std::__ostream_insert<char,std::char_traits<char>>();
                    std::ostream::_M_insert<unsigned long>();
                    std::__ostream_insert<char,std::char_traits<char>>();
                    v70 = v93;
                  }
                  (*(void (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v64 + 520LL))(v64, v65, v70);
                  v60 = (unsigned int)v65[13];
                  v59 = (unsigned int)dword_1C7DF74;
                }
                ++v63;
              }
              while ( v79 != v63 );
              a3 = v85;
              v5 = v64;
            }
          }
        }
        if ( (_DWORD)v59 == (_DWORD)v60 )
        {
          v71 = sub_180B150(v60, v59);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_7C5DC0(v71, a3);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v72 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 568LL);
          if ( v72 != sub_7C5740 )
            ((void (__fastcall *)(__int64, char *))v72)(v5, " ");
          std::ostream::_M_insert<bool>();
          std::operator<<<std::char_traits<char>>();
        }
        return 0;
      }
LABEL_61:
      if ( dword_1C7DF74 != v50 )
        goto LABEL_62;
      goto LABEL_83;
    }
    goto LABEL_38;
  }
  v24 = v10 + 1;
  v91 = a3;
  v25 = v22;
  while ( 1 )
  {
    v26 = (unsigned int)v88[2 * v24 + 20];
    v27 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 536LL);
    if ( (char *)v27 != (char *)sub_7C55E0 )
      break;
    v28 = *(_QWORD *)(v5 + 160);
    if ( !v28 )
    {
      v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 3288LL) + 4 * v26);
      goto LABEL_53;
    }
    if ( *(_DWORD *)(*(_QWORD *)(v28 + 880) + 4LL * ((unsigned int)v26 >> 1)) < *(_DWORD *)(v28 + 888) )
      goto LABEL_34;
    a2 = 0;
LABEL_29:
    ++v24;
    if ( (_DWORD)a2 || v24 >= v25 )
    {
      v31 = v10;
      v22 = v25;
      a3 = v91;
      v23 = a2;
      v32 = v88[2 * v10 + 19];
      v33 = v82 - v32;
      if ( v22 >= v78 )
        goto LABEL_85;
LABEL_38:
      a2 = v22;
      v92 = v10;
      v34 = v22;
      v94 = a3;
      v35 = &v88[2 * v22 + 19];
      v36 = v22;
      v90 = v32;
      v95 = v31;
      while ( 1 )
      {
        a1 = v77;
        if ( v33 >= v77 + v23 )
        {
LABEL_58:
          v22 = v34;
          v32 = v90;
          v10 = v92;
          a3 = v94;
          v31 = v95;
          goto LABEL_59;
        }
        a1 = (__int64)sub_7C55E0;
        v45 = v35[1];
        v46 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 536LL);
        if ( v46 == sub_7C55E0 )
        {
          v47 = *(_QWORD *)(v5 + 160);
          if ( v47 )
          {
            a2 = *(_QWORD *)(v47 + 880);
            v37 = *(_DWORD *)(a2 + 4LL * (v45 >> 1));
            if ( v37 >= *(_DWORD *)(v47 + 888) && (((unsigned __int8)v45 ^ (unsigned __int8)v37) & 1) != 0 )
              goto LABEL_44;
            goto LABEL_41;
          }
          v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 3288LL) + 4LL * v45);
        }
        else
        {
          v84 = v35[1];
          a2 = v45;
          a1 = v5;
          v48 = ((__int64 (__fastcall *)(__int64, _QWORD))v46)(v5, v45);
          v45 = v84;
        }
        if ( v48 == -1 )
          goto LABEL_44;
LABEL_41:
        v83 = v45;
        v33 += *v35;
        sub_7E4540(v88, v5 + 80, (unsigned int)v35[1]);
        v38 = *(__int64 (__fastcall **)())(*(_QWORD *)v88 + 80LL);
        v39 = v83;
        if ( v38 == sub_7C5580 )
        {
          v40 = &v88[2 * v34 + 19];
          v41 = *v40;
          *v40 = *v35;
          v42 = v35[1];
          *v35 = v41;
          v43 = v88[2 * v34 + 20];
          v40[1] = v42;
          v35[1] = v43;
        }
        else
        {
          ((void (__fastcall *)(_DWORD *, _QWORD, _QWORD))v38)(v88, v34, v36);
          v39 = v83;
        }
        v44 = v34;
        a2 = (__int64)v88;
        a1 = v5;
        ++v34;
        sub_7C15B0(v5, (__int64)v88, v44, v39);
LABEL_44:
        ++v36;
        v35 += 2;
        if ( v36 == v78 )
          goto LABEL_58;
        v23 = *(_DWORD *)(v5 + 992);
      }
    }
  }
  a1 = v5;
  v49 = v27(v5, v26);
LABEL_53:
  if ( v49 )
  {
    a2 = *(unsigned int *)(v5 + 992);
    goto LABEL_29;
  }
LABEL_34:
  v29 = *(_QWORD *)(v5 + 872);
  if ( !v29 || (v30 = *(unsigned int *)(v29 - 4), (_DWORD)v30 == *(_DWORD *)(v29 - 8)) )
  {
    a1 = v5 + 872;
    sub_2FD3F0((unsigned int **)(v5 + 872));
    v29 = *(_QWORD *)(v5 + 872);
    v30 = *(unsigned int *)(v29 - 4);
  }
  *(_DWORD *)(v29 + 4 * v30) = v24;
  ++*(_DWORD *)(v29 - 4);
  v23 = v88[2 * v24 + 19];
  a2 = *(unsigned int *)(v5 + 992);
  if ( (unsigned int)a2 >= v23 )
    goto LABEL_29;
  v31 = v10;
  v22 = v25;
  a3 = v91;
  *(_DWORD *)(v5 + 992) = v23;
  v32 = v88[2 * v10 + 19];
  v33 = v82 - v32;
  if ( v22 < v78 )
    goto LABEL_38;
LABEL_85:
  v50 = v88[13];
  if ( v33 >= v77 )
    goto LABEL_61;
LABEL_86:
  v74 = dword_1C7DF74 == v50;
  v88[17] = v22;
  v88[16] = v33 + v32;
  if ( v74 )
  {
    v75 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_7C5DC0(v75, a3);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v76 = std::ostream::_M_insert<unsigned long>();
    (*(void (__fastcall **)(_DWORD *, __int64, __int64, __int64))(*(_QWORD *)v88 + 136LL))(v88, v76, v5 + 80, 1);
  }
  (*(void (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v5 + 512LL))(v5, v88, a3);
  return 0xFFFFFFFFLL;
}

