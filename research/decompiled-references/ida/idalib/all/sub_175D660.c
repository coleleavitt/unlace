__int64 __fastcall sub_175D660(__int64 *a1, __int64 a2, double a3, double a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  int v6; // edx
  char v8; // [rsp+Fh] [rbp-69h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v10; // [rsp+18h] [rbp-60h]
  _BYTE v11[88]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a2;
  v10 = 0x800000000LL;
  v5 = *(unsigned int *)(a2 + 72);
  v8 = 0;
  ptr = v11;
  v6 = v5;
  if ( v5 > 8 )
  {
    sub_2237220(&ptr, v11, v5, 8);
    v6 = *(_DWORD *)(a2 + 72);
  }
  if ( (unsigned __int8)sub_175C6E0(a1, (unsigned __int16 **)(a2 + 16), v6, 0, (__int64)&ptr, &v8) )
  {
    v4 = 1;
  }
  else if ( *(_DWORD *)(*a1 + 12632) || v8 )
  {
    v4 = sub_16D2BC0(
           *a1,
           *(_QWORD *)(a2 + 76),
           *(_QWORD *)(a2 + 76),
           *(_DWORD *)(a2 + 80),
           (unsigned __int64 *)ptr,
           (unsigned int)v10,
           a3,
           a4,
           *(_DWORD *)(a2 + 84),
           1);
  }
  if ( ptr != v11 )
    free(ptr);
  return v4;
}
