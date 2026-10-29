void __fastcall sub_727980(__int64 a1, __int64 *a2, void **a3, double a4)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v9; // rsi
  unsigned int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // rcx
  char v13; // dl
  unsigned int v14; // edx
  __int64 v15; // r15
  int v16; // edx
  __int64 *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdi
  char *v20; // rsi
  unsigned int v21; // r14d
  __int64 *v22; // rdi
  __int64 v23; // rax
  void *v24; // rbx
  void (__fastcall ***v25)(void *); // rbp
  bool v26; // zf
  void (__fastcall ***v27)(_QWORD); // rbx
  void (__fastcall ***v28)(void *); // rbx
  __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  void *ptr; // [rsp+8h] [rbp-40h] BYREF

  v5 = (__int64 *)*a2;
  if ( (*(_BYTE *)(*a2 + 123) & 0x20) != 0 )
    goto LABEL_39;
  v6 = v5[9];
  if ( !v6 )
    goto LABEL_21;
  v9 = *v5;
  v10 = 0;
  while ( 2 )
  {
    v12 = v6;
    v13 = *(_BYTE *)(v6 + 3) >> 6;
    if ( v13 )
    {
      if ( v13 != 1 )
        goto LABEL_9;
    }
    else
    {
      do
      {
        v12 = *(_QWORD *)(v12 + 16);
        v13 = *(_BYTE *)(v12 + 3) >> 6;
      }
      while ( !v13 );
      if ( v13 != 1 )
      {
LABEL_9:
        if ( v13 == 2 )
          v14 = *(_DWORD *)(v12 + 4) - 1;
        else
          v14 = *(_DWORD *)(v12 + 4);
        if ( v10 >= v14 )
          break;
        goto LABEL_12;
      }
    }
    if ( v10 >= *(_DWORD *)(v12 + 4) + 1 )
      break;
LABEL_12:
    v15 = *(_QWORD *)(a1 + 32);
    if ( (*((_BYTE *)v5 + 123) & 0x20) != 0 )
    {
      v11 = *(_QWORD *)(v9 + 864);
      goto LABEL_5;
    }
    v16 = 17;
    while ( 1 )
    {
      if ( *(char *)(v6 + 3) < 0 )
      {
        if ( *(_BYTE *)(v6 + 3) >> 6 != 2 )
        {
          v17 = (__int64 *)(*(_QWORD *)(v6 + 16) + 8LL * v10);
          goto LABEL_17;
        }
        goto LABEL_36;
      }
      if ( *(_DWORD *)(v6 + 4) == v10 )
        break;
LABEL_36:
      v6 = *(_QWORD *)(v6 + 16);
      if ( !--v16 )
      {
        sub_233F80((__int64 *)(v9 + 616), (_DWORD *)v5 + 18);
        v17 = (__int64 *)(*(_QWORD *)(v5[9] + 16) + 8LL * v10);
        goto LABEL_17;
      }
    }
    v17 = (__int64 *)(v6 + 8);
LABEL_17:
    v11 = *v17;
LABEL_5:
    ++v10;
    sub_1242F70(v15, v11);
    v5 = (__int64 *)*a2;
    v6 = *(_QWORD *)(*a2 + 72);
    if ( v6 )
    {
      v9 = *v5;
      continue;
    }
    break;
  }
LABEL_21:
  sub_1816990(a1 + 40);
  v18 = sub_1243090(*(_QWORD *)(a1 + 32));
  v19 = *(_QWORD *)(a1 + 32);
  v20 = (char *)(a1 + 40);
  v21 = v18;
  sub_1243240(v19, a1 + 40);
  if ( (unsigned int)sub_180B130(v19) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v31 = sub_180B150(v19, v20);
      v20 = "\n";
      v19 = sub_17F35B0(v31, v21);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v19, "\n");
    }
    else
    {
      v32 = sub_180B150(v19, v20);
      v20 = "\n";
      v19 = sub_17F35B0(v32, v21);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  if ( (unsigned int)sub_180B130(v19) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v29 = *(_QWORD *)(a1 + 32);
      v30 = sub_180B150(v19, v20);
      sub_12431E0(v29, v30);
      sub_186A500(v29, v30);
    }
    else
    {
      v33 = *(_QWORD *)(a1 + 32);
      v34 = sub_180B150(v19, v20);
      sub_12431E0(v33, v34);
    }
  }
  if ( v21 == 1 )
  {
    v22 = (__int64 *)*a2;
    if ( (*(_BYTE *)(*a2 + 123) & 4) != 0 )
    {
      sub_12431C0(&ptr, *(_QWORD *)(a1 + 32));
      v23 = sub_1336B20(ptr);
      v24 = (void *)v23;
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      v25 = (void (__fastcall ***)(void *))*a3;
      if ( *a3 )
      {
        v26 = (*((_DWORD *)v25 + 2))-- == 1;
        if ( v26 )
        {
          (**v25)(v25);
          sub_186B220(v25);
        }
      }
      *a3 = v24;
      v27 = (void (__fastcall ***)(_QWORD))ptr;
      if ( ptr )
      {
        v26 = (*((_DWORD *)ptr + 4))-- == 1;
        if ( v26 )
        {
          (**v27)(v27);
          sub_186B220(v27);
        }
      }
      v22 = (__int64 *)*a2;
    }
    sub_ED2DA0(v22);
    return;
  }
LABEL_39:
  v28 = (void (__fastcall ***)(void *))*a3;
  if ( *a3 )
  {
    v26 = (*((_DWORD *)v28 + 2))-- == 1;
    if ( v26 )
    {
      (**v28)(v28);
      sub_186B220(v28);
    }
  }
  *a3 = nullptr;
}

