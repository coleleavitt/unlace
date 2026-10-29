void __fastcall sub_4CBDD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v4; // r12d
  __int64 v5; // rbx
  _QWORD *v6; // r13
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // r12
  char v11; // al
  unsigned int v12; // ecx
  _QWORD *v13; // r14
  __int64 (__fastcall *v14)(); // rdx
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // r15
  _QWORD *v18; // r13
  __int64 (__fastcall *v19)(); // rax
  __int64 v20; // rax
  __int64 v21; // r14
  unsigned int v22; // r13d
  _QWORD *v23; // r15
  __int64 (__fastcall *v24)(); // rdx
  __int64 v25; // rdx
  unsigned int v26; // r14d
  _QWORD *v27; // rbp
  __int64 (__fastcall *v28)(); // rax
  __int64 v29; // rcx
  unsigned int v30; // ebx
  _QWORD *v31; // rdi
  __int64 (__fastcall *v32)(); // rax
  __int64 v33; // rax
  unsigned int v34; // r15d
  __int64 v35; // rbp
  _QWORD *v36; // r14
  __int64 (__fastcall *v37)(); // rdx
  __int64 v38; // rdx
  unsigned int v39; // r13d
  _QWORD *v40; // rbx
  __int64 (__fastcall *v41)(); // rax
  __int64 v42; // rax
  unsigned int v43; // ebp
  __int64 v44; // rdx
  __int64 v45; // rdi
  unsigned int v46; // [rsp+0h] [rbp-88h]
  __int64 v47; // [rsp+0h] [rbp-88h]
  _QWORD *v48; // [rsp+8h] [rbp-80h]
  _QWORD *v49; // [rsp+10h] [rbp-78h]
  unsigned int v50; // [rsp+18h] [rbp-70h]
  unsigned int v51; // [rsp+1Ch] [rbp-6Ch]
  __int64 v52; // [rsp+20h] [rbp-68h]
  __int64 v53; // [rsp+28h] [rbp-60h]
  unsigned int v54; // [rsp+30h] [rbp-58h]
  unsigned int v55; // [rsp+34h] [rbp-54h]
  _QWORD *v56; // [rsp+38h] [rbp-50h]
  unsigned int v57; // [rsp+40h] [rbp-48h]
  unsigned int v58; // [rsp+44h] [rbp-44h]
  __int64 v59; // [rsp+48h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = 0;
    v5 = a1;
    do
    {
      if ( v4 >= *(_DWORD *)(v2 - 4) || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2) )
        return;
      v2 = *(_QWORD *)(v5 + 8);
      v6 = *(_QWORD **)(v2 + 8LL * v4);
      v7 = *(__int64 (__fastcall **)())(*v6 + 16LL);
      if ( v7 == sub_4CBDD0 )
      {
        v8 = v6[1];
        if ( v8 )
        {
          v59 = v5;
          v58 = v4;
          v9 = 0;
          v10 = a2;
          do
          {
            if ( v9 >= *(_DWORD *)(v8 - 4) )
              break;
            v46 = v9;
            v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
            v12 = v46;
            if ( v11 )
              break;
            v8 = v6[1];
            v13 = *(_QWORD **)(v8 + 8LL * v46);
            v14 = *(__int64 (__fastcall **)())(*v13 + 16LL);
            if ( v14 == sub_4CBDD0 )
            {
              v15 = v13[1];
              if ( v15 )
              {
                v56 = v6;
                v16 = 0;
                v17 = *(_QWORD *)(v8 + 8LL * v46);
                v57 = v46;
                while ( v16 < *(_DWORD *)(v15 - 4)
                     && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) )
                {
                  v15 = *(_QWORD *)(v17 + 8);
                  v18 = *(_QWORD **)(v15 + 8LL * v16);
                  v19 = *(__int64 (__fastcall **)())(*v18 + 16LL);
                  if ( v19 == sub_4CBDD0 )
                  {
                    v20 = v18[1];
                    if ( v20 )
                    {
                      v53 = v17;
                      v21 = *(_QWORD *)(v15 + 8LL * v16);
                      v55 = v16;
                      v22 = 0;
                      while ( v22 < *(_DWORD *)(v20 - 4)
                           && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) )
                      {
                        v20 = *(_QWORD *)(v21 + 8);
                        v23 = *(_QWORD **)(v20 + 8LL * v22);
                        v24 = *(__int64 (__fastcall **)())(*v23 + 16LL);
                        if ( v24 == sub_4CBDD0 )
                        {
                          v25 = v23[1];
                          if ( v25 )
                          {
                            v54 = v22;
                            v52 = v21;
                            v26 = 0;
                            while ( v26 < *(_DWORD *)(v25 - 4)
                                 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) )
                            {
                              v25 = v23[1];
                              v27 = *(_QWORD **)(v25 + 8LL * v26);
                              v28 = *(__int64 (__fastcall **)())(*v27 + 16LL);
                              if ( v28 == sub_4CBDD0 )
                              {
                                v29 = v27[1];
                                if ( v29 )
                                {
                                  v49 = v23;
                                  v30 = 0;
                                  v51 = v26;
                                  while ( v30 < *(_DWORD *)(v29 - 4)
                                       && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) )
                                  {
                                    v29 = v27[1];
                                    v31 = *(_QWORD **)(v29 + 8LL * v30);
                                    v32 = *(__int64 (__fastcall **)())(*v31 + 16LL);
                                    if ( v32 == sub_4CBDD0 )
                                    {
                                      v33 = v31[1];
                                      if ( v33 )
                                      {
                                        v50 = v30;
                                        v34 = 0;
                                        v48 = v27;
                                        v35 = *(_QWORD *)(v29 + 8LL * v30);
                                        while ( v34 < *(_DWORD *)(v33 - 4)
                                             && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) )
                                        {
                                          v33 = *(_QWORD *)(v35 + 8);
                                          v36 = *(_QWORD **)(v33 + 8LL * v34);
                                          v37 = *(__int64 (__fastcall **)())(*v36 + 16LL);
                                          if ( v37 != sub_4CBDD0 )
                                          {
                                            ((void (__fastcall *)(_QWORD, __int64))v37)(
                                              *(_QWORD *)(v33 + 8LL * v34),
                                              v10);
                                            v33 = *(_QWORD *)(v35 + 8);
                                            goto LABEL_37;
                                          }
                                          v38 = v36[1];
                                          if ( v38 )
                                          {
                                            v47 = v35;
                                            v39 = 0;
                                            while ( 1 )
                                            {
                                              if ( v39 >= *(_DWORD *)(v38 - 4)
                                                || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) )
                                              {
LABEL_59:
                                                v35 = v47;
                                                v33 = *(_QWORD *)(v47 + 8);
                                                break;
                                              }
                                              v38 = v36[1];
                                              v40 = *(_QWORD **)(v38 + 8LL * v39);
                                              v41 = *(__int64 (__fastcall **)())(*v40 + 16LL);
                                              if ( v41 == sub_4CBDD0 )
                                              {
                                                v42 = v40[1];
                                                if ( !v42 )
                                                  goto LABEL_58;
                                                v43 = 0;
                                                do
                                                {
                                                  if ( v43 >= *(_DWORD *)(v42 - 4) )
                                                    break;
                                                  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) )
                                                    break;
                                                  v44 = v43++;
                                                  v45 = *(_QWORD *)(v40[1] + 8 * v44);
                                                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 16LL))(
                                                    v45,
                                                    v10);
                                                  v42 = v40[1];
                                                }
                                                while ( v42 );
                                              }
                                              else
                                              {
                                                ((void (__fastcall *)(_QWORD, __int64))v41)(
                                                  *(_QWORD *)(v38 + 8LL * v39),
                                                  v10);
                                              }
                                              v38 = v36[1];
LABEL_58:
                                              ++v39;
                                              if ( !v38 )
                                                goto LABEL_59;
                                            }
                                          }
LABEL_37:
                                          ++v34;
                                          if ( !v33 )
                                            break;
                                        }
                                        v27 = v48;
                                        v30 = v50;
                                        v29 = v48[1];
                                      }
                                    }
                                    else
                                    {
                                      ((void (__fastcall *)(_QWORD *, __int64))v32)(v31, v10);
                                      v29 = v27[1];
                                    }
                                    ++v30;
                                    if ( !v29 )
                                      break;
                                  }
                                  v23 = v49;
                                  v26 = v51;
                                  v25 = v49[1];
                                }
                              }
                              else
                              {
                                ((void (__fastcall *)(_QWORD, __int64))v28)(*(_QWORD *)(v25 + 8LL * v26), v10);
                                v25 = v23[1];
                              }
                              ++v26;
                              if ( !v25 )
                                break;
                            }
                            v21 = v52;
                            v22 = v54;
                            v20 = *(_QWORD *)(v52 + 8);
                          }
                        }
                        else
                        {
                          ((void (__fastcall *)(_QWORD, __int64))v24)(*(_QWORD *)(v20 + 8LL * v22), v10);
                          v20 = *(_QWORD *)(v21 + 8);
                        }
                        ++v22;
                        if ( !v20 )
                          break;
                      }
                      v17 = v53;
                      v16 = v55;
                      v15 = *(_QWORD *)(v53 + 8);
                    }
                  }
                  else
                  {
                    ((void (__fastcall *)(_QWORD, __int64))v19)(*(_QWORD *)(v15 + 8LL * v16), v10);
                    v15 = *(_QWORD *)(v17 + 8);
                  }
                  ++v16;
                  if ( !v15 )
                    break;
                }
                v6 = v56;
                v12 = v57;
                v8 = v56[1];
              }
            }
            else
            {
              ((void (__fastcall *)(_QWORD, __int64))v14)(*(_QWORD *)(v8 + 8LL * v46), v10);
              v8 = v6[1];
              v12 = v46;
            }
            v9 = v12 + 1;
          }
          while ( v8 );
          v5 = v59;
          a2 = v10;
          v4 = v58;
          v2 = *(_QWORD *)(v59 + 8);
        }
      }
      else
      {
        ((void (__fastcall *)(_QWORD, __int64))v7)(*(_QWORD *)(v2 + 8LL * v4), a2);
        v2 = *(_QWORD *)(v5 + 8);
      }
      ++v4;
    }
    while ( v2 );
  }
}

