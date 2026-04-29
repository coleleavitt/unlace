unsigned __int64 sub_88B80(__int64 a1, ...)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  size_t v4; // rbp
  void *v6; // [rsp+0h] [rbp-108h] BYREF
  __int128 v7; // [rsp+8h] [rbp-100h]
  gcc_va_list va; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-D0h]
  __int64 v10; // [rsp+48h] [rbp-C0h]
  __int64 v11; // [rsp+50h] [rbp-B8h]
  __int64 v12; // [rsp+58h] [rbp-B0h]
  __int64 v13; // [rsp+60h] [rbp-A8h]
  __int64 v14; // [rsp+68h] [rbp-A0h]

  va_start(va, a1);
  v10 = va_arg(va, _QWORD);
  v11 = va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  v1 = v12;
  v13 = va_arg(va, _QWORD);
  v2 = v13;
  v14 = va_arg(va, _QWORD);
  v3 = v14;
  va_end(va);
  va_start(va, a1);
  v9 = __readfsqword(0x28u);
  v4 = n;
  v6 = nullptr;
  v7 = 0;
  if ( n )
  {
    *((_QWORD *)&v7 + 1) = n;
    v6 = (void *)qalloc_or_throw(n);
    memcpy(v6, qword_D08F0, v4);
    *(_QWORD *)&v7 = v4;
  }
  sub_1D680((__int64 *)&v6, a1, (const __m128i *)va, v1, v2, v3);
  if ( (debug & 0x400000) != 0 )
    sub_16DD0((__int64)"%s");
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return v9 - __readfsqword(0x28u);
}
