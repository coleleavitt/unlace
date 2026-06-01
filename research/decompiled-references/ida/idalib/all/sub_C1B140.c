__int64 __fastcall sub_C1B140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  unsigned __int8 **v9; // r12
  unsigned __int8 *v10; // rbp
  unsigned __int8 *v11; // rdx
  __int64 v12; // rax
  __int64 result; // rax
  unsigned __int8 *v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // r14
  void *v20; // rdi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+8h] [rbp-70h]
  _BYTE v23[96]; // [rsp+18h] [rbp-60h] BYREF

  v7 = sub_E33C90(a1, a2, 2464, 0);
  if ( v7 )
  {
    v8 = *(_BYTE *)(a3 + 12);
    v9 = (unsigned __int8 **)v7;
    ptr = v23;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    sub_220BA90(a3, (unsigned int)&ptr, 10, v8 ^ 1, 0, 1, 0);
    sub_AEC220(v9, ptr, si128.m128i_i64[0]);
    if ( ptr != v23 )
      free(ptr);
    v10 = *v9;
    if ( !*v9 )
    {
      v14 = v9[1];
      v15 = *((_DWORD *)v14 + 3744);
      if ( v15 )
      {
        v16 = (unsigned int)(v15 - 1);
        *((_DWORD *)v14 + 3744) = v16;
        v10 = *(unsigned __int8 **)&v14[8 * v16 + 14848];
        v17 = *((unsigned int *)v10 + 134);
        *v10 = 0;
        v18 = *((_QWORD *)v10 + 66);
        *((_DWORD *)v10 + 106) = 0;
        v19 = v18 + (v17 << 6);
        while ( v18 != v19 )
        {
          while ( 1 )
          {
            v19 -= 64;
            v20 = *(void **)(v19 + 24);
            if ( v20 == (void *)(v19 + 40) )
              break;
            operator delete(v20);
            if ( v18 == v19 )
              goto LABEL_14;
          }
        }
LABEL_14:
        *((_DWORD *)v10 + 134) = 0;
      }
      else
      {
        v10 = (unsigned __int8 *)operator new(0x3A0u);
        *v10 = 0;
        *((_QWORD *)v10 + 12) = v10 + 112;
        *((_QWORD *)v10 + 16) = v10 + 144;
        *((_QWORD *)v10 + 20) = v10 + 176;
        *((_QWORD *)v10 + 24) = v10 + 208;
        *((_QWORD *)v10 + 28) = v10 + 240;
        *((_QWORD *)v10 + 32) = v10 + 272;
        *((_QWORD *)v10 + 36) = v10 + 304;
        *((_QWORD *)v10 + 40) = v10 + 336;
        *((_QWORD *)v10 + 44) = v10 + 368;
        *((_QWORD *)v10 + 48) = v10 + 400;
        *((_QWORD *)v10 + 52) = v10 + 432;
        *((_QWORD *)v10 + 13) = 0;
        v10[112] = 0;
        *((_QWORD *)v10 + 17) = 0;
        v10[144] = 0;
        *((_QWORD *)v10 + 21) = 0;
        v10[176] = 0;
        *((_QWORD *)v10 + 25) = 0;
        v10[208] = 0;
        *((_QWORD *)v10 + 29) = 0;
        v10[240] = 0;
        *((_QWORD *)v10 + 33) = 0;
        v10[272] = 0;
        *((_QWORD *)v10 + 37) = 0;
        v10[304] = 0;
        *((_QWORD *)v10 + 41) = 0;
        v10[336] = 0;
        *((_QWORD *)v10 + 45) = 0;
        v10[368] = 0;
        *((_QWORD *)v10 + 49) = 0;
        v10[400] = 0;
        *((_QWORD *)v10 + 53) = 0x800000000LL;
        *((_QWORD *)v10 + 66) = v10 + 544;
        *((_QWORD *)v10 + 67) = 0x600000000LL;
      }
      *v9 = v10;
    }
    v10[*v10 + 1] = 8;
    v11 = *v9;
    v12 = **v9;
    *v11 = v12 + 1;
    *(_QWORD *)&v11[8 * v12 + 16] = a4;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
  result = *(unsigned __int8 *)(a1 + 915);
  if ( *(_DWORD *)(a1 + 916) > 1u )
    return 1;
  return result;
}
