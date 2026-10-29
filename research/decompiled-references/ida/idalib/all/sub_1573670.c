__int64 __fastcall sub_1573670(const __m128i *a1, int a2, char a3)
{
  __int64 v5; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 *v11; // rdi
  __int64 v12; // r14
  unsigned __int8 *v13; // rbx
  unsigned __int8 *v14; // rdx
  __int64 v15; // rax
  unsigned __int8 *v16; // rbx
  unsigned __int8 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // r13
  __int64 v29; // rbp
  void *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // r15
  __int64 v34; // rbp
  void *v35; // rdi
  __m128i v36; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+10h] [rbp-98h]
  unsigned __int8 *v38; // [rsp+20h] [rbp-88h] BYREF
  __int64 v39; // [rsp+28h] [rbp-80h]

  v5 = a1[2].m128i_i64[0];
  v36 = _mm_loadu_si128(a1 + 1);
  v37 = v5;
  if ( (_WORD)v5 != 5 )
  {
    if ( sub_10CCDE0(v5) )
      return 0;
    if ( (unsigned __int16)v5 <= 0x13u )
    {
      v19 = 982656;
      if ( _bittest64(&v19, (unsigned __int16)v5) )
        return 0;
    }
    if ( (_WORD)v5 == 1
      || (((_WORD)v5 - 8) & 0xFFF7) == 0
      || !v36.m128i_i64[1]
      || !sub_FDE0B0((_WORD *)v36.m128i_i64[1], *(_QWORD *)(a1->m128i_i64[1] + 56)) )
    {
      return 0;
    }
  }
  v7 = a1->m128i_i64[1];
  v8 = *(_QWORD *)(v7 + 2944);
  v9 = v8 >= *(unsigned int *)(v7 + 2912) ? sub_14180A0(v7, 1u) : *(_QWORD *)(v7 + 2904) + 24 * v8;
  if ( *(_WORD *)(v9 + 16) != 62 )
    return 0;
  v10 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v10, a1[1].m128i_i32);
  v11 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v11, a1[1].m128i_i32);
  if ( (_WORD)v37 != 5 )
  {
LABEL_12:
    v12 = 0;
    sub_1564840((__int64)&v38, (__int64)a1, v36.m128i_i32, 1530);
    if ( (unsigned __int16)(v37 - 7) > 0xCu && (_WORD)v37 != 1 )
      v12 = v36.m128i_i64[1];
    v13 = v38;
    if ( !v38 )
    {
      v24 = v39;
      v25 = *(_DWORD *)(v39 + 14976);
      if ( v25 )
      {
        v31 = (unsigned int)(v25 - 1);
        *(_DWORD *)(v39 + 14976) = v31;
        v13 = *(unsigned __int8 **)(v24 + 8 * v31 + 14848);
        v32 = *((unsigned int *)v13 + 134);
        *v13 = 0;
        v33 = *((_QWORD *)v13 + 66);
        *((_DWORD *)v13 + 106) = 0;
        v34 = v33 + (v32 << 6);
        while ( v33 != v34 )
        {
          while ( 1 )
          {
            v34 -= 64;
            v35 = *(void **)(v34 + 24);
            if ( v35 == (void *)(v34 + 40) )
              break;
            operator delete(v35);
            if ( v33 == v34 )
              goto LABEL_50;
          }
        }
LABEL_50:
        *((_DWORD *)v13 + 134) = 0;
      }
      else
      {
        v13 = (unsigned __int8 *)operator new(0x3A0u);
        *v13 = 0;
        *((_QWORD *)v13 + 12) = v13 + 112;
        *((_QWORD *)v13 + 16) = v13 + 144;
        *((_QWORD *)v13 + 20) = v13 + 176;
        *((_QWORD *)v13 + 24) = v13 + 208;
        *((_QWORD *)v13 + 28) = v13 + 240;
        *((_QWORD *)v13 + 32) = v13 + 272;
        *((_QWORD *)v13 + 36) = v13 + 304;
        *((_QWORD *)v13 + 40) = v13 + 336;
        *((_QWORD *)v13 + 44) = v13 + 368;
        *((_QWORD *)v13 + 48) = v13 + 400;
        *((_QWORD *)v13 + 52) = v13 + 432;
        *((_QWORD *)v13 + 13) = 0;
        v13[112] = 0;
        *((_QWORD *)v13 + 17) = 0;
        v13[144] = 0;
        *((_QWORD *)v13 + 21) = 0;
        v13[176] = 0;
        *((_QWORD *)v13 + 25) = 0;
        v13[208] = 0;
        *((_QWORD *)v13 + 29) = 0;
        v13[240] = 0;
        *((_QWORD *)v13 + 33) = 0;
        v13[272] = 0;
        *((_QWORD *)v13 + 37) = 0;
        v13[304] = 0;
        *((_QWORD *)v13 + 41) = 0;
        v13[336] = 0;
        *((_QWORD *)v13 + 45) = 0;
        v13[368] = 0;
        *((_QWORD *)v13 + 49) = 0;
        v13[400] = 0;
        *((_QWORD *)v13 + 53) = 0x800000000LL;
        *((_QWORD *)v13 + 66) = v13 + 544;
        *((_QWORD *)v13 + 67) = 0x600000000LL;
      }
      v38 = v13;
    }
    v13[*v13 + 1] = 5;
    v14 = v38;
    v15 = *v38;
    *v38 = v15 + 1;
    *(_QWORD *)&v14[8 * v15 + 16] = v12;
    sub_1573010(&v38, a3);
    v16 = v38;
    if ( !v38 )
    {
      v22 = v39;
      v23 = *(_DWORD *)(v39 + 14976);
      if ( v23 )
      {
        v26 = (unsigned int)(v23 - 1);
        *(_DWORD *)(v39 + 14976) = v26;
        v16 = *(unsigned __int8 **)(v22 + 8 * v26 + 14848);
        v27 = *((unsigned int *)v16 + 134);
        *v16 = 0;
        v28 = *((_QWORD *)v16 + 66);
        *((_DWORD *)v16 + 106) = 0;
        v29 = v28 + (v27 << 6);
        while ( v28 != v29 )
        {
          while ( 1 )
          {
            v29 -= 64;
            v30 = *(void **)(v29 + 24);
            if ( v30 == (void *)(v29 + 40) )
              break;
            operator delete(v30);
            if ( v28 == v29 )
              goto LABEL_45;
          }
        }
LABEL_45:
        *((_DWORD *)v16 + 134) = 0;
      }
      else
      {
        v16 = (unsigned __int8 *)operator new(0x3A0u);
        *v16 = 0;
        *((_QWORD *)v16 + 12) = v16 + 112;
        *((_QWORD *)v16 + 16) = v16 + 144;
        *((_QWORD *)v16 + 20) = v16 + 176;
        *((_QWORD *)v16 + 24) = v16 + 208;
        *((_QWORD *)v16 + 28) = v16 + 240;
        *((_QWORD *)v16 + 32) = v16 + 272;
        *((_QWORD *)v16 + 36) = v16 + 304;
        *((_QWORD *)v16 + 40) = v16 + 336;
        *((_QWORD *)v16 + 44) = v16 + 368;
        *((_QWORD *)v16 + 48) = v16 + 400;
        *((_QWORD *)v16 + 52) = v16 + 432;
        *((_QWORD *)v16 + 13) = 0;
        v16[112] = 0;
        *((_QWORD *)v16 + 17) = 0;
        v16[144] = 0;
        *((_QWORD *)v16 + 21) = 0;
        v16[176] = 0;
        *((_QWORD *)v16 + 25) = 0;
        v16[208] = 0;
        *((_QWORD *)v16 + 29) = 0;
        v16[240] = 0;
        *((_QWORD *)v16 + 33) = 0;
        v16[272] = 0;
        *((_QWORD *)v16 + 37) = 0;
        v16[304] = 0;
        *((_QWORD *)v16 + 41) = 0;
        v16[336] = 0;
        *((_QWORD *)v16 + 45) = 0;
        v16[368] = 0;
        *((_QWORD *)v16 + 49) = 0;
        v16[400] = 0;
        *((_QWORD *)v16 + 53) = 0x800000000LL;
        *((_QWORD *)v16 + 66) = v16 + 544;
        *((_QWORD *)v16 + 67) = 0x600000000LL;
      }
      v38 = v16;
    }
    v16[*v16 + 1] = 2;
    v17 = v38;
    v18 = *v38;
    *v38 = v18 + 1;
    *(_QWORD *)&v17[8 * v18 + 16] = 1;
    sub_AEA040((__int64)&v38);
    return 0;
  }
  v20 = *(__int64 **)(v36.m128i_i64[1] + 16);
  v21 = *v20;
  if ( a2 == 5 )
  {
    if ( (_DWORD)v21 != 3 || *((_WORD *)v20 + 8) != 30062 || *((_BYTE *)v20 + 18) != 109 )
      goto LABEL_12;
  }
  else if ( a2 == 6 )
  {
    if ( (_DWORD)v21 != 6 || *((_DWORD *)v20 + 4) != 1735288172 || *((_WORD *)v20 + 10) != 26740 )
      goto LABEL_12;
  }
  else if ( (_DWORD)v21 != 5 || *((_DWORD *)v20 + 4) != 1668444006 || *((_BYTE *)v20 + 20) != 101 )
  {
    goto LABEL_12;
  }
  return 1;
}
