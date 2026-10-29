__int64 __fastcall sub_197BFD0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  int v7; // edx
  _BYTE *v8; // rdi
  __int64 v10; // rax
  char v11; // [rsp+Fh] [rbp-69h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v13; // [rsp+18h] [rbp-60h]
  _BYTE v14[88]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a2;
  v13 = 0x800000000LL;
  v6 = *(unsigned int *)(a2 + 72);
  v11 = 0;
  ptr = v14;
  v7 = v6;
  if ( v6 > 8 )
  {
    sub_2237220(&ptr, v14, v6, 8);
    v7 = *(_DWORD *)(a2 + 72);
  }
  if ( (unsigned __int8)sub_197B2A0(a1, (unsigned __int16 **)(a2 + 16), v7, 0, (__int64)&ptr, &v11, a3, a4) )
  {
    v8 = ptr;
    v5 = 1;
  }
  else
  {
    v8 = ptr;
    if ( v11 )
    {
      v10 = sub_16D2BC0(
              *a1,
              *(_QWORD *)(a2 + 76),
              *(_QWORD *)(a2 + 76),
              *(_DWORD *)(a2 + 80),
              (unsigned __int64 *)ptr,
              (unsigned int)v13,
              a3,
              *(double *)a4.m128_u64,
              *(_DWORD *)(a2 + 84),
              1);
      v8 = ptr;
      v5 = v10;
    }
  }
  if ( v8 != v14 )
    free(v8);
  return v5;
}
