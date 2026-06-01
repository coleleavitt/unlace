void __fastcall sub_249820(_QWORD *a1)
{
  void (__fastcall ***v1)(void *); // rbx
  bool v2; // zf
  void (__fastcall ***v3)(void *); // rbx
  _QWORD *v4; // rbx
  _QWORD *v5; // r13
  _DWORD *v6; // rbp

  v1 = (void (__fastcall ***)(void *))a1[22];
  *a1 = &off_1C4C940;
  if ( v1 )
  {
    v2 = (*((_DWORD *)v1 + 2))-- == 1;
    if ( v2 )
    {
      (**v1)(v1);
      sub_186B220(v1);
    }
  }
  v3 = (void (__fastcall ***)(void *))a1[21];
  if ( v3 )
  {
    v2 = (*((_DWORD *)v3 + 2))-- == 1;
    if ( v2 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  v4 = (_QWORD *)a1[3];
  v5 = &v4[*((unsigned int *)a1 + 8)];
  if ( v4 < v5 )
  {
    do
    {
      while ( 1 )
      {
        v6 = (_DWORD *)*v4;
        if ( *v4 )
        {
          v2 = v6[8]-- == 1;
          if ( v2 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_13;
      }
      ++v4;
      sub_ED44E0(v6);
      sub_186B220(v6);
    }
    while ( v4 < v5 );
LABEL_13:
    v4 = (_QWORD *)a1[3];
  }
  if ( v4 != a1 + 5 && v4 )
    sub_186B220(v4);
  operator delete(a1, 0xB8u);
}

