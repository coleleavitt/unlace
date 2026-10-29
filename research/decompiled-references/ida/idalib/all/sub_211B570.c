void (*__fastcall sub_211B570(__int64 *a1, unsigned __int64 a2, __int64 a3))()
{
  __int64 v6; // rcx
  void (*v7)(); // rax
  __int64 v8; // rsi
  void (*(__fastcall *v9)(__int64 *, unsigned __int64, unsigned int))(); // r8
  char v10; // al
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rax
  char *v15; // rsi
  void (*result)(); // rax
  _QWORD v17[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( *(_BYTE *)(a1[1] + 1882) == 1 )
    sub_211A1C0(a1);
  v6 = *a1;
  v7 = *(void (**)())(*a1 + 120);
  if ( v7 != nullsub_1401 )
  {
    ((void (__fastcall *)(__int64 *, __int64, __int64))v7)(a1, a3, 1);
    v6 = *a1;
  }
  v8 = a1[1];
  v9 = *(void (*(__fastcall **)(__int64 *, unsigned __int64, unsigned int))())(v6 + 536);
  v10 = *(_BYTE *)(v8 + 1882);
  v11 = v10 == 0 ? 4 : 0;
  v12 = (-(__int64)(v10 == 0) & 0xFFFFFFFFFFFFFFFCLL) + 8;
  v13 = v10 == 0 ? 4 : 8;
  if ( v9 != sub_211A640 )
    return v9(a1, a2, v13);
  v14 = *(_QWORD *)(v8 + 152);
  v15 = (char *)v17;
  if ( !*(_BYTE *)(v14 + 16) )
  {
    a2 = _byteswap_uint64(a2);
    v15 = (char *)v17 + v11;
  }
  result = *(void (**)())(v6 + 512);
  v17[0] = a2;
  if ( result != nullsub_1447 )
    return (void (*)())((__int64 (__fastcall *)(__int64 *, char *, unsigned __int64))result)(a1, v15, v12);
  return result;
}
