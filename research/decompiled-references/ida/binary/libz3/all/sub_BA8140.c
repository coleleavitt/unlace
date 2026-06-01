__int64 __fastcall sub_BA8140(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 16);
  *(_BYTE *)(**(_QWORD **)(a1 + 8) + result) = 0;
  return result;
}

