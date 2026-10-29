unsigned __int64 __fastcall sub_EBE9F0(__int64 a1, int *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v2 = 4LL * (unsigned int)(a2[2] + a2[1]) + 8 * ((unsigned int)a2[1] + (unsigned __int64)(unsigned int)(2 * *a2));
  result = sub_EBD890(
             (__int64 *)(a1 + 2352),
             16LL * (unsigned int)a2[3] + 8 * ((v2 != 0) + ((v2 - (v2 != 0)) >> 3)) + 104,
             3u);
  v4 = *a2;
  *(_QWORD *)(result + 8) = 102;
  *(_DWORD *)(result + 16) = v4;
  v5 = a2[1];
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 20) = v5;
  *(_DWORD *)(result + 24) = a2[2];
  v6 = a2[3];
  *(_BYTE *)(result + 32) = 1;
  *(_DWORD *)(result + 28) = v6;
  *(_OWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 80) = 0x200000002LL;
  *(_QWORD *)(result + 88) = 0;
  *(_DWORD *)(result + 96) = 0;
  return result;
}
