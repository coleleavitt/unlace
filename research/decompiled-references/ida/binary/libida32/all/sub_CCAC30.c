void *__fastcall sub_CCAC30(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        char a7,
        char a8,
        char a9)
{
  __int64 v11; // rax
  int v12; // eax
  int v13; // ecx
  char v14; // r9
  int v15; // edx
  void *result; // rax
  double v17[8]; // [rsp+8h] [rbp-40h] BYREF

  v11 = *a2;
  LODWORD(v17[0]) = a6;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = v11;
  v12 = sub_E05440(a4);
  v13 = 0;
  v14 = LOBYTE(v17[0]);
  *(_DWORD *)(a1 + 16) = v12;
  v15 = v12;
  *(_DWORD *)(a1 + 20) = v12;
  if ( BYTE4(a5) )
  {
    v13 = a5;
    v15 = a5 + v12;
  }
  *(_DWORD *)(a1 + 24) = v13;
  *(_OWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 28) = (v15 + 7) & 0xFFFFFFF8;
  *(_DWORD *)(a1 + 48) = a4;
  *(_BYTE *)(a1 + 52) = 1;
  *(_BYTE *)(a1 + 56) = v14;
  *(_BYTE *)(a1 + 57) = a8;
  *(_BYTE *)(a1 + 58) = a7;
  *(_BYTE *)(a1 + 59) = a9;
  *(_WORD *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 62) = 0;
  switch ( a4 )
  {
    case 0xCu:
      *(_QWORD *)&v17[0] = nullsub_461;
      result = sub_CC7C80;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v17);
      break;
    case 8u:
      *(_QWORD *)&v17[0] = nullsub_463;
      result = sub_CC7C90;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v17);
      break;
    case 9u:
      *(_QWORD *)&v17[0] = nullsub_462;
      result = sub_CC7CA0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v17);
      break;
    case 0xEu:
      *(_QWORD *)&v17[0] = sub_CC85B0;
      result = sub_CC85C0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v17);
      break;
    case 0xDu:
      *(_QWORD *)&v17[0] = sub_CC85A0;
      result = sub_CC85F0;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps(v17);
      break;
    default:
      *(_OWORD *)(a1 + 64) = 0;
      result = nullptr;
      break;
  }
  *(_QWORD *)(a1 + 80) = result;
  return result;
}

