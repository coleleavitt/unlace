__int64 __fastcall sub_3578B0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 83 )
  {
    v4 = *(_QWORD *)(a2 + 24);
    if ( *(_BYTE *)(v4 + 64) )
    {
      ++*(_DWORD *)(*(_QWORD *)(a1 + 64) + 12LL);
    }
    else
    {
      ++*(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) += *(_QWORD *)(v4 + 32);
    }
    return 0;
  }
  else
  {
    if ( v2 == 81 )
      ++*(_DWORD *)(*(_QWORD *)(a1 + 64) + 16LL);
    return 0;
  }
}
