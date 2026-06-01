__int64 __fastcall sub_E32170(__int64 a1, std::chrono::_V2::steady_clock *a2)
{
  std::chrono::_V2::steady_clock *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r14
  std::chrono::_V2::steady_clock **v8; // rbx
  __int64 (__fastcall *v9)(); // rax
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v5 = (std::chrono::_V2::steady_clock *)v15;
  sub_E32010(v15, a1);
  v6 = v15[0];
  if ( v15[0] )
  {
    v7 = v15[0] + 8LL * *(unsigned int *)(v15[0] - 4LL);
    if ( v7 != v15[0] )
    {
      v8 = (std::chrono::_V2::steady_clock **)v15[0];
      do
      {
        while ( 1 )
        {
          v5 = *v8;
          v9 = *(__int64 (__fastcall **)())(*(_QWORD *)*v8 + 16LL);
          if ( v9 != sub_E33A90 )
            break;
          v5 = *((std::chrono::_V2::steady_clock **)v5 + 20);
          v9 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 16LL);
          if ( v9 != sub_E33A90 )
            break;
          v5 = *((std::chrono::_V2::steady_clock **)v5 + 20);
          v9 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 16LL);
          if ( v9 != sub_E33A90 )
            break;
          v5 = *((std::chrono::_V2::steady_clock **)v5 + 20);
          v9 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 16LL);
          if ( v9 != sub_E33A90 )
            break;
          v5 = *((std::chrono::_V2::steady_clock **)v5 + 20);
          (*(void (__fastcall **)(std::chrono::_V2::steady_clock *, std::chrono::_V2::steady_clock *))(*(_QWORD *)v5 + 16LL))(
            v5,
            a2);
          if ( (std::chrono::_V2::steady_clock **)v7 == ++v8 )
            goto LABEL_10;
        }
        ((void (__fastcall *)(std::chrono::_V2::steady_clock *, std::chrono::_V2::steady_clock *))v9)(v5, a2);
        ++v8;
      }
      while ( (std::chrono::_V2::steady_clock **)v7 != v8 );
    }
  }
LABEL_10:
  if ( *(_BYTE *)(a1 + 56) )
  {
    *(_QWORD *)(a1 + 48) += std::chrono::_V2::steady_clock::now(v5) - *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 56) = 0;
    v11 = std::chrono::_V2::steady_clock::now(v5);
    *(_BYTE *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 40) = v11;
  }
  sub_1818270(a2, "time.pool_solver.smt.total");
  if ( *(_BYTE *)(a1 + 80) )
  {
    *(_QWORD *)(a1 + 72) += std::chrono::_V2::steady_clock::now(a2) - *(_QWORD *)(a1 + 64);
    *(_BYTE *)(a1 + 80) = 0;
    v14 = std::chrono::_V2::steady_clock::now(a2);
    *(_BYTE *)(a1 + 80) = 1;
    *(_QWORD *)(a1 + 64) = v14;
  }
  sub_1818270(a2, "time.pool_solver.smt.total.sat");
  if ( *(_BYTE *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 96) += std::chrono::_V2::steady_clock::now(a2) - *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 104) = 0;
    v13 = std::chrono::_V2::steady_clock::now(a2);
    *(_BYTE *)(a1 + 104) = 1;
    *(_QWORD *)(a1 + 88) = v13;
  }
  sub_1818270(a2, "time.pool_solver.smt.total.undef");
  if ( *(_BYTE *)(a1 + 128) )
  {
    *(_QWORD *)(a1 + 120) += std::chrono::_V2::steady_clock::now(a2) - *(_QWORD *)(a1 + 112);
    *(_BYTE *)(a1 + 128) = 0;
    v12 = std::chrono::_V2::steady_clock::now(a2);
    *(_BYTE *)(a1 + 128) = 1;
    *(_QWORD *)(a1 + 112) = v12;
  }
  sub_1818270(a2, "time.pool_solver.proof");
  sub_18183E0(a2, "pool_solver.checks", *(unsigned int *)(a1 + 24));
  sub_18183E0(a2, "pool_solver.checks.sat", *(unsigned int *)(a1 + 28));
  result = sub_18183E0(a2, "pool_solver.checks.undef", *(unsigned int *)(a1 + 32));
  if ( v6 )
    return sub_186B220((void *)(v6 - 8));
  return result;
}

