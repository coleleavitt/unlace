unsigned __int64 __fastcall sub_109250(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  v2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = 0;
  *(_DWORD *)(a2 + 8) = -1;
  if ( v2 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    qfree();
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 32) = 0;
  }
  v3 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a2 + 56) = 0;
    qfree();
    *(_QWORD *)(a2 + 48) = 0;
    *(_QWORD *)(a2 + 64) = 0;
  }
  *(_QWORD *)(a2 + 72) = 0;
  *(_DWORD *)(a2 + 80) = 28;
  *(_DWORD *)(a2 + 136) = -1;
  *(_QWORD *)(a2 + 144) = 0;
  *(_DWORD *)(a2 + 152) = -1;
  *(_QWORD *)(a2 + 216) = -1;
  *(_DWORD *)(a2 + 280) = 0;
  *(_OWORD *)(a2 + 88) = -1;
  *(_OWORD *)(a2 + 104) = 0;
  *(_OWORD *)(a2 + 120) = 0;
  *(_OWORD *)(a2 + 160) = 0;
  *(_OWORD *)(a2 + 176) = 0;
  *(_OWORD *)(a2 + 200) = 0;
  *(_OWORD *)(a2 + 232) = 0;
  *(_OWORD *)(a2 + 248) = 0;
  *(_OWORD *)(a2 + 264) = 0;
  return sub_108DF0(a2 + 288);
}

