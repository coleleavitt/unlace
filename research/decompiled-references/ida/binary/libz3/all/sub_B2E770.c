__int64 __fastcall sub_B2E770(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  int v3; // ecx
  int v4; // edx
  int v5; // edx

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 || (result = 0, v1 == 1) && ((v3 = *(_DWORD *)(a1 + 16), v3 < 0) || !v3 && !*(_BYTE *)(a1 + 88)) )
  {
    v4 = *(_DWORD *)(a1 + 48);
    result = 0;
    if ( v4 )
    {
      result = 1;
      if ( v4 == 1 )
      {
        v5 = *(_DWORD *)(a1 + 56);
        if ( v5 <= 0 )
        {
          result = 0;
          if ( !v5 )
            return *(unsigned __int8 *)(a1 + 89) ^ 1u;
        }
      }
    }
  }
  return result;
}

