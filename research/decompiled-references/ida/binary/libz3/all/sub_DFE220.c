_QWORD *__fastcall sub_DFE220(_BYTE *a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5, double a6)
{
  unsigned __int64 v7; // r12
  __int64 v9; // rbx
  unsigned int v10; // ecx
  int v11; // r15d
  __int64 v12; // r14
  _QWORD *result; // rax
  int v14; // edx
  int v15; // r9d
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // r14
  _DWORD *v20; // rax
  _DWORD *v21; // rax
  char *v22; // r14
  __int64 v23; // r15
  int v24; // r9d
  int v25; // r9d
  __int64 v26; // rsi
  __int64 v27; // r14
  int v28; // eax
  __int64 *v29; // rsi
  __int64 v30; // rbp
  unsigned int i; // r15d
  __int64 v32; // r12
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  _QWORD *v35; // rax
  _DWORD *v36; // rax
  _DWORD *v37; // rax
  unsigned __int64 *v38; // r15
  __int64 v39; // rax
  unsigned __int64 v40; // r14
  int v41; // r9d
  int v42; // r8d
  unsigned __int64 *v43; // r15
  __int64 v44; // rax
  char *v45; // r14
  int v46; // r9d
  int v47; // r9d
  __int64 v48; // r14
  __int64 v49; // rdi
  __int64 *v50; // rcx
  __int64 v51; // rax
  __int64 *v52; // r12
  __int64 *v53; // r14
  __int64 v54; // rax
  __int64 v55; // r14
  int v56; // r9d
  int v57; // r9d
  int v58; // r8d
  int v59; // r9d
  int v60[2]; // [rsp+0h] [rbp-98h]
  int v61[2]; // [rsp+0h] [rbp-98h]
  int v62[2]; // [rsp+0h] [rbp-98h]
  int v63[2]; // [rsp+0h] [rbp-98h]
  __int64 v65[2]; // [rsp+18h] [rbp-80h] BYREF
  __int64 v66; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v67[2]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v68[88]; // [rsp+40h] [rbp-58h] BYREF

  v7 = a2;
  v9 = (__int64)a1;
  v65[0] = a4;
  v10 = *(_DWORD *)a4;
  v11 = 1 << v10;
  v12 = 4LL * (v10 >> 5);
  if ( v10 < *(_DWORD *)(a2 + 8) )
  {
    result = (_QWORD *)(v12 + *(_QWORD *)(a2 + 16));
    v14 = *(_DWORD *)result;
    if ( (v11 & *(_DWORD *)result) != 0 )
      return result;
  }
  else
  {
    a2 = v10 + 1;
    sub_186B510(v7 + 8, a2, 0);
    result = (_QWORD *)(v12 + *(_QWORD *)(v7 + 16));
    v14 = *(_DWORD *)result;
  }
  *(_DWORD *)result = v11 | v14;
  sub_DFBCB0(a1);
  if ( !*(_WORD *)(a4 + 4) )
  {
    v16 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL);
    if ( v16 )
    {
      if ( !*v16 && v16[1] == 8 && *(_DWORD *)(a4 + 24) == 1 )
        return (_QWORD *)sub_DFE220((_DWORD)a1, v7, a3, *(_QWORD *)(a4 + 32), a5 ^ 1u, v15);
    }
  }
  if ( !a5 )
  {
    sub_DFBCB0(a1);
    if ( *(_WORD *)(a4 + 4)
      || (v20 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL)) == nullptr
      || *v20
      || v20[1] != 6
      || (v38 = (unsigned __int64 *)(a4 + 32),
          v39 = 8LL * *(unsigned int *)(a4 + 24),
          *(_QWORD *)v61 = a4 + 32 + v39,
          !v39) )
    {
LABEL_24:
      sub_DFBCB0(a1);
      if ( *(_WORD *)(a4 + 4) )
        goto LABEL_13;
      v21 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL);
      if ( !v21 || *v21 || v21[1] != 4 )
        goto LABEL_13;
      v22 = *(char **)(a4 + 32);
      v23 = *(_QWORD *)(a4 + 40);
      *(_QWORD *)v60 = *(_QWORD *)(a4 + 48);
      if ( !(unsigned __int8)sub_1361D10(a3, v22) || !(unsigned __int8)sub_1361D10(a3, v23) )
      {
        a1 = (_BYTE *)a3;
        a2 = (unsigned __int64)v22;
        if ( (unsigned __int8)sub_1361DE0(a3, v22) )
        {
          a2 = *(_QWORD *)v60;
          a1 = (_BYTE *)a3;
          if ( (unsigned __int8)sub_1361D10(a3, *(_QWORD *)v60) )
          {
            sub_DFBCB0(v9);
            if ( *(char **)(*(_QWORD *)(v9 + 296) + 864LL) != v22 )
              sub_DFE220(v9, v7, a3, (_DWORD)v22, 1, v24);
            sub_DFBCB0(v9);
            result = *(_QWORD **)(v9 + 296);
            if ( result[107] != *(_QWORD *)v60 )
              return (_QWORD *)sub_DFE220(v9, v7, a3, v60[0], 0, v25);
            return result;
          }
        }
        goto LABEL_13;
      }
      sub_DFBCB0(a1);
      if ( *(char **)(*((_QWORD *)a1 + 37) + 856LL) != v22 )
        sub_DFE220((_DWORD)a1, v7, a3, (_DWORD)v22, 0, v56);
      sub_DFBCB0(a1);
      result = *((_QWORD **)a1 + 37);
      if ( result[107] == v23 )
        return result;
      v58 = 0;
      return (_QWORD *)sub_DFE220((_DWORD)a1, v7, a3, v23, v58, v57);
    }
    while ( 1 )
    {
      v40 = *v38;
      a2 = *v38;
      if ( (unsigned __int8)sub_1361D10(a3, *v38) )
        break;
      if ( *(unsigned __int64 **)v61 == ++v38 )
        goto LABEL_24;
    }
    v42 = 0;
    return (_QWORD *)sub_DFE220((_DWORD)a1, v7, a3, v40, v42, v41);
  }
  sub_DFBCB0(a1);
  if ( !*(_WORD *)(a4 + 4) )
  {
    v17 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL);
    if ( v17 )
    {
      if ( !*v17 && v17[1] == 5 )
      {
        v43 = (unsigned __int64 *)(a4 + 32);
        v44 = 8LL * *(unsigned int *)(a4 + 24);
        *(_QWORD *)v62 = a4 + 32 + v44;
        if ( v44 )
        {
          while ( 1 )
          {
            v40 = *v43;
            a2 = *v43;
            if ( (unsigned __int8)sub_1361DE0(a3, *v43) )
              break;
            if ( *(unsigned __int64 **)v62 == ++v43 )
              goto LABEL_10;
          }
          v42 = 1;
          return (_QWORD *)sub_DFE220((_DWORD)a1, v7, a3, v40, v42, v41);
        }
      }
    }
  }
