__int64 __fastcall sub_629C10(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 result; // rax

  *a1 = 0;
  v1 = sub_186B270((size_t)&qword_18);
  a1[1] = v1;
  v2 = v1;
  *(_BYTE *)(v1 + 16) = 0;
  *(_OWORD *)v1 = 0;
  result = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)&qword_18);
  *(_BYTE *)(v2 + 16) = 1;
  *(_QWORD *)v2 = result;
  return result;
}

