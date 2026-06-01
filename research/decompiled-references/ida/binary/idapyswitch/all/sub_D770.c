unsigned __int64 __fastcall sub_D770(__int64 a1, __int64 a2, __int64 (__fastcall **a3)(__int64, __int64))
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rcx
  __int32 v7; // edx
  void *v8; // r8
  void *v9; // rdi
  void *v10; // rsi
  __m128i v11; // xmm2
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  char v14; // al
  void *v15; // rbp
  __int64 v16; // r14
  void **v17; // r15
  __int64 v18; // r13
  void *v19; // rdi
  __int64 v23; // [rsp+18h] [rbp-110h]
  __m128i v24; // [rsp+80h] [rbp-A8h] BYREF
  void *v25; // [rsp+90h] [rbp-98h]
  __m128i v26; // [rsp+98h] [rbp-90h]
  void *v27; // [rsp+A8h] [rbp-80h]
  __m128i v28; // [rsp+B0h] [rbp-78h]
  void *ptr; // [rsp+C0h] [rbp-68h]
  __m128i v30; // [rsp+C8h] [rbp-60h]
  char v31; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+E8h] [rbp-40h]

  v3 = a2 - a1;
  v32 = __readfsqword(0x28u);
  if ( v3 > 96 )
  {
    v23 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 5);
    v4 = (v23 - 2) / 2;
    v5 = a1 + 32 * (((v23 - 2 + ((unsigned __int64)(v23 - 2) >> 63)) & 0xFFFFFFFFFFFFFFFELL) + v4);
    while ( 1 )
    {
      v6 = *(_QWORD *)v5;
      v7 = *(_DWORD *)(v5 + 8);
      v8 = *(void **)(v5 + 16);
      v9 = *(void **)(v5 + 40);
      *(_QWORD *)(v5 + 16) = 0;
      v10 = *(void **)(v5 + 64);
      v11 = _mm_loadu_si128((const __m128i *)(v5 + 24));
      v12 = _mm_loadu_si128((const __m128i *)(v5 + 48));
      v13 = _mm_loadu_si128((const __m128i *)(v5 + 72));
      v14 = *(_BYTE *)(v5 + 88);
      v24.m128i_i64[0] = v6;
      v24.m128i_i32[2] = v7;
      v25 = v8;
      v27 = v9;
      ptr = v10;
      *(_QWORD *)(v5 + 40) = 0;
      *(_QWORD *)(v5 + 64) = 0;
      *(_OWORD *)(v5 + 24) = 0;
      *(_OWORD *)(v5 + 48) = 0;
      *(_OWORD *)(v5 + 72) = 0;
      v26 = v11;
      v28 = v12;
      v30 = v13;
      v31 = v14;
      sub_CEC0(a1, v4, v23, &v24, *a3);
      v15 = ptr;
      if ( ptr )
      {
        v16 = v30.m128i_i64[0];
        if ( v30.m128i_i64[0] )
        {
          v17 = (void **)ptr;
          v18 = 0;
          do
          {
            v19 = *v17;
            if ( *v17 )
            {
              v17[1] = nullptr;
              j__free(v19);
            }
            ++v18;
            v17 += 3;
          }
          while ( v16 != v18 );
        }
        j__free(v15);
      }
      if ( v27 )
        j__free(v27);
      if ( v25 )
        j__free(v25);
      v5 -= 96LL;
      if ( !v4 )
        break;
      --v4;
    }
  }
  return v32 - __readfsqword(0x28u);
}

