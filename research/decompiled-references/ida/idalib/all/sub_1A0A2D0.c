__int64 __fastcall sub_1A0A2D0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  unsigned int v5; // esi
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-18h] BYREF
  int v8; // [rsp+8h] [rbp-10h]

  if ( (unsigned int)(**(_DWORD **)a1 - 10) <= 1 )
    return 0;
  v4 = *(_QWORD **)(a1 + 8);
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL);
  v8 = 2984;
  v7 = off_2BC6500;
  return sub_1866EA0(v4, v5, a2, (void (__fastcall ***)(_QWORD, _QWORD *, _QWORD, unsigned __int64))&v7);
}
