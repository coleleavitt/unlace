void __fastcall sub_E0ACB0(__int64 a1, unsigned int a2)
{
  _QWORD *exception; // rbx
  void (__fastcall ***v5)(void *); // r12
  bool v6; // zf
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned int v11; // r14d
  unsigned int *v12; // r12
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  void **v18; // r12
  void (__fastcall ***v19)(void *); // r13
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // ebp
  unsigned int v24; // [rsp+Ch] [rbp-3Ch]

  v5 = *(void (__fastcall ****)(void *))(a1 + 872);
  if ( v5 )
  {
    v6 = (*((_DWORD *)v5 + 12))-- == 1;
    if ( v6 )
    {
      (**v5)(v5);
      sub_186B220(v5);
    }
  }
  *(_QWORD *)(a1 + 872) = 0;
  if ( a2 )
  {
    v7 = *(_QWORD *)(a1 + 848);
    if ( !v7 || (v8 = *(_DWORD *)(v7 - 4), v8 < a2) )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid pop command, argument is greater than the current stack depth");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    v9 = *(_QWORD *)(a1 + 864);
    if ( v9 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 200LL))(v9, a2);
    v10 = *(_QWORD *)(a1 + 880);
    if ( v10 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 96LL))(v10, a2);
    v11 = v8 - a2;
    v12 = (unsigned int *)(*(_QWORD *)(a1 + 848) + 24LL * v11);
    sub_E0AAA0(a1, *v12);
    sub_E00BD0(a1, v12[1]);
    sub_E03760(a1, v12[2]);
    sub_E01160(a1, v12[3]);
    if ( *(_QWORD *)(a1 + 296) )
    {
      v13 = *(_QWORD *)(a1 + 760);
      if ( v13 )
      {
        v14 = *(_DWORD *)(v13 - 4);
        v15 = v12[5];
        if ( v14 )
        {
          if ( v15 != v14 )
            sub_DFD590(a1, v15);
        }
      }
    }
    sub_E00960(a1, v12[4]);
    sub_15F86B0(*(_QWORD *)(a1 + 912) + 16LL);
    v16 = *(_QWORD *)(a1 + 288);
    if ( v16 )
    {
      v17 = v16 + 8LL * *(unsigned int *)(v16 - 4);
      v18 = (void **)(v16 + 8LL * (*(_DWORD *)(v16 - 4) - a2));
      v24 = *(_DWORD *)(v16 - 4) - a2;
      if ( (unsigned __int64)v18 >= v17 )
        goto LABEL_24;
      do
      {
        while ( 1 )
        {
          v19 = (void (__fastcall ***)(void *))*v18;
          if ( *v18 )
          {
            v6 = (*((_DWORD *)v19 + 2))-- == 1;
            if ( v6 )
              break;
          }
          if ( (unsigned __int64)++v18 >= v17 )
            goto LABEL_23;
        }
        ++v18;
        (**v19)(v19);
        sub_186B220(v19);
      }
      while ( (unsigned __int64)v18 < v17 );
LABEL_23:
      v16 = *(_QWORD *)(a1 + 288);
      if ( v16 )
LABEL_24:
        *(_DWORD *)(v16 - 4) = v24;
    }
    v20 = *(_QWORD *)(a1 + 848);
    if ( v20 )
      *(_DWORD *)(v20 - 4) = v11;
    if ( !*(_BYTE *)(a1 + 257) )
    {
      v21 = *(_QWORD *)(a1 + 312);
      if ( !v21 )
      {
        sub_DFBCB0(a1);
        v21 = *(_QWORD *)(a1 + 312);
      }
      sub_DE0BF0(v21, a2);
    }
    v22 = a2 - 1;
    do
    {
      sub_DFBCB0(a1);
      sub_1829100(*(_QWORD *)(a1 + 296));
    }
    while ( v22-- != 0 );
  }
}

