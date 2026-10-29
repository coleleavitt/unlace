__int64 __fastcall sub_8624A0(__int64 a1, __int64 a2)
{
  char **exception; // r12
  _QWORD *v3; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned int v14; // eax
  unsigned int v15; // ecx
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // r9d
  unsigned int v27; // eax
  unsigned int *v28; // rsi
  unsigned int v29; // r12d
  unsigned int *v30; // rdi
  bool v31; // zf
  __int64 *v32; // r15
  unsigned __int64 v33; // r14
  __int64 v34; // rsi
  _QWORD *v36; // rax
  __int64 v37; // [rsp+8h] [rbp-98h]
  __int64 v38; // [rsp+10h] [rbp-90h]
  unsigned int v40; // [rsp+24h] [rbp-7Ch]
  unsigned int v41; // [rsp+24h] [rbp-7Ch]
  _QWORD *v42; // [rsp+28h] [rbp-78h]
  unsigned int *v43; // [rsp+28h] [rbp-78h]
  int v44[2]; // [rsp+30h] [rbp-70h] BYREF
  int v45[2]; // [rsp+38h] [rbp-68h] BYREF
  __int64 v46; // [rsp+40h] [rbp-60h]
  unsigned int *v47[10]; // [rsp+50h] [rbp-50h] BYREF

  v3 = (_QWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a1 + 72);
  ++*(_DWORD *)(a1 + 168);
  v38 = v5;
  v46 = v5;
  v6 = 8LL * *(unsigned int *)(a2 + 24);
  v42 = (_QWORD *)(a2 + 32 + v6);
  if ( v6 )
  {
    v7 = nullptr;
    while ( 1 )
    {
      v11 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)v44 = *v3;
      v12 = sub_15DCAD0(v11, (int)v44, 0);
      v13 = v12;
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      if ( !v7 )
        break;
      v14 = *((_DWORD *)v7 - 1);
      if ( v14 == *((_DWORD *)v7 - 2) )
      {
        v15 = (3 * v14 + 1) >> 1;
        v16 = 8 * v15 + 8;
        if ( 8 * v14 + 8 >= (unsigned int)v16 || v14 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v47, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v47);
          sub_233E40((__int64)v47);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v40 = (3 * v14 + 1) >> 1;
        v17 = (unsigned int *)sub_186B300(v7 - 1, v16);
        v7 = v17 + 2;
        ++v3;
        *v17 = v40;
        LODWORD(v17) = v17[1];
        v7[(unsigned int)v17] = v13;
        *((_DWORD *)v7 - 1) = (_DWORD)v17 + 1;
        if ( v42 == v3 )
        {
LABEL_12:
          v37 = *(_QWORD *)(a1 + 72);
          goto LABEL_13;
        }
      }
      else
      {
        v8 = v14;
        v9 = v14 + 1;
        v10 = &v7[v8];
LABEL_4:
        *v10 = v13;
        ++v3;
        *((_DWORD *)v7 - 1) = v9;
        if ( v42 == v3 )
          goto LABEL_12;
      }
    }
    v36 = (_QWORD *)sub_186B270(0x18u);
    v7 = v36 + 1;
    *v36 = 2;
    v9 = 1;
    v10 = v7;
    goto LABEL_4;
  }
  v7 = nullptr;
  v37 = v38;
LABEL_13:
  v18 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)v45 = a2;
  v19 = sub_15DCAD0(v18, (int)v45, 0);
  v43 = (unsigned int *)v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  if ( v7 )
    v20 = *((unsigned int *)v7 - 1);
  else
    v20 = 0;
  sub_8600B0(v47, a1, a2, v20, v7);
  v21 = *(_QWORD *)(a1 + 80);
  v22 = *(_QWORD *)(a1 + 464);
  v23 = sub_7E5940(a1, v47[0]);
  v24 = sub_7E5940(a1, v43);
  v27 = sub_7CA650(v21, v24, v23, v22, v25, v26);
  v28 = v47[0];
  v29 = v27;
  if ( v47[0] )
  {
    v30 = v47[1];
    v31 = v47[0][2]-- == 1;
    if ( v31 )
      sub_15D7BC0(v30, v28);
  }
  if ( v43 )
  {
    v41 = v43[2];
    v43[2] = v41 - 1;
    if ( v41 == 1 )
      sub_15D7BC0(v37, v43);
  }
  if ( v7 )
  {
    v32 = v7;
    v33 = (unsigned __int64)&v7[*((unsigned int *)v7 - 1)];
    if ( (unsigned __int64)v7 < v33 )
    {
      do
      {
        while ( 1 )
        {
          v34 = *v32;
          if ( *v32 )
          {
            v31 = (*(_DWORD *)(v34 + 8))-- == 1;
            if ( v31 )
              break;
          }
          if ( (unsigned __int64)++v32 >= v33 )
            goto LABEL_30;
        }
        sub_15D7BC0(v38, v34);
        ++v32;
      }
      while ( (unsigned __int64)v32 < v33 );
    }
LABEL_30:
    sub_186B220(v7 - 1);
  }
  return v29;
}

