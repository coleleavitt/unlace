__int64 __fastcall sub_EC5E60(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rdx
  __int64 v3; // rsi
  __int16 v4; // cx
  __int16 v5; // cx

  if ( !a1 )
    return 0;
  result = 0;
  if ( (*(_WORD *)a1 & 0x1FF) == 0x82 )
  {
    v2 = (__int64 *)(a1 + 16);
    v3 = a1 + 16 + 8LL * (*(_DWORD *)a1 >> 9);
    if ( a1 + 16 != v3 )
    {
      result = *(_QWORD *)(a1 + 16);
      v4 = *(_WORD *)(result + 36);
      if ( v4 != 49 && v4 != 52 )
      {
        while ( (__int64 *)v3 != ++v2 )
        {
          result = *v2;
          v5 = *(_WORD *)(*v2 + 36);
          if ( v5 == 52 || v5 == 49 )
            return result;
        }
        return 0;
      }
    }
  }
  return result;
}

