__int64 __fastcall sub_1536E10(const __m128i *a1, unsigned int a2, char a3, __m128i a4, __m128 a5)
{
  __int64 v8; // r13
  __int16 v9; // ax
  __int64 v10; // rbp
  __int64 v11; // rax
  int *m128i_i32; // rsi
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int8 *v17; // rbx
  _QWORD *v18; // rdx
  __int64 v19; // rax
  _BYTE *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r12
  bool v23; // zf
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // r13
  __int64 v29; // rbp
  void *v30; // rdi
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // [rsp+8h] [rbp-160h]
  _BYTE v36[80]; // [rsp+10h] [rbp-158h] BYREF
  void *ptr; // [rsp+60h] [rbp-108h] BYREF
  __int64 v38; // [rsp+68h] [rbp-100h]
  _BYTE v39[248]; // [rsp+70h] [rbp-F8h] BYREF

  if ( a1[2].m128i_i16[0] == 24 )
  {
    v8 = sub_1533380((__int64)a1, 0, a3 == 0 ? 4202504 : 4218888);
    if ( v8 == 1 )
      return 1;
    v9 = a1[2].m128i_i16[0];
    if ( v9 == 5 )
    {
      v22 = a1[1].m128i_i64[1];
      v23 = sub_1568990(a1) == v22;
      v9 = a1[2].m128i_i16[0];
      if ( v23 )
      {
        v10 = 0;
        if ( (unsigned __int16)(v9 - 7) <= 0xCu || v9 == 1 )
          goto LABEL_6;
        goto LABEL_5;
      }
    }
    if ( v9 == 392 )
    {
LABEL_5:
      v10 = a1[1].m128i_i64[1];
LABEL_6:
      v11 = sub_1568990(a1);
      m128i_i32 = a1[1].m128i_i32;
      v13 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      if ( v11 == v10 )
      {
        sub_14634E0(v13, m128i_i32);
        v14 = sub_1533400(a1, a1[2].m128i_u32[2], a4);
      }
      else
      {
        sub_14634E0(v13, m128i_i32);
        v14 = sub_1533740((__int64)a1, a1[2].m128i_u32[2]);
      }
      if ( v14 != 1 )
        return sub_1C3CD10(a1[6].m128i_i64[0], 1, a2, v8 & 0xFFFFFFFFFFFFFFFELL, v14 & 0xFFFFFFFFFFFFFFFELL);
      return 1;
    }
    v38 = 0x1800000000LL;
    ptr = v39;
    sub_14A1D90((__int64)a1);
    if ( a1[2].m128i_i16[0] == 128 )
    {
      do
      {
        v21 = sub_1535F30((__int64)a1, a3, a4, a5);
        if ( v21 != 1 )
        {
          v31 = (unsigned int)v38;
          v32 = v21 & 0xFFFFFFFFFFFFFFFELL;
          v33 = (unsigned int)v38 + 1LL;
          if ( v33 > HIDWORD(v38) )
          {
            v35 = v32;
            sub_2237220(&ptr, v39, v33, 8);
            v31 = (unsigned int)v38;
            v32 = v35;
          }
          *((_QWORD *)ptr + v31) = v32;
          LODWORD(v38) = v38 + 1;
        }
      }
      while ( a1[2].m128i_i16[0] == 128 );
      v20 = ptr;
      if ( (_DWORD)v38 )
      {
        v34 = sub_1C3BDD0(a1[6].m128i_i64[0], a2, v8 & 0xFFFFFFFFFFFFFFFELL, ptr);
        v20 = ptr;
        v15 = v34;
      }
      else
      {
        v15 = 1;
      }
    }
    else
    {
      v15 = 1;
      sub_1564840(v36, a1, &a1[1], 1605);
      sub_AEA040((__int64)v36);
      v20 = ptr;
    }
    if ( v20 != v39 )
      free(v20);
  }
  else
  {
    sub_1564840(&ptr, a1, &a1[1], 14);
    v17 = (unsigned __int8 *)ptr;
    if ( !ptr )
    {
      v24 = v38;
      v25 = *(_DWORD *)(v38 + 14976);
      if ( v25 )
      {
        v26 = (unsigned int)(v25 - 1);
        *(_DWORD *)(v38 + 14976) = v26;
        v17 = *(unsigned __int8 **)(v24 + 8 * v26 + 14848);
        v27 = *((unsigned int *)v17 + 134);
        *v17 = 0;
        v28 = *((_QWORD *)v17 + 66);
        *((_DWORD *)v17 + 106) = 0;
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
              goto LABEL_31;
          }
        }
LABEL_31:
        *((_DWORD *)v17 + 134) = 0;
      }
      else
      {
        v17 = (unsigned __int8 *)operator new(0x3A0u);
        *v17 = 0;
        *((_QWORD *)v17 + 12) = v17 + 112;
        *((_QWORD *)v17 + 16) = v17 + 144;
        *((_QWORD *)v17 + 20) = v17 + 176;
        *((_QWORD *)v17 + 24) = v17 + 208;
        *((_QWORD *)v17 + 28) = v17 + 240;
        *((_QWORD *)v17 + 32) = v17 + 272;
        *((_QWORD *)v17 + 36) = v17 + 304;
        *((_QWORD *)v17 + 40) = v17 + 336;
        *((_QWORD *)v17 + 44) = v17 + 368;
        *((_QWORD *)v17 + 48) = v17 + 400;
        *((_QWORD *)v17 + 52) = v17 + 432;
        *((_QWORD *)v17 + 13) = 0;
        v17[112] = 0;
        *((_QWORD *)v17 + 17) = 0;
        v17[144] = 0;
        *((_QWORD *)v17 + 21) = 0;
        v17[176] = 0;
        *((_QWORD *)v17 + 25) = 0;
        v17[208] = 0;
        *((_QWORD *)v17 + 29) = 0;
        v17[240] = 0;
        *((_QWORD *)v17 + 33) = 0;
        v17[272] = 0;
        *((_QWORD *)v17 + 37) = 0;
        v17[304] = 0;
        *((_QWORD *)v17 + 41) = 0;
        v17[336] = 0;
        *((_QWORD *)v17 + 45) = 0;
        v17[368] = 0;
        *((_QWORD *)v17 + 49) = 0;
        v17[400] = 0;
        *((_QWORD *)v17 + 53) = 0x800000000LL;
        *((_QWORD *)v17 + 66) = v17 + 544;
        *((_QWORD *)v17 + 67) = 0x600000000LL;
      }
      ptr = v17;
    }
    v17[*v17 + 1] = 4;
    v18 = ptr;
    v15 = 1;
    v19 = *(unsigned __int8 *)ptr;
    *(_BYTE *)ptr = v19 + 1;
    v18[v19 + 2] = 24;
    sub_AEA040((__int64)&ptr);
  }
  return v15;
}
