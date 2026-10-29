void __fastcall sub_E49980(_QWORD *a1)
{
  void (__fastcall ***v2)(void *); // rbx
  bool v3; // zf
  void (__fastcall ***v4)(void *); // rbx
  void (__fastcall ***v5)(void *); // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi

  v2 = (void (__fastcall ***)(void *))a1[14];
  *a1 = &off_1C76A78;
  a1[9] = off_1C76C68;
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 12))-- == 1;
    if ( v3 )
    {
      (**v2)(v2);
      sub_186B220(v2);
    }
  }
  v4 = (void (__fastcall ***)(void *))a1[13];
  if ( v4 )
  {
    v3 = (*((_DWORD *)v4 + 12))-- == 1;
    if ( v3 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
  }
  a1[9] = qword_1C77178;
  *a1 = qword_1C76FE8;
  sub_18572D0(a1 + 10);
  v5 = (void (__fastcall ***)(void *))a1[7];
  *a1 = qword_1C63FB0;
  if ( v5 )
  {
    v3 = (*((_DWORD *)v5 + 2))-- == 1;
    if ( v3 )
    {
      (**v5)(v5);
      sub_186B220(v5);
    }
  }
  v6 = a1[4];
  if ( v6 )
  {
    v7 = a1[5];
    v3 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v3 )
      sub_15D7BC0(v7, v6);
  }
  v8 = (__int64 *)a1[3];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[2];
          v3 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_20;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_20:
    v8 = (__int64 *)a1[3];
    if ( v8 )
LABEL_21:
      sub_186B220(v8 - 1);
  }
  operator delete(a1, 0x88u);
}

