unsigned __int16 *__fastcall sub_1C7E640(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 *v5; // rsi
  __int64 v6; // rdx
  unsigned __int16 *v7; // rbp
  char v9; // [rsp+Fh] [rbp-69h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v11; // [rsp+18h] [rbp-60h]
  _BYTE v12[88]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (unsigned __int64 *)(a2 + 40);
  v6 = *((unsigned int *)v5 - 6);
  v9 = 0;
  ptr = v12;
  v11 = 0x800000000LL;
  if ( (unsigned __int8)sub_1C7D7D0(a1, v5, v6, 0, (__int64)&ptr, &v9, a3, a4) )
    v7 = (_WORD *)(&dword_0 + 1);
  else
    v7 = sub_19DC180(*(_QWORD *)(*a1 + 736), *(_QWORD *)(a2 + 20), (unsigned __int64)ptr, (unsigned int)v11, a3, a4);
  if ( ptr != v12 )
    free(ptr);
  return v7;
}
