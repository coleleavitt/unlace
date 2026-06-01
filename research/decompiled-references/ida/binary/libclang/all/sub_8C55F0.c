unsigned __int64 __fastcall sub_8C55F0(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  result = *(_QWORD *)(sub_B0E910(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)) + 128);
  if ( result )
  {
    if ( (*(_BYTE *)(result + 10) & 0x20) != 0 )
    {
      v2 = *(_QWORD *)(result + 128);
      v3 = 0;
      if ( (unsigned __int64)v2 > 7 )
      {
        v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v2 & 4) == 0 || *(_DWORD *)(v3 + 8) )
        {
          if ( ((v2 >> 2) & 1) != 0 )
            v3 = **(_QWORD **)v3;
        }
        else
        {
          v3 = 0;
        }
      }
      return v3 + 16LL * ((*(_DWORD *)(result + 104) >> 5) & 0x7FFF);
    }
    else
    {
      return 0;
    }
  }
  return result;
}

