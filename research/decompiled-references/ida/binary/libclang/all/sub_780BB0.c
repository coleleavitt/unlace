__int64 __fastcall sub_780BB0(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax

  v1 = 0;
  if ( (~(unsigned __int8)*(_QWORD *)(a1 + 40) & 7) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)v2 == 1 )
      return *(_QWORD *)(v2 + 16);
  }
  return v1;
}

