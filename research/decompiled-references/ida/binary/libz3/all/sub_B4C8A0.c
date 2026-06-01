__int64 __fastcall sub_B4C8A0(__int64 a1)
{
  __int64 result; // rax

  result = **(_QWORD **)(a1 + 8);
  *(_QWORD *)(result + 8LL * *(unsigned int *)(a1 + 16)) = 0;
  return result;
}

