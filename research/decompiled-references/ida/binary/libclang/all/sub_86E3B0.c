__int64 __fastcall sub_86E3B0(__m128i *a1, __int64 a2)
{
  __int16 v3; // ax
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int8 **v6; // r12
  unsigned __int8 *v7; // r13
  unsigned __int8 *v8; // rdx
  __int64 v9; // rax
  unsigned __int8 *v10; // r13
  _BOOL8 v11; // r15
  unsigned __int8 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // r14
  void *v21; // rdi
  unsigned __int8 *v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r14
  void *v28; // rdi
  __int64 v29; // [rsp+8h] [rbp-40h]

  v3 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 6 )
  {
    if ( (unsigned __int8)sub_869D30(a1, *(_QWORD *)(a2 + 16)) )
      return sub_84BEB0(a1->m128i_i64[0], a2, a1->m128i_i64[1]);
    return 0;
  }
  if ( (_BYTE)v3 == 9 )
  {
    if ( (unsigned __int8)sub_869D30(a1, *(_QWORD *)(a2 + 16)) )
      return sub_8538A0((__int64 *)a1->m128i_i64[0], a2, (__m128i *)a1->m128i_i64[1]);
    return 0;
  }
  if ( (_BYTE)v3 == 2 )
  {
    v5 = sub_A2E240(a1->m128i_i64[0], a2, 2215, 0);
    v6 = (unsigned __int8 **)v5;
    if ( v5 )
    {
      v7 = *(unsigned __int8 **)v5;
      if ( !*(_QWORD *)v5 )
      {
        v15 = *(_QWORD *)(v5 + 8);
        v16 = *(_DWORD *)(v15 + 14976);
        if ( v16 )
        {
          v17 = (unsigned int)(v16 - 1);
          *(_DWORD *)(v15 + 14976) = v17;
          v7 = *(unsigned __int8 **)(v15 + 8 * v17 + 14848);
          v18 = *((unsigned int *)v7 + 134);
          *v7 = 0;
          v19 = *((_QWORD *)v7 + 66);
          *((_DWORD *)v7 + 106) = 0;
          v20 = v19 + (v18 << 6);
          while ( v19 != v20 )
          {
            while ( 1 )
            {
              v20 -= 64;
              v21 = *(void **)(v20 + 24);
              if ( v21 == (void *)(v20 + 40) )
                break;
              operator delete(v21, *(_QWORD *)(v20 + 40) + 1LL);
              if ( v19 == v20 )
                goto LABEL_24;
            }
          }
LABEL_24:
          *((_DWORD *)v7 + 134) = 0;
        }
        else
        {
          v7 = (unsigned __int8 *)operator new(0x3A0u);
          *v7 = 0;
          *((_QWORD *)v7 + 12) = v7 + 112;
          *((_QWORD *)v7 + 16) = v7 + 144;
          *((_QWORD *)v7 + 20) = v7 + 176;
          *((_QWORD *)v7 + 24) = v7 + 208;
          *((_QWORD *)v7 + 28) = v7 + 240;
          *((_QWORD *)v7 + 32) = v7 + 272;
          *((_QWORD *)v7 + 36) = v7 + 304;
          *((_QWORD *)v7 + 40) = v7 + 336;
          *((_QWORD *)v7 + 44) = v7 + 368;
          *((_QWORD *)v7 + 48) = v7 + 400;
          *((_QWORD *)v7 + 13) = 0;
          v7[112] = 0;
          *((_QWORD *)v7 + 17) = 0;
          v7[144] = 0;
          *((_QWORD *)v7 + 21) = 0;
          v7[176] = 0;
          *((_QWORD *)v7 + 25) = 0;
          v7[208] = 0;
          *((_QWORD *)v7 + 29) = 0;
          v7[240] = 0;
          *((_QWORD *)v7 + 33) = 0;
          v7[272] = 0;
          *((_QWORD *)v7 + 37) = 0;
          v7[304] = 0;
          *((_QWORD *)v7 + 41) = 0;
          v7[336] = 0;
          *((_QWORD *)v7 + 45) = 0;
          v7[368] = 0;
          *((_QWORD *)v7 + 49) = 0;
          v7[400] = 0;
          *((_QWORD *)v7 + 52) = v7 + 432;
          *((_QWORD *)v7 + 53) = 0x800000000LL;
          *((_QWORD *)v7 + 66) = v7 + 544;
          *((_QWORD *)v7 + 67) = 0x600000000LL;
        }
        *v6 = v7;
      }
      v7[*v7 + 1] = 2;
      v8 = *v6;
      v9 = **v6;
      *v8 = v9 + 1;
      *(_QWORD *)&v8[8 * v9 + 16] = 2;
      v10 = *v6;
      v11 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 2160LL) + 1LL) & 8) != 0;
      if ( !*v6 )
      {
        v22 = v6[1];
        v23 = *((_DWORD *)v22 + 3744);
        if ( v23 )
        {
          v24 = (unsigned int)(v23 - 1);
          *((_DWORD *)v22 + 3744) = v24;
          v10 = *(unsigned __int8 **)&v22[8 * v24 + 14848];
          v25 = *((unsigned int *)v10 + 134);
          *v10 = 0;
          v26 = *((_QWORD *)v10 + 66);
          *((_DWORD *)v10 + 106) = 0;
          v27 = v26 + (v25 << 6);
          v29 = v26;
          while ( v29 != v27 )
          {
            v27 -= 64;
            v28 = *(void **)(v27 + 24);
            if ( v28 != (void *)(v27 + 40) )
              operator delete(v28, *(_QWORD *)(v27 + 40) + 1LL);
          }
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
        *v6 = v10;
      }
      v10[*v10 + 1] = 3;
      v12 = *v6;
      v13 = **v6;
      *v12 = v13 + 1;
      *(_QWORD *)&v12[8 * v13 + 16] = v11;
    }
    result = sub_869D30(a1, *(_QWORD *)(a2 + 16));
    if ( (_BYTE)result )
    {
      v14 = a1->m128i_i64[1];
      *(_BYTE *)(v14 + 24) |= 1u;
      *(_DWORD *)(v14 + 56) = 0;
      return result;
    }
    return 0;
  }
  if ( (unsigned int)(unsigned __int8)v3 - 7 > 1 )
    return sub_86E110(a1, a2);
  if ( !(unsigned __int8)sub_869D30(a1, *(_QWORD *)(a2 + 16)) )
    return 0;
  return sub_82E0E0(a1->m128i_i64[0], a2, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL), a1->m128i_i64[1]);
}

