__int64 __fastcall sub_195F840(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v4; // rax
  unsigned __int64 v5; // rdx
  int v6; // r13d
  __int64 v7; // rbx
  char v9; // [rsp+Fh] [rbp-89h] BYREF
  __int64 v10; // [rsp+10h] [rbp-88h] BYREF
  char v11; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+28h] [rbp-70h]
  _BYTE v14[104]; // [rsp+30h] [rbp-68h] BYREF

  v4 = sub_194C930(a1, (void **)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL), a3, a4);
  if ( !v4 )
    return 1;
  v5 = *(unsigned int *)(a2 + 4);
  v6 = (int)v4;
  v9 = 0;
  ptr = v14;
  v13 = 0x800000000LL;
  if ( v5 > 8 )
    sub_2237220(&ptr, v14, v5, 8);
  sub_14EE070((__int64)&v10, *a1, 0, (*(__int64 *)(a2 + 16) >> 2) & 1);
  if ( (unsigned __int8)sub_195E940(
                          a1,
                          (unsigned __int16 **)(a2 + 32),
                          *(_DWORD *)(a2 + 4),
                          1,
                          (__int64)&ptr,
                          &v9,
                          a3,
                          a4) )
  {
    v7 = 1;
    if ( v11 )
      sub_190D5E0(v10, a3);
  }
  else
  {
    if ( v11 )
      sub_190D5E0(v10, a3);
    v7 = sub_19AB130(
           *a1,
           v6,
           *(_DWORD *)(a2 + 24),
           (_DWORD)ptr,
           v13,
           *(_DWORD *)(a2 + 28),
           (*(__int64 *)(a2 + 16) >> 2) & 1);
  }
  if ( ptr != v14 )
    free(ptr);
  return v7;
}
