__int64 __fastcall sub_B78E40(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  bool v6; // zf
  char v7; // [rsp+Fh] [rbp-239h] BYREF
  void *ptr; // [rsp+10h] [rbp-238h] BYREF
  __int64 v9; // [rsp+18h] [rbp-230h]
  _BYTE v10[552]; // [rsp+20h] [rbp-228h] BYREF

  v1 = *(_QWORD *)(sub_B8C330(a1) + 18360);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 184LL))(v1);
  *(_BYTE *)(a1 + 75) |= 8u;
  ptr = v10;
  v9 = 0x4000000000LL;
  (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(__int64, int, int), char *, void **))(*(_QWORD *)v1 + 136LL))(
    v1,
    a1 + 64,
    sub_B70AA0,
    &v7,
    &ptr);
  if ( (_DWORD)v9 )
  {
    v4 = sub_B8E6D0(ptr, (unsigned int)v9, 0);
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(a1 + 80) | *(_QWORD *)(v5 + 8) & 7LL;
    v6 = *(_QWORD *)(a1 + 88) == 0;
    *(_QWORD *)(a1 + 80) = v4;
    if ( v6 )
      *(_QWORD *)(a1 + 88) = v5;
    v2 = ptr;
    if ( ptr != v10 )
      goto LABEL_3;
  }
  else
  {
    v2 = ptr;
    if ( ptr != v10 )
LABEL_3:
      free(v2);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 192LL))(v1);
}
