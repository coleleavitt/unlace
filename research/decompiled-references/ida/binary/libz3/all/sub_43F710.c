__int64 __fastcall sub_43F710(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 72) )
  {
    *(_QWORD *)(a1 + 64) += std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1)
                          - *(_QWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 72) = 0;
    v3 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 72) = 1;
    *(_QWORD *)(a1 + 56) = v3;
  }
  sub_1818270(a2, "time.spacer.solve.reach.gen.ind");
  sub_18183E0(a2, "SPACER inductive gen", *(unsigned int *)(a1 + 40));
  sub_18183E0(a2, "SPACER inductive gen weaken success", *(unsigned int *)(a1 + 44));
  return sub_18183E0(a2, "SPACER inductive gen weaken fail", *(unsigned int *)(a1 + 48));
}

