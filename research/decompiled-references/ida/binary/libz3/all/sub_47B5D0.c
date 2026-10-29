__int64 __fastcall sub_47B5D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 16) += std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1)
                          - *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 24) = 0;
    v3 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return sub_1818270(a2, "time.spacer.solve.reach.cluster");
}

