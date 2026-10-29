__int64 __fastcall sub_85F440(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  unsigned int v10; // r14d
  unsigned int v11; // ecx
  unsigned __int64 v13; // r13
  __int16 v14; // si
  __int64 v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // r8
  unsigned __int8 **v18; // rax
  unsigned int v19; // eax
  unsigned __int64 v20; // rbp
  __int64 v21; // rax
  __int64 *v22; // r14
  __int8 v23; // r13
  unsigned int v24; // eax
  __int64 v25; // r8
  bool v26; // cl
  __int64 v27; // rax
  unsigned int v28; // eax
  unsigned __int8 v30; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v31; // [rsp+8h] [rbp-D0h]
  __int64 v33; // [rsp+10h] [rbp-C8h]
  bool v34; // [rsp+10h] [rbp-C8h]
  bool v35; // [rsp+10h] [rbp-C8h]
  __m128i v36; // [rsp+20h] [rbp-B8h] BYREF
  __int64 *v37; // [rsp+30h] [rbp-A8h]
  __int64 v38; // [rsp+38h] [rbp-A0h]
  __m128i v39; // [rsp+40h] [rbp-98h] BYREF
  __int64 v40; // [rsp+50h] [rbp-88h]
  __int64 v41; // [rsp+58h] [rbp-80h]
  __int64 v42; // [rsp+60h] [rbp-78h] BYREF
  _DWORD *v43; // [rsp+68h] [rbp-70h]
  __int64 v44; // [rsp+70h] [rbp-68h]
  unsigned int v45; // [rsp+78h] [rbp-60h]

  if ( (*(_BYTE *)(a4 + 24) & 1) != 0 )
    return 0;
  v10 = a6;
  if ( !*(_QWORD *)a4 )
    goto LABEL_4;
  if ( (*(_QWORD *)a4 & 3LL) != 1 )
    goto LABEL_4;
  v13 = *(_QWORD *)a4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v13 || (unsigned int)sub_69F3D0(a4) || (a3 & 4) != 0 || (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
    goto LABEL_4;
  v14 = *(_WORD *)v13 & 0x1FF;
  if ( v14 == 77 )
  {
    BYTE4(v42) &= ~1u;
    LODWORD(v42) = 0;
    if ( (unsigned __int8)sub_856400((__int64)&v42, a1, *(_QWORD *)(v13 + 32)) )
    {
      v15 = *(_QWORD *)(v13 + 8);
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 2) > 4u
        || (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 2) <= 4u )
      {
        goto LABEL_16;
      }
      if ( (unsigned __int8)sub_B05C30(v15, *(_QWORD *)(a1 + 16)) )
      {
        v15 = *(_QWORD *)(v13 + 8);
LABEL_16:
        v16 = _mm_loadu_si128((const __m128i *)a4);
        v38 = v15;
        v37 = &v42;
        v39.m128i_i64[0] = a1;
        v39.m128i_i64[1] = (__int64)a2;
        v40 = a5;
        LODWORD(v41) = v10;
        v36 = v16;
        v11 = sub_851190(a1, (__int64)a2, &v36, a4 + 24, (__int64)&v39);
        goto LABEL_17;
      }
      sub_A2E130(a1, a2, 110, 0);
      v19 = sub_8124E0(v13);
      sub_A2DD70(a1, v19, 105);
    }
    v11 = 0;
LABEL_17:
    if ( (unsigned int)v42 > 1 )
    {
      v30 = v11;
      sub_69F740((__int64)&v42);
      return v30;
    }
    return v11;
  }
  if ( v14 != 10 && v14 != 19 )
  {
LABEL_4:
    sub_83CB20(&v39, a1, a2, v10, (__m128i *)a4, a3);
    if ( (v41 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
    {
      v42 = a1;
      v43 = a2;
      v44 = a5;
      v45 = v10;
      return (unsigned int)sub_851190(a1, (__int64)a2, &v39, a4 + 24, (__int64)&v42);
    }
    return 0;
  }
  if ( !*(_DWORD *)(a4 + 56) )
  {
LABEL_29:
    sub_A2E130(a1, a2, 110, 0);
    return 0;
  }
  if ( sub_820300(a4 + 24) )
  {
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
    {
      v18 = (unsigned __int8 **)sub_A2E130(a1, a2, 2169, 0);
      if ( v18 )
        sub_823450(v18, a6);
      return 0;
    }
    goto LABEL_29;
  }
  if ( v14 == 19 )
  {
    if ( *(char *)(v13 + 2) >= 0 )
      BUG();
    v17 = *(_QWORD *)(v13 + 16);
  }
  v33 = v17;
  v20 = **(_QWORD **)(a4 + 48);
  v21 = sub_6D9A50(*(_QWORD **)(a1 + 16), *(_QWORD *)(v17 + 8));
  if ( !v21 || (unsigned int)*(unsigned __int8 *)(v21 + 16) - 2 > 1 )
    BUG();
  v22 = (__int64 *)(*(_QWORD *)(v21 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v23 = sub_B0FF70(*v22);
  v24 = sub_6F6DE0(*(_QWORD *)(a1 + 16), *v22);
  v25 = v33;
  v26 = v14 == 10 || v14 == 19;
  LODWORD(v43) = v24;
  if ( v24 > 0x40 )
  {
    sub_2585A50(&v42, 0, 0);
    v26 = v14 == 10 || v14 == 19;
    v25 = v33;
  }
  else
  {
    v42 = 0;
  }
  BYTE4(v43) = v23;
  if ( v20 < *(unsigned int *)(v25 + 16) )
  {
    if ( ((*(_WORD *)(v25 + 2) >> 6) & 7) == 2 )
    {
      v28 = *(unsigned __int16 *)(v25 + 2 * v20 + 4LL * *(unsigned int *)(v25 + 4) + 20);
    }
    else
    {
      v27 = *(unsigned int *)(v25 + 4);
      if ( ((*(_WORD *)(v25 + 2) >> 6) & 7) == 4 )
        v28 = *(_DWORD *)(v25 + 4 * (v20 + v27) + 20);
      else
        v28 = *(unsigned __int8 *)(v20 + v25 + 4 * v27 + 20);
    }
    v35 = v26;
    sub_821DE0(&v42, v28);
    v23 = BYTE4(v43);
    v26 = v35;
  }
  v34 = v26;
  v39.m128i_i8[12] = v23;
  v39.m128i_i32[2] = (int)v43;
  v39.m128i_i64[0] = v42;
  sub_835320((__int64)&v42, v39.m128i_i64);
  sub_6A01B0(a5, (__int64)&v42);
  v11 = v34;
  if ( (unsigned int)v42 > 1 )
  {
    sub_69F740((__int64)&v42);
    v11 = v34;
  }
  if ( v39.m128i_i32[2] > 0x40u && v39.m128i_i64[0] )
  {
    v31 = v11;
    operator delete[]((void *)v39.m128i_i64[0]);
    return v31;
  }
  return v11;
}

