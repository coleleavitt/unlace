__int64 __fastcall sub_C31640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 result; // rax

  v5 = *(_DWORD *)(a1 + 8);
  v6 = *(_QWORD *)a1;
  if ( v5 != -1 )
  {
    sub_C31220(v6, nullptr, v5, a4, a5);
    v6 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 8) = -1;
  }
  result = *(_QWORD *)(v6 + 32);
  --*(_DWORD *)(result + 144);
  return result;
}

