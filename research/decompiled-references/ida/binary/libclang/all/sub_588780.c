int __fastcall sub_588780(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  const char *v9; // [rsp+0h] [rbp-48h] BYREF
  __int16 v10; // [rsp+20h] [rbp-28h]

  qword_4AF3650 = 0;
  qword_4AF3658 = 0;
  qword_4AF3660 = 0;
  qword_4AF3640 = (__int64)&off_4A6E058;
  qword_4AF3648 = (unsigned int)qword_4AF3648 & 0x80000000;
  qword_4AF3668 = 0;
  qword_4AF3688 = 0x100000000LL;
  qword_4AF3670 = 0;
  qword_4AF3678 = 0;
  qword_4AF3680 = (__int64)&qword_4AF3690;
  qword_4AF3698 = (__int64)&qword_4AF36B0;
  qword_4AF36A0 = 1;
  dword_4AF36A8 = 0;
  byte_4AF36AC = 1;
  v1 = sub_259AC30(a1, &qword_4AF3690);
  v2 = (unsigned int)qword_4AF3688;
  v3 = (unsigned int)qword_4AF3688 + 1LL;
  if ( HIDWORD(qword_4AF3688) < v3 )
  {
    sub_25D6060(&qword_4AF3690 - 2, &qword_4AF3690, v3, 8);
    v2 = (unsigned int)qword_4AF3688;
  }
  *(_QWORD *)(qword_4AF3680 + 8 * v2) = v1;
  xmmword_4AF36D8 = 0;
  LODWORD(qword_4AF3688) = qword_4AF3688 + 1;
  qword_4AF36C0 = (__int64)&off_4A64730;
  qword_4AF36B8 = 0;
  byte_4AF36C9 = 0;
  qword_4AF3640 = (__int64)off_4A6D260;
  qword_4AF36D0 = (__int64)off_49D9168;
  xmmword_4AF36E8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9AF8),
                                (__m128i)(unsigned __int64)nullsub_329);
  sub_259F400(&qword_4AF3640, "verify-machine-dom-info", 23);
  if ( qword_4AF36B8 )
  {
    v6 = sub_26260E0(&qword_4AF3640, "verify-machine-dom-info", v4, v5);
    v10 = 259;
    v9 = "cl::location(x) specified more than once!";
    sub_2598800(&qword_4AF3640, &v9, 0, 0, v6, v7);
  }
  else
  {
    byte_4AF36C9 = 1;
    qword_4AF36B8 = (__int64)&qword_4AF36F8;
    byte_4AF36C8 = qword_4AF36F8;
  }
  qword_4AF3668 = 46;
  BYTE2(qword_4AF3648) = BYTE2(qword_4AF3648) & 0x9F | 0x20;
  qword_4AF3660 = (__int64)"Verify machine dominator info (time consuming)";
  sub_259EC40(&qword_4AF3640);
  return __cxa_atexit(sub_23D25A0, &qword_4AF3640, &off_47CFE00);
}

