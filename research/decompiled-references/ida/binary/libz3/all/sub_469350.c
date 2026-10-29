__int64 __fastcall sub_469350(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_QWORD *)(a1 + 40) += std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1)
                          - *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 48) = 0;
    v3 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 48) = 1;
    *(_QWORD *)(a1 + 32) = v3;
  }
  sub_1818270(a2, "time.spacer.solve.reach.gen.lim_num");
  sub_18183E0(a2, "limitted num gen", *(unsigned int *)(a1 + 24));
  return sub_18183E0(a2, "limitted num gen failures", *(unsigned int *)(a1 + 28));
}

