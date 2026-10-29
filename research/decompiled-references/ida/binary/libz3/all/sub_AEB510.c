void __fastcall sub_AEB510(_QWORD *a1, unsigned int a2, unsigned int *a3, unsigned int a4, __int64 a5)
{
  char **exception; // r13
  __int64 v8; // rbx
  int v9; // r8d
  int v10; // r9d
  _QWORD *v11; // r12
  _QWORD *v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned int *v16; // r12
  __int64 v17; // rbx
  _DWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rbp
  __int64 v25; // rax
  unsigned int v26; // ecx
  size_t v27; // rsi
  unsigned int v28; // r14d
  unsigned int *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // [rsp+0h] [rbp-90h]
  unsigned int v32; // [rsp+Ch] [rbp-84h]
  int v33; // [rsp+Ch] [rbp-84h]
  __int64 v34; // [rsp+10h] [rbp-80h]
  _QWORD v35[2]; // [rsp+28h] [rbp-68h] BYREF
  __int64 v36[11]; // [rsp+38h] [rbp-58h] BYREF

  if ( !*((_BYTE *)a1 + 40) )
    return;
  v8 = a2;
  if ( a4 == 2 )
  {
    v32 = 0;
  }
  else if ( a4 > 2 )
  {
    v32 = 2;
    if ( a4 != 3 )
    {
      sub_1872CE0("");
      sub_1873130(114, 57);
    }
  }
  else
  {
    v32 = a4 == 0 ? 1 : 3;
  }
  sub_AE9120(v35, a1, v32, a5);
  v11 = (_QWORD *)a1[3];
  v31 = v35[0];
  v34 = v35[1];
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = a1[2];
          if ( (*(_DWORD *)(v13 + 8))-- == 1 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_12;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_12:
    v11 = (_QWORD *)a1[3];
    if ( v11 )
LABEL_13:
      *((_DWORD *)v11 - 1) = 0;
  }
  v16 = &a3[v8];
  if ( (_DWORD)v8 )
  {
    do
    {
      while ( 1 )
      {
        v23 = *a3;
        v24 = *(_QWORD *)(*a1 + 104LL);
        if ( dword_1C7ED00 != *a3 )
          break;
        v17 = *(_QWORD *)(v24 + 856);
        if ( v17 )
          goto LABEL_19;
        v18 = (_DWORD *)a1[3];
        if ( !v18 )
          goto LABEL_27;
LABEL_21:
        v19 = *(v18 - 1);
        if ( v19 == *(v18 - 2) )
        {
          v26 = (3 * v19 + 1) >> 1;
          v27 = 8 * v26 + 8;
          v28 = v26;
          if ( 8 * v19 + 8 >= (unsigned int)v27 || v19 >= v26 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v36, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v36);
            sub_233E40((__int64)v36);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v29 = (unsigned int *)sub_186B300(v18 - 2, v27);
          v30 = v29[1];
          v18 = v29 + 2;
          *v29 = v28;
          a1[3] = v29 + 2;
          LODWORD(v29) = v30;
          v22 = (__int64 *)&v18[2 * v30];
          v21 = (_DWORD)v29 + 1;
        }
        else
        {
          v20 = v19;
          v21 = v19 + 1;
          v22 = (__int64 *)&v18[2 * v20];
        }
        ++a3;
        *v22 = v17;
        *(v18 - 1) = v21;
        if ( v16 == a3 )
          goto LABEL_28;
      }
      if ( dword_1C7ECFC == v23 )
      {
        v17 = *(_QWORD *)(v24 + 864);
        if ( v17 )
          goto LABEL_19;
      }
      else
      {
        v17 = *(_QWORD *)(*(_QWORD *)(*a1 + 8840LL) + 8LL * (v23 >> 1));
        if ( (v23 & 1) == 0 )
        {
          if ( !v17 )
            goto LABEL_20;
LABEL_19:
          ++*(_DWORD *)(v17 + 8);
          goto LABEL_20;
        }
        v17 = sub_15E1A70(*(_QWORD *)(*a1 + 104LL));
        if ( v17 )
          goto LABEL_19;
      }
LABEL_20:
      v18 = (_DWORD *)a1[3];
      if ( v18 )
        goto LABEL_21;
LABEL_27:
      v25 = sub_186B270(0x18u);
      *(_QWORD *)v25 = 2;
      ++a3;
      a1[3] = v25 + 8;
      *(_QWORD *)(v25 + 8) = v17;
      *(_DWORD *)(v25 + 4) = 1;
    }
    while ( v16 != a3 );
  }
LABEL_28:
  sub_AEAD60(a1, (__int64 *)v32, (__int64)(a1 + 2), v31, v9, v10);
  if ( v31 )
  {
    v33 = *(_DWORD *)(v31 + 8);
    *(_DWORD *)(v31 + 8) = v33 - 1;
    if ( v33 == 1 )
      sub_15D7BC0(v34, v31);
  }
}

