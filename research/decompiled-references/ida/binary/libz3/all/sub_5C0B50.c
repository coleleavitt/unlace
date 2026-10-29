void __fastcall sub_5C0B50(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // r12
  int v5; // ebp
  __int64 v6; // rsi

  do
  {
    v3 = *(__int64 **)(a2 + 24);
    if ( !v3 )
      break;
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v4 == v3 )
      break;
    v5 = 0;
    do
    {
      v6 = *v3++;
      v5 |= sub_5C0450(a1, v6);
    }
    while ( v4 != v3 );
  }
  while ( (_BYTE)v5 );
}

