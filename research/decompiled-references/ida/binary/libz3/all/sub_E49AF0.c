void __fastcall sub_E49AF0(_QWORD *a1)
{
  _QWORD *v1; // r12
  void (__fastcall ***v3)(void *); // rbx
  bool v4; // zf
  void (__fastcall ***v5)(void *); // rbx
  void (__fastcall ***v6)(void *); // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdi

  v1 = a1 - 9;
  v3 = (void (__fastcall ***)(void *))a1[5];
  *(a1 - 9) = &off_1C76A78;
  *a1 = off_1C76C68;
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 12))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  v5 = (void (__fastcall ***)(void *))a1[4];
  if ( v5 )
  {
    v4 = (*((_DWORD *)v5 + 12))-- == 1;
    if ( v4 )
    {
      (**v5)(v5);
      sub_186B220(v5);
    }
  }
  *a1 = qword_1C77178;
  *(a1 - 9) = qword_1C76FE8;
  sub_18572D0(a1 + 1);
  v6 = (void (__fastcall ***)(void *))*(a1 - 2);
  *(a1 - 9) = qword_1C63FB0;
  if ( v6 )
  {
    v4 = (*((_DWORD *)v6 + 2))-- == 1;
    if ( v4 )
    {
      (**v6)(v6);
      sub_186B220(v6);
    }
  }
  v7 = *(a1 - 5);
  if ( v7 )
  {
    v8 = *(a1 - 4);
    v4 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v8, v7);
  }
  v9 = (__int64 *)*(a1 - 6);
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *(a1 - 7);
          v4 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_20;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_20:
    v9 = (__int64 *)*(a1 - 6);
    if ( v9 )
LABEL_21:
      sub_186B220(v9 - 1);
  }
  operator delete(v1, 0x88u);
}

