__int64 __fastcall sub_2014250(__int64 a1, const char *a2, _BYTE *a3, char **a4, __int64 *a5)
{
  size_t v8; // rax
  char *v9; // rax
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rax

  sub_2014100(a1);
  *(_BYTE *)(a1 + 120) = 0;
  *(_WORD *)(a1 + 136) = 0;
  *(__m128 *)(a1 + 168) = _mm_loadh_ps((const double *)off_2C78368);
  *(_QWORD *)(a1 + 128) = off_2C714E8;
  *(_QWORD *)a1 = off_2C75848;
  *(_QWORD *)(a1 + 144) = off_2BEAB08;
  v8 = j__strlen(a2);
  sub_2217250(a1, a2, v8);
  *(_BYTE *)(a1 + 10) = (32 * (*a3 & 3)) | *(_BYTE *)(a1 + 10) & 0x9F;
  v9 = *a4;
  v10 = **a4;
  *(_BYTE *)(a1 + 137) = 1;
  *(_BYTE *)(a1 + 120) = v10;
  v11 = *a5;
  *(_BYTE *)(a1 + 136) = *v9;
  v12 = a5[1];
  *(_QWORD *)(a1 + 32) = v11;
  *(_QWORD *)(a1 + 40) = v12;
  return sub_2218140(a1);
}
