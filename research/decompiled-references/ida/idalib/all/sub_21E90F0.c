__int64 __fastcall sub_21E90F0(__int64 a1, const char *a2, int **a3, _DWORD *a4, _QWORD *a5)
{
  size_t v8; // rax
  int v9; // edx
  int v10; // eax
  __int64 v11; // rax

  sub_200F820(a1, 0, 0);
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 128) = off_2C712D0;
  *(__m128 *)(a1 + 168) = _mm_loadh_ps((const double *)off_2C784F8);
  *(_QWORD *)a1 = off_2C75710;
  *(_QWORD *)(a1 + 144) = off_2BEAB98;
  v8 = j__strlen(a2);
  sub_2217250(a1, a2, v8);
  v9 = **a3;
  v10 = *a4 & 3;
  *(_BYTE *)(a1 + 140) = 1;
  *(_DWORD *)(a1 + 120) = v9;
  *(_DWORD *)(a1 + 136) = v9;
  *(_BYTE *)(a1 + 10) = (32 * v10) | *(_BYTE *)(a1 + 10) & 0x9F;
  v11 = a5[1];
  *(_QWORD *)(a1 + 32) = *a5;
  *(_QWORD *)(a1 + 40) = v11;
  return sub_2218140(a1);
}
