__int64 __fastcall sub_7828C0(__int64 a1)
{
  __int64 v2; // rbp
  _BYTE *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // zf
  char v8; // [rsp+Fh] [rbp-229h] BYREF
  void *ptr; // [rsp+10h] [rbp-228h] BYREF
  __int64 v10; // [rsp+18h] [rbp-220h]
  _BYTE v11[536]; // [rsp+20h] [rbp-218h] BYREF

  v2 = *(_QWORD *)(sub_798D40(a1) + 18200);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 176LL))(v2);
  ptr = v11;
  v10 = 0x4000000000LL;
  *(_BYTE *)(a1 + 75) |= 8u;
  (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(__int64, int, int), char *, void **))(*(_QWORD *)v2 + 128LL))(
    v2,
    a1 + 64,
    sub_777E40,
    &v8,
    &ptr);
  v3 = ptr;
  if ( (_DWORD)v10 )
  {
    v6 = sub_79BEA0(ptr, (unsigned int)v10, 0);
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(a1 + 80) | *(_QWORD *)(v5 + 8) & 7LL;
    v7 = *(_QWORD *)(a1 + 88) == 0;
    *(_QWORD *)(a1 + 80) = v6;
    if ( v7 )
      *(_QWORD *)(a1 + 88) = v5;
    v3 = ptr;
  }
  if ( v3 != v11 )
    free(v3);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 184LL))(v2);
}

