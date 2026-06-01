__int64 __fastcall sub_284B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  int v6; // eax
  _QWORD *v7; // rax

  v4 = *(__int16 *)(a4 + 30);
  v6 = sub_284990(a1, *(__int16 *)(a4 + 28), v4);
  if ( *(_DWORD *)(a1 + 176) < v6 )
    *(_DWORD *)(a1 + 176) = v6;
  v7 = (_QWORD *)sub_284860(a1, v4);
  if ( v7
    && *v7
    && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 464LL))(
         *(_QWORD *)(a1 + 16),
         *v7,
         *(_QWORD *)(a4 + 40)) != -1 )
  {
    return 0;
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, 0, 0);
  return 0;
}
