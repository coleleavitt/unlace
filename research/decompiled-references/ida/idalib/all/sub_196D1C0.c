__int64 __fastcall sub_196D1C0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v5; // rsi
  _QWORD *v6; // rax
  int v7; // r13d
  unsigned __int64 v8; // rdx
  __int64 v9; // rbx
  void **v11; // rax
  char v12; // [rsp+Fh] [rbp-89h] BYREF
  __int64 v13; // [rsp+10h] [rbp-88h] BYREF
  char v14; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v16; // [rsp+28h] [rbp-70h]
  _BYTE v17[104]; // [rsp+30h] [rbp-68h] BYREF

  v5 = (void **)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
  {
    v11 = sub_196CB60(a1, v5, a3);
    v7 = (int)v11;
    if ( v11 )
      goto LABEL_3;
    return 1;
  }
  v6 = sub_19425F0(a1, (__int64)v5, a3, a4);
  v7 = (int)v6;
  if ( !v6 )
    return 1;
LABEL_3:
  v8 = *(unsigned int *)(a2 + 4);
  v12 = 0;
  v16 = 0x800000000LL;
  ptr = v17;
  if ( v8 > 8 )
    sub_2237220(&ptr, v17, v8, 8);
  sub_14EE070((__int64)&v13, *a1, 0, (*(__int64 *)(a2 + 16) >> 2) & 1);
  if ( (unsigned __int8)sub_19347F0(
                          a1,
                          (unsigned __int64 *)(a2 + 32),
                          *(_DWORD *)(a2 + 4),
                          1,
                          (__int64)&ptr,
                          &v12,
                          *(double *)a3.m128_u64,
                          a4) )
  {
    v9 = 1;
    if ( v14 )
      sub_190D5E0(v13, a3);
  }
  else
  {
    if ( v14 )
      sub_190D5E0(v13, a3);
    v9 = sub_19AB130(
           *a1,
           v7,
           *(_DWORD *)(a2 + 24),
           (_DWORD)ptr,
           v16,
           *(_DWORD *)(a2 + 28),
           (*(__int64 *)(a2 + 16) >> 2) & 1);
  }
  if ( ptr != v17 )
    free(ptr);
  return v9;
}
