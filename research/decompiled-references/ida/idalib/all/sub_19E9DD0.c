__int64 __fastcall sub_19E9DD0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rbx
  __int64 v4; // r14
  unsigned __int64 v5; // rax
  __int64 v6; // rdx

  v2 = *(unsigned __int16 *)(a2 + 4);
  if ( *(_WORD *)(a2 + 4) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(a2 + 8 * v3 + 32);
      v5 = sub_C95050(a2);
      v6 = 16 * v3++;
      sub_BC84C0(a1, a2, (_QWORD *)(v5 + v6), v4);
    }
    while ( v2 > (unsigned int)v3 );
  }
  return 1;
}
