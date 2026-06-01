void __fastcall sub_1700D50(__int64 a1, __int64 a2, int *a3, __int64 a4, unsigned int a5)
{
  __m128i v8; // xmm0
  bool v9; // zf
  void (__fastcall *v10)(__int64, __int64, int *, __int64, _QWORD); // r12
  int v11; // edx
  __m128i v12; // xmm1
  int v13; // [rsp+10h] [rbp-F8h] BYREF
  char v14; // [rsp+14h] [rbp-F4h]
  __int64 v15; // [rsp+18h] [rbp-F0h]
  __int64 v16; // [rsp+20h] [rbp-E8h]
  __m128i v17; // [rsp+28h] [rbp-E0h]
  __int64 v18; // [rsp+38h] [rbp-D0h]
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  void *v20; // [rsp+48h] [rbp-C0h]
  int v21; // [rsp+54h] [rbp-B4h]
  __m128i v22; // [rsp+58h] [rbp-B0h]
  char v23; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h] BYREF
  char v25; // [rsp+84h] [rbp-84h]
  __int64 v26; // [rsp+88h] [rbp-80h] BYREF

  v8 = _mm_loadu_si128((const __m128i *)(a3 + 6));
  v9 = *((_BYTE *)a3 + 88) == 0;
  v10 = *(void (__fastcall **)(__int64, __int64, int *, __int64, _QWORD))(*(_QWORD *)a2 + 24LL);
  v11 = *a3;
  v17 = v8;
  v23 = 0;
  v13 = v11;
  v14 = *((_BYTE *)a3 + 4);
  v15 = *((_QWORD *)a3 + 1);
  v16 = *((_QWORD *)a3 + 2);
  if ( !v9 )
  {
    v18 = *((_QWORD *)a3 + 5);
    sub_E90750((__int64)&v19, (__int64 *)a3 + 6);
    v12 = _mm_loadu_si128((const __m128i *)(a3 + 18));
    v23 = 1;
    v22 = v12;
  }
  sub_2236890(&ptr, &v26, a3 + 24);
  v10(a2, a1, &v13, a4, a5);
  if ( !v25 )
    free(ptr);
  if ( v23 )
  {
    if ( v21 )
      free(v20);
  }
}
