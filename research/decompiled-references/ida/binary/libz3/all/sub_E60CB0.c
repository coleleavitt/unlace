__int64 __fastcall sub_E60CB0(std::ios_base *a1, unsigned int a2, __int64 a3)
{
  double *v4; // rbx
  __int64 v5; // r13
  double v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebp
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r12

  v4 = (double *)a1;
  v5 = std::chrono::_V2::steady_clock::now(a1);
  v6 = *(double *)a1;
  *((_QWORD *)a1 + 8) = 0;
  v10 = (*(__int64 (__fastcall **)(std::ios_base *, _QWORD, __int64, __int64, __int64, __int64, std::ios_base *, __int64, _QWORD, char))(*(_QWORD *)&v6 + 368LL))(
          a1,
          a2,
          a3,
          v7,
          v8,
          v9,
          a1,
          v5,
          0,
          1);
  if ( !v10 )
  {
    a1 = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))(*(_QWORD *)a1 + 72LL))(a1);
    if ( !(unsigned __int8)sub_18290A0(a1) )
    {
      a1 = (std::ios_base *)v4;
      sub_E60A30((__int64 *)v4, a2, a3, v11, v12, v13);
    }
  }
  v14 = std::chrono::_V2::steady_clock::now(a1) - v5;
  std::chrono::_V2::steady_clock::now(a1);
  v4[8] = (double)(int)(v14 / 1000000) / 1000.0;
  return v10;
}

