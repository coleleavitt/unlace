__int64 __fastcall sub_1FC51D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 )
    v3 = sub_B8C1B0(*(_QWORD *)(a2 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), v3, *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 24));
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 7);
  *(_DWORD *)(a1 + 224) = 207;
  return result;
}
