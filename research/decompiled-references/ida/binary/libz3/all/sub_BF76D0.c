__int64 __fastcall sub_BF76D0(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // rbx
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  __int64 i; // rax
  _DWORD *v12; // rdx
  unsigned int v13; // [rsp+8h] [rbp-40h]

  v13 = a2;
  if ( a4 )
  {
    if ( a2 )
    {
      v7 = 0;
      v8 = a4;
      if ( a2 <= a4 )
        v8 = a2;
      while ( 1 )
      {
        v9 = v7;
        if ( (unsigned __int8)sub_15D27F0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a3 + 8 * v7), *(_QWORD *)(a5 + 8 * v7)) )
          return 0;
        if ( !(unsigned __int8)sub_15D2760(*(_QWORD *)(a1 + 24), *(_QWORD *)(a3 + 8 * v7), *(_QWORD *)(a5 + 8 * v7)) )
          goto LABEL_9;
        if ( (unsigned int)++v7 >= v8 )
        {
          ++v9;
LABEL_9:
          if ( a4 != v9 )
          {
            if ( a2 != v9 )
              return 1;
            a3 = a5;
            v13 = a4;
          }
          if ( v9 >= v13 )
            return 1;
          goto LABEL_14;
        }
      }
    }
    v9 = 0;
    a3 = a5;
    v13 = a4;
  }
  else
  {
    if ( !a2 )
      return 1;
    v9 = 0;
  }
LABEL_14:
  for ( i = a3 + 8LL * v9; ; i += 8 )
  {
    if ( !*(_WORD *)(*(_QWORD *)i + 4LL) )
    {
      v12 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)i + 16LL) + 24LL);
      if ( v12 )
      {
        if ( *(_DWORD *)(a1 + 1744) == *v12 && !v12[1] )
          break;
      }
    }
    if ( ++v9 >= v13 )
      return 1;
  }
  return 0;
}

