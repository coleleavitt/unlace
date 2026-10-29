__int64 __fastcall sub_36E5D0(__int64 *a1)
{
  char **exception; // rbp
  char **v2; // rbp
  char **v3; // rbp
  __int64 result; // rax
  __int64 *v6; // rbp
  void (__fastcall ***v7)(void *); // rbx
  __int64 *v8; // r13
  _QWORD *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rbx
  void (***v14)(void); // rdi
  __int64 v15; // rax
  unsigned int v16; // ecx
  size_t v17; // rsi
  unsigned int *v18; // rax
  unsigned int v19; // ecx
  size_t v20; // rsi
  unsigned int v21; // r14d
  unsigned int *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 *v28; // rcx
  __int64 v29; // rdi
  __int64 *v30; // r13
  __int64 *v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rdi
  bool v34; // zf
  __int64 v35; // rdi
  __int64 *v36; // r14
  __int64 v37; // rsi
  unsigned int v38; // ecx
  size_t v39; // rsi
  unsigned int *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  unsigned int ptr; // [rsp+0h] [rbp-78h]
  unsigned int v44; // [rsp+Ch] [rbp-6Ch]
  unsigned int v45; // [rsp+Ch] [rbp-6Ch]
  __int64 v46; // [rsp+18h] [rbp-60h] BYREF
  __int64 v47[11]; // [rsp+20h] [rbp-58h] BYREF

  result = sub_1377B20(a1[14]);
  v46 = result;
  if ( result )
  {
    v6 = (__int64 *)a1[7];
    ++*(_DWORD *)(result + 16);
    v7 = (void (__fastcall ***)(void *))result;
    if ( !v6 )
      goto LABEL_43;
  }
  else
  {
    v6 = (__int64 *)a1[7];
    if ( !v6 )
      return result;
  }
  ptr = 0;
  v8 = &v6[*((unsigned int *)v6 - 1)];
  if ( v8 == v6 )
    goto LABEL_41;
  do
  {
    while ( 1 )
    {
      v13 = *v6;
      result = sub_18290A0(*a1);
      v14 = (void (***)(void))v46;
      if ( !(_BYTE)result )
      {
        if ( v46 )
        {
          v34 = (*(_DWORD *)(v46 + 16))-- == 1;
          if ( v34 )
          {
            (**v14)();
            return sub_186B220(v14);
          }
        }
        return result;
      }
      if ( (unsigned __int8)sub_1374270(v46, v13) )
      {
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        v9 = (_QWORD *)a1[5];
        if ( !v9 )
          goto LABEL_53;
        v10 = *((_DWORD *)v9 - 1);
        if ( v10 == *((_DWORD *)v9 - 2) )
        {
          v19 = (3 * v10 + 1) >> 1;
          v20 = 8 * v19 + 8;
          v21 = v19;
          if ( 8 * v10 + 8 >= (unsigned int)v20 || v10 >= v19 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v47, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v47);
            sub_233E40((__int64)v47);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (unsigned int *)sub_186B300(v9 - 1, v20);
          v23 = v22[1];
          v9 = v22 + 2;
          *v22 = v21;
          a1[5] = (__int64)(v22 + 2);
          LODWORD(v22) = v23;
          v12 = &v9[v23];
          result = (unsigned int)((_DWORD)v22 + 1);
          goto LABEL_10;
        }
        goto LABEL_9;
      }
      sub_36D660(a1);
      result = sub_36D730(a1, &v46, v13);
      if ( !(_DWORD)result )
      {
        result = a1[7];
        v35 = a1[6];
        v36 = (__int64 *)(result + 8LL * ptr);
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        v37 = *v36;
        if ( *v36 && (v34 = *(_DWORD *)(v37 + 8) == 1, --*(_DWORD *)(v37 + 8), v34) )
        {
          ++ptr;
          result = sub_15D7BC0(v35, v37);
          *v36 = v13;
        }
        else
        {
          *v36 = v13;
          ++ptr;
        }
        goto LABEL_11;
      }
      if ( (_DWORD)result == 1 )
        break;
      if ( (_DWORD)result != -1 )
        goto LABEL_11;
      v15 = sub_15E1A70(*a1);
      v13 = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      v9 = (_QWORD *)a1[5];
      if ( !v9 )
      {
LABEL_53:
        v41 = (_QWORD *)sub_186B270(0x18u);
        v9 = v41 + 1;
        *v41 = 2;
        result = 1;
        a1[5] = (__int64)v9;
        v12 = v9;
        goto LABEL_10;
      }
      v10 = *((_DWORD *)v9 - 1);
      if ( v10 == *((_DWORD *)v9 - 2) )
      {
        v16 = (3 * v10 + 1) >> 1;
        v17 = 8 * v16 + 8;
        if ( 8 * v10 + 8 >= (unsigned int)v17 || v10 >= v16 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v47, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v47);
          sub_233E40((__int64)v47);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = (3 * v10 + 1) >> 1;
        v18 = (unsigned int *)sub_186B300(v9 - 1, v17);
        v9 = v18 + 2;
        a1[5] = (__int64)(v18 + 2);
        *v18 = v44;
        LODWORD(v18) = v18[1];
        v12 = &v9[(unsigned int)v18];
        result = (unsigned int)((_DWORD)v18 + 1);
        goto LABEL_10;
      }
LABEL_9:
      v11 = v10;
      result = v10 + 1;
      v12 = &v9[v11];
LABEL_10:
      *v12 = v13;
      *((_DWORD *)v9 - 1) = result;
LABEL_11:
      if ( v8 == ++v6 )
        goto LABEL_33;
    }
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    v24 = (_QWORD *)a1[5];
    if ( v24 )
    {
      v25 = *((_DWORD *)v24 - 1);
      if ( v25 == *((_DWORD *)v24 - 2) )
      {
        v38 = (3 * v25 + 1) >> 1;
        v39 = 8 * v38 + 8;
        if ( 8 * v25 + 8 >= (unsigned int)v39 || v25 >= v38 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v47, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v47);
          sub_233E40((__int64)v47);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v45 = (3 * v25 + 1) >> 1;
        v40 = (unsigned int *)sub_186B300(v24 - 1, v39);
        v24 = v40 + 2;
        a1[5] = (__int64)(v40 + 2);
        *v40 = v45;
        LODWORD(v40) = v40[1];
        v28 = &v24[(unsigned int)v40];
        v27 = (_DWORD)v40 + 1;
      }
      else
      {
        v26 = v25;
        v27 = v25 + 1;
        v28 = &v24[v26];
      }
    }
    else
    {
      v42 = (_QWORD *)sub_186B270(0x18u);
      v24 = v42 + 1;
      *v42 = 2;
      v27 = 1;
      a1[5] = (__int64)v24;
      v28 = v24;
    }
    v29 = a1[2];
    *v28 = v13;
    *((_DWORD *)v24 - 1) = v27;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 16LL))(v29, &v46);
    result = sub_36D390((__int64)a1, &v46);
    ++v6;
  }
  while ( v8 != v6 );
LABEL_33:
  v6 = (__int64 *)a1[7];
  if ( v6 )
  {
    v30 = &v6[*((unsigned int *)v6 - 1)];
    result = ptr;
    v31 = &v6[ptr];
    if ( v31 >= v30 )
      goto LABEL_41;
    do
    {
      while ( 1 )
      {
        v32 = *v31;
        if ( *v31 )
        {
          v33 = a1[6];
          v34 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v34 )
            break;
        }
        if ( ++v31 >= v30 )
          goto LABEL_40;
      }
      result = sub_15D7BC0(v33, v32);
      ++v31;
    }
    while ( v31 < v30 );
LABEL_40:
    v6 = (__int64 *)a1[7];
    if ( v6 )
    {
LABEL_41:
      result = ptr;
      *((_DWORD *)v6 - 1) = ptr;
    }
  }
  v7 = (void (__fastcall ***)(void *))v46;
  if ( v46 )
  {
LABEL_43:
    v34 = (*((_DWORD *)v7 + 4))-- == 1;
    if ( v34 )
    {
      (**v7)(v7);
      return sub_186B220(v7);
    }
  }
  return result;
}

