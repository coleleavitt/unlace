__int64 __fastcall sub_16E950(__int64 a1)
{
  _DWORD *v2; // rdi
  _DWORD *v4; // rdi
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdi
  int v11; // eax

  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 50LL) & 1) == 0 )
    return 0;
  v2 = *(_DWORD **)(a1 + 56);
  if ( !v2
    || (unsigned int)(*v2 - 43) > 1
    || !(unsigned __int8)sub_154780((__int64)(v2 + 8)) && !(unsigned __int8)sub_154780(*(_QWORD *)(a1 + 56) + 48LL) )
  {
    return 0;
  }
  v4 = *(_DWORD **)(a1 + 56);
  if ( *v4 == 43 )
  {
    sub_11D5A0((__int64)v4);
    v11 = *(_DWORD *)(a1 + 24);
    BYTE1(v11) &= ~2u;
    LOBYTE(v11) = v11 | 0x80;
    *(_DWORD *)(a1 + 24) = v11;
    v5 = *(_DWORD *)(a1 + 72) + 1;
  }
  else
  {
    v5 = v4[18];
    sub_11D5A0((__int64)v4);
    **(_DWORD **)(a1 + 56) = 55;
    v8 = *(_QWORD *)(a1 + 56);
    *(_BYTE *)(v8 + 32) = 7;
    *(_DWORD *)(v8 + 40) = v5;
  }
  sub_6B2C0(a1, v5, v6, v7);
  **(_DWORD **)(a1 + 64) |= 0x400u;
  v9 = *(_DWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 64);
  BYTE1(v9) &= ~2u;
  LOBYTE(v9) = v9 | 0x80;
  *(_DWORD *)(a1 + 24) = v9;
  sub_66FA0(v10, 1u, (__int64)"REMOVED SECURITY COOKIE");
  return 1;
}
