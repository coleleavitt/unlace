bool __fastcall sub_592720(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  bool result; // al
  _QWORD *v4; // rsi
  __int64 v5; // rax
  _QWORD *v6; // r10
  int v7; // ecx
  int v8; // edx

  v2 = *(_DWORD *)(a2 + 8);
  result = 0;
  if ( !v2 )
  {
    v4 = *(_QWORD **)a2;
    if ( v4 && (v5 = *((unsigned int *)v4 - 1), (_DWORD)v5) )
    {
      v6 = &v4[v5];
      while ( *v4 <= 0xFFFFFFFF )
      {
        result = (unsigned int)*v4 != 0 && ((unsigned int)*v4 & ((unsigned int)*v4 - 1)) == 0;
        if ( !result )
          return result;
        v7 = 1;
        v8 = 1;
        while ( (v7 & (unsigned int)*v4) == 0 )
        {
          ++v8;
          v7 *= 2;
          if ( v8 == 32 )
            return 0;
        }
        v2 += v8;
        if ( v2 > 0x1F )
          break;
        if ( v6 == ++v4 )
          return result;
      }
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

