__int64 __fastcall sub_B21A10(__int64 a1, unsigned int *a2)
{
  char **exception; // r13
  unsigned int v4; // r13d
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r14
  _DWORD *v10; // rax
  __int64 v11; // rdx
  unsigned int i; // r15d
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  size_t v17; // rsi
  unsigned int *v18; // rax
  unsigned int v20; // r15d
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rsi
  _DWORD *v24; // rdi
  _DWORD *v25; // rcx
  _DWORD *v26; // rdx
  __int64 v27; // [rsp+0h] [rbp-B8h]
  unsigned int v28; // [rsp+0h] [rbp-B8h]
  unsigned int v29; // [rsp+Ch] [rbp-ACh]
  __int64 v30[4]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v31[3]; // [rsp+40h] [rbp-78h] BYREF
  void *v32; // [rsp+58h] [rbp-60h]
  __int64 v33; // [rsp+68h] [rbp-50h]
  void *v34; // [rsp+70h] [rbp-48h]

  v4 = *a2;
  v31[2] = 0;
  v32 = nullptr;
  v31[0] = &off_1C62200;
  v33 = 0;
  v34 = nullptr;
  v5 = (_QWORD *)sub_186B270(0x18u);
  v5[1] = a2;
  v6 = v5 + 1;
  *v5 = 0x100000002LL;
  v7 = 1;
  while ( v7 )
  {
    v8 = (unsigned int)(v7 - 1);
    v9 = v6[v8];
    *((_DWORD *)v6 - 1) = v8;
    if ( (unsigned __int8)sub_15D37A0(v31, v9) )
      goto LABEL_26;
    sub_15D0A90(v31, v9, 1);
    if ( *(_WORD *)(v9 + 4) )
      goto LABEL_26;
    v10 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
    if ( !v10 || *v10 == -1 )
    {
      v28 = *(_DWORD *)v9;
      v20 = sub_B21620(a1, v4);
      v21 = sub_B21620(a1, v28);
      if ( v20 != v21 )
      {
        v22 = *(_QWORD *)(a1 + 96);
        v23 = 4LL * v21;
        v24 = (_DWORD *)(v22 + 4LL * v20);
        v25 = (_DWORD *)(v23 + v22);
        if ( *v25 >= *v24 )
        {
          v26 = v25;
          v23 = 4LL * v20;
          v25 = v24;
          v20 = v21;
          v24 = v26;
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 88) + v23) = v20;
        *v24 += *v25;
      }
      if ( *(_WORD *)(v9 + 4) )
        goto LABEL_26;
    }
    if ( !*(_DWORD *)(v9 + 24) )
    {
LABEL_26:
      v7 = *((_DWORD *)v6 - 1);
    }
    else
    {
      v11 = *(_QWORD *)(v9 + 32);
      for ( i = 0; ; v11 = *(_QWORD *)(v9 + 8LL * i + 32) )
      {
        v15 = *((_DWORD *)v6 - 1);
        if ( v15 == *((_DWORD *)v6 - 2) )
        {
          v16 = (3 * v15 + 1) >> 1;
          v17 = 8 * v16 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v30, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v30);
            sub_233E40((__int64)v30);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v29 = (3 * v15 + 1) >> 1;
          v27 = v11;
          v18 = (unsigned int *)sub_186B300(v6 - 1, v17);
          v6 = v18 + 2;
          v11 = v27;
          *v18 = v29;
          LODWORD(v18) = v18[1];
          v14 = &v6[(unsigned int)v18];
          v7 = (_DWORD)v18 + 1;
        }
        else
        {
          v13 = v15;
          v7 = v15 + 1;
          v14 = &v6[v13];
        }
        *v14 = v11;
        ++i;
        *((_DWORD *)v6 - 1) = v7;
        if ( i >= *(_DWORD *)(v9 + 24) )
          break;
      }
    }
  }
  v31[0] = &off_1C62200;
  if ( v34 )
    sub_186B220(v34);
  if ( v32 )
    sub_186B220(v32);
  sub_186B220(v6 - 1);
  return v4;
}

