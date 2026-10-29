int sub_8D740()
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

  xmmword_252FC8 = 0;
  qword_252FC0 = 0;
  __cxa_atexit(sub_A5360, &qword_252FC0, &off_22F2A0);
  dword_252F60 = 0;
  qword_252F70 = (__int64)&dword_252F60;
  qword_252F78 = (__int64)&dword_252F60;
  qword_252F68 = 0;
  xmmword_252F40 = 0;
  qword_252F80 = 0;
  qword_252F50 = (__int64)&off_235A00;
  qword_252F88 = 0;
  sub_1770B0((unsigned int)&qword_252F50, 0, v0, v1, v2, v3);
  qword_252F98 = 0;
  word_252FB0 = 0;
  xmmword_252FA0 = 0;
  byte_252FB2 = 0;
  __cxa_atexit(sub_1181A0, &xmmword_252F40, &off_22F2A0);
  qword_252EA0 = 0;
  qword_252E80 = (__int64)&stru_236898;
  qword_252E88 = 0xF02FF000004LL;
  xmmword_252E90 = -1;
  v4 = (int *)&qword_252ED0;
  qword_252EA8 = 0;
  dword_252EB0 = 1;
  dword_252EC8 = -1;
  xmmword_252EB8 = (__int128)_mm_unpacklo_epi64(_mm_loadl_epi64(&off_232018), (__m128i)(unsigned __int64)&off_231FF8);
  do
  {
    *(_QWORD *)v4 = 0;
    v4 += 6;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( &dword_252F30 != v4 );
  dword_252F30 = 0;
  if ( ((HIDWORD(qword_252E88) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(qword_252E88) != 0xFF )
    {
      if ( !under_debugger )
      {
        v9 = (struct _Unwind_Exception *)interr();
        sub_9A070(&xmmword_252F40, 0.0);
        _Unwind_Resume(v9);
      }
      BUG();
    }
    BYTE3(qword_252E88) = ((HIDWORD(qword_252E88) >> 19) & 0x3F) - 1;
    HIDWORD(qword_252E88) &= 0xFE07FFFF;
  }
  qword_252F38 = (__int64)&xmmword_252F40;
  qword_252E80 = (__int64)off_231E40;
  if ( (unsigned __int64)qword_252EE0 <= 9 )
    qword_252ED0 = qvector_reserve();
  v5 = qword_252ED0;
  qword_252ED8 = 10;
  *(_QWORD *)qword_252ED0 = 0x2E2E657461657243LL;
  *(_BYTE *)(v5 + 8) = 46;
  *(_BYTE *)(qword_252ED0 + 9) = 0;
  if ( (unsigned __int64)qword_252EF8 <= 9 )
    qword_252EE8 = qvector_reserve();
  v6 = qword_252EE8;
  qword_252EF0 = 10;
  *(_QWORD *)qword_252EE8 = 0x2E2E6574656C6544LL;
  *(_BYTE *)(v6 + 8) = 46;
  *(_BYTE *)(qword_252EE8 + 9) = 0;
  if ( (unsigned __int64)qword_252F10 <= 9 )
    qword_252F00 = qvector_reserve();
  v7 = qword_252F00;
  qword_252F08 = 10;
  *(_QWORD *)qword_252F00 = 0x2E2E656D616E6552LL;
  *(_BYTE *)(v7 + 8) = 46;
  *(_BYTE *)(qword_252F00 + 9) = 0;
  return __cxa_atexit(sub_117BA0, &qword_252E80, &off_22F2A0);
}

