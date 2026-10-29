__int64 __fastcall sub_175D4B0(__int64 *a1, __int64 a2)
{
  unsigned __int16 **v4; // rsi
  int v5; // edx
  __int64 v6; // rbp
  __int64 v8; // rdi
  char v9; // [rsp+Fh] [rbp-69h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v11; // [rsp+18h] [rbp-60h]
  _BYTE v12[88]; // [rsp+20h] [rbp-58h] BYREF

  v4 = (unsigned __int16 **)(a2 + 40);
  v5 = *((_DWORD *)v4 - 6);
  v9 = 0;
  ptr = v12;
  v11 = 0x800000000LL;
  if ( (unsigned __int8)sub_175C6E0(a1, v4, v5, 0, (__int64)&ptr, &v9) )
  {
    v6 = 1;
  }
  else
  {
    v8 = *a1;
    if ( *(_DWORD *)(*a1 + 12632) || v9 )
      v6 = sub_19DC180(*(_QWORD *)(v8 + 736), *(_QWORD *)(a2 + 20), ptr, (unsigned int)v11);
    else
      v6 = sub_19A3E40(v8, a2);
  }
  if ( ptr != v12 )
    free(ptr);
  return v6;
}
