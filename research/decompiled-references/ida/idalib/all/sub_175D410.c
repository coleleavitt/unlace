__int64 __fastcall sub_175D410(__int64 *a1, __int64 a2)
{
  unsigned __int16 **v3; // rsi
  int v4; // edx
  __int64 v5; // rbp
  char v7; // [rsp+Fh] [rbp-49h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int64 v9; // [rsp+18h] [rbp-40h]
  _BYTE v10[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = (unsigned __int16 **)(a2 + 24);
  v4 = *((_DWORD *)v3 - 5);
  v7 = 0;
  ptr = v10;
  v9 = 0x400000000LL;
  if ( (unsigned __int8)sub_175C6E0(a1, v3, v4, 1, (__int64)&ptr, &v7) )
    v5 = 1;
  else
    v5 = sub_18C2A90(*a1, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20), ptr, (unsigned int)v9);
  if ( ptr != v10 )
    free(ptr);
  return v5;
}
