void __fastcall sub_1181A0(char *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax
  char *v5; // rbx

  v1 = *((_QWORD *)a1 + 11);
  if ( v1 )
  {
    v2 = *((_QWORD *)a1 + 12);
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = *((_QWORD *)a1 + 11);
        }
      }
    }
    *((_QWORD *)a1 + 12) = 0;
    qfree();
  }
  v5 = *((char **)a1 + 6);
  for ( *((_QWORD *)a1 + 2) = &off_22F558; a1 + 32 != v5; v5 = (char *)std::_Rb_tree_increment() )
    (*(void (__fastcall **)(_QWORD *, char *))(**((_QWORD **)v5 + 4) + 32LL))(*((_QWORD **)v5 + 4), a1 + 16);
  sub_117FD0(*((_QWORD **)a1 + 5));
}

