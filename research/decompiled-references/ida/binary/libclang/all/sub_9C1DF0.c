__int64 __fastcall sub_9C1DF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int8 v7; // cl
  unsigned __int8 **v8; // rbp
  __int64 v9; // r15
  unsigned __int8 *v10; // r12
  unsigned __int8 *v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 (*v14)(void); // rax
  _QWORD *v15; // rdi
  __int64 (*v16)(void); // rdx
  _QWORD *v17; // rdi
  _QWORD **v18; // rdi
  unsigned __int8 *v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // r13
  void *v26; // rdi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+8h] [rbp-70h]
  _BYTE v29[96]; // [rsp+18h] [rbp-60h] BYREF

  v5 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v6 = sub_A2E240(a1, v5, 2262, 0);
  if ( v6 )
  {
    v7 = *(_BYTE *)(a3 + 12);
    ptr = v29;
    v8 = (unsigned __int8 **)v6;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    sub_2593F40(a3, (unsigned int)&ptr, 10, v7 ^ 1, 0, 1, 0);
    sub_838D50(v8, ptr, si128.m128i_u64[0]);
    if ( ptr != v29 )
      free(ptr);
    v9 = *(_QWORD *)(v5 + 8);
    v10 = *v8;
    if ( !*v8 )
    {
      v20 = v8[1];
      v21 = *((_DWORD *)v20 + 3744);
      if ( v21 )
      {
        v22 = (unsigned int)(v21 - 1);
        *((_DWORD *)v20 + 3744) = v22;
        v10 = *(unsigned __int8 **)&v20[8 * v22 + 14848];
        v23 = *((unsigned int *)v10 + 134);
        v24 = *((_QWORD *)v10 + 66);
        *v10 = 0;
        *((_DWORD *)v10 + 106) = 0;
        v25 = v24 + (v23 << 6);
        while ( v24 != v25 )
        {
          while ( 1 )
          {
            v25 -= 64;
            v26 = *(void **)(v25 + 24);
            if ( v26 == (void *)(v25 + 40) )
              break;
            operator delete(v26, *(_QWORD *)(v25 + 40) + 1LL);
            if ( v24 == v25 )
              goto LABEL_18;
          }
        }
LABEL_18:
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
        *((_QWORD *)v10 + 52) = v10 + 432;
        *((_QWORD *)v10 + 53) = 0x800000000LL;
        *((_QWORD *)v10 + 66) = v10 + 544;
        *((_QWORD *)v10 + 67) = 0x600000000LL;
      }
      *v8 = v10;
    }
    v10[*v10 + 1] = 8;
    v11 = *v8;
    v12 = **v8;
    *v11 = v12 + 1;
    *(_QWORD *)&v11[8 * v12 + 16] = v9;
  }
  v13 = *(_QWORD **)(a1 + 24);
  v14 = *(__int64 (**)(void))(*v13 + 32LL);
  if ( (char *)v14 != (char *)sub_8D7FC0 )
    return v14();
  v15 = (_QWORD *)v13[3];
  v16 = *(__int64 (**)(void))(*v15 + 32LL);
  if ( v16 == v14 )
  {
    v17 = (_QWORD *)v15[3];
    v14 = *(__int64 (**)(void))(*v17 + 32LL);
    if ( v14 != v16 )
      return v14();
    v18 = (_QWORD **)v17[3];
    v16 = (__int64 (*)(void))(*v18)[4];
    if ( v16 == v14 )
    {
      v14 = *(__int64 (**)(void))(*v18[3] + 32LL);
      return v14();
    }
  }
  return v16();
}

