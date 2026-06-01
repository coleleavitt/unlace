__int64 __fastcall sub_E61DD0(std::ios_base *a1)
{
  double *v1; // rbx
  __int64 v2; // r13
  double v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebp
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r12

  v1 = (double *)a1;
  v2 = std::chrono::_V2::steady_clock::now(a1);
  v3 = *(double *)a1;
  *((_QWORD *)a1 + 8) = 0;
  v7 = (*(__int64 (__fastcall **)(std::ios_base *, _QWORD, _QWORD, __int64, __int64, __int64, std::ios_base *, __int64, _QWORD, char))(*(_QWORD *)&v3 + 368LL))(
         a1,
         0,
         0,
         v4,
         v5,
         v6,
         a1,
         v2,
         0,
         1);
  if ( !v7 )
  {
    a1 = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))(*(_QWORD *)a1 + 72LL))(a1);
    if ( !(unsigned __int8)sub_18290A0(a1) )
    {
      a1 = (std::ios_base *)v1;
      sub_E60A30((__int64 *)v1, 0, 0, v8, v9, v10);
    }
  }
  v11 = std::chrono::_V2::steady_clock::now(a1) - v2;
  std::chrono::_V2::steady_clock::now(a1);
  v1[8] = (double)(int)(v11 / 1000000) / 1000.0;
  return v7;
}

