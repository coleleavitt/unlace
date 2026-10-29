__int64 __fastcall sub_4311F0(__int64 a1, std::chrono::_V2::steady_clock *a2)
{
  std::chrono::_V2::steady_clock *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v3 = *(std::chrono::_V2::steady_clock **)(a1 + 96);
  (*(void (__fastcall **)(std::chrono::_V2::steady_clock *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( *(_BYTE *)(a1 + 248) )
  {
    *(_QWORD *)(a1 + 240) += std::chrono::_V2::steady_clock::now(v3) - *(_QWORD *)(a1 + 232);
    *(_BYTE *)(a1 + 248) = 0;
    v7 = std::chrono::_V2::steady_clock::now(v3);
    *(_BYTE *)(a1 + 248) = 1;
    *(_QWORD *)(a1 + 232) = v7;
  }
  sub_1818270(a2, "time.iuc_solver.get_iuc");
  if ( *(_BYTE *)(a1 + 272) )
  {
    *(_QWORD *)(a1 + 264) += std::chrono::_V2::steady_clock::now(a2) - *(_QWORD *)(a1 + 256);
    *(_BYTE *)(a1 + 272) = 0;
    v10 = std::chrono::_V2::steady_clock::now(a2);
    *(_BYTE *)(a1 + 272) = 1;
    *(_QWORD *)(a1 + 256) = v10;
  }
  sub_1818270(a2, "time.iuc_solver.get_iuc.hyp_reduce1");
  if ( *(_BYTE *)(a1 + 296) )
  {
    *(_QWORD *)(a1 + 288) += std::chrono::_V2::steady_clock::now(a2) - *(_QWORD *)(a1 + 280);
    *(_BYTE *)(a1 + 296) = 0;
    v9 = std::chrono::_V2::steady_clock::now(a2);
    *(_BYTE *)(a1 + 296) = 1;
    *(_QWORD *)(a1 + 280) = v9;
  }
  sub_1818270(a2, "time.iuc_solver.get_iuc.hyp_reduce2");
  if ( *(_BYTE *)(a1 + 320) )
  {
    *(_QWORD *)(a1 + 312) += std::chrono::_V2::steady_clock::now(a2) - *(_QWORD *)(a1 + 304);
    *(_BYTE *)(a1 + 320) = 0;
    v8 = std::chrono::_V2::steady_clock::now(a2);
    *(_BYTE *)(a1 + 320) = 1;
    *(_QWORD *)(a1 + 304) = v8;
  }
  sub_1818270(a2, "time.iuc_solver.get_iuc.learn_core");
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
    v5 = *(unsigned int *)(v4 - 4);
  else
    v5 = 0;
  return sub_18183E0(a2, "iuc_solver.num_proxies", v5);
}

