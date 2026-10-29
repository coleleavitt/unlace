__int64 __fastcall sub_13DBE60(int a1, __int64 a2, __int64 *a3, __int64 a4, __m128i a5, double a6)
{
  int v8; // esi
  unsigned __int64 v9; // r15
  const char *v10; // rax
  unsigned int v11; // r13d
  __int64 v12; // rbp
  __int64 v13; // rdx
  unsigned __int8 *v14; // r14
  _DWORD *v15; // rax
  int v16; // esi
  __int64 v19; // [rsp+8h] [rbp-120h]
  unsigned __int8 v20; // [rsp+1Fh] [rbp-109h] BYREF
  _QWORD v21[8]; // [rsp+20h] [rbp-108h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h]
  _BYTE v23[184]; // [rsp+70h] [rbp-B8h] BYREF

  v8 = a1;
  if ( a1 < 0 )
    v8 = sub_10212A0((__int64)a3, a1);
  v20 = 0;
  v9 = sub_A80750((__int64)a3, v8);
  v10 = sub_10202B0(a3, v9, &v20);
  v11 = v20;
  v12 = (__int64)v10;
  v19 = v13;
  if ( !v20 )
  {
    v14 = (unsigned __int8 *)&v10[HIDWORD(v9)];
    if ( (byte_2411740[2 * *sub_13D15E0(v14)] & 7) != 0 )
    {
      return 1;
    }
    else
    {
      v15 = (_DWORD *)sub_101FFD0((__int64)a3, v9);
      v16 = 0;
      if ( v15 )
        v16 = *v15 & 0x7FFFFFFF;
      sub_13D1080((__int64)v21, v16, a4, v12, (__int64)v14, v12 + v19, 1);
      v23[66] = 1;
      sub_13DB5F0(v21, a2, a5, a6);
      v21[0] = &off_2C449F0;
      if ( ptr != v23 )
        free(ptr);
    }
  }
  return v11;
}
