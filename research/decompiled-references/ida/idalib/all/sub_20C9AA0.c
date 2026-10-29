__int64 __fastcall sub_20C9AA0(__int64 a1)
{
  __int64 v1; // rdi

  v1 = a1 - 32LL * (*(_DWORD *)(a1 + 4) & 0x7FFFFFF);
  return v1 - *(_QWORD *)(v1 - 8) - 8;
}
