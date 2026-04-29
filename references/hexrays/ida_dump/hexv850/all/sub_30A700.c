__int64 __fastcall sub_30A700(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  __int64 v8; // r15
  int *v9; // rdx
  int v10; // esi
  int v11; // ebp
  unsigned int v12; // eax
  unsigned int v13; // r13d
  int v14; // r14d
  unsigned int v15; // ebp
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // r12d
  _DWORD *v19; // rcx
  int *v20; // rdx
  int v21; // esi
  unsigned int v22; // r8d
  __int64 v23; // r14
  int v24; // r15d
  unsigned int v25; // ebp
  unsigned int v26; // eax
  __int64 v27; // rdx
  unsigned int v28; // r8d
  unsigned int v29; // r13d
  _DWORD *v30; // rcx
  int *v31; // rdx
  int v32; // esi
  unsigned int v33; // r8d
  unsigned int v34; // ebx
  int v35; // r13d
  unsigned int v36; // eax
  __int64 v37; // rdx
  unsigned int v38; // r8d
  unsigned int v39; // ebp
  _DWORD *v40; // rcx
  int *v41; // rdx
  int v42; // esi
  unsigned int v43; // r12d
  int v44; // ebp
  unsigned int i; // r13d
  unsigned int v46; // eax
  __int64 v47; // rdx
  unsigned int v48; // ebx
  _DWORD *v49; // rcx
  int *v50; // rdx
  int v51; // esi
  unsigned int v52; // r13d
  int v53; // r15d
  unsigned int v54; // eax
  __int64 v55; // rdx
  unsigned int v56; // ebp
  _DWORD *v57; // rcx
  int *v58; // rdx
  int v59; // esi
  unsigned int v60; // r15d
  int v61; // r13d
  unsigned int v62; // eax
  __int64 v63; // rdx
  unsigned int v64; // ebx
  _DWORD *v65; // rcx
  int *v66; // rdx
  int v67; // esi
  int v68; // r12d
  unsigned int j; // r13d
  unsigned int v70; // eax
  __int64 v71; // rcx
  unsigned int v72; // edx
  _DWORD *v73; // rsi
  int *v74; // rcx
  int v75; // edi
  unsigned int v76; // ebp
  int v77; // ebx
  __int64 v78; // r12
  unsigned int v79; // eax
  __int64 v80; // rsi
  unsigned int v81; // r13d
  _DWORD *v82; // rdi
  int *v83; // rsi
  int v84; // r8d
  int v85; // r15d
  unsigned int v86; // r14d
  __int64 v87; // rdx
  unsigned int v88; // eax
  __int64 v89; // [rsp+8h] [rbp-A0h]
  unsigned int v90; // [rsp+14h] [rbp-94h]
  unsigned int v91; // [rsp+18h] [rbp-90h]
  unsigned int v92; // [rsp+18h] [rbp-90h]
  unsigned int v93; // [rsp+18h] [rbp-90h]
  unsigned int v94; // [rsp+1Ch] [rbp-8Ch]
  int v95; // [rsp+20h] [rbp-88h]
  unsigned int v96; // [rsp+24h] [rbp-84h]
  unsigned int v97; // [rsp+28h] [rbp-80h]
  int v98; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v99; // [rsp+30h] [rbp-78h]
  unsigned int v100; // [rsp+34h] [rbp-74h]
  int v101; // [rsp+38h] [rbp-70h]
  unsigned int v102; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v103; // [rsp+40h] [rbp-68h]
  int v104; // [rsp+44h] [rbp-64h]
  unsigned int v105; // [rsp+48h] [rbp-60h]
  unsigned int v106; // [rsp+4Ch] [rbp-5Ch]
  int v107; // [rsp+50h] [rbp-58h]
  unsigned int v108; // [rsp+54h] [rbp-54h]
  unsigned int v109; // [rsp+58h] [rbp-50h]
  int v110; // [rsp+5Ch] [rbp-4Ch]
  unsigned int v111; // [rsp+60h] [rbp-48h]
  int v112; // [rsp+64h] [rbp-44h]
  unsigned int v113; // [rsp+68h] [rbp-40h]
  unsigned int v114; // [rsp+6Ch] [rbp-3Ch]

  result = 4LL * (int)a2;
  v6 = *(_QWORD *)(a1 + 48);
  v7 = (_DWORD *)(v6 + result);
  if ( *(_DWORD *)(v6 + result) == -1 )
  {
    v8 = a1;
    v9 = (int *)(4LL * (int)a3 + v6);
    v89 = 4LL * (int)a3;
    v10 = *v9;
    if ( *v9 == -1 )
    {
      v10 = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(a1 + 72) = v10 + 1;
      *v9 = v10;
      v7 = (_DWORD *)(*(_QWORD *)(a1 + 48) + result);
    }
    *v7 = v10;
    v90 = a3;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 104LL))(*(_QWORD *)(a1 + 40), a2);
    v11 = result;
    if ( (int)result > 0 )
    {
      v12 = a2;
      v13 = 0;
      v14 = v11;
      v15 = v12;
      do
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v8 + 40) + 120LL))(
                *(_QWORD *)(v8 + 40),
                v15,
                v13);
        v17 = *(_QWORD *)(v8 + 48);
        v18 = v16;
        result = 4LL * (int)v16;
        v19 = (_DWORD *)(v17 + result);
        if ( *(_DWORD *)(v17 + result) == -1 )
        {
          v20 = (int *)(v89 + v17);
          v21 = *v20;
          if ( *v20 == -1 )
          {
            v21 = *(_DWORD *)(v8 + 72);
            *(_DWORD *)(v8 + 72) = v21 + 1;
            *v20 = v21;
            v19 = (_DWORD *)(*(_QWORD *)(v8 + 48) + result);
          }
          *v19 = v21;
          result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v8 + 40) + 104LL))(
                     *(_QWORD *)(v8 + 40),
                     v18);
          if ( (int)result > 0 )
          {
            v113 = v13;
            v22 = 0;
            v112 = v14;
            v23 = v8;
            v24 = result;
            v114 = v15;
            v25 = v18;
            do
            {
              v91 = v22;
              v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v23 + 40) + 120LL))(
                      *(_QWORD *)(v23 + 40),
                      v25,
                      v22);
              v27 = *(_QWORD *)(v23 + 48);
              v28 = v91;
              v29 = v26;
              result = 4LL * (int)v26;
              v30 = (_DWORD *)(v27 + result);
              if ( *(_DWORD *)(v27 + result) == -1 )
              {
                v31 = (int *)(v89 + v27);
                v32 = *v31;
                if ( *v31 == -1 )
                {
                  v32 = *(_DWORD *)(v23 + 72);
                  *(_DWORD *)(v23 + 72) = v32 + 1;
                  *v31 = v32;
                  v30 = (_DWORD *)(*(_QWORD *)(v23 + 48) + result);
                }
                *v30 = v32;
                result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v23 + 40) + 104LL))(
                           *(_QWORD *)(v23 + 40),
                           v29);
                v28 = v91;
                if ( (int)result > 0 )
                {
                  v109 = v25;
                  v110 = v24;
                  v111 = v91;
                  v33 = 0;
                  v34 = v29;
                  v35 = result;
                  do
                  {
                    v92 = v33;
                    v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v23 + 40) + 120LL))(
                            *(_QWORD *)(v23 + 40),
                            v34,
                            v33);
                    v37 = *(_QWORD *)(v23 + 48);
                    v38 = v92;
                    v39 = v36;
                    result = 4LL * (int)v36;
                    v40 = (_DWORD *)(v37 + result);
                    if ( *(_DWORD *)(v37 + result) == -1 )
                    {
                      v41 = (int *)(v89 + v37);
                      v42 = *v41;
                      if ( *v41 == -1 )
                      {
                        v42 = *(_DWORD *)(v23 + 72);
                        *(_DWORD *)(v23 + 72) = v42 + 1;
                        *v41 = v42;
                        v40 = (_DWORD *)(*(_QWORD *)(v23 + 48) + result);
                      }
                      *v40 = v42;
                      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v23 + 40) + 104LL))(
                                 *(_QWORD *)(v23 + 40),
                                 v39);
                      v38 = v92;
                      if ( (int)result > 0 )
                      {
                        v106 = v34;
                        v43 = v39;
                        v44 = result;
                        v108 = v92;
                        v107 = v35;
                        for ( i = 0; i != v44; ++i )
                        {
                          v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v23 + 40) + 120LL))(
                                  *(_QWORD *)(v23 + 40),
                                  v43,
                                  i);
                          v47 = *(_QWORD *)(v23 + 48);
                          v48 = v46;
                          result = 4LL * (int)v46;
                          v49 = (_DWORD *)(v47 + result);
                          if ( *(_DWORD *)(v47 + result) == -1 )
                          {
                            v50 = (int *)(v89 + v47);
                            v51 = *v50;
                            if ( *v50 == -1 )
                            {
                              v51 = *(_DWORD *)(v23 + 72);
                              *(_DWORD *)(v23 + 72) = v51 + 1;
                              *v50 = v51;
                              v49 = (_DWORD *)(*(_QWORD *)(v23 + 48) + result);
                            }
                            *v49 = v51;
                            result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v23 + 40) + 104LL))(
                                       *(_QWORD *)(v23 + 40),
                                       v48);
                            if ( (int)result > 0 )
                            {
                              v103 = v43;
                              v104 = v44;
                              v105 = i;
                              v52 = 0;
                              v53 = result;
                              do
                              {
                                v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v23 + 40) + 120LL))(
                                        *(_QWORD *)(v23 + 40),
                                        v48,
                                        v52);
                                v55 = *(_QWORD *)(v23 + 48);
                                v56 = v54;
                                result = 4LL * (int)v54;
                                v57 = (_DWORD *)(v55 + result);
                                if ( *(_DWORD *)(v55 + result) == -1 )
                                {
                                  v58 = (int *)(v89 + v55);
                                  v59 = *v58;
                                  if ( *v58 == -1 )
                                  {
                                    v59 = *(_DWORD *)(v23 + 72);
                                    *(_DWORD *)(v23 + 72) = v59 + 1;
                                    *v58 = v59;
                                    v57 = (_DWORD *)(*(_QWORD *)(v23 + 48) + result);
                                  }
                                  *v57 = v59;
                                  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v23 + 40) + 104LL))(
                                             *(_QWORD *)(v23 + 40),
                                             v56);
                                  if ( (int)result > 0 )
                                  {
                                    v100 = v48;
                                    v101 = v53;
                                    v60 = 0;
                                    v102 = v52;
                                    v61 = result;
                                    do
                                    {
                                      v62 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v23 + 40)
                                                                                              + 120LL))(
                                              *(_QWORD *)(v23 + 40),
                                              v56,
                                              v60);
                                      v63 = *(_QWORD *)(v23 + 48);
                                      v64 = v62;
                                      result = 4LL * (int)v62;
                                      v65 = (_DWORD *)(v63 + result);
                                      if ( *(_DWORD *)(v63 + result) == -1 )
                                      {
                                        v66 = (int *)(v89 + v63);
                                        v67 = *v66;
                                        if ( *v66 == -1 )
                                        {
                                          v67 = *(_DWORD *)(v23 + 72);
                                          *(_DWORD *)(v23 + 72) = v67 + 1;
                                          *v66 = v67;
                                          v65 = (_DWORD *)(*(_QWORD *)(v23 + 48) + result);
                                        }
                                        *v65 = v67;
                                        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v23 + 40)
                                                                                           + 104LL))(
                                                   *(_QWORD *)(v23 + 40),
                                                   v64);
                                        if ( (int)result > 0 )
                                        {
                                          v97 = v56;
                                          v68 = result;
                                          v99 = v60;
                                          v98 = v61;
                                          for ( j = 0; j != v68; ++j )
                                          {
                                            v70 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v23 + 40) + 120LL))(
                                                    *(_QWORD *)(v23 + 40),
                                                    v64,
                                                    j);
                                            v71 = *(_QWORD *)(v23 + 48);
                                            v72 = v70;
                                            result = 4LL * (int)v70;
                                            v73 = (_DWORD *)(v71 + result);
                                            if ( *(_DWORD *)(v71 + result) == -1 )
                                            {
                                              v74 = (int *)(v89 + v71);
                                              v75 = *v74;
                                              if ( *v74 == -1 )
                                              {
                                                v75 = *(_DWORD *)(v23 + 72);
                                                *(_DWORD *)(v23 + 72) = v75 + 1;
                                                *v74 = v75;
                                                v73 = (_DWORD *)(*(_QWORD *)(v23 + 48) + result);
                                              }
                                              *v73 = v75;
                                              v93 = v72;
                                              result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v23 + 40)
                                                                                                 + 104LL))(
                                                         *(_QWORD *)(v23 + 40),
                                                         v72);
                                              if ( (int)result > 0 )
                                              {
                                                v96 = j;
                                                v94 = v64;
                                                v76 = 0;
                                                v77 = result;
                                                v95 = v68;
                                                v78 = v23;
                                                do
                                                {
                                                  v79 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v78 + 40) + 120LL))(
                                                          *(_QWORD *)(v78 + 40),
                                                          v93,
                                                          v76);
                                                  v80 = *(_QWORD *)(v78 + 48);
                                                  v81 = v79;
                                                  result = 4LL * (int)v79;
                                                  v82 = (_DWORD *)(v80 + result);
                                                  if ( *(_DWORD *)(v80 + result) == -1 )
                                                  {
                                                    v83 = (int *)(v89 + v80);
                                                    v84 = *v83;
                                                    if ( *v83 == -1 )
                                                    {
                                                      v84 = *(_DWORD *)(v78 + 72);
                                                      *(_DWORD *)(v78 + 72) = v84 + 1;
                                                      *v83 = v84;
                                                      v82 = (_DWORD *)(*(_QWORD *)(v78 + 48) + result);
                                                    }
                                                    *v82 = v84;
                                                    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v78 + 40) + 104LL))(
                                                               *(_QWORD *)(v78 + 40),
                                                               v81);
                                                    v85 = result;
                                                    if ( (int)result > 0 )
                                                    {
                                                      v86 = 0;
                                                      do
                                                      {
                                                        v87 = v86++;
                                                        v88 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v78 + 40) + 120LL))(
                                                                *(_QWORD *)(v78 + 40),
                                                                v81,
                                                                v87);
                                                        result = sub_30A700(v78, v88, v90);
                                                      }
                                                      while ( v85 != v86 );
                                                    }
                                                  }
                                                  ++v76;
                                                }
                                                while ( v77 != v76 );
                                                v23 = v78;
                                                v64 = v94;
                                                j = v96;
                                                v68 = v95;
                                              }
                                            }
                                          }
                                          v56 = v97;
                                          v61 = v98;
                                          v60 = v99;
                                        }
                                      }
                                      ++v60;
                                    }
                                    while ( v61 != v60 );
                                    v48 = v100;
                                    v53 = v101;
                                    v52 = v102;
                                  }
                                }
                                ++v52;
                              }
                              while ( v53 != v52 );
                              v43 = v103;
                              v44 = v104;
                              i = v105;
                            }
                          }
                        }
                        v34 = v106;
                        v35 = v107;
                        v38 = v108;
                      }
                    }
                    v33 = v38 + 1;
                  }
                  while ( v35 != v33 );
                  v25 = v109;
                  v24 = v110;
                  v28 = v111;
                }
              }
              v22 = v28 + 1;
            }
            while ( v24 != v22 );
            v8 = v23;
            v13 = v113;
            v14 = v112;
            v15 = v114;
          }
        }
        ++v13;
      }
      while ( v14 != v13 );
    }
  }
  return result;
}
