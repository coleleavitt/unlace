__int64 __fastcall sub_C1AB00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned __int8 **v8; // r12
  unsigned __int8 *v9; // rbp
  unsigned __int8 *v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  unsigned __int8 *v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // r14
  void *v19; // rdi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+8h] [rbp-70h]
  _BYTE v22[96]; // [rsp+18h] [rbp-60h] BYREF

  v7 = sub_E33C90(a1, a2, 2464, 0);
  if ( v7 )
  {
    v8 = (unsigned __int8 **)v7;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    ptr = v22;
    sub_21F17D0(a3, &ptr);
    sub_AEC220(v8, ptr, si128.m128i_i64[0]);
    if ( ptr != v22 )
      free(ptr);
    v9 = *v8;
    if ( !*v8 )
    {
      v13 = v8[1];
      v14 = *((_DWORD *)v13 + 3744);
      if ( v14 )
      {
        v15 = (unsigned int)(v14 - 1);
        *((_DWORD *)v13 + 3744) = v15;
        v9 = *(unsigned __int8 **)&v13[8 * v15 + 14848];
        v16 = *((unsigned int *)v9 + 134);
        *v9 = 0;
        v17 = *((_QWORD *)v9 + 66);
        *((_DWORD *)v9 + 106) = 0;
        v18 = v17 + (v16 << 6);
        while ( v17 != v18 )
        {
          while ( 1 )
          {
            v18 -= 64;
            v19 = *(void **)(v18 + 24);
            if ( v19 == (void *)(v18 + 40) )
              break;
            operator delete(v19);
            if ( v17 == v18 )
              goto LABEL_14;
          }
        }
LABEL_14:
        *((_DWORD *)v9 + 134) = 0;
      }
      else
      {
        v9 = (unsigned __int8 *)operator new(0x3A0u);
        *v9 = 0;
        *((_QWORD *)v9 + 12) = v9 + 112;
        *((_QWORD *)v9 + 16) = v9 + 144;
        *((_QWORD *)v9 + 20) = v9 + 176;
        *((_QWORD *)v9 + 24) = v9 + 208;
        *((_QWORD *)v9 + 28) = v9 + 240;
        *((_QWORD *)v9 + 32) = v9 + 272;
        *((_QWORD *)v9 + 36) = v9 + 304;
        *((_QWORD *)v9 + 40) = v9 + 336;
        *((_QWORD *)v9 + 44) = v9 + 368;
        *((_QWORD *)v9 + 48) = v9 + 400;
        *((_QWORD *)v9 + 52) = v9 + 432;
        *((_QWORD *)v9 + 13) = 0;
        v9[112] = 0;
        *((_QWORD *)v9 + 17) = 0;
        v9[144] = 0;
        *((_QWORD *)v9 + 21) = 0;
        v9[176] = 0;
        *((_QWORD *)v9 + 25) = 0;
        v9[208] = 0;
        *((_QWORD *)v9 + 29) = 0;
        v9[240] = 0;
        *((_QWORD *)v9 + 33) = 0;
        v9[272] = 0;
        *((_QWORD *)v9 + 37) = 0;
        v9[304] = 0;
        *((_QWORD *)v9 + 41) = 0;
        v9[336] = 0;
        *((_QWORD *)v9 + 45) = 0;
        v9[368] = 0;
        *((_QWORD *)v9 + 49) = 0;
        v9[400] = 0;
        *((_QWORD *)v9 + 53) = 0x800000000LL;
        *((_QWORD *)v9 + 66) = v9 + 544;
        *((_QWORD *)v9 + 67) = 0x600000000LL;
      }
      *v8 = v9;
    }
    v9[*v9 + 1] = 8;
    v10 = *v8;
    v11 = **v8;
    *v10 = v11 + 1;
    *(_QWORD *)&v10[8 * v11 + 16] = a4;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
  result = *(unsigned __int8 *)(a1 + 915);
  if ( *(_DWORD *)(a1 + 916) > 1u )
    return 1;
  return result;
}
