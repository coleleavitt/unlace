__int64 __fastcall sub_589940(__int64 *a1)
{
  __int64 *v2; // r14
  unsigned __int8 (__fastcall *v3)(__int64); // rax
  __int64 *v4; // rbp
  unsigned __int8 (__fastcall *v5)(__int64); // rdx
  __int64 *v6; // r12
  unsigned __int8 (__fastcall *v7)(__int64); // rax
  __int64 *v8; // r13
  unsigned __int8 (__fastcall *v9)(__int64); // rdx
  __int64 *v10; // r15
  unsigned __int8 (__fastcall *v11)(__int64); // rax
  _QWORD *v12; // r8
  unsigned __int8 (__fastcall *v13)(__int64); // rdx
  _QWORD *v14; // r9
  unsigned __int8 (__fastcall *v15)(__int64); // rax
  _QWORD **v16; // rdx
  unsigned __int8 (__fastcall *v17)(__int64); // rcx
  char v18; // al
  __int64 *v19; // r8
  __int64 *v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rdi
  unsigned __int8 v50; // al
  unsigned __int8 v51; // al
  __int64 *v52; // [rsp+8h] [rbp-60h]
  __int64 *v53; // [rsp+8h] [rbp-60h]
  __int64 *v54; // [rsp+8h] [rbp-60h]
  __int64 *v55; // [rsp+8h] [rbp-60h]
  __int64 *v56; // [rsp+8h] [rbp-60h]
  __int64 *v57; // [rsp+10h] [rbp-58h]
  __int64 *v58; // [rsp+10h] [rbp-58h]
  __int64 *v59; // [rsp+10h] [rbp-58h]
  __int64 *v60; // [rsp+18h] [rbp-50h]
  __int64 v61; // [rsp+20h] [rbp-48h] BYREF
  __int64 v62; // [rsp+28h] [rbp-40h]

  v2 = (__int64 *)a1[5];
  v3 = *(unsigned __int8 (__fastcall **)(__int64))(*v2 + 24);
  if ( (char *)v3 == (char *)sub_589940 )
  {
    v4 = (__int64 *)v2[5];
    v5 = *(unsigned __int8 (__fastcall **)(__int64))(*v4 + 24);
    if ( v5 == v3 )
    {
      v6 = (__int64 *)v4[5];
      v7 = *(unsigned __int8 (__fastcall **)(__int64))(*v6 + 24);
      if ( v7 == v5 )
      {
        v8 = (__int64 *)v6[5];
        v9 = *(unsigned __int8 (__fastcall **)(__int64))(*v8 + 24);
        if ( v9 == v7 )
        {
          v10 = (__int64 *)v8[5];
          v11 = *(unsigned __int8 (__fastcall **)(__int64))(*v10 + 24);
          if ( v11 == v9 )
          {
            v12 = (_QWORD *)v10[5];
            v13 = *(unsigned __int8 (__fastcall **)(__int64))(*v12 + 24LL);
            if ( v13 == v11 )
            {
              v14 = (_QWORD *)v12[5];
              v15 = *(unsigned __int8 (__fastcall **)(__int64))(*v14 + 24LL);
              if ( v15 == v13 )
              {
                v16 = (_QWORD **)v14[5];
                v17 = (unsigned __int8 (__fastcall *)(__int64))(*v16)[3];
                if ( v17 == v15 )
                {
                  v60 = (__int64 *)v12[5];
                  v57 = (__int64 *)v10[5];
                  v52 = (__int64 *)v14[5];
                  v18 = (*(__int64 (__fastcall **)(_QWORD *))(*v16[5] + 24LL))(v16[5]);
                  v19 = v57;
                  v20 = v60;
                  if ( v18 )
                  {
                    v21 = v52[6];
                    if ( v21 != *(_QWORD *)(v52[4] + 864) )
                    {
                      sub_588670((int)&v61, v52[1], (__int64)v52, v21);
                      sub_5875C0(v52[1], "empty", *(_QWORD *)(v52[4] + 864), v61);
                      v22 = v61;
                      v19 = v57;
                      v20 = v60;
                      if ( v61 )
                      {
                        v23 = v62;
                        v24 = (*(_DWORD *)(v61 + 8))-- == 1;
                        if ( v24 )
                        {
                          sub_15D7BC0(v23, v22);
                          v19 = v57;
                          v20 = v60;
                        }
                      }
                    }
                    goto LABEL_14;
                  }
                }
                else
                {
                  v59 = (__int64 *)v12[5];
                  v56 = (__int64 *)v10[5];
                  v51 = v17((__int64)v16);
                  v19 = v56;
                  v20 = v59;
                  if ( v51 )
                  {
LABEL_14:
                    v25 = v20[6];
                    if ( v25 != *(_QWORD *)(v20[4] + 864) )
                    {
                      v53 = v20;
                      v58 = v19;
                      sub_588670((int)&v61, v20[1], (__int64)v20, v25);
                      sub_5875C0(v53[1], "empty", *(_QWORD *)(v53[4] + 864), v61);
                      v26 = v61;
                      v19 = v58;
                      if ( v61 )
                      {
                        v27 = v62;
                        v24 = (*(_DWORD *)(v61 + 8))-- == 1;
                        if ( v24 )
                        {
                          sub_15D7BC0(v27, v26);
                          v19 = v58;
                        }
                      }
                    }
                    goto LABEL_18;
                  }
                }
              }
              else
              {
                v55 = (__int64 *)v10[5];
                v50 = v15((__int64)v14);
                v19 = v55;
                if ( v50 )
                {
LABEL_18:
                  v28 = v19[6];
                  if ( v28 != *(_QWORD *)(v19[4] + 864) )
                  {
                    v54 = v19;
                    sub_588670((int)&v61, v19[1], (__int64)v19, v28);
                    sub_5875C0(v54[1], "empty", *(_QWORD *)(v54[4] + 864), v61);
                    v29 = v61;
                    if ( v61 )
                    {
                      v30 = v62;
                      v24 = (*(_DWORD *)(v61 + 8))-- == 1;
                      if ( v24 )
                        sub_15D7BC0(v30, v29);
                    }
                  }
                  goto LABEL_22;
                }
              }
            }
            else if ( v13(v10[5]) )
            {
LABEL_22:
              v31 = v10[6];
              if ( v31 != *(_QWORD *)(v10[4] + 864) )
              {
                sub_588670((int)&v61, v10[1], (__int64)v10, v31);
                sub_5875C0(v10[1], "empty", *(_QWORD *)(v10[4] + 864), v61);
                v32 = v61;
                if ( v61 )
                {
                  v33 = v62;
                  v24 = (*(_DWORD *)(v61 + 8))-- == 1;
                  if ( v24 )
                    sub_15D7BC0(v33, v32);
                }
              }
              goto LABEL_26;
            }
          }
          else if ( v11(v8[5]) )
          {
LABEL_26:
            v34 = v8[6];
            if ( v34 != *(_QWORD *)(v8[4] + 864) )
            {
              sub_588670((int)&v61, v8[1], (__int64)v8, v34);
              sub_5875C0(v8[1], "empty", *(_QWORD *)(v8[4] + 864), v61);
              v35 = v61;
              if ( v61 )
              {
                v36 = v62;
                v24 = (*(_DWORD *)(v61 + 8))-- == 1;
                if ( v24 )
                  sub_15D7BC0(v36, v35);
              }
            }
            goto LABEL_33;
          }
        }
        else if ( v9(v6[5]) )
        {
LABEL_33:
          v38 = v6[6];
          if ( v38 != *(_QWORD *)(v6[4] + 864) )
          {
            sub_588670((int)&v61, v6[1], (__int64)v6, v38);
            sub_5875C0(v6[1], "empty", *(_QWORD *)(v6[4] + 864), v61);
            v39 = v61;
            if ( v61 )
            {
              v40 = v62;
              v24 = (*(_DWORD *)(v61 + 8))-- == 1;
              if ( v24 )
                sub_15D7BC0(v40, v39);
            }
          }
          goto LABEL_37;
        }
      }
      else if ( v7(v4[5]) )
      {
LABEL_37:
        v41 = v4[6];
        if ( v41 != *(_QWORD *)(v4[4] + 864) )
        {
          sub_588670((int)&v61, v4[1], (__int64)v4, v41);
          sub_5875C0(v4[1], "empty", *(_QWORD *)(v4[4] + 864), v61);
          v42 = v61;
          if ( v61 )
          {
            v43 = v62;
            v24 = (*(_DWORD *)(v61 + 8))-- == 1;
            if ( v24 )
              sub_15D7BC0(v43, v42);
          }
        }
        goto LABEL_41;
      }
    }
    else if ( v5(v2[5]) )
    {
LABEL_41:
      v44 = v2[6];
      if ( v44 != *(_QWORD *)(v2[4] + 864) )
      {
        sub_588670((int)&v61, v2[1], (__int64)v2, v44);
        sub_5875C0(v2[1], "empty", *(_QWORD *)(v2[4] + 864), v61);
        v45 = v61;
        if ( v61 )
        {
          v46 = v62;
          v24 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v24 )
            sub_15D7BC0(v46, v45);
        }
      }
      goto LABEL_45;
    }
    return 0;
  }
  if ( !v3(a1[5]) )
    return 0;
LABEL_45:
  v47 = a1[6];
  if ( v47 != *(_QWORD *)(a1[4] + 864) )
  {
    sub_588670((int)&v61, a1[1], (__int64)a1, v47);
    sub_5875C0(a1[1], "empty", *(_QWORD *)(a1[4] + 864), v61);
    v48 = v61;
    if ( v61 )
    {
      v49 = v62;
      v24 = (*(_DWORD *)(v61 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v49, v48);
    }
  }
  return 1;
}

