void __fastcall sub_60B4B0(__int64 a1)
{
  __int64 v1; // r14
  __m128i v2; // xmm2
  __m128 v3; // xmm0
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // r12
  const char *CString; // rax
  __int64 v10; // [rsp+0h] [rbp-A0h]
  __m128i v11; // [rsp+8h] [rbp-98h] BYREF
  _OWORD v12[2]; // [rsp+18h] [rbp-88h] BYREF
  __int64 v13; // [rsp+38h] [rbp-68h]
  char v14; // [rsp+40h] [rbp-60h]
  int v15; // [rsp+48h] [rbp-58h]
  __m128 v16; // [rsp+50h] [rbp-50h]

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 904);
    v10 = v1 + 104LL * *(unsigned int *)(a1 + 912);
    if ( v10 != v1 )
    {
      v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_47D0298, (__m128i)(unsigned __int64)&off_47CFF88);
      do
      {
        v2 = _mm_load_si128(&v11);
        v13 = 0;
        v3 = _mm_loadh_ps((const double *)a1);
        v12[1] = 0;
        v1 += 104;
        v12[0] = v2;
        v16 = v3;
        v14 = 0;
        v15 = 0;
        v4 = clang_defaultDiagnosticDisplayOptions();
        v5 = clang_formatDiagnostic(v12, v4);
        v7 = v6;
        v8 = v5;
        CString = (const char *)clang_getCString(v5, v6);
        fprintf(stderr, "%s\n", CString);
        clang_disposeString(v8, v7);
        *(_QWORD *)&v12[0] = &off_47D0298;
        sub_62FED0(v12);
      }
      while ( v1 != v10 );
    }
  }
}

