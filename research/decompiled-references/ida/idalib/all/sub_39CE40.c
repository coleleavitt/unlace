_BYTE *__fastcall sub_39CE40(_QWORD *a1)
{
  _BYTE *v1; // rcx
  unsigned __int64 v2; // r8
  __int64 v3; // rsi
  __int64 v4; // rax
  char v5; // dl

  v1 = *(_BYTE **)(*a1 + 1528LL);
  v2 = (unsigned __int64)(v1 + 48);
  if ( !v1[69] )
  {
    v1[69] = 1;
    v2 = (unsigned __int64)(v1 + 48);
    v1[48] = 0;
    if ( *(_QWORD *)(a1[4] + 336LL) )
    {
      if ( v2 >= (unsigned __int64)(v1 + 68) )
      {
        if ( !under_debugger )
          interr(518);
        BUG();
      }
      v1[48] = 32;
      v3 = *(_QWORD *)(a1[4] + 336LL);
      v4 = 0;
      while ( 1 )
      {
        v5 = *(_BYTE *)(v3 + v4);
        v1[v4 + 49] = v5;
        if ( !v5 )
          break;
        if ( ++v4 == 18 )
        {
          v1[67] = 0;
          return v1 + 48;
        }
      }
    }
  }
  return (_BYTE *)v2;
}
