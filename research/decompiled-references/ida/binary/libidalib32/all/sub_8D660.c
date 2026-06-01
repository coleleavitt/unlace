int sub_8D660()
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  int *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  struct _Unwind_Exception *v9; // rbx

  xmmword_251E28 = 0;
  qword_251E20 = 0;
  __cxa_atexit(sub_A4EE0, &qword_251E20, &off_22E220);
  dword_251DC0 = 0;
  qword_251DD0 = (__int64)&dword_251DC0;
  qword_251DD8 = (__int64)&dword_251DC0;
  qword_251DC8 = 0;
  xmmword_251DA0 = 0;
  qword_251DE0 = 0;
  qword_251DB0 = (__int64)&off_234A00;
  qword_251DE8 = 0;
  sub_1765B0((unsigned int)&qword_251DB0, 0, v0, v1, v2, v3);
  qword_251DF8 = 0;
  word_251E10 = 0;
  xmmword_251E00 = 0;
  byte_251E12 = 0;
  __cxa_atexit(sub_117DB0, &xmmword_251DA0, &off_22E220);
  qword_251D00 = 0;
  qword_251CE0 = (__int64)&stru_235898;
  qword_251CE8 = 0xF02FF000004LL;
  xmmword_251CF0 = -1;
  v4 = (int *)&qword_251D30;
  qword_251D08 = 0;
  dword_251D10 = 1;
  dword_251D28 = -1;
  xmmword_251D18 = (__int128)_mm_unpacklo_epi64(_mm_loadl_epi64(&off_231018), (__m128i)(unsigned __int64)&off_230FF8);
  do
  {
    *(_QWORD *)v4 = 0;
    v4 += 6;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( &dword_251D90 != v4 );
  dword_251D90 = 0;
  if ( ((HIDWORD(qword_251CE8) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(qword_251CE8) != 0xFF )
    {
      if ( !under_debugger )
      {
        v9 = (struct _Unwind_Exception *)interr();
        sub_99F30(&xmmword_251DA0, 0.0);
        _Unwind_Resume(v9);
      }
      BUG();
    }
    BYTE3(qword_251CE8) = ((HIDWORD(qword_251CE8) >> 19) & 0x3F) - 1;
    HIDWORD(qword_251CE8) &= 0xFE07FFFF;
  }
  qword_251D98 = (__int64)&xmmword_251DA0;
  qword_251CE0 = (__int64)off_230E40;
  if ( (unsigned __int64)qword_251D40 <= 9 )
    qword_251D30 = qvector_reserve();
  v5 = qword_251D30;
  qword_251D38 = 10;
  *(_QWORD *)qword_251D30 = 0x2E2E657461657243LL;
  *(_BYTE *)(v5 + 8) = 46;
  *(_BYTE *)(qword_251D30 + 9) = 0;
  if ( (unsigned __int64)qword_251D58 <= 9 )
    qword_251D48 = qvector_reserve();
  v6 = qword_251D48;
  qword_251D50 = 10;
  *(_QWORD *)qword_251D48 = 0x2E2E6574656C6544LL;
  *(_BYTE *)(v6 + 8) = 46;
  *(_BYTE *)(qword_251D48 + 9) = 0;
  if ( (unsigned __int64)qword_251D70 <= 9 )
    qword_251D60 = qvector_reserve();
  v7 = qword_251D60;
  qword_251D68 = 10;
  *(_QWORD *)qword_251D60 = 0x2E2E656D616E6552LL;
  *(_BYTE *)(v7 + 8) = 46;
  *(_BYTE *)(qword_251D60 + 9) = 0;
  return __cxa_atexit(sub_1177B0, &qword_251CE0, &off_22E220);
}

