void __fastcall sub_10B6A80(_QWORD *a1)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // r13
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi

  v2 = a1 + 40;
  *a1 = off_2BBF960;
  sub_2192A40(a1);
  v3 = (_QWORD *)a1[40];
  if ( a1 + 40 != v3 )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)v3[2];
      v5 = (_QWORD *)*v3;
      if ( v4 == v3 + 4 )
      {
        operator delete(v3);
        if ( v2 == v5 )
          break;
      }
      else
      {
        operator delete(v4);
        operator delete(v3);
        if ( v2 == v5 )
          break;
      }
      v3 = v5;
    }
  }
  v6 = (_QWORD *)a1[22];
  if ( v6 != a1 + 24 )
    free(v6);
  v7 = a1 + 3;
  *(v7 - 3) = &off_2C0BEF8;
  operator delete();
  v8 = (_QWORD *)*(v7 - 2);
  if ( v8 != v7 )
    free(v8);
}

