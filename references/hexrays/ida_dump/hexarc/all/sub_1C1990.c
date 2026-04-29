void __fastcall sub_1C1990(__int64 *a1, int a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // rcx
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax

  v2 = a2;
  v3 = a1[1];
  if ( a2 >= v3 )
  {
    if ( v3 >= a2 )
      return;
  }
  else
  {
    v4 = a2;
    v5 = a2;
    do
    {
      v6 = *(_QWORD *)(*a1 + 8 * v5);
      if ( v6 )
      {
        sub_1166E0(v6 + 64);
        sub_1166E0(v6 + 48);
        sub_1166E0(v6 + 32);
        j__qfree(v6);
        v3 = a1[1];
      }
      v5 = ++v4;
    }
    while ( v4 < v3 );
    if ( v3 >= a2 )
    {
      if ( v3 != a2 )
        a1[1] = a2;
      return;
    }
  }
  v7 = *a1;
  if ( a1[2] < v2 )
  {
    v8 = qvector_reserve(a1, v7, v2, 8);
    v3 = a1[1];
    *a1 = v8;
    v7 = v8;
  }
  memset((void *)(v7 + 8 * v3), 0, 8 * (v2 - v3));
  a1[1] = v2;
}
