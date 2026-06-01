__int64 __fastcall sub_21ED0D0(__int64 a1, const char *a2, char **a3, _DWORD *a4, _QWORD *a5)
{
  size_t v8; // rax
  char *v9; // rdx
  char v10; // cl
  int v11; // eax
  __int64 v12; // rax

  sub_200F820(a1, 0, 0);
  *(_BYTE *)(a1 + 120) = 0;
  *(_WORD *)(a1 + 136) = 0;
  *(__m128 *)(a1 + 168) = _mm_loadh_ps((const double *)off_2C78368);
  *(_QWORD *)(a1 + 128) = off_2C714E8;
  *(_QWORD *)a1 = off_2C75848;
  *(_QWORD *)(a1 + 144) = off_2BEAB08;
  v8 = j__strlen(a2);
  sub_2217250(a1, a2, v8);
  v9 = *a3;
  v10 = **a3;
  v11 = *a4 & 3;
  *(_BYTE *)(a1 + 137) = 1;
  *(_BYTE *)(a1 + 120) = v10;
  *(_BYTE *)(a1 + 136) = *v9;
  *(_BYTE *)(a1 + 10) = (32 * v11) | *(_BYTE *)(a1 + 10) & 0x9F;
  v12 = a5[1];
  *(_QWORD *)(a1 + 32) = *a5;
  *(_QWORD *)(a1 + 40) = v12;
  return sub_2218140(a1);
}
