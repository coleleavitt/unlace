__int64 __fastcall sub_4C4EA0(_DWORD *a1)
{
  int v1; // eax
  __int64 result; // rax
  _DWORD *v3; // r12
  unsigned int v4; // ebp
  int v5; // r14d
  _DWORD *v6; // r15
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // r12
  _DWORD *v10; // r14
  int v11; // eax
  _DWORD *v12; // r13
  int v13; // r12d
  _DWORD *v14; // rbp
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // r13
  unsigned int v18; // ebp
  int v19; // r14d
  _DWORD *v20; // rdx
  int v21; // eax
  unsigned int v22; // r12d
  int v23; // eax
  _DWORD *v24; // rbp
  int v25; // r13d
  _DWORD *v26; // r14
  int v27; // eax
  unsigned int v28; // r15d
  int v29; // ebx
  _DWORD *v30; // rbp
  int v31; // eax
  int v32; // eax
  unsigned int v33; // r13d
  _DWORD *v34; // r15
  int v35; // eax
  unsigned int v36; // r14d
  int v37; // eax
  int v38; // r12d
  _DWORD *v39; // rbx
  int v40; // eax
  unsigned int v41; // r13d
  int v42; // ebp
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _DWORD *v53; // [rsp+8h] [rbp-B0h]
  _DWORD *v54; // [rsp+8h] [rbp-B0h]
  int v55; // [rsp+8h] [rbp-B0h]
  _DWORD *v56; // [rsp+8h] [rbp-B0h]
  _DWORD *v57; // [rsp+10h] [rbp-A8h]
  unsigned int v58; // [rsp+1Ch] [rbp-9Ch]
  _DWORD *v59; // [rsp+20h] [rbp-98h]
  int v60; // [rsp+28h] [rbp-90h]
  unsigned int v61; // [rsp+2Ch] [rbp-8Ch]
  _DWORD *v62; // [rsp+30h] [rbp-88h]
  unsigned int v63; // [rsp+38h] [rbp-80h]
  int v64; // [rsp+3Ch] [rbp-7Ch]
  _DWORD *v65; // [rsp+40h] [rbp-78h]
  unsigned int v66; // [rsp+48h] [rbp-70h]
  int v67; // [rsp+4Ch] [rbp-6Ch]
  _DWORD *v68; // [rsp+50h] [rbp-68h]
  unsigned int v69; // [rsp+58h] [rbp-60h]
  int v70; // [rsp+5Ch] [rbp-5Ch]
  _DWORD *v71; // [rsp+60h] [rbp-58h]
  int v72; // [rsp+68h] [rbp-50h]
  unsigned int v73; // [rsp+6Ch] [rbp-4Ch]
  int v74; // [rsp+70h] [rbp-48h]
  unsigned int v75; // [rsp+74h] [rbp-44h]
  _DWORD *v76; // [rsp+78h] [rbp-40h]

  v1 = a1[10];
  if ( v1 == 2 )
  {
    ((void (*)(void))sub_4CFFD0)();
    v1 = a1[10];
  }
  if ( v1 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 504LL))(a1);
  result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 464LL))(a1);
  if ( (int)result > 0 )
  {
    v3 = a1;
    v4 = 0;
    v5 = result;
    do
    {
      v6 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v3 + 456LL))(v3, v4);
      v7 = v6[10];
      if ( v7 )
      {
        if ( v7 != 2 || (sub_4CFFD0(v6), v6[10]) )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 504LL))(v6);
        result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 464LL))(v6);
        if ( (int)result > 0 )
        {
          v74 = v5;
          v8 = 0;
          v75 = v4;
          v72 = result;
          v76 = v3;
          v9 = v6;
          do
          {
            v10 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v9 + 456LL))(v9, v8);
            v11 = v10[10];
            if ( v11 )
            {
              if ( v11 != 2 || (sub_4CFFD0(v10), v10[10]) )
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 504LL))(v10);
              result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 464LL))(v10);
              if ( (int)result > 0 )
              {
                v73 = v8;
                v12 = v10;
                v63 = 0;
                v71 = v9;
                v13 = result;
                do
                {
                  v14 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v12 + 456LL))(v12, v63);
                  v15 = v14[10];
                  if ( v15 )
                  {
                    if ( v15 != 2 || (sub_4CFFD0(v14), v14[10]) )
                      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 504LL))(v14);
                    v16 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 464LL))(v14);
                    if ( v16 > 0 )
                    {
                      v70 = v13;
                      v68 = v12;
                      v17 = v14;
                      v18 = 0;
                      v19 = v16;
                      do
                      {
                        v20 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v17 + 456LL))(v17, v18);
                        v21 = v20[10];
                        if ( v21 )
                        {
                          if ( v21 != 2 || (v56 = v20, sub_4CFFD0(v20), v20 = v56, v56[10]) )
                          {
                            v53 = v20;
                            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 504LL))(v20);
                            v20 = v53;
                          }
                          v54 = v20;
                          v22 = 0;
                          v23 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 464LL))(v20);
                          if ( v23 > 0 )
                          {
                            v67 = v19;
                            v69 = v18;
                            v24 = v54;
                            v65 = v17;
                            v25 = v23;
                            do
                            {
                              v26 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v24 + 456LL))(
                                                v24,
                                                v22);
                              v27 = v26[10];
                              if ( v27 )
                              {
                                if ( v27 != 2 || (sub_4CFFD0(v26), v26[10]) )
                                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 504LL))(v26);
                                v28 = 0;
                                v29 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 464LL))(v26);
                                if ( v29 > 0 )
                                {
                                  v62 = v24;
                                  v64 = v25;
                                  v66 = v22;
                                  do
                                  {
                                    v30 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v26 + 456LL))(
                                                      v26,
                                                      v28);
                                    v31 = v30[10];
                                    if ( v31 )
                                    {
                                      if ( v31 != 2 || (sub_4CFFD0(v30), v30[10]) )
                                        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v30 + 504LL))(v30);
                                      v32 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v30 + 464LL))(v30);
                                      if ( v32 > 0 )
                                      {
                                        v59 = v26;
                                        v33 = 0;
                                        v60 = v29;
                                        v61 = v28;
                                        v55 = v32;
                                        do
                                        {
                                          v34 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v30 + 456LL))(
                                                            v30,
                                                            v33);
                                          v35 = v34[10];
                                          if ( v35 )
                                          {
                                            if ( v35 != 2 || (sub_4CFFD0(v34), v34[10]) )
                                              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v34 + 504LL))(v34);
                                            v36 = 0;
                                            v37 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v34 + 464LL))(v34);
                                            if ( v37 > 0 )
                                            {
                                              v57 = v30;
                                              v38 = v37;
                                              v58 = v33;
                                              do
                                              {
                                                while ( 1 )
                                                {
                                                  v39 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v34 + 456LL))(
                                                                    v34,
                                                                    v36);
                                                  v40 = v39[10];
                                                  if ( v40 )
                                                    break;
                                                  ++v36;
                                                  v45 = sub_4CD6A0(v39);
                                                  sub_4D2F60(v45);
                                                  if ( v38 == v36 )
                                                    goto LABEL_50;
                                                }
                                                if ( v40 != 2 || (sub_4CFFD0(v39), v39[10]) )
                                                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v39 + 504LL))(v39);
                                                v41 = 0;
                                                v42 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v39 + 464LL))(v39);
                                                if ( v42 > 0 )
                                                {
                                                  do
                                                  {
                                                    v43 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v39 + 456LL))(
                                                            v39,
                                                            v41);
                                                    if ( *(_DWORD *)(v43 + 40) )
                                                    {
                                                      sub_4C4EA0(v43);
                                                    }
                                                    else
                                                    {
                                                      v44 = sub_4CD6A0(v43);
                                                      sub_4D2F60(v44);
                                                    }
                                                    ++v41;
                                                  }
                                                  while ( v42 != v41 );
                                                }
                                                ++v36;
                                              }
                                              while ( v38 != v36 );
