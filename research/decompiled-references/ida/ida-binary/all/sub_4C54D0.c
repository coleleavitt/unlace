__int64 __fastcall sub_4C54D0(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // r12d
  __int64 result; // rax
  _DWORD *v4; // rax
  _DWORD *v5; // r13
  int v6; // r12d
  _DWORD *v7; // rbp
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  int v10; // r13d
  _DWORD *v11; // r12
  _DWORD *v12; // rax
  _DWORD *v13; // r14
  int v14; // r15d
  _DWORD *v15; // rdx
  _DWORD *v16; // rax
  int v17; // ebp
  _DWORD *v18; // r14
  _DWORD *v19; // r13
  _DWORD *v20; // rax
  int v21; // ebx
  _DWORD *v22; // rdx
  _DWORD *v23; // rax
  _DWORD *v24; // r13
  int v25; // r15d
  _DWORD *v26; // rdx
  _DWORD *v27; // rax
  int v28; // r13d
  _DWORD *v29; // rbx
  _DWORD *v30; // rax
  _DWORD *v31; // r12
  int v32; // ebp
  __int64 v33; // rax
  _DWORD *v34; // [rsp+8h] [rbp-80h]
  _DWORD *v35; // [rsp+8h] [rbp-80h]
  _DWORD *v36; // [rsp+8h] [rbp-80h]
  _DWORD *v37; // [rsp+8h] [rbp-80h]
  _DWORD *v38; // [rsp+8h] [rbp-80h]
  _DWORD *v39; // [rsp+10h] [rbp-78h]
  _DWORD *v40; // [rsp+10h] [rbp-78h]
  _DWORD *v41; // [rsp+18h] [rbp-70h]
  int v42; // [rsp+20h] [rbp-68h]
  int v43; // [rsp+24h] [rbp-64h]
  _DWORD *v44; // [rsp+28h] [rbp-60h]
  int v45; // [rsp+30h] [rbp-58h]
  int v46; // [rsp+34h] [rbp-54h]
  _DWORD *v47; // [rsp+38h] [rbp-50h]
  int v48; // [rsp+40h] [rbp-48h]
  int v49; // [rsp+44h] [rbp-44h]
  __int64 v50; // [rsp+48h] [rbp-40h]

  v1 = a1;
  v2 = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1);
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 464LL))(v1);
    if ( v2 >= (int)result )
      break;
    v4 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 456LL))(v1, (unsigned int)v2);
    v5 = v4;
    if ( v4[10] )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 440LL))(v4);
      v49 = v2;
      v6 = 0;
      v50 = v1;
      v7 = v5;
      while ( v6 < (*(int (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 464LL))(v7) )
      {
        v8 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v7 + 456LL))(v7, (unsigned int)v6);
        v9 = v8;
        if ( v8[10] )
        {
          v10 = 0;
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 440LL))(v8);
          v47 = v7;
          v48 = v6;
          v11 = v9;
          while ( v10 < (*(int (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 464LL))(v11) )
          {
            v12 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v11 + 456LL))(
                              v11,
                              (unsigned int)v10);
            v13 = v12;
            if ( v12[10] )
            {
              v14 = 0;
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 440LL))(v12);
              v46 = v10;
              v15 = v13;
              while ( 1 )
              {
                v34 = v15;
                if ( v14 >= (*(int (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 464LL))(v15) )
                  break;
                v16 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v34 + 456LL))(
                                  v34,
                                  (unsigned int)v14);
                v15 = v34;
                if ( v16[10] )
                {
                  v39 = v34;
                  v17 = 0;
                  v35 = v16;
                  v18 = v11;
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 440LL))(v16);
                  v45 = v14;
                  v19 = v35;
                  v44 = v39;
                  while ( v17 < (*(int (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 464LL))(v19) )
                  {
                    v20 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v19 + 456LL))(
                                      v19,
                                      (unsigned int)v17);
                    if ( v20[10] )
                    {
                      v36 = v20;
                      v21 = 0;
                      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 440LL))(v20);
                      v41 = v19;
                      v22 = v36;
                      v43 = v17;
                      while ( 1 )
                      {
                        v37 = v22;
                        if ( v21 >= (*(int (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 464LL))(v22) )
                          break;
                        v23 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v37 + 456LL))(
                                          v37,
                                          (unsigned int)v21);
                        v22 = v37;
                        v24 = v23;
                        if ( v23[10] )
                        {
                          v25 = 0;
                          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 440LL))(v23);
                          v42 = v21;
                          v40 = v37;
                          v26 = v24;
                          while ( 1 )
                          {
                            v38 = v26;
                            if ( v25 >= (*(int (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 464LL))(v26) )
                              break;
                            v27 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v38 + 456LL))(
                                              v38,
                                              (unsigned int)v25);
                            v26 = v38;
                            if ( v27[10] )
                            {
                              v28 = 0;
                              v29 = v27;
                              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v27 + 440LL))(v27);
                              while ( v28 < (*(int (__fastcall **)(_DWORD *))(*(_QWORD *)v29 + 464LL))(v29) )
                              {
                                v30 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v29 + 456LL))(
                                                  v29,
                                                  (unsigned int)v28);
                                v31 = v30;
                                if ( v30[10] )
                                {
                                  v32 = 0;
                                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v30 + 440LL))(v30);
                                  while ( v32 < (*(int (__fastcall **)(_DWORD *))(*(_QWORD *)v31 + 464LL))(v31) )
                                  {
                                    v33 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v31 + 456LL))(
                                            v31,
                                            (unsigned int)v32);
                                    if ( *(_DWORD *)(v33 + 40) )
                                      sub_4C54D0(v33);
                                    ++v32;
                                  }
                                }
                                ++v28;
                              }
                              v26 = v38;
                            }
                            ++v25;
                          }
                          v22 = v40;
                          v21 = v42;
                        }
                        ++v21;
                      }
                      v19 = v41;
                      v17 = v43;
                    }
                    ++v17;
                  }
                  v15 = v44;
                  v14 = v45;
                  v11 = v18;
                }
                ++v14;
              }
              v10 = v46;
            }
            ++v10;
          }
          v7 = v47;
          v6 = v48;
        }
        ++v6;
      }
      v2 = v49;
      v1 = v50;
    }
    ++v2;
  }
  return result;
}
