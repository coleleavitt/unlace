void __fastcall sub_52FBA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = 0;
  *(_DWORD *)(a2 + 8) = -1;
  if ( v2 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    qfree(v2, (const char *)a2);
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 32) = 0;
  }
  v3 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a2 + 56) = 0;
    qfree(v3, (const char *)a2);
    *(_QWORD *)(a2 + 48) = 0;
    *(_QWORD *)(a2 + 64) = 0;
  }
  v4 = *(_QWORD *)(a2 + 264);
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
  if ( v4 )
  {
    *(_QWORD *)(a2 + 272) = 0;
    qfree(v4, (const char *)a2);
    *(_QWORD *)(a2 + 264) = 0;
    *(_QWORD *)(a2 + 280) = 0;
  }
  v5 = *(_QWORD *)(a2 + 288);
  if ( v5 )
  {
    *(_QWORD *)(a2 + 296) = 0;
    qfree(v5, (const char *)a2);
    *(_QWORD *)(a2 + 288) = 0;
    *(_QWORD *)(a2 + 304) = 0;
  }
  *(_QWORD *)(a2 + 328) = 0;
  *(_OWORD *)(a2 + 312) = -1;
  *(_BYTE *)(a2 + 336) = 0;
  *(_DWORD *)(a2 + 360) = 0;
  *(_OWORD *)(a2 + 344) = 0;
}
