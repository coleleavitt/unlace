__int64 __fastcall sub_1EC0410(__int64 a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // rsi

  if ( **(_BYTE **)a1 )
    return 0;
  v2 = *(_QWORD **)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  **(_BYTE **)a1 = 1;
  return sub_1EC0290(*(_QWORD *)(a1 + 32), v3, *v2 != 0, **(_DWORD **)(a1 + 24));
}
