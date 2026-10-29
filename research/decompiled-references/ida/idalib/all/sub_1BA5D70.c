unsigned __int16 *__fastcall sub_1BA5D70(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 *v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int16 *v11; // rbp
  __int64 v13; // rdi
  char v14; // [rsp+Fh] [rbp-69h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v16; // [rsp+18h] [rbp-60h]
  _BYTE v17[88]; // [rsp+20h] [rbp-58h] BYREF

  v6 = (unsigned __int64 *)(a2 + 40);
  v7 = *((unsigned int *)v6 - 6);
  v14 = 0;
  ptr = v17;
  v16 = 0x800000000LL;
  if ( (unsigned __int8)sub_1BA5320(a1, v6, v7, 0, (__int64)&ptr, &v14, a3, a4) )
  {
    v11 = (_WORD *)(&dword_0 + 1);
  }
  else
  {
    v13 = *a1;
    if ( *(_DWORD *)(*a1 + 12632) || v14 )
      v11 = sub_19DC180(*(_QWORD *)(v13 + 736), *(_QWORD *)(a2 + 20), (unsigned __int64)ptr, (unsigned int)v16, a3, a4);
    else
      v11 = sub_19A3E40(v13, (unsigned __int16 *)a2, v8, v9, v10, a3, a4);
  }
  if ( ptr != v17 )
    free(ptr);
  return v11;
}
