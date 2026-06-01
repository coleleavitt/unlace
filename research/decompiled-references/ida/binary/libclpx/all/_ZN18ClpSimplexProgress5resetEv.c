__int64 __fastcall ClpSimplexProgress::reset(ClpSimplexProgress *this)
{
  __int64 v1; // rax
  unsigned __int64 v2; // xmm1_8
  unsigned __int64 v3; // xmm2_8
  unsigned __int64 v4; // xmm2_8
  unsigned __int64 v5; // xmm2_8
  unsigned __int64 v6; // xmm2_8
  __int64 result; // rax

  v1 = *((_QWORD *)this + 30);
  if ( *(int *)(v1 + 1300) < 0 )
    v2 = 0xF58DEE7A4AD4B81ELL;
  else
    v2 = 0x758DEE7A4AD4B81ELL;
  *(_QWORD *)this = v2;
  *((_DWORD *)this + 62) = -1;
  *((_DWORD *)this + 67) = -1;
  *((_QWORD *)this + 10) = 0x758DEE7A4AD4B81ELL;
  v3 = 0x758DEE7A4AD4B81ELL;
  *((_QWORD *)this + 5) = 0xBFF0000000000000LL;
  if ( *(int *)(v1 + 1300) < 0 )
    v3 = 0xF58DEE7A4AD4B81ELL;
  *((_QWORD *)this + 1) = v3;
  *((_DWORD *)this + 63) = -1;
  *((_DWORD *)this + 68) = -1;
  *((_QWORD *)this + 6) = 0xBFF0000000000000LL;
  v4 = 0x758DEE7A4AD4B81ELL;
  *((_QWORD *)this + 11) = 0x758DEE7A4AD4B81ELL;
  if ( *(int *)(v1 + 1300) < 0 )
    v4 = 0xF58DEE7A4AD4B81ELL;
  *((_QWORD *)this + 2) = v4;
  *((_DWORD *)this + 64) = -1;
  *((_DWORD *)this + 69) = -1;
  *((_QWORD *)this + 7) = 0xBFF0000000000000LL;
  v5 = 0x758DEE7A4AD4B81ELL;
  *((_QWORD *)this + 12) = 0x758DEE7A4AD4B81ELL;
  if ( *(int *)(v1 + 1300) < 0 )
    v5 = 0xF58DEE7A4AD4B81ELL;
  *((_QWORD *)this + 3) = v5;
  *((_DWORD *)this + 65) = -1;
  *((_DWORD *)this + 70) = -1;
  *((_QWORD *)this + 8) = 0xBFF0000000000000LL;
  v6 = 0x758DEE7A4AD4B81ELL;
  *((_QWORD *)this + 13) = 0x758DEE7A4AD4B81ELL;
  result = *(unsigned int *)(v1 + 1300);
  if ( (int)result < 0 )
    v6 = 0xF58DEE7A4AD4B81ELL;
  *((_QWORD *)this + 14) = 0x758DEE7A4AD4B81ELL;
  *((_QWORD *)this + 4) = v6;
  *((_DWORD *)this + 66) = -1;
  *((_DWORD *)this + 71) = -1;
  *((_QWORD *)this + 9) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 28) = 0;
  *((_OWORD *)this + 8) = -1;
  *((_DWORD *)this + 58) = 0;
  *((_OWORD *)this + 9) = -1;
  *((_OWORD *)this + 10) = -1;
  *((_OWORD *)this + 11) = -1;
  *((_OWORD *)this + 12) = -1;
  *((_OWORD *)this + 13) = -1;
  *((_DWORD *)this + 76) = 0;
  *((_OWORD *)this + 18) = 0;
  return result;
}

