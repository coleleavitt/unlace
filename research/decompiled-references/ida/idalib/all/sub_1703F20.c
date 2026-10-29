__int64 __fastcall sub_1703F20(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    result = *(_QWORD *)(*(_QWORD *)(a2 + 248) + 18640LL);
    *(_DWORD *)(a1 + 12) = a3;
    *(_QWORD *)(a1 + 16) = result;
  }
  return result;
}
