void (*__fastcall sub_211A640(__int64 *a1, unsigned __int64 a2, unsigned int a3))()
{
  char *v3; // rcx
  __int64 v4; // rax
  void (*result)(); // rax
  _QWORD v6[2]; // [rsp+8h] [rbp-10h] BYREF

  v3 = (char *)v6;
  if ( !*(_BYTE *)(*(_QWORD *)(a1[1] + 152) + 16LL) )
  {
    a2 = _byteswap_uint64(a2);
    v3 = (char *)v6 + 8 - a3;
  }
  v4 = *a1;
  v6[0] = a2;
  result = *(void (**)())(v4 + 512);
  if ( result != nullsub_1447 )
    return (void (*)())((__int64 (__fastcall *)(__int64 *, char *, _QWORD))result)(a1, v3, a3);
  return result;
}
