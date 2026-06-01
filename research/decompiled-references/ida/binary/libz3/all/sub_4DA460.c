char __fastcall sub_4DA460(__int64 a1)
{
  std::chrono::_V2::steady_clock **v2; // rbp
  std::chrono::_V2::steady_clock *v3; // rdi
  char result; // al
  __int64 v5; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rax

  v2 = *(std::chrono::_V2::steady_clock ***)a1;
  v3 = **(std::chrono::_V2::steady_clock ***)a1;
  if ( !(unsigned __int8)sub_18290A0(v3) )
  {
    *((_DWORD *)v2 + 747) = 6;
    return 1;
  }
  result = sub_186AF30();
  if ( result )
    return 1;
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    v6 = *(_DWORD *)(a1 + 48);
    if ( v6 )
    {
      if ( *(_BYTE *)(v5 + 16) )
      {
        *(_QWORD *)(v5 + 8) += std::chrono::_V2::steady_clock::now(v3) - *(_QWORD *)v5;
        *(_BYTE *)(v5 + 16) = 0;
        v7 = std::chrono::_V2::steady_clock::now(v3);
        *(_BYTE *)(v5 + 16) = 1;
        *(_QWORD *)v5 = v7;
      }
      return v6 < (int)((double)(int)(*(_QWORD *)(v5 + 8) / 1000000LL) / 1000.0 * 1000.0);
    }
  }
  return result;
}

