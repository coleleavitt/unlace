void (__fastcall *__fastcall sub_CCB220(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        char a6))(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // r12d
  void (__fastcall *result)(__int64, __int64, __int64, __int64); // rax
  double v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v9 = a3;
  v10 = *a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = v10;
  v11 = sub_E05440(a3);
  *(_DWORD *)(a1 + 20) = -1;
  *(_DWORD *)(a1 + 16) = v11;
  if ( BYTE4(a4) )
  {
    v12 = a4;
    v13 = a4 + 40;
  }
  else
  {
    v13 = 40;
    v12 = 0;
  }
  *(_DWORD *)(a1 + 24) = v12;
  *(_DWORD *)(a1 + 28) = v13;
  *(_OWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = v9;
  *(_BYTE *)(a1 + 52) = 1;
  *(_BYTE *)(a1 + 56) = a6;
  *(_BYTE *)(a1 + 57) = 0;
  *(_BYTE *)(a1 + 58) = a5;
  *(_DWORD *)(a1 + 59) = 256;
  switch ( v9 )
  {
    case 0LL:
      *(_QWORD *)&v15[0] = sub_CC98F0;
      result = sub_CC9BE0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 1LL:
      *(_QWORD *)&v15[0] = sub_CC95B0;
      result = sub_CC9E00;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 2LL:
      *(_QWORD *)&v15[0] = sub_CC9820;
      result = sub_CCA680;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 3LL:
      *(_QWORD *)&v15[0] = sub_CC9750;
      result = sub_CCA350;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 4LL:
      *(_QWORD *)&v15[0] = sub_CC9000;
      result = sub_CCA460;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 5LL:
      *(_QWORD *)&v15[0] = sub_CC9410;
      result = sub_CCA570;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 6LL:
      *(_QWORD *)&v15[0] = sub_CC9680;
      result = sub_CCA020;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 7LL:
      *(_QWORD *)&v15[0] = sub_CC91A0;
      result = sub_CCA130;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 8LL:
      *(_QWORD *)&v15[0] = sub_CC9340;
      result = sub_CC9F10;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 9LL:
      *(_QWORD *)&v15[0] = sub_CC90D0;
      result = sub_CCA790;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 10LL:
      *(_QWORD *)&v15[0] = sub_CC9270;
      result = sub_CC9AD0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 11LL:
      *(_QWORD *)&v15[0] = sub_CCA9D0;
      result = sub_CC88A0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 12LL:
      *(_QWORD *)&v15[0] = sub_CC94E0;
      result = sub_CCA240;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 13LL:
      *(_QWORD *)&v15[0] = sub_CC99C0;
      result = sub_CCA8A0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
    case 14LL:
      *(_QWORD *)&v15[0] = sub_CC9CF0;
      result = sub_CCAAF0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v15);
      break;
  }
  *(_QWORD *)(a1 + 80) = result;
  return result;
}

