__int64 __fastcall sub_1FC9450(__int64 a1, __int64 a2)
{
  _BOOL8 v4; // rsi
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 32));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 40), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 44), *(_QWORD *)(a1 + 24));
  v4 = 0;
  if ( ((**(_DWORD **)(a2 + 16) >> 14) & 0xC) == 0 )
    v4 = (*(_BYTE *)(a2 + 2) & 8) != 0;
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), v4);
  *(_DWORD *)(a1 + 224) = 205;
  return result;
}
