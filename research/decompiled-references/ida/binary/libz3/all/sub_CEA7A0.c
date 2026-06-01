void __fastcall sub_CEA7A0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // r12
  _DWORD *v3; // rbp
  bool v4; // zf
  void (__fastcall ***v5)(void *); // rbx

  *a1 = &off_1C59A68;
  v1 = (_QWORD *)a1[3];
  v2 = &v1[*((unsigned int *)a1 + 8)];
  if ( v1 < v2 )
  {
    do
    {
      while ( 1 )
      {
        v3 = (_DWORD *)*v1;
        if ( *v1 )
        {
          v4 = v3[8]-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v1 >= v2 )
          goto LABEL_7;
      }
      ++v1;
      sub_ED44E0(v3);
      sub_186B220(v3);
    }
    while ( v1 < v2 );
LABEL_7:
    v1 = (_QWORD *)a1[3];
  }
  if ( v1 != a1 + 5 && v1 )
    sub_186B220(v1);
  v5 = (void (__fastcall ***)(void *))a1[2];
  if ( v5 )
  {
    v4 = (*((_DWORD *)v5 + 2))-- == 1;
    if ( v4 )
    {
      (**v5)(v5);
      sub_186B220(v5);
    }
  }
  operator delete(a1, 0xA8u);
}

