__int64 __fastcall sub_1465E60(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)a1 = &off_2C449F0;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 80;
  result = 0x400000000LL;
  *(_BYTE *)(a1 + 26) = 0;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 34) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 72) = 0x400000000LL;
  if ( a2 )
  {
    result = *(unsigned int *)(*(_QWORD *)(a2 + 88) + 192LL);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}
