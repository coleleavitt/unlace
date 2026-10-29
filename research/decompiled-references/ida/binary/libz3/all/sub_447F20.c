__int64 __fastcall sub_447F20(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 56) )
  {
    *(_QWORD *)(a1 + 48) += std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1)
                          - *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 56) = 0;
    v3 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 40) = v3;
  }
  sub_1818270(a2, "time.spacer.solve.reach.gen.global");
  sub_18183E0(a2, "SPACER cluster out of gas", *(unsigned int *)(a1 + 16));
  sub_18183E0(a2, "SPACER num non lin", *(unsigned int *)(a1 + 28));
  return sub_18183E0(a2, "SPACER num cant abstract", *(unsigned int *)(a1 + 36));
}

