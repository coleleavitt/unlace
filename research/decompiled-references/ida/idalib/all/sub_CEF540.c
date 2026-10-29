__int64 __fastcall sub_CEF540(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = *a2;
  *(_BYTE *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 16) = 0x100000001LL;
  *(_OWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 56) = 1;
  if ( !BYTE4(a3) )
    LODWORD(a3) = 0;
  *(_BYTE *)(a1 + 62) = 0;
  *(_WORD *)(a1 + 60) = 256;
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 28) = a3;
  *(_OWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  return 256;
}
