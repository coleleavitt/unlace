_QWORD *sub_133AE40()
{
  const __m128i *v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdi
  unsigned int v4; // eax
  const void *v5; // r12
  _BYTE *v6; // r13
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r15d
  __int64 *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int32 v16; // [rsp+4h] [rbp-194h]
  __int64 v17; // [rsp+18h] [rbp-180h]
  __int64 *v18; // [rsp+28h] [rbp-170h] BYREF
  void *src[2]; // [rsp+30h] [rbp-168h]
  __int64 v20; // [rsp+40h] [rbp-158h]
  _QWORD v21[33]; // [rsp+50h] [rbp-148h] BYREF
  _BYTE v22[64]; // [rsp+158h] [rbp-40h] BYREF

  if ( !(_BYTE)qword_2CD8A10 && __cxa_guard_acquire(&qword_2CD8A10) )
  {
    memset(v21, 0, sizeof(v21));
    LODWORD(v21[5]) = 1;
    v21[0] = "itanium";
    v1 = (const __m128i *)v21;
    v21[3] = "arm";
    v21[6] = "ios";
    v21[9] = "applearm64";
    v21[12] = "watchos";
    v21[15] = "aarch64";
    v21[18] = "mips";
    v21[21] = "webassembly";
    v21[24] = "fuchsia";
    v21[27] = "xl";
    v21[30] = "microsoft";
    v21[1] = 7;
    v21[4] = 3;
    v21[7] = 3;
    LODWORD(v21[8]) = 2;
    v21[10] = 10;
    LODWORD(v21[11]) = 3;
    v21[13] = 7;
    LODWORD(v21[14]) = 4;
    v21[16] = 7;
    LODWORD(v21[17]) = 5;
    v21[19] = 4;
    LODWORD(v21[20]) = 6;
    v21[22] = 11;
    LODWORD(v21[23]) = 7;
    v21[25] = 7;
    LODWORD(v21[26]) = 8;
    v21[28] = 2;
    LODWORD(v21[29]) = 9;
    v21[31] = 9;
    LODWORD(v21[32]) = 10;
    sub_2244B40(qword_2CD8A20, 11, 16);
    while ( 1 )
    {
      while ( 1 )
      {
        v2 = v1[1].m128i_i64[0];
        v3 = v1->m128i_i64[0];
        *(__m128i *)src = _mm_loadu_si128(v1);
        v20 = v2;
        v16 = v1[1].m128i_i32[0];
        v4 = sub_2244B30(v3, src[1]);
        v5 = src[0];
        v6 = src[1];
        v7 = sub_2244CB0(qword_2CD8A20, src[0], src[1], v4);
        v11 = v7;
        v12 = (__int64 *)(qword_2CD8A20[0] + 8LL * v7);
        if ( *v12 )
          break;
LABEL_9:
        v13 = sub_22300B0(v6 + 17, 8, v7, v8, v9, v10);
        v14 = v13;
        if ( v6 )
        {
          v17 = v13;
          memcpy((void *)(v13 + 16), v5, (size_t)v6);
          v14 = v17;
        }
        v6[v14 + 16] = 0;
        *(_QWORD *)v14 = v6;
        v1 = (const __m128i *)((char *)v1 + 24);
        *(_DWORD *)(v14 + 8) = v16;
        *v12 = v14;
        ++HIDWORD(qword_2CD8A20[1]);
        v15 = sub_22450D0(qword_2CD8A20, v11);
        sub_133AE00(&v18, (__int64 *)(qword_2CD8A20[0] + 8LL * v15), 0);
        if ( v1 == (const __m128i *)v22 )
        {
LABEL_12:
          __cxa_atexit((void (*)(void *))sub_12F9E60, qword_2CD8A20, &off_2B25620);
          __cxa_guard_release(&qword_2CD8A10);
          return qword_2CD8A20;
        }
      }
      if ( *v12 == -8 )
      {
        --LODWORD(qword_2CD8A20[2]);
        goto LABEL_9;
      }
      v1 = (const __m128i *)((char *)v1 + 24);
      sub_133AE00(&v18, v12, 0);
      if ( v1 == (const __m128i *)v22 )
        goto LABEL_12;
    }
  }
  return qword_2CD8A20;
}
