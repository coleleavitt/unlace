__int64 __fastcall sub_1FC7C80(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 result; // rax

  v4 = a1 + 32;
  v5 = *(_QWORD *)(a1 + 24);
  if ( (*(_WORD *)a2 & 0x200) != 0 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    sub_9B9C90(v5, v6 != 0);
    sub_183F100(v4, *(_QWORD *)(a2 + 8));
    if ( v6 )
    {
      v7 = 0;
      if ( (*(_WORD *)a2 & 0x200) != 0 )
        v7 = *(_QWORD *)(a2 + 16);
      sub_1F92A90(*(_QWORD *)(a1 + 16), v7, *(_QWORD *)(a1 + 24));
    }
  }
  else
  {
    sub_9B9C90(v5, 0);
    sub_183F100(v4, *(_QWORD *)(a2 + 8));
  }
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 165;
  return result;
}
