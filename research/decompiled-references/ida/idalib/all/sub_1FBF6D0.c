__int64 __fastcall sub_1FBF6D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // rsi
  __int64 i; // rsi
  __int64 result; // rax

  v7 = (char *)(a2 + 48);
  if ( !a2 )
    v7 = nullptr;
  sub_1FB8400((__int64 *)a1, v7, a3, a4, a5, a6);
  sub_1FBBC70((__int64 *)a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 64), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 68), *(_QWORD *)(a1 + 24));
  sub_1F9A420((__int64 *)(a1 + 8), *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80));
  for ( i = *(_QWORD *)(a2 + 88); (*(_BYTE *)(i + 28) & 0x7F) == 0x4D; i = *(_QWORD *)(i + 88) )
    ;
  result = sub_1F92A90(*(_QWORD *)(a1 + 16), i, *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 88;
  return result;
}
