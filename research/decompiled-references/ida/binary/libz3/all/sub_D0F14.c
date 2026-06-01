__int64 __fastcall sub_D0F14(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
  *(_BYTE *)(a1 + 16) = 0;
  result = v1 - *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) += result;
  return result;
}

