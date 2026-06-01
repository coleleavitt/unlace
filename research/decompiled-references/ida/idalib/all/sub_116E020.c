__int64 __fastcall sub_116E020(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13

  v1 = a1[625];
  *a1 = off_2C36B88;
  if ( v1 )
  {
    do
    {
      sub_116DE70((__int64)(a1 + 623), *(_QWORD **)(v1 + 24));
      v2 = *(_QWORD *)(v1 + 16);
      operator delete((void *)v1);
      v1 = v2;
    }
    while ( v2 );
  }
  *a1 = off_2C3B350;
  return sub_12203A0(a1);
}
