__int64 __fastcall sub_A3A2F0(__int64 a1, __int64 **a2, __int64 a3, _QWORD *a4, int a5, int a6)
{
  unsigned int v6; // ebp
  __int64 *v7; // rbx
  __int64 *v8; // r13

  v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 400) + 128LL);
  if ( !(_BYTE)v6 )
    return v6;
  v7 = *a2;
  if ( *a2 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 != v8 )
    {
      v6 = 0;
      do
      {
        if ( *(char *)(*v7 + 7) >= 0 )
          v6 |= sub_A39D00(a1, *v7, a3, a4, a5, a6);
        ++v7;
      }
      while ( v8 != v7 );
      return v6;
    }
  }
  return 0;
}

