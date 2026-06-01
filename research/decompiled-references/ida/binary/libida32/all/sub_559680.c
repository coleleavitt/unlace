__int64 __fastcall sub_559680(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7, __int64 a8)
{
  _WORD *v12; // rax
  int v13; // eax
  __int64 result; // rax

  sub_559580(a1, a5, a6, a7);
  *(_DWORD *)(a1 + 196) = a5;
  *(_QWORD *)(a1 + 204) = 0;
  *(_QWORD *)(a1 + 212) = -1;
  *(_QWORD *)(a1 + 228) = 0;
  *(_QWORD *)a1 = &off_2BCF860;
  *(_QWORD *)(a1 + 220) = 0xFFFFFFFFLL;
  v12 = (_WORD *)(a1 + 236);
  do
  {
    *v12 = 0;
    v12 += 12;
    *(v12 - 11) = 0;
    *(v12 - 10) = 0;
    *((_DWORD *)v12 - 1) = 0;
    *(v12 - 9) = 0;
    *((_QWORD *)v12 - 2) = 0;
    *((_DWORD *)v12 - 2) = 0;
  }
  while ( v12 != (_WORD *)(a1 + 428) );
  *(_QWORD *)(a1 + 432) = 0;
  *(_OWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 456) = a8;
  v13 = *(_DWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 464) = a2;
  *(_QWORD *)(a1 + 472) = a3;
  result = v13 & 0xFFF2FFFF | 0x90000;
  *(_QWORD *)(a1 + 480) = a4;
  *(_QWORD *)(a1 + 520) = -1;
  *(_QWORD *)(a1 + 528) = a6;
  *(_BYTE *)(a1 + 200) = 2;
  *(_DWORD *)(a1 + 144) = result;
  *(_OWORD *)(a1 + 488) = 0;
  *(_OWORD *)(a1 + 504) = 0;
  return result;
}

