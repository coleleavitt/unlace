__int64 __fastcall sub_4656D0(unsigned int *a1, __int64 a2)
{
  double v2; // xmm0_8
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rax

  if ( *((_BYTE *)a1 + 24) )
  {
    *((_QWORD *)a1 + 2) += std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1)
                         - *((_QWORD *)a1 + 1);
    *((_BYTE *)a1 + 24) = 0;
    v5 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *((_BYTE *)a1 + 24) = 1;
    *((_QWORD *)a1 + 1) = v5;
  }
  v2 = (double)(int)(*((_QWORD *)a1 + 2) / 1000000LL) / 1000.0;
  sub_1818270(a2, "time.spacer.solve.reach.gen.global.cc");
  sub_18183E0(a2, "SPACER cc num dim reduction success", *a1);
  sub_18183E0(a2, "SPACER cc max reduced dim", a1[1]);
  result = sub_18183E0(a2, "SPACER arith kernel failed", a1[36]);
  v4 = *((_QWORD *)a1 + 23);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, __int64, double))(*(_QWORD *)v4 + 24LL))(v4, a2, v2);
  return result;
}

