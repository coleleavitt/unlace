__int64 __fastcall sub_A020(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  int v7; // edi
  unsigned int i; // esi
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx

  if ( (debug & 8) != 0 )
    sub_9320((__int64)"code = %08x at addr %08a\n", a3, a4);
  v7 = 3;
  for ( i = 255; ; i >>= 1 )
  {
    v9 = (__int64 *)((char *)&unk_24580 + 24 * (i & a3));
    v10 = *v9;
    v11 = *v9 + 32 * v9[1];
    if ( v11 != *v9 )
      break;
LABEL_9:
    if ( !--v7 )
      return 0;
  }
  while ( (a3 & *(_DWORD *)(v10 + 4)) != *(_DWORD *)(v10 + 8) )
  {
    v10 += 32;
    if ( v11 == v10 )
      goto LABEL_9;
  }
  return sub_9F40(a1, a2, a3, v10);
}