LABEL_10:
  sub_DFBCB0(a1);
  if ( *(_WORD *)(a4 + 4) )
    goto LABEL_13;
  v18 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL);
  if ( !v18 || *v18 || v18[1] != 4 )
    goto LABEL_13;
  v45 = *(char **)(a4 + 32);
  v23 = *(_QWORD *)(a4 + 40);
  *(_QWORD *)v63 = *(_QWORD *)(a4 + 48);
  if ( (unsigned __int8)sub_1361D10(a3, v45) && (unsigned __int8)sub_1361DE0(a3, v23) )
  {
    sub_DFBCB0(a1);
    if ( *(char **)(*((_QWORD *)a1 + 37) + 856LL) != v45 )
      sub_DFE220((_DWORD)a1, v7, a3, (_DWORD)v45, 0, v59);
    sub_DFBCB0(a1);
    result = *((_QWORD **)a1 + 37);
    v58 = 1;
    if ( result[108] == v23 )
      return result;
    return (_QWORD *)sub_DFE220((_DWORD)a1, v7, a3, v23, v58, v57);
  }
  a1 = (_BYTE *)a3;
  a2 = (unsigned __int64)v45;
  if ( (unsigned __int8)sub_1361DE0(a3, v45) )
  {
    a2 = *(_QWORD *)v63;
    a1 = (_BYTE *)a3;
    if ( (unsigned __int8)sub_1361DE0(a3, *(_QWORD *)v63) )
    {
      sub_DFBCB0(v9);
      if ( *(char **)(*(_QWORD *)(v9 + 296) + 864LL) != v45 )
        sub_DFE220(v9, v7, a3, (_DWORD)v45, 1, v46);
      sub_DFBCB0(v9);
      result = *(_QWORD **)(v9 + 296);
      if ( result[108] != *(_QWORD *)v63 )
        return (_QWORD *)sub_DFE220(v9, v7, a3, v63[0], 1, v47);
      return result;
    }
  }
