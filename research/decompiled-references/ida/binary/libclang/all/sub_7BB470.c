__int64 __fastcall sub_7BB470(__int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx

  result = a1[14];
  if ( !result )
  {
    v2 = a1[15];
    if ( !v2 )
    {
      sub_7B9840((unsigned __int64 *)(a1[12] + 88), a1[12]);
      v2 = a1[15];
    }
    if ( v2 > 7 && (v3 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL)) != 0 )
    {
      return *(_QWORD *)(v3 + 112);
    }
    else
    {
      v4 = sub_7B9840((unsigned __int64 *)(a1[12] + 88), a1[12]);
      if ( v4 )
      {
        while ( 1 )
        {
          result = *(_QWORD *)(v4 + 112);
          if ( result )
            break;
          v5 = *(_QWORD *)(v4 + 88);
          if ( (v5 & 1) != 0 || (v5 & 2) != 0 )
            break;
          v4 = sub_7B9840((unsigned __int64 *)(v4 + 88), v4);
          if ( !v4 )
            return 0;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}

