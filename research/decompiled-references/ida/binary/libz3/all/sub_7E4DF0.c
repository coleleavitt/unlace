__int64 (__fastcall **__fastcall sub_7E4DF0(__int64 a1, _QWORD *a2, __int64 *a3, int a4))()
{
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  __int64 v8; // rdx

  v6 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v6 == sub_79EFD0 )
    v7 = a2[18];
  else
    v7 = v6((__int64)a2);
  v8 = *a3;
  *(_QWORD *)(a1 + 72) = v7;
  *(_QWORD *)a1 = qword_1C6C5A8;
  *(_QWORD *)(a1 + 32) = algn_1C6C7D0;
  *(_QWORD *)(a1 + 40) = qword_1C6C820;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = a4;
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 48) = off_1C6C848;
  *(_QWORD *)(a1 + 80) = a2;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  return off_1C6C848;
}

