__int64 __fastcall sub_E5EA40(std::chrono::_V2::steady_clock *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebp
  __int64 v11; // r12
  char v13; // [rsp+18h] [rbp-30h]

  v13 = 1;
  v6 = std::chrono::_V2::steady_clock::now(this);
  v7 = *(_QWORD *)this;
  *((_QWORD *)this + 8) = 0;
  v10 = (*(__int64 (__fastcall **)(std::chrono::_V2::steady_clock *, __int64, __int64, __int64, __int64, __int64, std::chrono::_V2::steady_clock *, __int64, _QWORD, char))(v7 + 376))(
          this,
          a2,
          a3,
          a4,
          v8,
          v9,
          this,
          v6,
          0,
          v13);
  v11 = std::chrono::_V2::steady_clock::now(this) - v6;
  std::chrono::_V2::steady_clock::now(this);
  *((double *)this + 8) = (double)(int)(v11 / 1000000) / 1000.0;
  return v10;
}

