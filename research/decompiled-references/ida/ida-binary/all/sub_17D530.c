unsigned __int64 __fastcall sub_17D530(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi

  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = 0;
  *(_DWORD *)(a2 + 8) = -1;
  if ( v5 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    qfree(v5, a2, a3, a4, a5);
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 32) = 0;
  }
  v6 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = 0;
  if ( v6 )
  {
    *(_QWORD *)(a2 + 56) = 0;
    qfree(v6, a2, a3, a4, a5);
    *(_QWORD *)(a2 + 48) = 0;
    *(_QWORD *)(a2 + 64) = 0;
  }
  v7 = *(_QWORD *)(a2 + 264);
  *(_QWORD *)(a2 + 72) = 0;
  *(_OWORD *)(a2 + 88) = -1;
  *(_DWORD *)(a2 + 80) = 28;
  *(_DWORD *)(a2 + 136) = -1;
  *(_QWORD *)(a2 + 144) = 0;
  *(_DWORD *)(a2 + 152) = -1;
  *(_QWORD *)(a2 + 216) = -1;
  *(_OWORD *)(a2 + 104) = 0;
  *(_OWORD *)(a2 + 120) = 0;
  *(_OWORD *)(a2 + 160) = 0;
  *(_OWORD *)(a2 + 176) = 0;
  *(_OWORD *)(a2 + 200) = 0;
  *(_OWORD *)(a2 + 232) = 0;
  *(_OWORD *)(a2 + 248) = 0;
  if ( v7 )
  {
    *(_QWORD *)(a2 + 272) = 0;
    qfree(v7, a2, a3, a4, a5);
    *(_QWORD *)(a2 + 264) = 0;
    *(_QWORD *)(a2 + 280) = 0;
  }
  v8 = *(_QWORD *)(a2 + 288);
  if ( v8 )
  {
    *(_QWORD *)(a2 + 296) = 0;
    qfree(v8, a2, a3, a4, a5);
    *(_QWORD *)(a2 + 288) = 0;
    *(_QWORD *)(a2 + 304) = 0;
  }
  *(_QWORD *)(a2 + 328) = 0;
  *(_BYTE *)(a2 + 336) = 0;
  *(_DWORD *)(a2 + 360) = 0;
  *(_OWORD *)(a2 + 312) = -1;
  *(_OWORD *)(a2 + 344) = 0;
  return sub_17D0D0(a2 + 368, a2, a3);
}
