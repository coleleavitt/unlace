void __fastcall sub_116DC70(__int64 a1)
{
  __int64 v1; // rbx
  __int64 i; // r13
  char v3; // al
  _BYTE *v4; // rsi
  __int64 v5; // rax
  __m128i *v6; // rcx
  __int64 v7; // rax
  _BYTE *v8; // rdx
  __m128i si128; // xmm0
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v11; // [rsp+8h] [rbp-70h]
  char v12; // [rsp+18h] [rbp-60h] BYREF
  void *v13[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[72]; // [rsp+30h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 1064) )
  {
    v1 = *(_QWORD *)(a1 + 792);
    for ( i = v1 + ((unsigned __int64)*(unsigned int *)(a1 + 800) << 6); i != v1; v1 += 64 )
    {
      while ( 1 )
      {
        ptr = &v12;
        v11 = 0;
        if ( *(_QWORD *)(v1 + 8) )
          sub_9C3DB0(&ptr, (const void **)v1);
        v3 = *(_BYTE *)(v1 + 24);
        v13[0] = v14;
        v12 = v3;
        v4 = *(_BYTE **)(v1 + 32);
        sub_116BFE0(v13, v4, (__int64)&v4[*(_QWORD *)(v1 + 40)]);
        v5 = sub_227D6D0(v13, v4);
        v6 = *(__m128i **)(v5 + 32);
        if ( *(_QWORD *)(v5 + 24) - (_QWORD)v6 > 0x1Eu )
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A9A00);
          qmemcpy(&v6[1], "n search path: ", 15);
          *v6 = si128;
          *(_QWORD *)(v5 + 32) += 31LL;
        }
        else
        {
          v5 = sub_227BF10(v5, "ROCm installation search path: ", 31);
        }
        v7 = sub_227BF10(v5, ptr, v11);
        v8 = *(_BYTE **)(v7 + 32);
        if ( (unsigned __int64)v8 >= *(_QWORD *)(v7 + 24) )
        {
          sub_227BA10(v7, 10);
        }
        else
        {
          *(_QWORD *)(v7 + 32) = v8 + 1;
          *v8 = 10;
        }
        if ( v13[0] != v14 )
          operator delete(v13[0]);
        if ( ptr == &v12 )
          break;
        free(ptr);
        v1 += 64;
        if ( i == v1 )
          return;
      }
    }
  }
}
