__int64 __fastcall sub_9C1A20(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int8 **v8; // rbp
  int v9; // eax
  __int64 v10; // r15
  unsigned __int8 *v11; // r12
  __int64 v12; // r15
  unsigned __int8 *v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 (*v16)(void); // rax
  _QWORD *v17; // rdi
  __int64 (*v18)(void); // rdx
  _QWORD *v19; // rdi
  _QWORD **v20; // rdi
  unsigned __int8 *v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // r13
  void *v28; // rdi
  unsigned int v29; // [rsp+Ch] [rbp-7Ch]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __m128i si128; // [rsp+18h] [rbp-70h]
  _BYTE v32[96]; // [rsp+28h] [rbp-60h] BYREF

  v5 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v6 = sub_A2E240(a1, v5, 2262, 0);
  if ( v6 )
  {
    v7 = *a3;
    v8 = (unsigned __int8 **)v6;
    v9 = sub_2575D50(*a3);
    v10 = *a3;
    v9 *= 59;
    ptr = v32;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v29 = (v9 + 195) / 0xC4u;
    if ( v10 == sub_2575D20(v7, &ptr, (unsigned int)(v9 + 195) / 0xC4uLL) )
      sub_2584F50(a3, &ptr, v29, 3, 1);
    else
      sub_2584B70(a3, &ptr, v29, 3, 1);
    sub_838D50(v8, ptr, si128.m128i_u64[0]);
    if ( ptr != v32 )
      free(ptr);
    v11 = *v8;
    v12 = *(_QWORD *)(v5 + 8);
    if ( !*v8 )
    {
      v22 = v8[1];
      v23 = *((_DWORD *)v22 + 3744);
      if ( v23 )
      {
        v24 = (unsigned int)(v23 - 1);
        *((_DWORD *)v22 + 3744) = v24;
        v11 = *(unsigned __int8 **)&v22[8 * v24 + 14848];
        v25 = *((unsigned int *)v11 + 134);
        v26 = *((_QWORD *)v11 + 66);
        *v11 = 0;
        *((_DWORD *)v11 + 106) = 0;
        v27 = v26 + (v25 << 6);
        while ( v26 != v27 )
        {
          while ( 1 )
          {
            v27 -= 64;
            v28 = *(void **)(v27 + 24);
            if ( v28 == (void *)(v27 + 40) )
              break;
            operator delete(v28, *(_QWORD *)(v27 + 40) + 1LL);
            if ( v26 == v27 )
              goto LABEL_21;
          }
        }
LABEL_21:
        *((_DWORD *)v11 + 134) = 0;
      }
      else
      {
        v11 = (unsigned __int8 *)operator new(0x3A0u);
        *v11 = 0;
        *((_QWORD *)v11 + 12) = v11 + 112;
        *((_QWORD *)v11 + 16) = v11 + 144;
        *((_QWORD *)v11 + 20) = v11 + 176;
        *((_QWORD *)v11 + 24) = v11 + 208;
        *((_QWORD *)v11 + 28) = v11 + 240;
        *((_QWORD *)v11 + 32) = v11 + 272;
        *((_QWORD *)v11 + 36) = v11 + 304;
        *((_QWORD *)v11 + 40) = v11 + 336;
        *((_QWORD *)v11 + 44) = v11 + 368;
        *((_QWORD *)v11 + 48) = v11 + 400;
        *((_QWORD *)v11 + 13) = 0;
        v11[112] = 0;
        *((_QWORD *)v11 + 17) = 0;
        v11[144] = 0;
        *((_QWORD *)v11 + 21) = 0;
        v11[176] = 0;
        *((_QWORD *)v11 + 25) = 0;
        v11[208] = 0;
        *((_QWORD *)v11 + 29) = 0;
        v11[240] = 0;
        *((_QWORD *)v11 + 33) = 0;
        v11[272] = 0;
        *((_QWORD *)v11 + 37) = 0;
        v11[304] = 0;
        *((_QWORD *)v11 + 41) = 0;
        v11[336] = 0;
        *((_QWORD *)v11 + 45) = 0;
        v11[368] = 0;
        *((_QWORD *)v11 + 49) = 0;
        v11[400] = 0;
        *((_QWORD *)v11 + 52) = v11 + 432;
        *((_QWORD *)v11 + 53) = 0x800000000LL;
        *((_QWORD *)v11 + 66) = v11 + 544;
        *((_QWORD *)v11 + 67) = 0x600000000LL;
      }
      *v8 = v11;
    }
    v11[*v11 + 1] = 8;
    v13 = *v8;
    v14 = **v8;
    *v13 = v14 + 1;
    *(_QWORD *)&v13[8 * v14 + 16] = v12;
  }
  v15 = *(_QWORD **)(a1 + 24);
  v16 = *(__int64 (**)(void))(*v15 + 32LL);
  if ( (char *)v16 != (char *)sub_8D7FC0 )
    return v16();
  v17 = (_QWORD *)v15[3];
  v18 = *(__int64 (**)(void))(*v17 + 32LL);
  if ( v18 == v16 )
  {
    v19 = (_QWORD *)v17[3];
    v16 = *(__int64 (**)(void))(*v19 + 32LL);
    if ( v16 != v18 )
      return v16();
    v20 = (_QWORD **)v19[3];
    v18 = (__int64 (*)(void))(*v20)[4];
    if ( v18 == v16 )
    {
      v16 = *(__int64 (**)(void))(*v20[3] + 32LL);
      return v16();
    }
  }
  return v18();
}

