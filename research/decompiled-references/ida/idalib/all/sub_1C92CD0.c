__int64 __fastcall sub_1C92CD0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v5; // rsi
  __int64 *v6; // r13
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  char v10; // [rsp+Fh] [rbp-89h] BYREF
  __int64 v11; // [rsp+10h] [rbp-88h] BYREF
  char v12; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v14; // [rsp+28h] [rbp-70h]
  _BYTE v15[104]; // [rsp+30h] [rbp-68h] BYREF

  v5 = (void **)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
  {
    v6 = (__int64 *)sub_1C925E0(a1, v5, a3);
    if ( v6 )
      goto LABEL_3;
    return 1;
  }
  v6 = sub_1C8AA80(a1, (__int64)v5, a3, a4);
  if ( !v6 )
    return 1;
LABEL_3:
  v7 = *(unsigned int *)(a2 + 4);
  v10 = 0;
  v14 = 0x800000000LL;
  ptr = v15;
  if ( v7 > 8 )
    sub_2237220(&ptr, v15, v7, 8);
  sub_14EE070((__int64)&v11, *a1, 0, (*(__int64 *)(a2 + 16) >> 2) & 1);
  if ( (unsigned __int8)sub_1C7D7D0(
                          a1,
                          (unsigned __int64 *)(a2 + 32),
                          *(unsigned int *)(a2 + 4),
                          1u,
                          (__int64)&ptr,
                          &v10,
                          a3,
                          a4) )
  {
    v8 = 1;
    if ( v12 )
      sub_190D5E0(v11, a3);
  }
  else
  {
    if ( v12 )
      sub_190D5E0(v11, a3);
    v8 = sub_19AB130(
           *a1,
           v6,
           *(_DWORD *)(a2 + 24),
           (unsigned __int64 *)ptr,
           (unsigned int)v14,
           *(_DWORD *)(a2 + 28),
           a3,
           (__m128i)a4,
           (*(__int64 *)(a2 + 16) >> 2) & 1);
  }
  if ( ptr != v15 )
    free(ptr);
  return v8;
}
