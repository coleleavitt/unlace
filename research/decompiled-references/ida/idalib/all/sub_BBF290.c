unsigned __int64 __fastcall sub_BBF290(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 152);
  result = 0;
  if ( v1 )
  {
    result = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v1 & 4) != 0 )
    {
      if ( result )
      {
        while ( 1 )
        {
          v3 = *(_QWORD *)(*(_QWORD *)result + 152LL);
          if ( !v3 )
            break;
          result = v3 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v3 & 4) == 0 || !result )
            return result;
        }
        return 0;
      }
    }
  }
  return result;
}
