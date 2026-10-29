unsigned __int64 __fastcall sub_C71380(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  result = *(_QWORD *)(sub_F3F530(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)) + 128);
  if ( result )
  {
    if ( (*(_BYTE *)(result + 10) & 0x20) != 0 )
    {
      v2 = *(_QWORD *)(result + 128) & 0xFFFFFFFFFFFFFFF8LL;
      v3 = v2;
      if ( (*(_QWORD *)(result + 128) & 4) != 0 )
      {
        v3 = 0;
        if ( *(_DWORD *)(v2 + 8) )
          v3 = **(_QWORD **)v2;
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

