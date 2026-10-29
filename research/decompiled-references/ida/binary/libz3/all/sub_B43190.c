__int64 __fastcall sub_B43190(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  char **exception; // rbx
  _DWORD *v4; // r8
  __int64 v6; // rdx
  unsigned int v7; // r15d
  __int64 v8; // rax
  unsigned int *v10; // r14
  _DWORD *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // eax
  bool v16; // cl
  bool v17; // si
  __int64 result; // rax
  int v19; // edx
  __int64 v20; // rax
  unsigned int *v21; // r12
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rcx
  _DWORD *v27; // rdx
  _DWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r8
  __int64 v31; // rax
  bool v32; // si
  bool v33; // cl
  __int64 v34; // r15
  _DWORD *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rbp
  int v38; // eax
  unsigned int *v39; // r12
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // r8
  int v44; // eax
  int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r8
  int v49; // r10d
  int v50; // r14d
  unsigned int v51; // ecx
  unsigned int v52; // esi
  __int64 v53; // rbp
  __int64 v54; // r13
  __int64 v55; // r8
  unsigned int v56; // eax
  __int64 v57; // r9
  unsigned int v58; // edi
  __int64 v59; // r11
  unsigned int v60; // r8d
  bool v61; // al
  __int64 v62; // r9
  unsigned int v63; // r8d
  unsigned int v64; // edi
  bool v65; // r11
  int *v66; // rdi
  unsigned int *v67; // r14
  unsigned int v68; // eax
  __int64 v69; // r10
  unsigned int *v70; // rax
  unsigned int v71; // r12d
  __int64 v72; // rax
  __int64 v73; // r11
  int *v74; // rdi
  int v75; // esi
  __int64 v76; // rax
  __int64 v77; // r8
  unsigned int *v78; // rax
  int v79; // ecx
  int v80; // r14d
  __int64 v81; // r13
  __int64 v82; // rbx
  __int64 v83; // rsi
  unsigned int v84; // r15d
  unsigned int v85; // r13d
  unsigned int v86; // ecx
  unsigned int *v87; // rax
  __int64 v88; // rax
  _DWORD *v89; // [rsp+0h] [rbp-98h]
  unsigned int v91; // [rsp+10h] [rbp-88h]
  __int64 v92; // [rsp+18h] [rbp-80h]
  __int64 v93; // [rsp+20h] [rbp-78h]
  _DWORD *v94; // [rsp+28h] [rbp-70h]
  unsigned int *v95[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = a3;
  *a3 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  *a2 = 0x7FFFFFFF;
  if ( !v6 )
    goto LABEL_34;
  v7 = *(_DWORD *)(v6 - 4);
  v8 = *(unsigned int *)(a1 + 40);
  if ( (unsigned int)v8 >= v7 )
    goto LABEL_34;
  v89 = v4;
  while ( 1 )
  {
    v10 = *(unsigned int **)(v6 + 8 * v8);
    if ( *((_WORD *)v10 + 2) || (v11 = *(_DWORD **)(*((_QWORD *)v10 + 2) + 24LL)) == nullptr || *v11 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(_QWORD *)(v12 + 8832);
      if ( !v13 )
        goto LABEL_4;
      v14 = *v10;
      if ( (unsigned int)v14 >= *(_DWORD *)(v13 - 4) )
        goto LABEL_4;
      v15 = *(_DWORD *)(v13 + 4 * v14);
      if ( v15 == 0x7FFFFFFF )
        goto LABEL_4;
      v16 = 0;
      v17 = 0;
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 8);
      v24 = v11[1];
      v25 = *(_QWORD *)(v12 + 8832);
      if ( !v25
        || (v26 = *v10, (unsigned int)v26 >= *(_DWORD *)(v25 - 4))
        || (v15 = *(_DWORD *)(v25 + 4 * v26), v15 == 0x7FFFFFFF) )
      {
        if ( v24 != 6 )
          goto LABEL_4;
LABEL_16:
        v19 = 1;
        goto LABEL_17;
      }
      v16 = v24 == 6;
      v17 = v11[1] == 5;
    }
    *a2 = v15;
    result = (unsigned int)*(char *)(*(_QWORD *)(v12 + 8848) + 2 * v15);
    if ( (_DWORD)result == 1 && v16 )
      goto LABEL_16;
    if ( (_DWORD)result != -1 || !v17 )
      break;
    v19 = -1;
LABEL_17:
    v20 = *(_QWORD *)(a1 + 16);
    v95[0] = nullptr;
    if ( (unsigned __int8)sub_B3F3F0(v12, (__int64)v10, v19, v95, *(_DWORD *)(v20 + 584)) )
      goto LABEL_4;
    v21 = v95[0];
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    v22 = sub_B645B0(*(_QWORD *)(a1 + 8), v21);
    v23 = v22 >> 1;
    *a2 = v22 >> 1;
    result = (v22 & 1) == 0 ? 1 : -1;
    *v89 = result;
    if ( v23 != 0x7FFFFFFF )
      return result;
LABEL_5:
    v8 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
    *(_DWORD *)(a1 + 40) = v8;
    if ( (unsigned int)v8 >= v7 )
    {
      v4 = v89;
LABEL_34:
      v27 = *(_DWORD **)(a1 + 80);
      v94 = v4;
      for ( result = (unsigned int)*(v27 - 1); ; result = (unsigned int)*(v27 - 1) )
      {
        if ( (_DWORD)result == 1 )
          return result;
        v34 = *(_QWORD *)(a1 + 88);
        v91 = v27[1];
        v92 = 4LL * v91;
        v35 = (_DWORD *)(v34 + v92);
        if ( (_DWORD)result == 2 )
        {
          *v35 = 0;
          --*(v27 - 1);
        }
        else
        {
          v47 = (unsigned int)v27[(unsigned int)(result - 1)];
          v27[1] = v47;
          *(_DWORD *)(v34 + 4 * v47) = 1;
          *v35 = 0;
          v48 = (unsigned int)v27[1];
          v49 = *(v27 - 1) - 1;
          *(v27 - 1) = v49;
          v50 = v48;
          if ( v49 <= 2 )
          {
            v66 = v27 + 1;
            v52 = 1;
          }
          else
          {
            v93 = v48;
            v51 = 2;
            v52 = 1;
            v53 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 48LL);
            v54 = v53 + 16 * v48;
            while ( 1 )
            {
              v55 = v51 + 1;
              v56 = v51;
              if ( v49 > (int)v55 )
              {
                v57 = (unsigned int)v27[v51];
                v58 = *(_DWORD *)(v53 + 16 * v57 + 8);
                v59 = (unsigned int)v27[v55];
                v60 = *(_DWORD *)(v53 + 16 * v59 + 8);
                v61 = v60 < v58;
                if ( v60 == v58 )
                  v61 = (int)v59 < (int)v57;
                v56 = v51 + v61;
              }
              v62 = (unsigned int)v27[v56];
              v63 = *(_DWORD *)(v53 + 16 * v62 + 8);
              v64 = *(_DWORD *)(v54 + 8);
              v65 = v63 < v64;
              if ( v63 == v64 )
                v65 = v50 > (int)v62;
              v66 = &v27[v52];
              if ( !v65 )
              {
                v48 = v93;
                goto LABEL_68;
              }
              *v66 = v27[v56];
              v51 = 2 * v56;
              *(_DWORD *)(v34 + 4 * v62) = v52;
              if ( v49 <= (int)(2 * v56) )
                break;
              v52 = v56;
            }
            v48 = v93;
            v66 = &v27[v56];
            v52 = v56;
          }
LABEL_68:
          *v66 = v50;
          *(_DWORD *)(v34 + 4 * v48) = v52;
        }
        v36 = *(_QWORD *)(a1 + 56);
        v37 = *(_QWORD *)(a1 + 48) + 16LL * v91;
        if ( v36 )
          v38 = *(_DWORD *)(v36 - 4);
        else
          v38 = 0;
        v39 = *(unsigned int **)v37;
        *(_DWORD *)(v37 + 12) = v38;
        if ( *((_WORD *)v39 + 2) || (v28 = *(_DWORD **)(*((_QWORD *)v39 + 2) + 24LL)) == nullptr )
        {
          v29 = *(_QWORD *)(a1 + 8);
          v40 = *(_QWORD *)(v29 + 8832);
          if ( !v40 )
            goto LABEL_39;
          v41 = *v39;
          if ( (unsigned int)v41 >= *(_DWORD *)(v40 - 4) )
            goto LABEL_39;
          v42 = *(_DWORD *)(v40 + 4 * v41);
          if ( v42 == 0x7FFFFFFF )
            goto LABEL_39;
          v33 = 0;
          v32 = 0;
        }
        else
        {
          if ( *v28 )
          {
            v29 = *(_QWORD *)(a1 + 8);
            v30 = *(_QWORD *)(v29 + 8832);
            if ( !v30 )
              goto LABEL_39;
            v31 = *v39;
            v32 = 0;
            v33 = 0;
            if ( (unsigned int)v31 >= *(_DWORD *)(v30 - 4) )
              goto LABEL_39;
          }
          else
          {
            v29 = *(_QWORD *)(a1 + 8);
            v75 = v28[1];
            v30 = *(_QWORD *)(v29 + 8832);
            v33 = v75 == 6;
            if ( !v30 || (v31 = *v39, (unsigned int)v31 >= *(_DWORD *)(v30 - 4)) )
            {
LABEL_85:
              if ( !v33 )
                goto LABEL_39;
LABEL_53:
              v45 = 1;
              goto LABEL_54;
            }
            v32 = v75 == 5;
          }
          v42 = *(_DWORD *)(v30 + 4 * v31);
          if ( v42 == 0x7FFFFFFF )
            goto LABEL_85;
        }
        v43 = *(_QWORD *)(v29 + 8848);
        *a2 = v42;
        v44 = *(char *)(v43 + 2 * v42);
        if ( v44 == 1 && v33 )
          goto LABEL_53;
        if ( v44 != -1 || !v32 )
        {
          if ( !v44 )
          {
            v69 = v34;
            *v94 = 0;
            v70 = (unsigned int *)(v34 + v92);
            goto LABEL_89;
          }
          goto LABEL_39;
        }
        v45 = -1;
LABEL_54:
        v46 = *(_QWORD *)(a1 + 16);
        v95[0] = nullptr;
        if ( (unsigned __int8)sub_B3F3F0(v29, (__int64)v39, v45, v95, *(_DWORD *)(v46 + 584)) )
        {
          v27 = *(_DWORD **)(a1 + 80);
LABEL_39:
          *a2 = 0x7FFFFFFF;
          continue;
        }
        v67 = v95[0];
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        v68 = sub_B645B0(*(_QWORD *)(a1 + 8), v67);
        *a2 = v68 >> 1;
        *v94 = (v68 & 1) == 0 ? 1 : -1;
        v27 = *(_DWORD **)(a1 + 80);
        if ( v68 >> 1 != 0x7FFFFFFF )
        {
          v69 = *(_QWORD *)(a1 + 88);
          v70 = (unsigned int *)(v69 + v92);
          if ( !v27 )
          {
            *v70 = 0;
            v71 = 0;
            v72 = sub_186B270(0x10u);
            v69 = *(_QWORD *)(a1 + 88);
            v73 = v91;
            v74 = (int *)(v72 + 8);
            *(_QWORD *)v72 = 2;
            *(_QWORD *)(a1 + 80) = v72 + 8;
            ++*(_DWORD *)(v72 + 4);
            *(_DWORD *)(v72 + 8) = v91;
LABEL_81:
            *v74 = v91;
            *(_DWORD *)(v69 + 4 * v73) = v71;
            *(_DWORD *)(v37 + 12) = -1;
            return v91;
          }
LABEL_89:
          v71 = *(v27 - 1);
          *v70 = v71;
          v76 = (unsigned int)*(v27 - 1);
          if ( (_DWORD)v76 == *(v27 - 2) )
          {
            v85 = (unsigned int)(3 * v76 + 1) >> 1;
            v86 = 4 * v85 + 8;
            if ( 4 * (int)v76 + 8 >= v86 || (unsigned int)v76 >= v85 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v95, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v95);
              sub_233E40((__int64)v95);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v87 = (unsigned int *)sub_186B300(v27 - 2, v86);
            v77 = v71;
            v69 = *(_QWORD *)(a1 + 88);
            v27 = v87 + 2;
            *v87 = v85;
            v88 = v87[1];
            v79 = (int)v71 >> 1;
            *(_QWORD *)(a1 + 80) = v27;
            v74 = &v27[v71];
            v78 = &v27[v88];
          }
          else
          {
            v77 = v71;
            v78 = &v27[v76];
            v79 = (int)v71 >> 1;
            v74 = &v27[v71];
          }
          *v78 = v91;
          ++*(v27 - 1);
          v91 = *v74;
          v73 = (unsigned int)*v74;
          v80 = *v74;
          if ( v79 )
          {
            v81 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 48LL);
            v82 = v81 + 16LL * v91;
            while ( 1 )
            {
              v74 = &v27[v79];
              v83 = (unsigned int)*v74;
              v84 = *(_DWORD *)(v81 + 16 * v83 + 8);
              if ( *(_DWORD *)(v82 + 8) == v84 )
              {
                if ( v80 >= (int)v83 )
                {
LABEL_98:
                  v74 = &v27[v77];
                  goto LABEL_81;
                }
              }
              else if ( *(_DWORD *)(v82 + 8) >= v84 )
              {
                goto LABEL_98;
              }
              v27[v77] = *v74;
              *(_DWORD *)(v69 + 4 * v83) = v71;
              v71 = v79;
              v79 >>= 1;
              if ( !v79 )
                break;
              v77 = v71;
            }
            v71 = 1;
          }
          goto LABEL_81;
        }
      }
    }
    v6 = *(_QWORD *)(a1 + 32);
  }
  if ( (_DWORD)result )
  {
LABEL_4:
    *a2 = 0x7FFFFFFF;
    goto LABEL_5;
  }
  *v89 = 0;
  return result;
}

