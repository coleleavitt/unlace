__int64 __fastcall sub_3909D0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, char a5)
{
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // edx
  int v12; // eax

  result = time(nullptr);
  v9 = *(_QWORD *)(a3 + 104);
  if ( a4 )
    v10 = *a4;
  else
    v10 = *(_QWORD *)(a3 + 112);
  if ( v9 == -1 || (v11 = 0, result >= v9) )
  {
    v11 = 1;
    if ( v10 )
    {
      if ( result >= v10 - 2592000 )
      {
        v11 = 2;
        if ( result >= v10 - 1296000 )
        {
          v11 = 3;
          if ( result >= v10 )
          {
            v11 = 4;
            if ( result >= v10 + 1296000 )
              v11 = (result >= v10 + 2592000) + 5;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 32) = v11;
    *(_BYTE *)(a1 + 37) = a5;
    *(_BYTE *)(a1 + 36) = 0;
  }
  else if ( *(_DWORD *)(a1 + 32) == 6 )
  {
    *(_DWORD *)(a1 + 32) = v11;
    *(_BYTE *)(a1 + 37) = a5;
  }
  else
  {
    v12 = *(unsigned __int8 *)(a1 + 37);
    *(_DWORD *)(a1 + 32) = v11;
    *(_BYTE *)(a1 + 37) = a5;
    result = v12 ^ 1u;
    if ( ((unsigned __int8)result & (unsigned __int8)(a5 | (v11 == 6))) != 0 )
    {
      byte_2CA1690 = 1;
      return hook_event_listener(3, a1 + 8, 0, 0);
    }
  }
  return result;
}

