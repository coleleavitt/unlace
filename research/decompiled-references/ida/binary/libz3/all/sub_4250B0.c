__int64 __fastcall sub_4250B0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi

  result = *(_QWORD *)(a1 + 16);
  if ( result && (v2 = result + 8LL * *(unsigned int *)(result - 4), v2 != result) )
  {
    while ( *(_BYTE *)(*(_QWORD *)result + 48LL) )
    {
      result += 8;
      if ( v2 == result )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v3 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 48) = 1;
    if ( v3 )
    {
      while ( *(_BYTE *)(v3 + 48) )
      {
LABEL_15:
        *(_BYTE *)(v3 + 48) = 1;
        v3 = *(_QWORD *)(v3 + 8);
        if ( !v3 )
          return result;
      }
      result = *(_QWORD *)(v3 + 16);
      if ( result )
      {
        v4 = *(unsigned int *)(result - 4);
        if ( (_DWORD)v4 )
        {
          v5 = result + 8 * v4;
          while ( *(_BYTE *)(*(_QWORD *)result + 48LL) )
          {
            result += 8;
            if ( v5 == result )
              goto LABEL_15;
          }
        }
      }
    }
  }
  return result;
}

