__int64 __fastcall sub_4832C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 56) += std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1)
                          - *(_QWORD *)(a1 + 48);
    *(_BYTE *)(a1 + 64) = 0;
    v3 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 64) = 1;
    *(_QWORD *)(a1 + 48) = v3;
  }
  sub_1818270(a2, "time.spacer.solve.reach.gen.quant");
  sub_18183E0(a2, "quantifier gen", *(unsigned int *)(a1 + 40));
  return sub_18183E0(a2, "quantifier gen failures", *(unsigned int *)(a1 + 44));
}

