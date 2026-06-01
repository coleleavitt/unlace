void (__fastcall *__fastcall sub_CEEB50(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8))(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // eax
  double v13; // rcx
  int v14; // eax
  int v15; // esi
  unsigned int v16; // edx
  void (__fastcall *result)(__int64, __int64, __int64, __int64); // rax
  double v18[8]; // [rsp+8h] [rbp-40h] BYREF

  v10 = a3;
  v11 = *a2;
  *(_QWORD *)&v18[0] = a4;
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = 0;
  v12 = sub_E29180(a3);
  v13 = v18[0];
  *(_DWORD *)(a1 + 16) = v12;
  v14 = a5 * v12;
  *(_DWORD *)(a1 + 20) = v14;
  if ( BYTE4(v13) )
  {
    v15 = LODWORD(v13);
    v16 = (LODWORD(v13) + 7) & 0xFFFFFFF8;
  }
  else
  {
    v16 = 0;
    v15 = 0;
  }
  *(_DWORD *)(a1 + 24) = v15;
  *(_OWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = v10;
  *(_DWORD *)(a1 + 28) = v16 + ((v14 + 7) & 0xFFFFFFF8) + 32;
  *(_BYTE *)(a1 + 52) = 1;
  *(_BYTE *)(a1 + 56) = a6;
  *(_BYTE *)(a1 + 57) = a8;
  *(_BYTE *)(a1 + 58) = a7;
  *(_DWORD *)(a1 + 59) = 256;
  switch ( v10 )
  {
    case 0LL:
      *(_QWORD *)&v18[0] = sub_CED630;
      result = sub_CED920;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 1LL:
      *(_QWORD *)&v18[0] = sub_CED2F0;
      result = sub_CEDB40;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 2LL:
      *(_QWORD *)&v18[0] = sub_CED560;
      result = sub_CEE3C0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 3LL:
      *(_QWORD *)&v18[0] = sub_CED490;
      result = sub_CEE090;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 4LL:
      *(_QWORD *)&v18[0] = sub_CECD40;
      result = sub_CEE1A0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 5LL:
      *(_QWORD *)&v18[0] = sub_CED150;
      result = sub_CEE2B0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 6LL:
      *(_QWORD *)&v18[0] = sub_CED3C0;
      result = sub_CEDD60;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 7LL:
      *(_QWORD *)&v18[0] = sub_CECEE0;
      result = sub_CEDE70;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 8LL:
      *(_QWORD *)&v18[0] = sub_CED080;
      result = sub_CEDC50;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 9LL:
      *(_QWORD *)&v18[0] = sub_CECE10;
      result = sub_CEE4D0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 10LL:
      *(_QWORD *)&v18[0] = sub_CECFB0;
      result = sub_CED810;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 11LL:
      *(_QWORD *)&v18[0] = sub_CEE710;
      result = sub_CEC5E0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 12LL:
      *(_QWORD *)&v18[0] = sub_CED220;
      result = sub_CEDF80;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 13LL:
      *(_QWORD *)&v18[0] = sub_CED700;
      result = sub_CEE5E0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
    case 14LL:
      *(_QWORD *)&v18[0] = sub_CEDA30;
      result = sub_CEE830;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v18);
      break;
  }
  *(_QWORD *)(a1 + 80) = result;
  return result;
}
