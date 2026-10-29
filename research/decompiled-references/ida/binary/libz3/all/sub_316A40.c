void __fastcall sub_316A40(_QWORD *a1)
{
  __int64 v2; // rdi
  void (__fastcall ***v3)(void *); // rbp
  bool v4; // zf
  void (__fastcall ***v5)(void *); // rbx

  *a1 = qword_1C64010;
  v2 = a1[6];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (void (__fastcall ***)(void *))a1[5];
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 4))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  sub_18572D0(a1 + 4);
  v5 = (void (__fastcall ***)(void *))a1[3];
  if ( v5 )
  {
    v4 = (*((_DWORD *)v5 + 12))-- == 1;
    if ( v4 )
    {
      (**v5)(v5);
      sub_186B220(v5);
    }
  }
}

