__int64 __fastcall sub_839180(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // r15d
  char v10; // al
  __int8 v11; // r14
  bool v12; // cc
  void *v13; // rax
  unsigned __int8 **v15; // r13
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // r15
  __int64 v19; // rdx
  unsigned __int8 *v20; // r12
  unsigned __int8 *v21; // rdx
  __int64 v22; // rax
  unsigned __int8 *v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // r14
  void *v29; // rdi
  unsigned int v30; // [rsp+8h] [rbp-90h]
  char v31; // [rsp+1Fh] [rbp-79h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __m128i si128; // [rsp+28h] [rbp-70h]
  _BYTE v34[96]; // [rsp+38h] [rbp-60h] BYREF

  v9 = sub_70B280(*(_QWORD *)(a1 + 16), a4);
  v10 = sub_B10310(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL));
  si128.m128i_i32[0] = v9;
  v11 = v10 ^ 1;
  if ( v9 > 0x40 )
    sub_2585A50(&ptr, 0, 0);
  else
    ptr = nullptr;
  v12 = *(_DWORD *)(a5 + 8) <= 0x40u;
  si128.m128i_i8[4] = v11;
  if ( !v12 && *(_QWORD *)a5 )
  {
    operator delete[](*(void **)a5);
    v11 = si128.m128i_i8[4];
  }
  v13 = ptr;
  *(_BYTE *)(a5 + 12) = v11;
  *(_QWORD *)a5 = v13;
  *(_DWORD *)(a5 + 8) = si128.m128i_i32[0];
  if ( (sub_2580E00(a3, a5, 0, &v31) & 1) == 0 )
    return 1;
  v15 = (unsigned __int8 **)sub_A2E240(a1, a2, 2262, 0);
  if ( v15 )
  {
    v16 = *a3;
    v17 = sub_2575D50(*a3);
    v18 = *a3;
    ptr = v34;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v30 = (59 * v17 + 195) / 0xC4u;
    if ( v18 == sub_2575D20(v16, &ptr, v19) )
      sub_2584F50(a3, &ptr, v30, 3, 1);
    else
      sub_2584B70(a3, &ptr, v30, 3, 1);
    sub_838D50(v15, ptr, si128.m128i_u64[0]);
    if ( ptr != v34 )
      free(ptr);
    v20 = *v15;
    if ( !*v15 )
    {
      v23 = v15[1];
      v24 = *((_DWORD *)v23 + 3744);
      if ( v24 )
      {
        v25 = (unsigned int)(v24 - 1);
        *((_DWORD *)v23 + 3744) = v25;
        v20 = *(unsigned __int8 **)&v23[8 * v25 + 14848];
        v26 = *((unsigned int *)v20 + 134);
        v27 = *((_QWORD *)v20 + 66);
        *v20 = 0;
        *((_DWORD *)v20 + 106) = 0;
        v28 = v27 + (v26 << 6);
        while ( v27 != v28 )
        {
          while ( 1 )
          {
            v28 -= 64;
            v29 = *(void **)(v28 + 24);
            if ( v29 == (void *)(v28 + 40) )
              break;
            operator delete(v29, *(_QWORD *)(v28 + 40) + 1LL);
            if ( v27 == v28 )
              goto LABEL_24;
          }
        }
LABEL_24:
        *((_DWORD *)v20 + 134) = 0;
      }
      else
      {
        v20 = (unsigned __int8 *)operator new(0x3A0u);
        *v20 = 0;
        *((_QWORD *)v20 + 12) = v20 + 112;
        *((_QWORD *)v20 + 16) = v20 + 144;
        *((_QWORD *)v20 + 20) = v20 + 176;
        *((_QWORD *)v20 + 24) = v20 + 208;
        *((_QWORD *)v20 + 28) = v20 + 240;
        *((_QWORD *)v20 + 32) = v20 + 272;
        *((_QWORD *)v20 + 36) = v20 + 304;
        *((_QWORD *)v20 + 40) = v20 + 336;
        *((_QWORD *)v20 + 44) = v20 + 368;
        *((_QWORD *)v20 + 48) = v20 + 400;
        *((_QWORD *)v20 + 13) = 0;
        v20[112] = 0;
        *((_QWORD *)v20 + 17) = 0;
        v20[144] = 0;
        *((_QWORD *)v20 + 21) = 0;
        v20[176] = 0;
        *((_QWORD *)v20 + 25) = 0;
        v20[208] = 0;
        *((_QWORD *)v20 + 29) = 0;
        v20[240] = 0;
        *((_QWORD *)v20 + 33) = 0;
        v20[272] = 0;
        *((_QWORD *)v20 + 37) = 0;
        v20[304] = 0;
        *((_QWORD *)v20 + 41) = 0;
        v20[336] = 0;
        *((_QWORD *)v20 + 45) = 0;
        v20[368] = 0;
        *((_QWORD *)v20 + 49) = 0;
        v20[400] = 0;
        *((_QWORD *)v20 + 52) = v20 + 432;
        *((_QWORD *)v20 + 53) = 0x800000000LL;
        *((_QWORD *)v20 + 66) = v20 + 544;
        *((_QWORD *)v20 + 67) = 0x600000000LL;
      }
      *v15 = v20;
    }
    v20[*v20 + 1] = 8;
    v21 = *v15;
    v22 = **v15;
    *v21 = v22 + 1;
    *(_QWORD *)&v21[8 * v22 + 16] = a4;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
  if ( *(_DWORD *)(a1 + 964) <= 1u )
    return *(unsigned __int8 *)(a1 + 963);
  else
    return 1;
}

