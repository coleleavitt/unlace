__int64 __fastcall sub_1BF82B0(
        _QWORD *a1,
        int a2,
        unsigned int a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        double a6,
        __m128 a7)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int64 v14; // r8
  __int128 v16; // [rsp+0h] [rbp-108h] BYREF
  void *v17[2]; // [rsp+10h] [rbp-F8h]
  __int128 v18; // [rsp+20h] [rbp-E8h]
  __int64 v19; // [rsp+30h] [rbp-D8h] BYREF
  void *ptr; // [rsp+38h] [rbp-D0h]
  __int64 v21; // [rsp+40h] [rbp-C8h]
  _BYTE v22[64]; // [rsp+48h] [rbp-C0h] BYREF
  void *v23[2]; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+98h] [rbp-70h]
  _QWORD *v25; // [rsp+A0h] [rbp-68h]
  __int64 v26; // [rsp+A8h] [rbp-60h]
  unsigned int v27; // [rsp+B0h] [rbp-58h]
  __int64 v28; // [rsp+B8h] [rbp-50h] BYREF
  __m128i si128; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+D0h] [rbp-38h]

  v10 = a1[31];
  v25 = a1;
  v27 = a3;
  ptr = v22;
  v26 = (v10 + 16LL * a2 + 17592) | 6;
  v21 = 0x800000000LL;
  *(_OWORD *)v23 = 0;
  v19 = 0;
  v24 = 0;
  sub_B85890(&v28, v26);
  v30 = 0x101010000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8870);
  sub_1A395A0((__int64)&v19);
  v16 = 0;
  *(_OWORD *)v17 = 0;
  v18 = 0;
  v13 = sub_1BF78E0((__int64)a1, a3, (__int64)&v16, (__int64)&v19, 1, 0, (__m128)0LL, a7, a4, a5, nullptr);
  if ( HIDWORD(v17[1]) )
    free(v17[0]);
  if ( !BYTE3(v30) )
  {
LABEL_13:
    if ( !BYTE4(v30) || (_DWORD)v19 != 5 )
      goto LABEL_7;
LABEL_17:
    sub_1A445B0((__int64)v25, (__int64)&v19, v11, v12, v14);
    goto LABEL_7;
  }
  if ( (_DWORD)v19 == 5 )
  {
    if ( !BYTE4(v30) )
      goto LABEL_7;
    goto LABEL_17;
  }
  if ( v23[1] && (*(_BYTE *)(v25[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v25, (__int64)&v19);
    goto LABEL_13;
  }
LABEL_7:
  if ( v23[0] )
    sub_1A39780((char *)v23[0]);
  if ( ptr != v22 )
    free(ptr);
  return v13;
}
