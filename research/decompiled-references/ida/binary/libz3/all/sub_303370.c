__int64 __fastcall sub_303370(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
  a1[1] = a2;
  *a1 = v4;
  *((_DWORD *)a1 + 4) = a3;
  *(_OWORD *)(a1 + 3) = 0;
  v5 = sub_186B270(0x80u);
  *(_QWORD *)v5 = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = 0;
  *(_DWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 80) = 0;
  *(_DWORD *)(v5 + 88) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_DWORD *)(v5 + 104) = 0;
  *(_QWORD *)(v5 + 112) = 0;
  *(_DWORD *)(v5 + 120) = 0;
  a1[5] = v5;
  result = *a1;
  a1[6] = 8;
  *((_DWORD *)a1 + 14) = 0;
  a1[8] = result;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[12] = 1;
  a1[13] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[16] = 1;
  *(_OWORD *)(a1 + 17) = 0;
  *(_OWORD *)(a1 + 19) = 0;
  return result;
}

