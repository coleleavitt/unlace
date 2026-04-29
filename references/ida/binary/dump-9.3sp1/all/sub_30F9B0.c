__int64 __fastcall sub_30F9B0(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r13
  unsigned int v3; // r12d
  __int64 result; // rax
  unsigned int v5; // r15d
  int v6; // ebx
  int v7; // r13d
  __int64 v8; // rbx
  unsigned int v9; // r14d
  unsigned int v10; // ebp
  int v11; // eax
  unsigned int v12; // r15d
  int v13; // r14d
  int v14; // eax
  __int64 v15; // r13
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // r15d
  __int64 v19; // rax
  unsigned int v20; // ebp
  unsigned int v21; // r13d
  __int64 v22; // rbx
  unsigned int v23; // r12d
  int v24; // ecx
  unsigned int v25; // r14d
  int v26; // r13d
  __int64 v27; // r15
  unsigned int v28; // ebp
  int v29; // eax
  __int64 v30; // r13
  int v31; // r15d
  unsigned int i; // ebp
  unsigned int v33; // r12d
  int v34; // eax
  __int64 v35; // rbx
  int v36; // r13d
  unsigned int v37; // r15d
  unsigned int v38; // ebp
  int v39; // eax
  __int64 v40; // r12
  unsigned int v41; // r14d
  unsigned int v42; // ebx
  int v43; // r13d
  __int64 v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 *v73; // [rsp+0h] [rbp-98h]
  unsigned int v74; // [rsp+8h] [rbp-90h]
  int v75; // [rsp+Ch] [rbp-8Ch]
  unsigned int v76; // [rsp+10h] [rbp-88h]
  unsigned int v77; // [rsp+14h] [rbp-84h]
  int v78; // [rsp+18h] [rbp-80h]
  unsigned int v79; // [rsp+1Ch] [rbp-7Ch]
  int v80; // [rsp+20h] [rbp-78h]
  unsigned int v81; // [rsp+24h] [rbp-74h]
  unsigned int v82; // [rsp+28h] [rbp-70h]
  unsigned int v83; // [rsp+2Ch] [rbp-6Ch]
  int v84; // [rsp+30h] [rbp-68h]
  unsigned int v85; // [rsp+34h] [rbp-64h]
  unsigned int v86; // [rsp+38h] [rbp-60h]
  int v87; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v88; // [rsp+40h] [rbp-58h]
  int v89; // [rsp+44h] [rbp-54h]
  unsigned int v90; // [rsp+48h] [rbp-50h]
  int v91; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v92; // [rsp+50h] [rbp-48h]
  int v93; // [rsp+54h] [rbp-44h]
  unsigned int v94; // [rsp+58h] [rbp-40h]
  unsigned int v95; // [rsp+5Ch] [rbp-3Ch]

  v2 = (__int64 *)a1;
  v3 = a2;
  v73 = (__int64 *)(a1 + 24);
  result = sub_64190((__int64 *)(a1 + 24), a2);
  if ( (_BYTE)result )
  {
    v5 = 0;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 96LL))(*(_QWORD *)(a1 + 40), a2);
    if ( v6 > 0 )
    {
      v7 = v6;
      v8 = a1;
      do
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v8 + 40) + 112LL))(
               *(_QWORD *)(v8 + 40),
               v3,
               v5);
        if ( (unsigned __int8)sub_64190(v73, v9) )
        {
          v10 = 0;
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v8 + 40) + 96LL))(*(_QWORD *)(v8 + 40), v9);
          if ( v11 > 0 )
          {
            v93 = v7;
            v95 = v3;
            v94 = v5;
            v12 = v9;
            v13 = v11;
            do
            {
              v85 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v8 + 40) + 112LL))(
                      *(_QWORD *)(v8 + 40),
                      v12,
                      v10);
              if ( (unsigned __int8)sub_64190(v73, v85) )
              {
                v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v8 + 40) + 96LL))(
                        *(_QWORD *)(v8 + 40),
                        v85);
                v82 = 0;
                if ( v14 > 0 )
                {
                  v90 = v12;
                  v15 = v8;
                  v91 = v13;
                  v92 = v10;
                  v89 = v14;
                  do
                  {
                    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v15 + 40) + 112LL))(
                            *(_QWORD *)(v15 + 40),
                            v85,
                            v82);
                    if ( (unsigned __int8)sub_64190(v73, v16) )
                    {
                      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v15 + 40) + 96LL))(
                              *(_QWORD *)(v15 + 40),
                              v16);
                      if ( v17 > 0 )
                      {
                        v18 = v17;
                        v19 = v15;
                        v20 = 0;
                        v21 = v16;
                        v22 = v19;
                        do
                        {
                          v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v22 + 40) + 112LL))(
                                  *(_QWORD *)(v22 + 40),
                                  v21,
                                  v20);
                          if ( (unsigned __int8)sub_64190(v73, v23) )
                          {
                            v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v22 + 40) + 96LL))(
                                    *(_QWORD *)(v22 + 40),
                                    v23);
                            if ( v24 > 0 )
                            {
                              v79 = v23;
                              v25 = 0;
                              v88 = v20;
                              v86 = v21;
                              v26 = v24;
                              v87 = v18;
                              v27 = v22;
                              do
                              {
                                v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v27 + 40) + 112LL))(
                                        *(_QWORD *)(v27 + 40),
                                        v79,
                                        v25);
                                if ( (unsigned __int8)sub_64190(v73, v28) )
                                {
                                  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v27 + 40) + 96LL))(
                                          *(_QWORD *)(v27 + 40),
                                          v28);
                                  if ( v29 > 0 )
                                  {
                                    v83 = v25;
                                    v84 = v26;
                                    v30 = v27;
                                    v31 = v29;
                                    v76 = v28;
                                    for ( i = 0; i != v31; ++i )
                                    {
                                      v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v30 + 40)
                                                                                              + 112LL))(
                                              *(_QWORD *)(v30 + 40),
                                              v76,
                                              i);
                                      if ( (unsigned __int8)sub_64190(v73, v33) )
                                      {
                                        v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v30 + 40) + 96LL))(
                                                *(_QWORD *)(v30 + 40),
                                                v33);
                                        if ( v34 > 0 )
                                        {
                                          v74 = 0;
                                          v35 = v30;
                                          v36 = v34;
                                          v80 = v31;
                                          v81 = i;
                                          do
                                          {
                                            v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v35 + 40) + 112LL))(
                                                    *(_QWORD *)(v35 + 40),
                                                    v33,
                                                    v74);
                                            if ( (unsigned __int8)sub_64190(v73, v37) )
                                            {
                                              v38 = 0;
                                              v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v35 + 40)
                                                                                              + 96LL))(
                                                      *(_QWORD *)(v35 + 40),
                                                      v37);
                                              if ( v39 > 0 )
                                              {
                                                v78 = v36;
                                                v75 = v39;
                                                v77 = v33;
                                                v40 = v35;
                                                do
                                                {
                                                  v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v40 + 40) + 112LL))(
                                                          *(_QWORD *)(v40 + 40),
                                                          v37,
                                                          v38);
                                                  if ( (unsigned __int8)sub_64190(v73, v41) )
                                                  {
                                                    v42 = 0;
                                                    v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v40 + 40) + 96LL))(
                                                            *(_QWORD *)(v40 + 40),
                                                            v41);
                                                    if ( v43 > 0 )
                                                    {
                                                      do
                                                      {
                                                        v44 = v42++;
                                                        v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v40 + 40) + 112LL))(
                                                                *(_QWORD *)(v40 + 40),
                                                                v41,
                                                                v44);
                                                        sub_30F9B0(v40, v45);
                                                      }
                                                      while ( v43 != v42 );
                                                    }
                                                    v46 = *(_QWORD *)(v40 + 8);
                                                    v47 = *(_QWORD *)v40;
                                                    if ( *(_QWORD *)(v40 + 16) < (unsigned __int64)(v46 + 1) )
                                                    {
                                                      v64 = qvector_reserve(v40, v47, v46 + 1, 4);
                                                      *(_QWORD *)v40 = v64;
                                                      v47 = v64;
                                                      v46 = *(_QWORD *)(v40 + 8);
                                                    }
                                                    *(_DWORD *)(v47 + 4 * v46) = v41;
                                                    ++*(_QWORD *)(v40 + 8);
                                                  }
                                                  ++v38;
                                                }
                                                while ( v75 != v38 );
                                                v35 = v40;
                                                v36 = v78;
                                                v33 = v77;
                                              }
                                              v48 = *(_QWORD *)(v35 + 8);
                                              v49 = *(_QWORD *)v35;
                                              if ( *(_QWORD *)(v35 + 16) < (unsigned __int64)(v48 + 1) )
                                              {
                                                v65 = qvector_reserve(v35, v49, v48 + 1, 4);
                                                *(_QWORD *)v35 = v65;
                                                v49 = v65;
                                                v48 = *(_QWORD *)(v35 + 8);
                                              }
                                              *(_DWORD *)(v49 + 4 * v48) = v37;
                                              ++*(_QWORD *)(v35 + 8);
                                            }
                                            ++v74;
                                          }
                                          while ( v36 != v74 );
                                          v31 = v80;
                                          i = v81;
                                          v30 = v35;
                                        }
                                        v50 = *(_QWORD *)(v30 + 8);
                                        v51 = *(_QWORD *)v30;
                                        if ( *(_QWORD *)(v30 + 16) < (unsigned __int64)(v50 + 1) )
                                        {
                                          v66 = qvector_reserve(v30, v51, v50 + 1, 4);
                                          *(_QWORD *)v30 = v66;
                                          v51 = v66;
                                          v50 = *(_QWORD *)(v30 + 8);
                                        }
                                        *(_DWORD *)(v51 + 4 * v50) = v33;
                                        ++*(_QWORD *)(v30 + 8);
                                      }
                                    }
                                    v27 = v30;
                                    v25 = v83;
                                    v28 = v76;
                                    v26 = v84;
                                  }
                                  v52 = *(_QWORD *)(v27 + 8);
                                  v53 = *(_QWORD *)v27;
                                  if ( *(_QWORD *)(v27 + 16) < (unsigned __int64)(v52 + 1) )
                                  {
                                    v67 = qvector_reserve(v27, v53, v52 + 1, 4);
                                    *(_QWORD *)v27 = v67;
                                    v53 = v67;
                                    v52 = *(_QWORD *)(v27 + 8);
                                  }
                                  *(_DWORD *)(v53 + 4 * v52) = v28;
                                  ++*(_QWORD *)(v27 + 8);
                                }
                                ++v25;
                              }
                              while ( v26 != v25 );
                              v22 = v27;
                              v21 = v86;
                              v23 = v79;
                              v20 = v88;
                              v18 = v87;
                            }
                            v54 = *(_QWORD *)(v22 + 8);
                            v55 = *(_QWORD *)v22;
                            if ( *(_QWORD *)(v22 + 16) < (unsigned __int64)(v54 + 1) )
                            {
                              v68 = qvector_reserve(v22, v55, v54 + 1, 4);
                              *(_QWORD *)v22 = v68;
                              v55 = v68;
                              v54 = *(_QWORD *)(v22 + 8);
                            }
                            *(_DWORD *)(v55 + 4 * v54) = v23;
                            ++*(_QWORD *)(v22 + 8);
                          }
                          ++v20;
                        }
                        while ( v18 != v20 );
                        v56 = v22;
                        v16 = v21;
                        v15 = v56;
                      }
                      v57 = *(_QWORD *)(v15 + 8);
                      v58 = *(_QWORD *)v15;
                      if ( *(_QWORD *)(v15 + 16) < (unsigned __int64)(v57 + 1) )
                      {
                        v69 = qvector_reserve(v15, v58, v57 + 1, 4);
                        *(_QWORD *)v15 = v69;
                        v58 = v69;
                        v57 = *(_QWORD *)(v15 + 8);
                      }
                      *(_DWORD *)(v58 + 4 * v57) = v16;
                      ++*(_QWORD *)(v15 + 8);
                    }
                    ++v82;
                  }
                  while ( v89 != v82 );
                  v12 = v90;
                  v13 = v91;
                  v8 = v15;
                  v10 = v92;
                }
                v59 = *(_QWORD *)(v8 + 8);
                v60 = *(_QWORD *)v8;
                if ( *(_QWORD *)(v8 + 16) < (unsigned __int64)(v59 + 1) )
                {
                  v70 = qvector_reserve(v8, v60, v59 + 1, 4);
                  *(_QWORD *)v8 = v70;
                  v60 = v70;
                  v59 = *(_QWORD *)(v8 + 8);
                }
                *(_DWORD *)(v60 + 4 * v59) = v85;
                ++*(_QWORD *)(v8 + 8);
              }
              ++v10;
            }
            while ( v13 != v10 );
            v9 = v12;
            v7 = v93;
            v5 = v94;
            v3 = v95;
          }
          v61 = *(_QWORD *)(v8 + 8);
          v62 = *(_QWORD *)v8;
          if ( *(_QWORD *)(v8 + 16) < (unsigned __int64)(v61 + 1) )
          {
            v71 = qvector_reserve(v8, v62, v61 + 1, 4);
            *(_QWORD *)v8 = v71;
            v62 = v71;
            v61 = *(_QWORD *)(v8 + 8);
          }
          *(_DWORD *)(v62 + 4 * v61) = v9;
          ++*(_QWORD *)(v8 + 8);
        }
        ++v5;
      }
      while ( v7 != v5 );
      v2 = (__int64 *)v8;
    }
    result = v2[1];
    v63 = *v2;
    if ( v2[2] < (unsigned __int64)(result + 1) )
    {
      v72 = qvector_reserve((__int64)v2, v63, result + 1, 4);
      *v2 = v72;
      v63 = v72;
      result = v2[1];
    }
    *(_DWORD *)(v63 + 4 * result) = v3;
    ++v2[1];
  }
  return result;
}
