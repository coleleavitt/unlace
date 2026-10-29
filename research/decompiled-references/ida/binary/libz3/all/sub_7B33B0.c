void __fastcall sub_7B33B0(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  int v4; // r12d
  unsigned int i; // ebx
  __int64 v6; // rsi
  unsigned int v7; // eax

  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 != -2 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24), v3 >> 1);
  v4 = *(_DWORD *)(a2 + 32);
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = i;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 88LL))(a2, v6);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24), v7 >> 1);
    }
  }
  *(_BYTE *)(a2 + 48) = 0;
}

