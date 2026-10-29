bool __fastcall sub_106E120(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = sub_FD3F20(*(void **)a2, *(_QWORD *)(a2 + 8));
  *(_DWORD *)(a1 + 512) = v2;
  return v2 != 1;
}

