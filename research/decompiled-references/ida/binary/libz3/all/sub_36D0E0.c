__int64 __fastcall sub_36D0E0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rax

  v4 = *(__int64 (__fastcall **)(__int64))(*a2 + 72LL);
  if ( v4 == sub_303CC0 )
    v5 = a2[111];
  else
    v5 = v4((__int64)a2);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 10000;
  *(_WORD *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 1;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  return 1;
}

