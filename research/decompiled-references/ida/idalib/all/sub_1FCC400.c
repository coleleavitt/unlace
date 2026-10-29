__int64 __fastcall sub_1FCC400(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 3);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_WORD *)(a2 + 2) >> 5) & 0xF);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 3) & 2) != 0);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 4) & 0x7F);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 5) & 1);
  v2 = (*(_BYTE *)(a2 + 2) >> 3) & 3;
  if ( v2 == 1 )
  {
    sub_9B9C90(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 24));
  }
  else if ( v2 == 2 )
  {
    sub_1F986C0((__int64 *)(a1 + 8), (unsigned int *)(a2 + 24));
  }
  result = sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  *(_DWORD *)(a1 + 224) = 171;
  return result;
}
