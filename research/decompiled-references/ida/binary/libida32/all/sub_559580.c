__int64 __fastcall sub_559580(__int64 a1, int a2, int a3, int a4)
{
  __int64 eah; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = &off_2BD10E8;
  eah = get_eah();
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 8) = eah;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = -1;
  *(_DWORD *)(a1 + 56) = a4;
  *(_DWORD *)(a1 + 60) = a3;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 152) = -1;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_BYTE *)(a1 + 192) = -1;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  result = qvector_reserve(a1 + 24, 0, 1024, 1);
  *(_QWORD *)(a1 + 24) = result;
  return result;
}

