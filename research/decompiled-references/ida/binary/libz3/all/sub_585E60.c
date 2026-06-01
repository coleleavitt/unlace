__int64 __fastcall sub_585E60(__int64 a1, const void *a2)
{
  const void **v2; // rax
  _DWORD *v3; // rdx
  const void *v4; // rdi
  __int64 (__fastcall *v5)(_QWORD *, const void *); // rcx
  const void **v6; // rax
  __int64 *v7; // rbp
  unsigned int v8; // r14d
  const void **v9; // rdx
  _QWORD *v10; // r13
  __int64 (__fastcall *v11)(_QWORD, const void *); // rcx
  const void **v12; // rax
  const void **v13; // r12
  _DWORD *v14; // rcx
  __int64 *v15; // rbx
  unsigned int v16; // r15d
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rsi
  int v22; // eax
  __int64 *v23; // rsi
  __int64 v24; // r12
  unsigned int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 *v31; // rdx
  unsigned int v32; // eax
  __int64 *v33; // rbx
  __int64 v34; // rdx
  int v35; // eax
  __int64 *v36; // rdx
  __int64 v37; // rbp
  unsigned int v39; // r8d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rsi
  unsigned int v43; // r13d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  unsigned int v49; // ebp
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  _QWORD *v54; // rax
  char **exception; // r13
  char **v56; // r13
  char **v57; // r13
  __int64 v58; // [rsp+8h] [rbp-C0h]
  __int64 v59; // [rsp+8h] [rbp-C0h]
  _QWORD *v60; // [rsp+10h] [rbp-B8h]
  void *v61; // [rsp+20h] [rbp-A8h]
  const void **v62; // [rsp+28h] [rbp-A0h]
  __int64 *v63; // [rsp+30h] [rbp-98h]
  unsigned int v64; // [rsp+38h] [rbp-90h]
  unsigned int v65; // [rsp+3Ch] [rbp-8Ch]
  const void **v66; // [rsp+40h] [rbp-88h]
  void *v67; // [rsp+48h] [rbp-80h]
  void *v69; // [rsp+58h] [rbp-70h]
  __int64 v70[11]; // [rsp+70h] [rbp-58h] BYREF

  v2 = (const void **)__dynamic_cast(
                        a2,
                        (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                        (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
                        0);
  v66 = v2;
  if ( !v2
    || (v69 = __dynamic_cast(
                v2[1],
                (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
                (const struct __class_type_info *)&`typeinfo for'datalog::product_relation_plugin,
                0)) == nullptr )
  {
    __cxa_bad_cast();
  }
  v65 = 0;
  v63 = nullptr;
  v3 = v66[4];
  if ( !v3 )
  {
    v37 = sub_186B270(0x30u);
    goto LABEL_53;
  }
  do
  {
    if ( v65 >= *(v3 - 1) )
      break;
    v4 = *(const void **)&v3[2 * v65];
    v60 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 8LL * v65);
    v5 = *(__int64 (__fastcall **)(_QWORD *, const void *))(*v60 + 16LL);
    if ( (char *)v5 != (char *)&sub_585E60 )
    {
      v53 = v5(v60, v4);
      v31 = v63;
      v30 = v53;
      if ( v63 )
        goto LABEL_28;
LABEL_49:
      v54 = (_QWORD *)sub_186B270(0x18u);
      *v54 = 2;
      v63 = v54 + 1;
      v36 = v54 + 1;
      v35 = 1;
      goto LABEL_30;
    }
    v6 = (const void **)__dynamic_cast(
                          v4,
                          (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                          (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
                          0);
    v62 = v6;
    if ( !v6 )
      __cxa_bad_cast();
    v67 = __dynamic_cast(
            v6[1],
            (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
            (const struct __class_type_info *)&`typeinfo for'datalog::product_relation_plugin,
            0);
    if ( !v67 )
      __cxa_bad_cast();
    v7 = nullptr;
    v8 = 0;
    v9 = (const void **)v62[4];
    if ( !v9 )
    {
      v30 = sub_186B270(0x30u);
      goto LABEL_51;
    }
    while ( v8 < *((_DWORD *)v9 - 1) )
    {
      v10 = *(_QWORD **)(v60[2] + 8LL * v8);
      v11 = *(__int64 (__fastcall **)(_QWORD, const void *))(*v10 + 16LL);
      if ( (char *)v11 == (char *)&sub_585E60 )
      {
        v12 = (const void **)__dynamic_cast(
                               v9[v8],
                               (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                               (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
                               0);
        v13 = v12;
        if ( !v12 )
          __cxa_bad_cast();
        v61 = __dynamic_cast(
                v12[1],
                (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
                (const struct __class_type_info *)&`typeinfo for'datalog::product_relation_plugin,
                0);
        if ( !v61 )
          __cxa_bad_cast();
        v14 = v13[4];
        v15 = nullptr;
        v16 = 0;
        if ( v14 )
        {
          do
          {
            if ( v16 >= *(v14 - 1) )
              break;
            v17 = *(_QWORD *)(v10[2] + 8LL * v16);
            v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 16LL))(v17, *(_QWORD *)&v14[2 * v16]);
            v19 = v18;
            if ( v15 )
            {
              v20 = *((_DWORD *)v15 - 1);
              if ( v20 == *((_DWORD *)v15 - 2) )
              {
                v39 = (3 * v20 + 1) >> 1;
                v40 = 8 * v39 + 8;
                if ( 8 * v20 + 8 >= (unsigned int)v40 || v20 >= v39 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v70, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v70);
                  sub_233E40((__int64)v70);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v64 = (3 * v20 + 1) >> 1;
                v58 = v19;
                v41 = (unsigned int *)sub_186B300(v15 - 1, v40);
                v42 = v41[1];
                v15 = (__int64 *)(v41 + 2);
                v19 = v58;
                *v41 = v64;
                LODWORD(v41) = v42;
                v23 = &v15[v42];
                v22 = (_DWORD)v41 + 1;
              }
              else
              {
                v21 = v20;
                v22 = v20 + 1;
                v23 = &v15[v21];
              }
            }
            else
            {
              v59 = v18;
              v47 = (_QWORD *)sub_186B270(0x18u);
              v15 = v47 + 1;
              v19 = v59;
              v23 = v47 + 1;
              *v47 = 2;
              v22 = 1;
            }
            *v23 = v19;
            v14 = v13[4];
            ++v16;
            *((_DWORD *)v15 - 1) = v22;
          }
          while ( v14 );
          v24 = sub_186B270(0x30u);
          if ( v15 )
          {
            sub_57BC10(v24, (__int64)v61, v10 + 1, *((_DWORD *)v15 - 1), v15);
            sub_186B220(v15 - 1);
            goto LABEL_21;
          }
        }
        else
        {
          v24 = sub_186B270(0x30u);
        }
        sub_57BC10(v24, (__int64)v61, v10 + 1, 0, nullptr);
LABEL_21:
        if ( v7 )
          goto LABEL_22;
        goto LABEL_42;
      }
      v24 = v11(*(_QWORD *)(v60[2] + 8LL * v8), v9[v8]);
      if ( v7 )
      {
LABEL_22:
        v25 = *((_DWORD *)v7 - 1);
        if ( v25 == *((_DWORD *)v7 - 2) )
        {
          v43 = (3 * v25 + 1) >> 1;
          v44 = 8 * v43 + 8;
          if ( 8 * v25 + 8 >= (unsigned int)v44 || v25 >= v43 )
          {
            v56 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v70, "Overflow encountered when expanding vector");
            *v56 = (char *)off_1C63128;
            sub_2333C0(v56 + 1, v70);
            sub_233E40((__int64)v70);
            __cxa_throw(v56, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v45 = (unsigned int *)sub_186B300(v7 - 1, v44);
          v46 = v45[1];
          v7 = (__int64 *)(v45 + 2);
          *v45 = v43;
          LODWORD(v45) = v46;
          v28 = &v7[v46];
          v27 = (_DWORD)v45 + 1;
        }
        else
        {
          v26 = v25;
          v27 = v25 + 1;
          v28 = &v7[v26];
        }
        goto LABEL_24;
      }
LABEL_42:
      v48 = (_QWORD *)sub_186B270(0x18u);
      v7 = v48 + 1;
      *v48 = 2;
      v27 = 1;
      v28 = v7;
LABEL_24:
      *v28 = v24;
      ++v8;
      *((_DWORD *)v7 - 1) = v27;
      v9 = (const void **)v62[4];
      if ( !v9 )
        break;
    }
    v29 = sub_186B270(0x30u);
    v30 = v29;
    if ( v7 )
    {
      sub_57BC10(v29, (__int64)v67, v60 + 1, *((_DWORD *)v7 - 1), v7);
      sub_186B220(v7 - 1);
      goto LABEL_27;
    }
LABEL_51:
    sub_57BC10(v30, (__int64)v67, v60 + 1, 0, nullptr);
LABEL_27:
    v31 = v63;
    if ( !v63 )
      goto LABEL_49;
LABEL_28:
    v32 = *((_DWORD *)v31 - 1);
    if ( v32 == *((_DWORD *)v31 - 2) )
    {
      v49 = (3 * v32 + 1) >> 1;
      v50 = 8 * v49 + 8;
      if ( 8 * v32 + 8 >= (unsigned int)v50 || v32 >= v49 )
      {
        v57 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v70, "Overflow encountered when expanding vector");
        *v57 = (char *)off_1C63128;
        sub_2333C0(v57 + 1, v70);
        sub_233E40((__int64)v70);
        __cxa_throw(v57, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v51 = (unsigned int *)sub_186B300(v63 - 1, v50);
      v52 = v51[1];
      *v51 = v49;
      v63 = (__int64 *)(v51 + 2);
      LODWORD(v51) = v52;
      v36 = &v63[v52];
      v35 = (_DWORD)v51 + 1;
    }
    else
    {
      v33 = v31;
      v34 = v32;
      v35 = v32 + 1;
      v36 = &v33[v34];
    }
LABEL_30:
    *v36 = v30;
    ++v65;
    *((_DWORD *)v63 - 1) = v35;
    v3 = v66[4];
  }
  while ( v3 );
  v37 = sub_186B270(0x30u);
  if ( !v63 )
  {
LABEL_53:
    sub_57BC10(v37, (__int64)v69, (_QWORD *)(a1 + 8), 0, nullptr);
    return v37;
  }
  sub_57BC10(v37, (__int64)v69, (_QWORD *)(a1 + 8), *((_DWORD *)v63 - 1), v63);
  sub_186B220(v63 - 1);
  return v37;
}

