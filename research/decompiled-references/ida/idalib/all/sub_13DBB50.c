__int64 __fastcall sub_13DBB50(int a1, __int64 a2, __int64 *a3, __int64 a4, char a5, __m128i a6, double a7)
{
  int v9; // esi
  unsigned __int64 v10; // r13
  const char *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // r14d
  __int64 v14; // r12
  __int64 v15; // r15
  unsigned __int8 *v16; // rax
  __int64 v17; // rbp
  _DWORD *v18; // rax
  int v19; // esi
  __int64 v23; // [rsp+18h] [rbp-120h]
  unsigned __int8 v24; // [rsp+2Fh] [rbp-109h] BYREF
  _QWORD v25[8]; // [rsp+30h] [rbp-108h] BYREF
  void *ptr; // [rsp+70h] [rbp-C8h]
  _BYTE v27[184]; // [rsp+80h] [rbp-B8h] BYREF

  v9 = a1;
  if ( a1 < 0 )
    v9 = sub_10212A0((__int64)a3, a1);
  v24 = 0;
  v10 = sub_A80750((__int64)a3, v9);
  v11 = sub_10202B0(a3, v10, &v24);
  v13 = v24;
  v14 = (__int64)v11;
  if ( !v24 )
  {
    v15 = (__int64)&v11[HIDWORD(v10)];
    if ( !a5
      && (v23 = v12,
          v16 = sub_13D15E0((unsigned __int8 *)&v11[HIDWORD(v10)]),
          v12 = v23,
          (byte_2411740[2 * *v16] & 7) != 0) )
    {
      return 1;
    }
    else
    {
      v17 = v14 + v12;
      v18 = (_DWORD *)sub_101FFD0((__int64)a3, v10);
      v19 = 0;
      if ( v18 )
        v19 = *v18 & 0x7FFFFFFF;
      sub_13D1080((__int64)v25, v19, a4, v14, v15, v17, 1);
      v27[66] = 1;
      sub_13DB5F0(v25, a2, a6, a7);
      v25[0] = &off_2C449F0;
      if ( ptr != v27 )
        free(ptr);
    }
  }
  return v13;
}
