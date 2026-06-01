__int64 __fastcall sub_197BE30(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int16 **v5; // rsi
  int v6; // edx
  __int64 v7; // rbp
  __int64 v9; // rdi
  char v10; // [rsp+Fh] [rbp-69h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v12; // [rsp+18h] [rbp-60h]
  _BYTE v13[88]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (unsigned __int16 **)(a2 + 40);
  v6 = *((_DWORD *)v5 - 6);
  v10 = 0;
  ptr = v13;
  v12 = 0x800000000LL;
  if ( (unsigned __int8)sub_197B2A0(a1, v5, v6, 0, (__int64)&ptr, &v10, a3, a4) )
  {
    v7 = 1;
  }
  else
  {
    v9 = *a1;
    if ( v10 )
      v7 = sub_19DC180(*(_QWORD *)(v9 + 736), *(_QWORD *)(a2 + 20), ptr, (unsigned int)v12);
    else
      v7 = sub_19A3E40(v9, a2);
  }
  if ( ptr != v13 )
    free(ptr);
  return v7;
}