LABEL_50:
                                              v30 = v57;
                                              v33 = v58;
                                            }
                                          }
                                          else
                                          {
                                            v46 = sub_4CD6A0(v34);
                                            sub_4D2F60(v46);
                                          }
                                          ++v33;
                                        }
                                        while ( v55 != v33 );
                                        v26 = v59;
                                        v29 = v60;
                                        v28 = v61;
                                      }
                                    }
                                    else
                                    {
                                      v47 = sub_4CD6A0(v30);
                                      sub_4D2F60(v47);
                                    }
                                    ++v28;
                                  }
                                  while ( v29 != v28 );
                                  v24 = v62;
                                  v25 = v64;
                                  v22 = v66;
                                }
                              }
                              else
                              {
                                v48 = sub_4CD6A0(v26);
                                sub_4D2F60(v48);
                              }
                              ++v22;
                            }
                            while ( v25 != v22 );
                            v17 = v65;
                            v19 = v67;
                            v18 = v69;
                          }
                        }
                        else
                        {
                          v49 = sub_4CD6A0(v20);
                          sub_4D2F60(v49);
                        }
                        ++v18;
                      }
                      while ( v19 != v18 );
                      v12 = v68;
                      v13 = v70;
                    }
                  }
                  else
                  {
                    v50 = sub_4CD6A0(v14);
                    sub_4D2F60(v50);
                  }
                  result = ++v63;
                }
                while ( v13 != v63 );
                v9 = v71;
                v8 = v73;
              }
            }
            else
            {
              v51 = sub_4CD6A0(v10);
              result = sub_4D2F60(v51);
            }
            ++v8;
          }
          while ( v72 != v8 );
          v5 = v74;
          v4 = v75;
          v3 = v76;
        }
      }
      else
      {
        v52 = sub_4CD6A0(v6);
        result = sub_4D2F60(v52);
      }
      ++v4;
    }
    while ( v5 != v4 );
  }
  return result;
}
