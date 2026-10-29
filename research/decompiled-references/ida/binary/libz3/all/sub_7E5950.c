__int64 __fastcall sub_7E5950(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL);
  v2 = 214013 * *(_DWORD *)(v1 + 2356) + 2531011;
  *(_DWORD *)(v1 + 2356) = v2;
  return HIWORD(v2) & 0x7FFF;
}

