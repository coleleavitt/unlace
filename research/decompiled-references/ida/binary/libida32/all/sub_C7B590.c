__int64 __fastcall sub_C7B590(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 + 388) + 40);
  *(_DWORD *)(a1 + 388) = result;
  *(_DWORD *)(a1 + 388) = result + ((*(_DWORD *)(a2 + 28) + 7) & 0xFFFFFFF8);
  return result;
}

