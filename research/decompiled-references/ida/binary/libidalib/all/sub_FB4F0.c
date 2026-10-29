__int64 __fastcall sub_FB4F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // eax
  _QWORD *v6; // rax
  __int64 v7; // r11

  v4 = *(__int16 *)(a4 + 30);
  v5 = *(__int16 *)(a4 + 28);
  if ( *(_DWORD *)(a1 + 72) < v5 )
    *(_DWORD *)(a1 + 72) = v5;
  v6 = (_QWORD *)sub_FB160(a1, v4);
  if ( v6
    && *v6
    && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 184LL))(
         *(_QWORD *)(a1 + 8),
         *v6,
         *(_QWORD *)(v7 + 40)) != -1 )
  {
    return 0;
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0, 0);
  return 0;
}

