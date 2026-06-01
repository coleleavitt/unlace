void __fastcall sub_1EEDDC0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx

  if ( a3 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      *(_QWORD *)(a2 + 8 * v5) = sub_1EECCD0(a1);
      v5 = ++v4;
    }
    while ( v4 < a3 );
  }
}
