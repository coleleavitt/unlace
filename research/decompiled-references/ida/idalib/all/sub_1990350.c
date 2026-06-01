__int64 __fastcall sub_1990350(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rbx
  void **v5; // rsi
  void *v6; // r13
  unsigned __int64 v7; // rdx
  char v9; // [rsp+Fh] [rbp-89h] BYREF
  __int64 v10; // [rsp+10h] [rbp-88h] BYREF
  char v11; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+28h] [rbp-70h]
  _BYTE v14[104]; // [rsp+30h] [rbp-68h] BYREF

  v4 = a2;
  v5 = (void **)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
  {
    v6 = sub_198FB20(a1, v5, a3);
    if ( v6 )
      goto LABEL_3;
    return 1;
  }
  v6 = sub_1988430(a1, (__int64)v5, a3, a4);
  if ( !v6 )
    return 1;
LABEL_3:
  v7 = *(unsigned int *)(v4 + 4);
  v9 = 0;
  v13 = 0x800000000LL;
  ptr = v14;
  if ( v7 > 8 )
    sub_2237220(&ptr, v14, v7, 8);
  sub_14EE070((__int64)&v10, *a1, 0, (*(__int64 *)(v4 + 16) >> 2) & 1);
  if ( (unsigned __int8)sub_197B2A0(
                          a1,
                          (unsigned __int16 **)(v4 + 32),
                          *(_DWORD *)(v4 + 4),
                          1,
                          (__int64)&ptr,
                          &v9,
                          *(double *)a3.m128_u64,
                          a4) )
  {
    v4 = 1;
    if ( v11 )
      sub_190D5E0(v10, a3);
  }
  else
  {
    if ( v11 )
      sub_190D5E0(v10, a3);
    if ( v6 != (void *)(*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL) || v9 )
      v4 = sub_19AB130(
             *a1,
             (_DWORD)v6,
             *(_DWORD *)(v4 + 24),
             (_DWORD)ptr,
             v13,
             *(_DWORD *)(v4 + 28),
             (*(__int64 *)(v4 + 16) >> 2) & 1);
  }
  if ( ptr != v14 )
    free(ptr);
  return v4;
}