LABEL_13:
  if ( (unsigned int)sub_180B130(a1) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a6) )
    {
      sub_186A4C0(a6);
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v19 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_DFBCB0(v9);
      sub_1606360(v67, a4, *(_QWORD *)(v9 + 296), 0, 0, 0);
      sub_160E8B0(v19, v67);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::operator<<<std::char_traits<char>>();
      a2 = (unsigned __int64)"\n";
      std::operator<<<std::char_traits<char>>();
      a1 = v68;
      sub_18572D0(v68);
      sub_186A500(v68, "\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v27 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_DFBCB0(v9);
      sub_1606360(v67, a4, *(_QWORD *)(v9 + 296), 0, 0, 0);
      sub_160E8B0(v27, v67);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::operator<<<std::char_traits<char>>();
      a2 = (unsigned __int64)"\n";
      std::operator<<<std::char_traits<char>>();
      a1 = v68;
      sub_18572D0(v68);
    }
  }
  if ( (unsigned int)sub_180B130(a1) > 0xA )
  {
    if ( (unsigned __int8)sub_186A530(a6) )
    {
      sub_186A4C0(a6);
      v26 = sub_180B150(a1, a2);
      sub_DFDF70(v9, v26, a3, a4);
      sub_186A500(v9, v26);
    }
    else
    {
      v28 = sub_180B150(a1, a2);
      sub_DFDF70(v9, v28, a3, a4);
    }
  }
  result = (_QWORD *)sub_DFBCB0(v9);
  if ( !*(_WORD *)(a4 + 4) )
  {
    result = *(_QWORD **)(*(_QWORD *)(a4 + 16) + 24LL);
    if ( result )
    {
      if ( !*(_DWORD *)result && *((_DWORD *)result + 1) == 2 )
      {
        result = (_QWORD *)sub_15D2CB0(*(_QWORD *)(v9 + 296), *(_QWORD *)(a4 + 32));
        if ( (_BYTE)result )
        {
          v29 = v65;
          v66 = 0;
          sub_DFA620(&v66, v65);
          v30 = v66;
          result = v67;
          for ( i = 0; v66; ++i )
          {
            if ( i >= *(_DWORD *)(v30 - 4) )
              return (_QWORD *)sub_186B220((void *)(v30 - 8));
            while ( 1 )
            {
              v32 = *(_QWORD *)(v30 + 8LL * i);
              sub_DFBCB0(v9);
              if ( *(_WORD *)(v32 + 4)
                || (v33 = *(_DWORD **)(*(_QWORD *)(v32 + 16) + 24LL)) == nullptr
                || *v33
                || v33[1] != 5 )
              {
                sub_DFBCB0(v9);
                if ( *(_WORD *)(v32 + 4)
                  || (v34 = *(_DWORD **)(*(_QWORD *)(v32 + 16) + 24LL)) == nullptr
                  || *v34
                  || v34[1] != 6 )
                {
                  sub_DFBCB0(v9);
                  if ( *(_WORD *)(v32 + 4)
                    || (v35 = *(_QWORD **)(*(_QWORD *)(v32 + 16) + 24LL)) == nullptr
                    || (v29 = (__int64 *)*(unsigned int *)v35, *v35 != 0x200000000LL)
                    || (v29 = *(__int64 **)(v32 + 32), !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(v9 + 296), v29)) )
                  {
                    sub_DFBCB0(v9);
                    if ( *(_WORD *)(v32 + 4)
                      || (v36 = *(_DWORD **)(*(_QWORD *)(v32 + 16) + 24LL)) == nullptr
                      || *v36
                      || v36[1] != 9 )
                    {
                      sub_DFBCB0(v9);
                      if ( *(_WORD *)(v32 + 4)
                        || (v37 = *(_DWORD **)(*(_QWORD *)(v32 + 16) + 24LL)) == nullptr
                        || *v37
                        || v37[1] != 8 )
                      {
                        if ( (unsigned int)sub_180B130(v9) > 9 )
                        {
                          if ( (unsigned __int8)sub_186A530(a6) )
                          {
                            sub_186A4C0(a6);
                            sub_180B150(v9, v29);
                            std::__ostream_insert<char,std::char_traits<char>>();
                            v48 = std::ostream::_M_insert<unsigned long>();
                            std::__ostream_insert<char,std::char_traits<char>>();
                            sub_DFBCB0(v9);
                            sub_1648CA0(v48, *(_QWORD *)(v9 + 296), v32, 3);
                            std::__ostream_insert<char,std::char_traits<char>>();
                            sub_1361D10(a3, v32);
                            v49 = std::operator<<<std::char_traits<char>>();
                            v29 = (__int64 *)"\n";
                            std::operator<<<std::char_traits<char>>();
                            sub_186A500(v49, "\n");
                          }
                          else
                          {
                            sub_180B150(v9, v29);
                            std::__ostream_insert<char,std::char_traits<char>>();
                            v55 = std::ostream::_M_insert<unsigned long>();
                            std::__ostream_insert<char,std::char_traits<char>>();
                            sub_DFBCB0(v9);
                            sub_1648CA0(v55, *(_QWORD *)(v9 + 296), v32, 3);
                            std::__ostream_insert<char,std::char_traits<char>>();
                            sub_1361D10(a3, v32);
                            std::operator<<<std::char_traits<char>>();
                            v29 = (__int64 *)"\n";
                            std::operator<<<std::char_traits<char>>();
                          }
                        }
                        goto LABEL_65;
                      }
                    }
                  }
                }
              }
              v50 = (__int64 *)(v32 + 32);
              v51 = 8LL * *(unsigned int *)(v32 + 24);
              v52 = (__int64 *)(v32 + 32 + v51);
              if ( v51 )
                break;
LABEL_65:
              if ( ++i >= *(_DWORD *)(v30 - 4) )
                return (_QWORD *)sub_186B220((void *)(v30 - 8));
            }
            v53 = v50;
            do
            {
              v54 = *v53;
              v29 = v67;
              v66 = v30;
              v67[0] = v54;
              result = (_QWORD *)sub_DFA620(&v66, v67);
              ++v53;
              v30 = v66;
            }
            while ( v52 != v53 );
          }
        }
      }
    }
  }
  return result;
}

