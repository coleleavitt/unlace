__int64 __fastcall sub_21F9920(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // eax
  _QWORD *v9; // rsi

  v3 = *a1;
  v6 = a1 + 1;
  v7 = 1;
  v8 = *(_DWORD *)(v3 + 8) + 64;
  if ( v8 > 0x7F )
  {
    v6 = (_QWORD *)a1[1];
    v7 = v8 >> 6;
  }
  v9 = a2 + 1;
  if ( (unsigned int)(*(_DWORD *)(*a2 + 8LL) + 64) > 0x7F )
    v9 = (_QWORD *)a2[1];
  return sub_2209980(v6, v9, a3, v7, a2, a1);
}
