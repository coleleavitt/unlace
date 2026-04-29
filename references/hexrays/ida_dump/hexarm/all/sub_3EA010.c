__int64 __fastcall sub_3EA010(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // eax
  unsigned int v4; // esi
  int v5; // eax

  result = (unsigned int)(a2 - 125);
  if ( (unsigned int)result > 3 )
  {
    if ( *(_DWORD *)(a1 + 80) == 8 )
    {
      v5 = a2 - 129;
      if ( (unsigned int)(a2 - 129) > 0x21 )
      {
        v3 = a2 - 163;
        if ( (unsigned int)(a2 - 163) > 0x1F )
          return 0xFFFFFFFFLL;
        return (unsigned int)(*(_DWORD *)(a1 + 488) + 16 * v3);
      }
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
        v5 = *(_DWORD *)(a1 + 352) + ~v5;
      return (unsigned int)(8 * v5 + 8);
    }
    else
    {
      if ( a2 > 15 )
      {
        v3 = a2 - 45;
        if ( (unsigned int)(a2 - 45) > 0xF )
        {
          if ( (unsigned int)(a2 - 61) <= 0x1F )
            return (unsigned int)(*(_DWORD *)(a1 + 488) + 8 * (a2 - 61));
          v4 = a2 - 93;
          if ( v4 <= 0x1F )
            return *(_DWORD *)(a1 + 488) + 4 * v4;
          return 0xFFFFFFFFLL;
        }
        return (unsigned int)(*(_DWORD *)(a1 + 488) + 16 * v3);
      }
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
        a2 = *(_DWORD *)(a1 + 352) + ~a2;
      return (unsigned int)(4 * a2 + 8);
    }
  }
  return result;
}
