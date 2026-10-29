void *__fastcall Z3_mk_select_n(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // r15
  char v7; // r14
  int *v8; // rax
  int v9; // eax
  void *result; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // r9d
  __int64 v21; // rdx
  unsigned int v22; // r8d
  size_t v23; // rsi
  unsigned int *v24; // rax
  unsigned int v25; // r8d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // r8
  int v29; // eax
  int v30; // r8d
  int v31; // r9d
  int v32[2]; // [rsp+0h] [rbp-90h]
  __int64 v33; // [rsp+8h] [rbp-88h]
  int v34; // [rsp+10h] [rbp-80h]
  unsigned int v35; // [rsp+14h] [rbp-7Ch]
  unsigned int v36; // [rsp+14h] [rbp-7Ch]
  __int64 v37; // [rsp+18h] [rbp-78h]
  char **v38; // [rsp+20h] [rbp-70h]
  char **exception; // [rsp+20h] [rbp-70h]
  __int64 *v40; // [rsp+20h] [rbp-70h]
  void *v41; // [rsp+20h] [rbp-70h]
  int v42[2]; // [rsp+28h] [rbp-68h]
  int v43[2]; // [rsp+28h] [rbp-68h]
  int v44; // [rsp+30h] [rbp-60h]
  int v45; // [rsp+38h] [rbp-58h]
  __int64 v46[10]; // [rsp+40h] [rbp-50h] BYREF

  v4 = a3;
  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
  {
    sub_2970B0(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
LABEL_11:
      result = nullptr;
LABEL_12:
      byte_1C7EBA0 = 1;
      return result;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      return nullptr;
    }
  }
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
    goto LABEL_10;
  }
  *(_QWORD *)v32 = *(_QWORD *)(a1 + 232);
  v33 = sub_15D1F10(a2);
  v8 = *(int **)(v33 + 24);
  if ( v8 )
    v9 = *v8;
  else
    v9 = -1;
  if ( *(_DWORD *)(a1 + 1440) != v9 )
  {
    sub_24EA30(a1, 1u, nullptr);
    if ( !v7 )
      return nullptr;
    sub_2BB620(0);
    goto LABEL_11;
  }
  v11 = (_QWORD *)sub_186B270(0x18u);
  v11[1] = a2;
  *(_QWORD *)v42 = v11 + 1;
  *v11 = 0x100000002LL;
  v12 = (_QWORD *)sub_186B270(0x18u);
  v13 = (__int64)(v12 + 1);
  v12[1] = v33;
  *v12 = 0x100000002LL;
  if ( (_DWORD)v4 )
  {
    v40 = &a4[v4];
    while ( 1 )
    {
      v16 = *a4;
      if ( !*a4 || (unsigned int)*(unsigned __int16 *)(v16 + 4) - 3 <= 1 )
        break;
      v17 = *a4;
      v18 = *(_DWORD *)(*(_QWORD *)v42 - 4LL);
      if ( v18 == *(_DWORD *)(*(_QWORD *)v42 - 8LL) )
      {
        v25 = (3 * v18 + 1) >> 1;
        v26 = 8 * v25 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v26 || v18 >= v25 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v46, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v46);
          sub_233E40((__int64)v46);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v36 = (3 * v18 + 1) >> 1;
        v37 = *a4;
        v27 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v42 - 8LL), v26);
        v16 = v37;
        *(_QWORD *)v42 = v27 + 2;
        v17 = *a4;
        *v27 = v36;
        v18 = v27[1];
      }
      *(_QWORD *)(*(_QWORD *)v42 + 8LL * v18) = v16;
      *(_DWORD *)(*(_QWORD *)v42 - 4LL) = v18 + 1;
      v19 = sub_15D1F10(v17);
      v20 = *(_DWORD *)(v13 - 4);
      v21 = v19;
      if ( v20 == *(_DWORD *)(v13 - 8) )
      {
        v22 = (3 * v20 + 1) >> 1;
        v23 = 8 * v22 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v23 || v20 >= v22 )
        {
          v38 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v46, "Overflow encountered when expanding vector");
          *v38 = (char *)off_1C63128;
          sub_2333C0(v38 + 1, v46);
          sub_233E40((__int64)v46);
          __cxa_throw(v38, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (3 * v20 + 1) >> 1;
        v37 = v19;
        v24 = (unsigned int *)sub_186B300((void *)(v13 - 8), v23);
        v20 = v24[1];
        v13 = (__int64)(v24 + 2);
        v21 = v37;
        *v24 = v35;
      }
      v14 = v20;
      ++a4;
      v15 = v20 + 1;
      *(_QWORD *)(v13 + 8 * v14) = v21;
      *(_DWORD *)(v13 - 4) = v15;
      if ( a4 == v40 )
        goto LABEL_31;
    }
    sub_24EA30(a1, 3u, "ast is not an expression");
    sub_186B220((void *)(*(_QWORD *)v42 - 8LL));
    sub_186B220((void *)(v13 - 8));
LABEL_10:
    if ( !v7 )
      return nullptr;
    goto LABEL_11;
  }
  v15 = 1;
LABEL_31:
  v28 = *(_QWORD *)(v33 + 24);
  if ( v28 )
    v28 = *(_QWORD *)(v28 + 8);
  v29 = sub_15D2D10(v32[0], *(_DWORD *)(a1 + 1440), 1, 2, v28, v15, v13, 0);
  v41 = (void *)sub_15DC610(
                  v32[0],
                  v29,
                  *(_DWORD *)(*(_QWORD *)v42 - 4LL),
                  v42[0],
                  v30,
                  v31,
                  v32[0],
                  v33,
                  v34,
                  v37,
                  (int)v40,
                  v42[0],
                  v44,
                  v45,
                  v46[0],
                  (void *)v46[1]);
  sub_251FD0(a1, (__int64)v41);
  sub_24FE40(a1, (__int64)v41);
  if ( v7 )
  {
    sub_2BB620(v41);
    sub_186B220((void *)(*(_QWORD *)v43 - 8LL));
    sub_186B220((void *)(v13 - 8));
    result = v41;
    goto LABEL_12;
  }
  sub_186B220((void *)(*(_QWORD *)v43 - 8LL));
  sub_186B220((void *)(v13 - 8));
  return v41;
}

