void __fastcall sub_9A8B70(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // rax
  _BYTE *v7; // rax
  __int64 v8; // r13
  __int64 v9; // r12
  void (*v12)(); // r15
  __int64 *v13; // rdi
  unsigned int v14; // [rsp+0h] [rbp-5Ch]
  __m128i v15; // [rsp+4h] [rbp-58h] BYREF
  __int64 v16; // [rsp+14h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 34) != 1 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( (v6 & 2) == 0 )
    {
      v7 = (_BYTE *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v7 || *v7 != 2 )
      {
        v8 = a5;
        v9 = a4;
        v12 = *(void (**)())(*(_QWORD *)a6 + 48LL);
        v14 = *(_DWORD *)(a1 + 36);
        sub_9A8660(&v15, (__int64 *)(a1 + 8));
        v13 = (__int64 *)v15.m128i_i64[0];
        if ( v12 != nullsub_352 )
        {
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD, __int64, __int64, _QWORD))v12)(
            a6,
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(a1 + 24),
            v15.m128i_i64[0],
            v15.m128i_i64[1],
            v14,
            v9,
            v8,
            0);
          v13 = (__int64 *)v15.m128i_i64[0];
        }
        if ( v13 != &v16 )
          operator delete(v13);
      }
    }
  }
}

