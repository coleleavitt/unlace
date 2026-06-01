void (*__fastcall sub_211A1C0(_QWORD *a1))()
{
  __int64 v1; // rax
  void (*v2)(); // rcx
  __int64 (__fastcall *v3)(); // rcx
  unsigned __int64 v4; // rdx
  char *v5; // rsi
  void (*result)(); // rax
  _QWORD v7[4]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v8; // [rsp+20h] [rbp-18h]

  v1 = *a1;
  v2 = *(void (**)())(*a1 + 120LL);
  v8 = 259;
  v7[0] = "DWARF64 Mark";
  if ( v2 != nullsub_1401 )
  {
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v2)(a1, v7, 1);
    v1 = *a1;
  }
  v3 = *(__int64 (__fastcall **)())(v1 + 536);
  if ( v3 != sub_211A640 )
    return (void (*)())((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v3)(a1, 0xFFFFFFFFLL, 4);
  if ( *(_BYTE *)(*(_QWORD *)(a1[1] + 152LL) + 16LL) )
  {
    v5 = (char *)v7;
    v4 = 0xFFFFFFFFLL;
  }
  else
  {
    v4 = 0xFFFFFFFF00000000LL;
    v5 = (char *)v7 + 4;
  }
  result = *(void (**)())(v1 + 512);
  v7[0] = v4;
  if ( result != nullsub_1447 )
    return (void (*)())((__int64 (__fastcall *)(_QWORD *, char *, __int64))result)(a1, v5, 4);
  return result;
}
