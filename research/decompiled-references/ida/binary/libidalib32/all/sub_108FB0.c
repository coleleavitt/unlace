unsigned __int64 __fastcall sub_108FB0(__int64 a1, __int64 a2)
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
  *(_DWORD *)(a2 + 88) = -1;
  *(_QWORD *)(a2 + 80) = -4294967268LL;
  *(_DWORD *)(a2 + 128) = -1;
  *(_QWORD *)(a2 + 136) = 0;
  *(_DWORD *)(a2 + 144) = -1;
  *(_QWORD *)(a2 + 208) = -1;
  *(_DWORD *)(a2 + 272) = 0;
  *(_OWORD *)(a2 + 96) = 0;
  *(_OWORD *)(a2 + 112) = 0;
  *(_OWORD *)(a2 + 152) = 0;
  *(_OWORD *)(a2 + 168) = 0;
  *(_OWORD *)(a2 + 192) = 0;
  *(_OWORD *)(a2 + 224) = 0;
  *(_OWORD *)(a2 + 240) = 0;
  *(_OWORD *)(a2 + 256) = 0;
  return sub_108B60(a2 + 280);
}

