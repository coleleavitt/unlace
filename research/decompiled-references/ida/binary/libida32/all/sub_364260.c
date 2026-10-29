__int64 __fastcall sub_364260(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = (_DWORD *)*(unsigned int *)(a1 + 8);
  *(_DWORD *)(a2 + 8) = *v2;
  *v2 = *(_DWORD *)(a1 + 40);
  return 0;
}

