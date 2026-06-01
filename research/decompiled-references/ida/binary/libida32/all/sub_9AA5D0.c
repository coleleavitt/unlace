void __fastcall sub_9AA5D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  void (*v9)(); // r15
  __m128i v10; // kr00_16
  __int64 *v11; // rdi
  __int64 v12; // [rsp+8h] [rbp-A0h]
  __int64 v13[4]; // [rsp+10h] [rbp-98h] BYREF
  void *v14[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v15; // [rsp+40h] [rbp-68h] BYREF
  __m128i v16; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+60h] [rbp-48h] BYREF

  sub_9BCA30(v13, a1 + 104, a5, a3, a4);
  if ( (v13[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( *(_BYTE *)(v13[0] & 0xFFFFFFFFFFFFFFF8LL) == 1 )
    {
      sub_9A4920(*(_QWORD *)(a1 + 320), a4);
    }
    else if ( sub_9A6250(a2, (__int64 *)(a1 + 544), v13) )
    {
      v12 = *(_QWORD *)(a1 + 320);
      v9 = *(void (**)())(*(_QWORD *)v12 + 96LL);
      sub_9A8660(&v16, v13);
      v10 = v16;
      sub_B62CC0(v14, a3 + 40);
      v11 = (__int64 *)v14[0];
      if ( v9 != nullsub_358 )
      {
        ((void (__fastcall *)(__int64, __int64, __int64, void *, void *, _QWORD, __int64, __int64))v9)(
          v12,
          v13[1],
          v13[2],
          v14[0],
          v14[1],
          a7,
          v10.m128i_i64[0],
          v10.m128i_i64[1]);
        v11 = (__int64 *)v14[0];
      }
      if ( v11 != &v15 )
        operator delete(v11);
      if ( (__int64 *)v16.m128i_i64[0] != &v17 )
        operator delete((void *)v16.m128i_i64[0]);
    }
  }
}

