__int64 __fastcall sub_3BE580(unsigned __int64 a1, char *a2, double a3)
{
  __int64 v3; // rax
  unsigned __int64 *v4; // r15
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  double v7; // xmm0_8
  __int64 v8; // r13
  unsigned int v9; // edx
  unsigned int v10; // ebx
  double v11; // xmm1_8
  __int64 v12; // rbp
  __int64 v13; // r12
  int v14; // eax
  _DWORD *v15; // rdx
  char v16; // al
  char v17; // cl
  signed int v18; // eax
  bool v19; // cc
  unsigned int v21; // r12d
  unsigned int v22; // eax
  __int64 i; // rbx
  __int64 v24; // r13
  int v25; // eax
  _DWORD *v26; // rdx
  char v27; // al
  char v28; // dl
  __int64 v29; // rbp
  __int64 v30; // rbp
  unsigned int v31; // r13d
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 j; // rbp
  __int64 v35; // rbx
  int v36; // eax
  _DWORD *v37; // rcx
  char v38; // al
  char v39; // cl
  unsigned int v40; // eax
  __int64 v41; // r8
  unsigned int v42; // ebp
  __int64 v43; // rbx
  __int64 k; // rdx
  int v45; // eax
  __int64 v46; // rdx
  _DWORD *v47; // rcx
  char v48; // al
  char v49; // dl
  __int64 v50; // rdi
  __int64 v51; // rax
  unsigned int v52; // eax
  unsigned __int64 *v53; // r13
  __int64 v54; // r15
  unsigned int v55; // ebp
  __int64 v56; // r14
  int v57; // eax
  _DWORD *v58; // rsi
  unsigned int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rbx
  unsigned __int64 *v62; // r12
  unsigned int v63; // ebp
  unsigned int v64; // r9d
  __int64 v65; // r13
  __int64 v66; // r14
  int v67; // esi
  _DWORD *v68; // rax
  unsigned int v69; // eax
  unsigned int v70; // r14d
  __int64 v71; // rsi
  __int64 v72; // [rsp+8h] [rbp-E0h]
  double v73; // [rsp+10h] [rbp-D8h]
  _QWORD *v74; // [rsp+18h] [rbp-D0h]
  unsigned int v75; // [rsp+24h] [rbp-C4h]
  char *v76; // [rsp+30h] [rbp-B8h]
  __int64 v77; // [rsp+38h] [rbp-B0h]
  __int64 v78; // [rsp+40h] [rbp-A8h]
  __int64 v79; // [rsp+40h] [rbp-A8h]
  unsigned int v80; // [rsp+40h] [rbp-A8h]
  __int64 v81; // [rsp+48h] [rbp-A0h]
  unsigned int v82; // [rsp+48h] [rbp-A0h]
  __int64 v83; // [rsp+50h] [rbp-98h]
  unsigned int v84; // [rsp+50h] [rbp-98h]
  __int64 v85; // [rsp+58h] [rbp-90h]
  __int64 v86; // [rsp+58h] [rbp-90h]
  __int64 v87; // [rsp+60h] [rbp-88h]
  unsigned int v88; // [rsp+60h] [rbp-88h]
  __int64 v89; // [rsp+68h] [rbp-80h]
  unsigned int v90; // [rsp+70h] [rbp-78h]
  unsigned int v91; // [rsp+74h] [rbp-74h]
  unsigned int v92[4]; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v93[88]; // [rsp+90h] [rbp-58h] BYREF

  v3 = *((_QWORD *)a2 + 3);
  v76 = a2;
  if ( !v3 )
  {
    v6 = 0;
    goto LABEL_18;
  }
  v73 = 0.0;
  v4 = (unsigned __int64 *)a1;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( v5 >= *(_DWORD *)(v3 - 4) )
      break;
    v7 = 1.0;
    v8 = *(_QWORD *)(v3 + 8LL * v5);
    v9 = *(_DWORD *)(v8 + 24);
    if ( !v9 )
      goto LABEL_14;
    v75 = v5;
    v10 = 0;
    while ( 1 )
    {
LABEL_7:
      v11 = 0.0;
      v12 = *(_QWORD *)(v8 + 8LL * v10 + 32);
      v92[0] = 0;
      if ( *(_WORD *)(v12 + 4) )
        goto LABEL_6;
      v13 = *(_QWORD *)(v12 + 16);
      a1 = (unsigned __int64)(v4 + 1);
      v74 = v4 + 1;
      v14 = sub_15F0200(v4 + 1);
      v15 = *(_DWORD **)(v13 + 24);
      if ( v15 )
      {
        if ( v14 == *v15 && !v15[1] )
          break;
      }
      a1 = *v4;
      a2 = (char *)v12;
      v16 = sub_15D26C0(*v4, v12);
      v9 = *(_DWORD *)(v8 + 24);
      v17 = v16;
      v18 = v92[0];
      if ( v17 )
        v18 = v92[0] + 1;
      ++v10;
      v7 = v7 + (double)v18;
      if ( v10 >= v9 )
        goto LABEL_13;
    }
    v21 = 0;
    a2 = (char *)++v92[0];
    v22 = *(_DWORD *)(v12 + 24);
    if ( !v22 )
      goto LABEL_26;
    v72 = v8;
    v90 = v10;
    do
    {
      if ( (unsigned int)a2 > 0x13 )
        goto LABEL_24;
      for ( i = *(_QWORD *)(v12 + 8LL * v21 + 32); *(_WORD *)(i + 4); i = *(_QWORD *)(v12 + 8LL * v21 + 32) )
      {
        if ( ++v21 >= v22 )
          goto LABEL_25;
      }
      v24 = *(_QWORD *)(i + 16);
      a1 = (unsigned __int64)v74;
      v25 = sub_15F0200(v74);
      v26 = *(_DWORD **)(v24 + 24);
      if ( !v26 || v25 != *v26 || v26[1] )
      {
        a1 = *v4;
        v27 = sub_15D26C0(*v4, i);
        a2 = (char *)v92[0];
        v28 = v27;
        v22 = *(_DWORD *)(v12 + 24);
        if ( v28 )
          a2 = (char *)++v92[0];
        goto LABEL_24;
      }
      v31 = 0;
      a2 = (char *)++v92[0];
      v32 = *(_DWORD *)(i + 24);
      if ( !v32 )
        goto LABEL_43;
      v77 = v12;
      v33 = i;
      do
      {
        if ( (unsigned int)a2 > 0x13 )
          goto LABEL_41;
        for ( j = *(_QWORD *)(v33 + 8LL * v31 + 32); *(_WORD *)(j + 4); j = *(_QWORD *)(v33 + 8LL * v31 + 32) )
        {
          if ( ++v31 >= v32 )
            goto LABEL_42;
        }
        v35 = *(_QWORD *)(j + 16);
        v78 = v33;
        v36 = sub_15F0200(v74);
        v37 = *(_DWORD **)(v35 + 24);
        v33 = v78;
        if ( !v37 || v36 != *v37 || (a1 = (unsigned int)v37[1], (_DWORD)a1) )
        {
          a1 = *v4;
          v38 = sub_15D26C0(*v4, j);
          v33 = v78;
          a2 = (char *)v92[0];
          v39 = v38;
          v32 = *(_DWORD *)(v78 + 24);
          if ( v39 )
            a2 = (char *)++v92[0];
          goto LABEL_41;
        }
        a2 = (char *)++v92[0];
        v40 = *(_DWORD *)(j + 24);
        if ( !v40 )
          goto LABEL_57;
        v41 = j;
        v42 = 0;
        v43 = v78;
        do
        {
          if ( (unsigned int)a2 > 0x13 )
            goto LABEL_55;
          for ( k = *(_QWORD *)(v41 + 8LL * v42 + 32); *(_WORD *)(k + 4); k = *(_QWORD *)(v41 + 8LL * v42 + 32) )
          {
            if ( ++v42 >= v40 )
              goto LABEL_56;
          }
          a1 = (unsigned __int64)v74;
          v83 = v41;
          v81 = k;
          v79 = *(_QWORD *)(k + 16);
          v45 = sub_15F0200(v74);
          v46 = v81;
          v41 = v83;
          v47 = *(_DWORD **)(v79 + 24);
          if ( !v47 || v45 != *v47 || v47[1] )
          {
            a1 = *v4;
            v48 = sub_15D26C0(*v4, v81);
            v41 = v83;
            a2 = (char *)v92[0];
            v49 = v48;
            v40 = *(_DWORD *)(v83 + 24);
            if ( v49 )
              a2 = (char *)++v92[0];
            goto LABEL_55;
          }
          a2 = (char *)++v92[0];
          v52 = *(_DWORD *)(v81 + 24);
          if ( !v52 )
            goto LABEL_74;
          v84 = v6;
          v80 = v31;
          v53 = v4;
          v54 = v41;
          v82 = v42;
          v55 = 0;
          while ( 1 )
          {
            if ( (unsigned int)a2 > 0x13 )
              goto LABEL_72;
            v56 = *(_QWORD *)(v46 + 8LL * v55 + 32);
            if ( *(_WORD *)(v56 + 4) )
              break;
LABEL_78:
            a1 = (unsigned __int64)v74;
            v87 = v46;
            v85 = *(_QWORD *)(v56 + 16);
            v57 = sub_15F0200(v74);
            v46 = v87;
            v58 = *(_DWORD **)(v85 + 24);
            if ( v58 && v57 == *v58 && !v58[1] )
            {
              a2 = (char *)++v92[0];
              v60 = *(_DWORD *)(v56 + 24);
              if ( !v60 )
                goto LABEL_88;
              v89 = v87;
              v86 = v43;
              v61 = v56;
              v88 = v21;
              v62 = v53;
              v91 = v55;
              v63 = 0;
              while ( (unsigned int)a2 <= 0x13 )
              {
                while ( 1 )
                {
                  v65 = *(_QWORD *)(v61 + 8LL * v63 + 32);
                  if ( !*(_WORD *)(v65 + 4) )
                    break;
                  if ( ++v63 >= v60 )
                    goto LABEL_91;
                }
                a1 = (unsigned __int64)v74;
                v66 = *(_QWORD *)(v65 + 16);
                v67 = sub_15F0200(v74);
                v68 = *(_DWORD **)(v66 + 24);
                if ( v68 && v67 == *v68 && !v68[1] )
                {
                  v70 = 0;
                  a2 = (char *)++v92[0];
                  if ( *(_DWORD *)(v65 + 24) )
                  {
                    do
                    {
                      a1 = (unsigned __int64)v62;
                      v71 = *(_QWORD *)(v65 + 8LL * v70++ + 32);
                      sub_3BE4D0(v62, v71, v92, 0x14u);
                    }
                    while ( v70 < *(_DWORD *)(v65 + 24) );
                    v60 = *(_DWORD *)(v61 + 24);
                    a2 = (char *)v92[0];
                  }
                  else
                  {
                    v60 = *(_DWORD *)(v61 + 24);
                  }
                }
                else
                {
                  v69 = sub_15D26C0(*v62, v65);
                  a2 = (char *)v92[0];
                  a1 = v69;
                  v60 = *(_DWORD *)(v61 + 24);
                  if ( (_BYTE)a1 )
                    a2 = (char *)++v92[0];
                }
                if ( ++v63 >= v60 )
                {
LABEL_91:
                  v53 = v62;
                  v43 = v86;
                  v46 = v89;
                  v55 = v91;
                  v21 = v88;
                  goto LABEL_88;
                }
              }
              v53 = v62;
              v43 = v86;
              v46 = v89;
              v64 = v63 + 1;
              v55 = v91;
              v21 = v88;
              if ( v64 >= v60 )
              {
                v52 = *(_DWORD *)(v89 + 24);
                v55 = v91 + 1;
                if ( v91 + 1 >= v52 )
                  goto LABEL_73;
              }
              else
              {
LABEL_88:
                v52 = *(_DWORD *)(v46 + 24);
              }
            }
            else
            {
              v59 = sub_15D26C0(*v53, v56);
              v46 = v87;
              a2 = (char *)v92[0];
              a1 = v59;
              v52 = *(_DWORD *)(v87 + 24);
              if ( (_BYTE)a1 )
                a2 = (char *)++v92[0];
            }
LABEL_72:
            if ( ++v55 >= v52 )
              goto LABEL_73;
          }
          while ( ++v55 < v52 )
          {
            v56 = *(_QWORD *)(v46 + 8LL * v55 + 32);
            if ( !*(_WORD *)(v56 + 4) )
              goto LABEL_78;
          }
LABEL_73:
          v41 = v54;
          v42 = v82;
          v4 = v53;
          v6 = v84;
          v31 = v80;
LABEL_74:
          v40 = *(_DWORD *)(v41 + 24);
LABEL_55:
          ++v42;
        }
        while ( v42 < v40 );
LABEL_56:
        v33 = v43;
LABEL_57:
        v32 = *(_DWORD *)(v33 + 24);
LABEL_41:
        ++v31;
      }
      while ( v31 < v32 );
LABEL_42:
      v12 = v77;
LABEL_43:
      v22 = *(_DWORD *)(v12 + 24);
LABEL_24:
      ++v21;
    }
    while ( v21 < v22 );
LABEL_25:
    v8 = v72;
    v10 = v90;
LABEL_26:
    v9 = *(_DWORD *)(v8 + 24);
    v11 = (double)(int)a2;
LABEL_6:
    ++v10;
    v7 = v7 + v11;
    if ( v10 < v9 )
      goto LABEL_7;
LABEL_13:
    v5 = v75;
LABEL_14:
    if ( (unsigned int)sub_180B130(a1) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(v7) )
      {
        sub_186A4C0(v7);
        v29 = sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v92, v8, *v4, 0, 0, 0);
        sub_160E8B0(v29, v92);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<double>();
        a2 = "\n";
        std::__ostream_insert<char,std::char_traits<char>>();
        a1 = (unsigned __int64)v93;
        sub_18572D0(v93);
        sub_186A500(v93, "\n");
      }
      else
      {
        v30 = sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v92, v8, *v4, 0, 0, 0);
        sub_160E8B0(v30, v92);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<double>();
        a2 = "\n";
        std::__ostream_insert<char,std::char_traits<char>>();
        a1 = (unsigned __int64)v93;
        sub_18572D0(v93);
      }
    }
    v19 = v7 <= v73;
    a3 = fmax(v7, v73);
    v3 = *((_QWORD *)v76 + 3);
    if ( !v19 )
      v6 = v5;
    v73 = a3;
    ++v5;
  }
  while ( v3 );
LABEL_18:
  if ( (unsigned int)sub_180B130(a1) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v50 = std::ostream::_M_insert<unsigned long>();
      sub_3BCC00(v50, "\n");
      sub_186A500(v50, "\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v51 = std::ostream::_M_insert<unsigned long>();
      sub_3BCC00(v51, "\n");
    }
  }
  return v6;
}

