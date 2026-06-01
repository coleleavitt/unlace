void __fastcall sub_304070(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  __int64 v3; // r13
  void *v4; // rbp
  __int64 v5; // rsi
  void (__fastcall ***v6)(void *); // rbx
  bool v7; // zf
  void (__fastcall ***v8)(void *); // rbx
  void (__fastcall ***v9)(void *); // rbx

  v1 = a1[6];
  *a1 = &off_1C4D310;
  if ( v1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v3 = v1 + 32 * v2;
      do
      {
        v4 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1);
        v5 = v1 + 16;
        v1 += 32;
        sub_182CBA0(v4, v5);
      }
      while ( v3 != v1 );
      v1 = a1[6];
    }
    sub_186B220((void *)(v1 - 8));
  }
  v6 = (void (__fastcall ***)(void *))a1[4];
  if ( v6 )
  {
    v7 = (*((_DWORD *)v6 + 2))-- == 1;
    if ( v7 )
    {
      (**v6)(v6);
      sub_186B220(v6);
    }
  }
  v8 = (void (__fastcall ***)(void *))a1[3];
  if ( v8 )
  {
    v7 = (*((_DWORD *)v8 + 4))-- == 1;
    if ( v7 )
    {
      (**v8)(v8);
      sub_186B220(v8);
    }
  }
  v9 = (void (__fastcall ***)(void *))a1[2];
  if ( v9 )
  {
    v7 = (*((_DWORD *)v9 + 12))-- == 1;
    if ( v7 )
    {
      (**v9)(v9);
      sub_186B220(v9);
    }
  }
  sub_18572D0(a1 + 1);
  operator delete(a1, 0x38u);
}

