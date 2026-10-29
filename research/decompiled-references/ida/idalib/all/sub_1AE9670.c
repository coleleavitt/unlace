__int64 __fastcall sub_1AE9670(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 11200);
  *(_BYTE *)(a1 + 12) = *(_BYTE *)(a2 + 12592);
  *(_BYTE *)(a1 + 13) = *(_BYTE *)(a2 + 11248);
  result = *(unsigned int *)(*(_QWORD *)(a2 + 264) + 204LL);
  *(_BYTE *)(a1 + 14) = (_DWORD)result == 0;
  *(_BYTE *)(a2 + 12592) = 1;
  *(_BYTE *)(a2 + 11248) = 1;
  return result;
}
