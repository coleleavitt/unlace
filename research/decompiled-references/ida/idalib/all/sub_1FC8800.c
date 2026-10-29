__int64 __fastcall sub_1FC8800(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 16));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 32));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 40));
  if ( !*(_DWORD *)(a2 + 16) )
    sub_183F100(a1 + 32, *(_QWORD *)(a2 + 48));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 56), *(_QWORD *)(a1 + 24));
  if ( !*(_DWORD *)(a2 + 16) )
    sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 60), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 64), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 380;
  return result;
}
