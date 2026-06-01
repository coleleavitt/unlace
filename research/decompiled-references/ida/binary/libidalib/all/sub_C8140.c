__int64 sub_C8140()
{
  __int64 result; // rax
  int v1; // esi
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  unsigned __int8 v4; // r9
  int v5; // edi
  unsigned __int8 v6; // al
  int **v7; // rdx
  char v8; // di

  result = (__int64)&dbg;
  dword_2524E8 = 0;
  if ( dbg )
  {
    v1 = *(_DWORD *)(dbg + 48LL);
    v2 = *(_QWORD **)(dbg + 40LL);
    dword_2524E8 = v1;
    if ( v2 )
    {
      v3 = 0;
      v4 = 0;
      v5 = v1;
      if ( *v2 )
      {
        do
        {
          v6 = _bittest(&v1, v3);
          if ( v6 )
          {
            v5 |= 1 << v3;
            v4 = v6;
          }
          ++v3;
        }
        while ( v2[v3] );
        if ( v4 )
        {
          dword_2524E8 = v5;
          v1 = v5;
        }
      }
      v7 = off_230B60;
      v8 = 0;
      do
      {
        result = **v7;
        if ( (int)result >= 0 )
        {
          v8 = 1;
          result = *(unsigned __int8 *)(*(_QWORD *)(dbg + 56LL) + 32 * result + 12);
          v1 |= result;
        }
        ++v7;
      }
      while ( algn_230B88 != (_BYTE *)v7 );
      if ( v8 )
        dword_2524E8 = v1;
    }
    else
    {
      if ( under_debugger )
        BUG();
      interr();
      return sub_C8250(41334);
    }
  }
  return result;
}

