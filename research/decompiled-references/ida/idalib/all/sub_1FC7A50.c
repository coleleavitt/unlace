__int64 __fastcall sub_1FC7A50(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  _BOOL8 v4; // rsi
  __int64 v5; // rsi
  __int64 result; // rax

  if ( (*(_WORD *)a2 & 0x200) != 0 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    v4 = v3 != 0;
  }
  else
  {
    v4 = 0;
    v3 = 0;
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), v4);
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16));
  if ( v3 )
  {
    v5 = 0;
    if ( (*(_WORD *)a2 & 0x200) != 0 )
      v5 = *(_QWORD *)(a2 + 16);
    sub_183F100(a1 + 32, v5);
  }
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 8), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 12), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 158;
  return result;
}
