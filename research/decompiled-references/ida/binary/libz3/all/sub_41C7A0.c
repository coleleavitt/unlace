double __fastcall sub_41C7A0(__int64 a1)
{
  __int64 v2; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 8) += std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1) - *(_QWORD *)a1;
    *(_BYTE *)(a1 + 16) = 0;
    v2 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 16) = 1;
    *(_QWORD *)a1 = v2;
  }
  return (double)(int)(*(_QWORD *)(a1 + 8) / 1000000LL) / 1000.0;
}

