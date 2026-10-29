__int64 __fastcall sub_5BFB70(_QWORD *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  char **exception; // rbp
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 *v8; // r15
  __int64 v9; // r13
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r10
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rsi
  bool v20; // zf
  unsigned int v21; // ecx
  _QWORD *v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // r13d
  unsigned int v25; // edx
  size_t v26; // rsi
  unsigned int *v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  _QWORD *v33; // r13
  _QWORD *v34; // rax
  unsigned int v37; // [rsp+28h] [rbp-A0h]
  unsigned int v38; // [rsp+28h] [rbp-A0h]
  unsigned int v39; // [rsp+28h] [rbp-A0h]
  char v40; // [rsp+28h] [rbp-A0h]
  __int64 v41; // [rsp+28h] [rbp-A0h]
  __int64 v42; // [rsp+30h] [rbp-98h]
  __int64 v43; // [rsp+30h] [rbp-98h]
  unsigned int v44; // [rsp+30h] [rbp-98h]
  _QWORD *v45; // [rsp+30h] [rbp-98h]
  unsigned int v46; // [rsp+38h] [rbp-90h]
  unsigned int v47; // [rsp+3Ch] [rbp-8Ch]
  unsigned int v48; // [rsp+4Ch] [rbp-7Ch] BYREF
  __int64 v49; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v50; // [rsp+58h] [rbp-70h]
  __int64 v51; // [rsp+60h] [rbp-68h] BYREF
  __int64 v52; // [rsp+68h] [rbp-60h]
  __int64 v53[11]; // [rsp+70h] [rbp-58h] BYREF

  result = (__int64)sub_5BE210(&v49, (__int64)a1, a2);
  v7 = v50;
  if ( !v50 )
    return result;
  v8 = &v50[*((unsigned int *)v50 - 1)];
  if ( v50 == v8 )
    return sub_186B220(v8 - 1);
  do
  {
    v9 = *v7;
    v10 = a1[4];
    v48 = 0;
    v51 = 0;
    v52 = v10;
    v11 = sub_5BD420((__int64)a1, v9, &v48, &v51);
    v12 = v51;
    v13 = v52;
    if ( !v11
      || (v14 = a1[7]) == 0
      || (v15 = v48, v48 >= *(_DWORD *)(v14 - 4))
      || (v16 = v48, !*(_BYTE *)(v14 + v48))
      || (v17 = a1[6], *(_BYTE *)(v17 + v48))
      || !*(_BYTE *)(a1[10] + v48) )
    {
      result = sub_5BE030((__int64)a1, a3, v9);
      goto LABEL_10;
    }
    if ( !v17 || v48 >= *(_DWORD *)(v17 - 4) )
    {
      v42 = v48;
      v37 = v48;
      sub_5BF460(a1, v48);
      v16 = v42;
      v15 = v37;
    }
    if ( *(_QWORD *)(a1[9] + 8 * v16) )
    {
      v43 = v16;
      v38 = v15;
      sub_5BE030((__int64)a1, a3, v9);
      sub_5BE030((__int64)a1, a3, *(_QWORD *)(a1[9] + 8 * v43));
      v21 = v38;
      v22 = (_QWORD *)*a3;
      v23 = v38 >> 5;
      v46 = v38 >> 5;
      if ( *a3 )
      {
        v47 = *((_DWORD *)v22 - 1);
        if ( v23 < v47 )
        {
LABEL_38:
          result = v46;
          *((_DWORD *)v22 + v46) |= 1 << v21;
LABEL_10:
          if ( !v12 )
            goto LABEL_14;
          goto LABEL_11;
        }
        v24 = v23 + 1;
      }
      else
      {
        v24 = v23 + 1;
        v34 = (_QWORD *)sub_186B270(0x10u);
        *v34 = 2;
        v22 = v34 + 1;
        v47 = 0;
        v21 = v38;
        *a3 = v34 + 1;
      }
      while ( 1 )
      {
        v28 = *((_DWORD *)v22 - 2);
        if ( v28 >= v24 )
          break;
        v25 = (3 * v28 + 1) >> 1;
        v26 = 4 * v25 + 8;
        if ( 4 * v28 + 8 >= (unsigned int)v26 || v28 >= v25 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v53, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v53);
          sub_233E40((__int64)v53);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = (3 * v28 + 1) >> 1;
        v39 = v21;
        v27 = (unsigned int *)sub_186B300(v22 - 1, v26);
        v22 = v27 + 2;
        *v27 = v44;
        *a3 = v27 + 2;
        v21 = v39;
      }
      *((_DWORD *)v22 - 1) = v24;
      v29 = 4LL * v24;
      v30 = 4LL * v47;
      if ( v30 != v29 )
      {
        v45 = v22;
        v40 = v21;
        memset((char *)v22 + v30, 0, v29 - v30);
        v22 = v45;
        LOBYTE(v21) = v40;
      }
      goto LABEL_38;
    }
    v41 = 8 * v16;
    sub_5BE030((__int64)a1, a4, v12);
    result = a1[9] + v41;
    v31 = a1[8];
    v32 = *(_QWORD *)result;
    v33 = (_QWORD *)result;
    if ( v12 )
    {
      result = *(unsigned int *)(v12 + 8);
      *(_DWORD *)(v12 + 8) = result + 1;
      if ( !v32 )
      {
        *v33 = v12;
LABEL_12:
        *(_DWORD *)(v12 + 8) = result;
        if ( !(_DWORD)result )
          result = sub_15D7BC0(v13, v12);
        goto LABEL_14;
      }
      v20 = (*(_DWORD *)(v32 + 8))-- == 1;
      if ( v20 )
        sub_15D7BC0(v31, v32);
      *v33 = v12;
LABEL_11:
      result = (unsigned int)(*(_DWORD *)(v12 + 8) - 1);
      goto LABEL_12;
    }
    if ( v32 )
    {
      v20 = (*(_DWORD *)(v32 + 8))-- == 1;
      if ( v20 )
        result = sub_15D7BC0(v31, v32);
      *v33 = 0;
    }
LABEL_14:
    ++v7;
  }
  while ( v8 != v7 );
  v8 = v50;
  if ( v50 )
  {
    result = *((unsigned int *)v50 - 1);
    v18 = (unsigned __int64)&v50[result];
    if ( (unsigned __int64)v50 >= v18 )
      return sub_186B220(v8 - 1);
    do
    {
      while ( 1 )
      {
        v19 = *v8;
        if ( *v8 )
        {
          v20 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v20 )
            break;
        }
        if ( (unsigned __int64)++v8 >= v18 )
          goto LABEL_22;
      }
      result = sub_15D7BC0(v49, v19);
      ++v8;
    }
    while ( (unsigned __int64)v8 < v18 );
LABEL_22:
    v8 = v50;
    if ( v50 )
      return sub_186B220(v8 - 1);
  }
  return result;
}

