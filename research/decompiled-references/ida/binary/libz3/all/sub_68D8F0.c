__int64 __fastcall sub_68D8F0(_QWORD *a1, __int64 a2)
{
  int v2; // ebp
  _DWORD *v3; // rax
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx

  v2 = 0;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v3 )
    {
      if ( !*v3 && v3[1] == 8 )
      {
        v2 = *(_DWORD *)(a2 + 24);
        if ( v2 != 1 )
          v2 = 0;
      }
    }
  }
  result = sub_7E6C80(a1 + 560);
  if ( (_DWORD)result != 0x7FFFFFFF )
  {
    result = (unsigned int)(v2 + 2 * result);
    v5 = a1[424];
    v6 = (unsigned int)result >> 1;
    if ( v5 )
    {
      if ( (unsigned int)v6 < *(_DWORD *)(v5 - 4) )
      {
        result = !(result & 1);
        *(_BYTE *)(a1[443] + v6) = result;
        *(_BYTE *)(a1[444] + v6) = result;
      }
    }
  }
  return result;
}

