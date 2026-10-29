__int64 __fastcall sub_4069B0(__int64 a1, double a2)
{
  _QWORD *v3; // rbx
  _QWORD *i; // r13
  void (__fastcall ***v5)(_QWORD); // rbp
  void *v6; // rdi
  void (__fastcall ***v7)(_QWORD); // rbx
  void (****v8)(void); // rbx
  void (****v9)(void); // rbp
  void (***v10)(void); // rdi
  void (*v11)(void); // rax
  void (__fastcall ***v12)(void *); // rbx
  bool v13; // zf
  void (__fastcall ***v14)(void *); // rbx
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  void *v20; // rdi
  void (***v22)(void); // [rsp+8h] [rbp-30h]

  v3 = *(_QWORD **)(a1 + 376);
  for ( i = &v3[*(unsigned int *)(a1 + 384)]; i != v3; ++v3 )
  {
    v5 = (void (__fastcall ***)(_QWORD))*v3;
    if ( *v3 )
    {
      (**v5)(*v3);
      sub_186B220(v5);
    }
  }
  v6 = *(void **)(a1 + 536);
  *(_DWORD *)(a1 + 384) = 0;
  if ( v6 )
    sub_186B220(v6);
  sub_400CE0(a1, a2);
  if ( *(_QWORD *)(a1 + 704) )
  {
    if ( !std::filebuf::close() )
      std::ios::clear();
    v7 = *(void (__fastcall ****)(_QWORD))(a1 + 704);
    if ( v7 )
    {
      (**v7)(*(_QWORD *)(a1 + 704));
      sub_186B220(v7);
    }
    *(_QWORD *)(a1 + 704) = 0;
  }
  v8 = *(void (*****)(void))(a1 + 696);
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 == v9 )
      goto LABEL_21;
    do
    {
      v10 = *v8;
      if ( *v8 )
      {
        v11 = **v10;
        if ( (char *)v11 != (char *)nullsub_212 )
        {
          v22 = *v8;
          v11();
          v10 = v22;
        }
        sub_186B220(v10);
      }
      ++v8;
    }
    while ( v9 != v8 );
    v9 = *(void (*****)(void))(a1 + 696);
    if ( v9 )
    {
LABEL_21:
      *((_DWORD *)v9 - 1) = 0;
      sub_186B220(v9 - 1);
    }
  }
  v12 = *(void (__fastcall ****)(void *))(a1 + 632);
  if ( v12 )
  {
    v13 = (*((_DWORD *)v12 + 2))-- == 1;
    if ( v13 )
    {
      (**v12)(v12);
      sub_186B220(v12);
    }
  }
  v14 = *(void (__fastcall ****)(void *))(a1 + 624);
  if ( v14 )
  {
    v13 = (*((_DWORD *)v14 + 2))-- == 1;
    if ( v13 )
    {
      (**v14)(v14);
      sub_186B220(v14);
    }
  }
  v15 = *(void **)(a1 + 376);
  if ( v15 != (void *)(a1 + 392) && v15 )
    sub_186B220(v15);
  v16 = *(void **)(a1 + 328);
  if ( v16 )
    operator delete(v16, *(_QWORD *)(a1 + 344) - (_QWORD)v16);
  v17 = *(void **)(a1 + 312);
  if ( v17 )
    sub_41CD50(v17);
  v18 = *(_QWORD *)(a1 + 288);
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 296);
    v13 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v19, v18);
  }
  v20 = *(void **)(a1 + 264);
  if ( v20 )
    sub_186B220(v20);
  sub_41EAA0(*(void **)(a1 + 248));
  sub_41EAA0(*(void **)(a1 + 240));
  sub_41EAA0(*(void **)(a1 + 232));
  return sub_4377F0(a1 + 176);
}

