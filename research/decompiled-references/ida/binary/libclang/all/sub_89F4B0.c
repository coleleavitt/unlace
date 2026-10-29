__int64 __fastcall sub_89F4B0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 *v7; // rdx
  __int64 v8; // r13
  __int64 v9; // r15
  __m128i v10; // xmm0
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned int v16; // r12d
  _BYTE *v17; // rax
  char v18; // dl
  __int64 v19; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 *v26; // rdx
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rdi
  void *v33; // [rsp+10h] [rbp-108h] BYREF
  unsigned int v34; // [rsp+18h] [rbp-100h]
  char v35; // [rsp+1Ch] [rbp-FCh]
  void *v36[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-B8h]
  char v38; // [rsp+68h] [rbp-B0h]
  __int64 v39; // [rsp+78h] [rbp-A0h]
  void *ptr; // [rsp+80h] [rbp-98h]
  __int64 v41; // [rsp+88h] [rbp-90h]
  _BYTE v42[136]; // [rsp+90h] [rbp-88h] BYREF

  v7 = (__int64 *)((*(_WORD *)(a2 + 2) >> 3) & 0x3F);
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) - 5 <= 1 )
  {
    v8 = *(_QWORD *)(a2 + 24);
    v9 = *(_QWORD *)(a2 + 16);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 41 )
    {
      v8 = *(_QWORD *)(a2 + 16);
      v9 = *(_QWORD *)(a2 + 24);
    }
    v10 = _mm_loadu_si128(a1);
    LOBYTE(v37) = a1[1].m128i_i8[0];
    *(__m128i *)v36 = v10;
    v11 = sub_871080((__int64)v36, v8, v7, a4, a5, a6);
    v15 = a1->m128i_i64[0];
    v16 = v11;
    if ( (_BYTE)v11 )
    {
      v34 = 1;
      v33 = nullptr;
      v35 = 0;
      if ( (unsigned __int8)sub_87D880(v9, (__int64)&v33, v15, v12, v13, v14) )
      {
        if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 6 )
          sub_823C50((__int64)&v33);
        v21 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL;
        v22 = *(_QWORD *)v21;
        if ( *(_BYTE *)(*(_QWORD *)v21 + 16LL) != 41 )
          v22 = sub_B0D320(v22);
        v23 = *(_QWORD *)(v22 + 32);
        LODWORD(v36[1]) = v34;
        if ( v34 > 0x40 )
          sub_2585B30(v36);
        else
          v36[0] = v33;
        v24 = a1->m128i_i64[1];
        v25 = a1->m128i_i64[0];
        BYTE4(v36[1]) = v35;
        v16 = sub_835AB0(v25, a2, v24, v23, (__int64)v36);
        if ( LODWORD(v36[1]) > 0x40 && v36[0] )
          operator delete[](v36[0]);
        goto LABEL_10;
      }
LABEL_9:
      v16 = 0;
LABEL_10:
      if ( v34 > 0x40 )
      {
        if ( v33 )
          operator delete[](v33);
      }
      return v16;
    }
    if ( *(_DWORD *)(v15 + 48) )
    {
      v17 = *(_BYTE **)(v15 + 24);
      if ( *(_BYTE *)(v15 + 962) )
      {
        *v17 = 1;
        goto LABEL_8;
      }
      v18 = *(_BYTE *)(v15 + 963);
      *v17 |= v18;
      if ( v18 )
      {
LABEL_8:
        v19 = a1->m128i_i64[0];
        v34 = 1;
        v33 = nullptr;
        v35 = 0;
        sub_87D880(v9, (__int64)&v33, v19, v12, v13, v14);
        goto LABEL_9;
      }
    }
    return v16;
  }
  if ( (unsigned __int8)v7 <= 1u )
  {
    v30 = a1->m128i_i64[0];
    v16 = 0;
    v38 |= 1u;
    v36[0] = nullptr;
    v36[1] = nullptr;
    v37 = 0;
    v39 = 0;
    ptr = v42;
    v41 = 0x800000000LL;
    v42[65] = 0;
    if ( sub_89E210(v30, a2, (__int64)v36, 1, a5, a6) )
    {
      v31 = *(_QWORD *)(a2 + 8);
      v32 = a1->m128i_i64[0];
      BYTE4(v33) &= ~1u;
      LODWORD(v33) = 0;
      v16 = sub_85F440(v32, (_DWORD *)a2, v31, (__int64)v36, (__int64)&v33, 0);
      if ( (_BYTE)v16 )
        sub_824D00(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v33);
      if ( (unsigned int)v33 > 1 )
        sub_69F740((__int64)&v33);
    }
    if ( ptr != v42 )
      free(ptr);
    return v16;
  }
  if ( (_BYTE)v7 != 32 )
  {
    v16 = 0;
    sub_827AF0(a1->m128i_i64[0], a2, 110);
    return v16;
  }
  sub_857160(a1->m128i_i64[0], *(_QWORD *)(a2 + 16));
  return sub_871080((__int64)a1, *(_QWORD *)(a2 + 24), v26, v27, v28, v29);
}

