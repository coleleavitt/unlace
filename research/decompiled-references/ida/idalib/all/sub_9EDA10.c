void __fastcall sub_9EDA10(_QWORD **a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // r12

  v1 = *a1;
  if ( *a1 )
  {
    v2 = v1[2];
    if ( v2 )
    {
      do
      {
        sub_9ED9D0((__int64)v1, *(_QWORD **)(v2 + 24));
        v3 = *(_QWORD *)(v2 + 16);
        operator delete((void *)v2);
        v2 = v3;
      }
      while ( v3 );
    }
    operator delete(v1, 0x30u);
  }
}
