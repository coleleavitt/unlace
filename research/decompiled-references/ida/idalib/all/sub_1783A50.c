unsigned __int64 __fastcall sub_1783A50(_QWORD *a1, __int64 a2, __int32 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // r14
  char *v7; // r15
  unsigned __int64 v8; // rbx
  __m128i v10; // [rsp+0h] [rbp-108h] BYREF
  __int64 v11; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-E8h] BYREF
  void *ptr; // [rsp+28h] [rbp-E0h]
  __int64 v14; // [rsp+30h] [rbp-D8h]
  _BYTE v15[64]; // [rsp+38h] [rbp-D0h] BYREF
  void *v16[2]; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+88h] [rbp-80h]
  _QWORD *v18; // [rsp+90h] [rbp-78h]
  __int64 v19; // [rsp+98h] [rbp-70h]
  int v20; // [rsp+A0h] [rbp-68h]
  __int64 v21; // [rsp+A8h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-58h]
  __int64 v23; // [rsp+C0h] [rbp-48h]

  v4 = a1[31];
  *(_OWORD *)v16 = 0;
  v18 = a1;
  v5 = (v4 + 18312) | 6;
  ptr = v15;
  v14 = 0x800000000LL;
  v19 = v5;
  v12 = 0;
  v17 = 0;
  v20 = 0;
  sub_B85890(&v21, v5);
  v23 = 0x101010000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8870);
  sub_1A395A0(&v12);
  sub_1A49A10(a1, &v12, a2, 0, 0);
  v10.m128i_i64[0] = v5;
  v6 = ptr;
  v10.m128i_i32[2] = a3;
  v7 = (char *)ptr + 8 * (unsigned int)v14;
  sub_B85890(&v11, v5);
  v8 = sub_C98860((_QWORD *)a1[31], 0, 0, 0, &v10, 1, v6, (__int64)v7, 0, 0);
  if ( !BYTE3(v23) )
  {
LABEL_11:
    if ( !BYTE4(v23) || (_DWORD)v12 != 5 )
      goto LABEL_5;
LABEL_15:
    sub_1A445B0(v18, &v12);
    goto LABEL_5;
  }
  if ( (_DWORD)v12 == 5 )
  {
    if ( !BYTE4(v23) )
      goto LABEL_5;
    goto LABEL_15;
  }
  if ( v16[1] && (*(_BYTE *)(v18[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v18, (__int64)&v12);
    goto LABEL_11;
  }
LABEL_5:
  if ( v16[0] )
    sub_1A39780(v16[0]);
  if ( ptr != v15 )
    free(ptr);
  return v8;
}
