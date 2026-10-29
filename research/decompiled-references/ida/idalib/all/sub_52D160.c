void __fastcall sub_52D160(__int64 a1)
{
  __int64 v1; // r12
  _QWORD **v2; // rbx
  _QWORD **v3; // r12
  _QWORD *v4; // rbp

  v1 = *(_QWORD *)(a1 + 1584);
  v2 = (_QWORD **)(v1 + 8);
  v3 = (_QWORD **)(v1 + 64);
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      delete_dirtree(*v4);
      operator delete(v4, 8u);
    }
    *v2++ = nullptr;
  }
  while ( v2 != v3 );
}
