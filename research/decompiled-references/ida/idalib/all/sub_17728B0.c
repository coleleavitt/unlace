__int64 __fastcall sub_17728B0(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v4; // rbx
  void **v5; // rsi
  void **v6; // r13
  unsigned __int64 v7; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  char v11; // [rsp+Fh] [rbp-89h] BYREF
  __int64 v12; // [rsp+10h] [rbp-88h] BYREF
  char v13; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+28h] [rbp-70h]
  _BYTE v16[104]; // [rsp+30h] [rbp-68h] BYREF

  v4 = a2;
  v5 = (void **)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
  {
    v6 = sub_1771FB0(a1, v5, a3);
    if ( v6 )
      goto LABEL_3;
    return 1;
  }
  v6 = sub_176A140(a1, v5, a3);
  if ( !v6 )
    return 1;
LABEL_3:
  v7 = *(unsigned int *)(v4 + 4);
  v11 = 0;
  v15 = 0x800000000LL;
  ptr = v16;
  if ( v7 > 8 )
    sub_2237220(&ptr, v16, v7, 8);
  sub_14EE070((__int64)&v12, *a1, 0, (*(__int64 *)(v4 + 16) >> 2) & 1);
  if ( (unsigned __int8)sub_175C6E0(a1, (unsigned __int16 **)(v4 + 32), *(_DWORD *)(v4 + 4), 1, (__int64)&ptr, &v11) )
  {
    v4 = 1;
    if ( v13 )
      sub_190D5E0(v12);
  }
  else
  {
    if ( v13 )
      sub_190D5E0(v12);
    v9 = *a1;
    v10 = *(_QWORD *)(v4 + 16);
    if ( *(_DWORD *)(*a1 + 12632) || v6 != (void **)(v10 & 0xFFFFFFFFFFFFFFF8LL) || v11 )
      v4 = sub_19AB130(v9, (_DWORD)v6, *(_DWORD *)(v4 + 24), (_DWORD)ptr, v15, *(_DWORD *)(v4 + 28), (v10 >> 2) & 1);
  }
  if ( ptr != v16 )
    free(ptr);
  return v4;
}
