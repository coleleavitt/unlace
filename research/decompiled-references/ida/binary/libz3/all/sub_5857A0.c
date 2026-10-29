__int64 __fastcall sub_5857A0(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rbx
  _QWORD *v9; // r13
  _QWORD *v10; // r14
  __int64 (__fastcall *v11)(); // rax
  __int64 *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rbp
  _QWORD *v15; // r10
  _QWORD *v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  unsigned int v26; // ecx
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rbp
  __int64 *v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 *v33; // rbx
  int v34; // eax
  __int64 *v35; // rdx
  __int64 v36; // rbx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  unsigned int v41; // r12d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rax
  char **v46; // r12
  char **exception; // r12
  __int64 v48; // [rsp+8h] [rbp-C0h]
  unsigned int v49; // [rsp+10h] [rbp-B8h]
  _QWORD *v50; // [rsp+10h] [rbp-B8h]
  __int64 v51; // [rsp+10h] [rbp-B8h]
  __int64 v52; // [rsp+10h] [rbp-B8h]
  unsigned int v53; // [rsp+1Ch] [rbp-ACh]
  unsigned int v54; // [rsp+1Ch] [rbp-ACh]
  __int64 v55; // [rsp+20h] [rbp-A8h]
  __int64 *v56; // [rsp+28h] [rbp-A0h]
  __int64 v57; // [rsp+30h] [rbp-98h]
  unsigned int v60; // [rsp+48h] [rbp-80h]
  unsigned int v61; // [rsp+4Ch] [rbp-7Ch]
  __int64 v62; // [rsp+58h] [rbp-70h] BYREF
  __int64 v63; // [rsp+60h] [rbp-68h] BYREF
  __int64 v64; // [rsp+68h] [rbp-60h] BYREF
  __int64 v65[11]; // [rsp+70h] [rbp-58h] BYREF

  v4 = (__int64 *)a1[5];
  v56 = v4;
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    v61 = v5;
    if ( (_DWORD)v5 )
    {
      v55 = 0;
      v57 = 4 * v5;
      v56 = nullptr;
      while ( 1 )
      {
        v6 = *(unsigned int *)(a1[7] + v55);
        if ( *(_DWORD *)(a1[8] + v55) == 1 )
        {
          v7 = *(_QWORD **)(a1[6] + 8 * v6);
        }
        else
        {
          sub_180C5A0(&v62, "product_relation");
          v7 = a2;
          if ( v62 == *(_QWORD *)(a2[1] + 16LL) )
          {
            v40 = __dynamic_cast(
                    a2,
                    (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                    (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
                    0);
            if ( !v40 )
              __cxa_bad_cast();
            v7 = *(_QWORD **)(v40[4] + 8 * v6);
          }
        }
        v8 = *(unsigned int *)(a1[9] + v55);
        if ( *(_DWORD *)(a1[10] + v55) == 1 )
        {
          v9 = *(_QWORD **)(a1[6] + 8 * v8);
        }
        else
        {
          sub_180C5A0(&v63, "product_relation");
          v9 = a3;
          if ( v63 == *(_QWORD *)(a3[1] + 16LL) )
          {
            v39 = __dynamic_cast(
                    a3,
                    (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                    (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
                    0);
            if ( !v39 )
              __cxa_bad_cast();
            v9 = *(_QWORD **)(v39[4] + 8 * v8);
          }
        }
        v10 = *(_QWORD **)(a1[5] + 2 * v55);
        v11 = *(__int64 (__fastcall **)())(*v10 + 16LL);
        if ( v11 == sub_5857A0 )
        {
          v12 = (__int64 *)v10[5];
          if ( v12 )
          {
            v13 = *((_DWORD *)v12 - 1);
            v60 = v13;
            if ( v13 )
            {
              v12 = nullptr;
              v14 = 0;
              v48 = 4LL * v13;
              do
              {
                if ( *(_DWORD *)(v10[8] + v14) == 1 )
                {
                  v15 = *(_QWORD **)(v10[6] + 8LL * *(unsigned int *)(v10[7] + v14));
                }
                else
                {
                  v49 = *(_DWORD *)(v10[7] + v14);
                  sub_180C5A0(&v64, "product_relation");
                  v15 = v7;
                  if ( v64 == *(_QWORD *)(v7[1] + 16LL) )
                  {
                    v24 = __dynamic_cast(
                            v7,
                            (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                            (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
                            0);
                    if ( !v24 )
                      __cxa_bad_cast();
                    v15 = *(_QWORD **)(v24[4] + 8LL * v49);
                  }
                }
                if ( *(_DWORD *)(v10[10] + v14) == 1 )
                {
                  v16 = *(_QWORD **)(v10[6] + 8LL * *(unsigned int *)(v10[9] + v14));
                }
                else
                {
                  v53 = *(_DWORD *)(v10[9] + v14);
                  v50 = v15;
                  sub_180C5A0(v65, "product_relation");
                  v15 = v50;
                  v16 = v9;
                  if ( v65[0] == *(_QWORD *)(v9[1] + 16LL) )
                  {
                    v25 = __dynamic_cast(
                            v9,
                            (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                            (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
                            0);
                    if ( !v25 )
                      __cxa_bad_cast();
                    v15 = v50;
                    v16 = *(_QWORD **)(v25[4] + 8LL * v53);
                  }
                }
                v17 = *(_QWORD *)(v10[5] + 2 * v14);
                v18 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD *))(*(_QWORD *)v17 + 16LL))(v17, v15, v16);
                v19 = v18;
                if ( v12 )
                {
                  v20 = *((_DWORD *)v12 - 1);
                  if ( v20 == *((_DWORD *)v12 - 2) )
                  {
                    v26 = (3 * v20 + 1) >> 1;
                    v27 = 8 * v26 + 8;
                    if ( 8 * v20 + 8 >= (unsigned int)v27 || v20 >= v26 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v65, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v65);
                      sub_233E40((__int64)v65);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v54 = (3 * v20 + 1) >> 1;
                    v51 = v19;
                    v28 = (unsigned int *)sub_186B300(v12 - 1, v27);
                    v12 = (__int64 *)(v28 + 2);
                    v19 = v51;
                    *v28 = v54;
                    LODWORD(v28) = v28[1];
                    v23 = &v12[(unsigned int)v28];
                    v22 = (_DWORD)v28 + 1;
                  }
                  else
                  {
                    v21 = v20;
                    v22 = v20 + 1;
                    v23 = &v12[v21];
                  }
                }
                else
                {
                  v52 = v18;
                  v38 = (_QWORD *)sub_186B270(0x18u);
                  v12 = v38 + 1;
                  v23 = v38 + 1;
                  *v38 = 2;
                  v19 = v52;
                  v22 = 1;
                }
                *v23 = v19;
                v14 += 4;
                *((_DWORD *)v12 - 1) = v22;
              }
              while ( v14 != v48 );
            }
            else
            {
              v12 = nullptr;
            }
          }
          else
          {
            v60 = 0;
          }
          v29 = sub_186B270(0x30u);
          sub_57BC10(v29, v10[4], v10 + 1, v60, v12);
          if ( v12 )
            sub_186B220(v12 - 1);
          v30 = v56;
          if ( v56 )
          {
LABEL_33:
            v31 = *((_DWORD *)v30 - 1);
            if ( v31 == *((_DWORD *)v30 - 2) )
            {
              v41 = (3 * v31 + 1) >> 1;
              v42 = 8 * v41 + 8;
              if ( 8 * v31 + 8 >= (unsigned int)v42 || v31 >= v41 )
              {
                v46 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v65, "Overflow encountered when expanding vector");
                *v46 = (char *)off_1C63128;
                sub_2333C0(v46 + 1, v65);
                sub_233E40((__int64)v65);
                __cxa_throw(v46, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v43 = (unsigned int *)sub_186B300(v56 - 1, v42);
              v44 = v43[1];
              *v43 = v41;
              v56 = (__int64 *)(v43 + 2);
              v33 = (__int64 *)(v43 + 2);
              LODWORD(v43) = v44;
              v35 = &v56[v44];
              v34 = (_DWORD)v43 + 1;
            }
            else
            {
              v32 = v31;
              v33 = v30;
              v34 = v31 + 1;
              v35 = &v30[v32];
            }
            goto LABEL_35;
          }
        }
        else
        {
          v30 = v56;
          v29 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, _QWORD *))v11)(*(_QWORD *)(a1[5] + 2 * v55), v7, v9);
          if ( v56 )
            goto LABEL_33;
        }
        v45 = (_QWORD *)sub_186B270(0x18u);
        *v45 = 2;
        v56 = v45 + 1;
        v35 = v45 + 1;
        v33 = v45 + 1;
        v34 = 1;
LABEL_35:
        v55 += 4;
        *v35 = v29;
        *((_DWORD *)v33 - 1) = v34;
        if ( v57 == v55 )
          goto LABEL_36;
      }
    }
    v56 = nullptr;
  }
  else
  {
    v61 = 0;
  }
LABEL_36:
  v36 = sub_186B270(0x30u);
  sub_57BC10(v36, a1[4], a1 + 1, v61, v56);
  if ( v56 )
    sub_186B220(v56 - 1);
  return v36;
}

