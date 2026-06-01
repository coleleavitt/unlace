void sub_73AC0()
{
  __int64 v0; // rbx
  _QWORD *v1; // r12
  __int64 v2; // rbp
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx

  v0 = qword_165A20;
  sub_98400(qword_165A20);
  v1 = ptr;
  v2 = xmmword_165A30;
  ptr = nullptr;
  xmmword_165A30 = 0;
  sub_98450(v0);
  v3 = &v1[v2];
  if ( v1 != v3 )
  {
    v4 = v1;
    do
    {
      (**(void (__fastcall ***)(_QWORD, __int64))*v4)(*v4, 0xFFFFFFFFLL);
      ++v4;
    }
    while ( v3 != v4 );
  }
  if ( v1 )
    j__free(v1);
}

