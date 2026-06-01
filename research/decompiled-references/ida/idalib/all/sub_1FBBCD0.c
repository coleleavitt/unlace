__int64 __fastcall sub_1FBBCD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 result; // rax

  sub_1FBBC70((__int64 *)a1, a2);
  v3 = a2 + 48;
  if ( !a2 )
    v3 = 0;
  sub_1FB22F0(a1, v3);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned __int8 *)(a2 + 92));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 88), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 80), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 84), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 141;
  return result;
}
