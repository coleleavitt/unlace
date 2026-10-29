__int64 __fastcall sub_42C6E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_QWORD *)(a1 + 32) += std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1)
                          - *(_QWORD *)(a1 + 24);
    *(_BYTE *)(a1 + 40) = 0;
    v3 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 24) = v3;
  }
  sub_1818270(a2, "time.spacer.solve.reach.gen.expand");
  sub_18183E0(a2, "SPACER expand_bnd attmpts", *(unsigned int *)(a1 + 16));
  return sub_18183E0(a2, "SPACER expand_bnd success", *(unsigned int *)(a1 + 20));
}

