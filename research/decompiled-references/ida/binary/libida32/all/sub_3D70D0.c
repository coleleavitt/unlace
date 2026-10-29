void __fastcall sub_3D70D0(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 v2; // rax
  char *v3; // rdx
  __int64 v4; // r12
  __int64 j; // rbp
  char *v6; // rax
  void *v7; // rdi

  for ( i = *(_QWORD **)(a1 + 1368); i[5]; sub_3D6350(i, *(_DWORD *)(v2 + 32)) )
    v2 = std::_Rb_tree_decrement();
  v3 = (char *)i[6];
  if ( v3 )
  {
    v4 = i[7];
    if ( v4 )
    {
      for ( j = 0; j != v4; ++j )
      {
        v6 = &v3[32 * j];
        v7 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          qfree(v7);
          v3 = (char *)i[6];
        }
      }
    }
    i[7] = 0;
    qfree(v3);
    i[6] = 0;
    i[8] = 0;
  }
}

