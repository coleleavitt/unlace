__int64 __fastcall sub_1FC7660(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v4; // rbp

  sub_1FC2690(a1, a2);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  v2 = *(_QWORD *)(a2 + 16);
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), v2 != 0);
  if ( v2 )
    result = sub_1F99B40(a1 + 8, v2);
  if ( (*(_DWORD *)a2 & 0x20000) != 0
    || (v4 = *(_QWORD *)(a2 + 32),
        sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(v4 + 8) & 1),
        result = sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(v4 + 8) & 2) != 0),
        (*(_BYTE *)(v4 + 8) & 1) != 0) )
  {
    *(_DWORD *)(a1 + 224) = 291;
  }
  else
  {
    result = sub_1FC6F20(a1 + 8, (__int64 *)v4);
    *(_DWORD *)(a1 + 224) = 291;
  }
  return result;
}
