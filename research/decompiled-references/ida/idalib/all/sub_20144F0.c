__int64 __fastcall sub_20144F0(__int64 a1, const char *a2, _BYTE *a3, int **a4, __int64 *a5)
{
  size_t v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rax

  sub_2014100(a1);
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 128) = off_2C71BB0;
  *(__m128 *)(a1 + 168) = _mm_loadh_ps((const double *)&off_2C77900);
  *(_QWORD *)a1 = off_2C75778;
  *(_QWORD *)(a1 + 144) = off_2BEAB68;
  v8 = j__strlen(a2);
  sub_2217250(a1, a2, v8);
  *(_BYTE *)(a1 + 10) = (32 * (*a3 & 3)) | *(_BYTE *)(a1 + 10) & 0x9F;
  v9 = *a5;
  v10 = **a4;
  *(_BYTE *)(a1 + 140) = 1;
  *(_DWORD *)(a1 + 120) = v10;
  *(_DWORD *)(a1 + 136) = v10;
  v11 = a5[1];
  *(_QWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 40) = v11;
  return sub_2218140(a1);
}
