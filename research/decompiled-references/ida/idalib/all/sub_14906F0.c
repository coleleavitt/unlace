__int64 __fastcall sub_14906F0(
        const __m128i *a1,
        int *a2,
        char a3,
        char a4,
        char a5,
        __m128i a6,
        __m128 a7,
        __int64 a8,
        __int64 (__fastcall *a9)(__int64, int *, __int64),
        __int64 a10)
{
  int *v12; // rbx
  __int16 v13; // ax
  int v14; // ecx
  __int32 v15; // ebp
  __int64 v16; // rdx
  int *m128i_i32; // rbp
  char v18; // al
  __int64 *v19; // rdi
  __int64 result; // rax
  __int64 v21; // rsi
  __int16 v22; // ax
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  int *v29; // [rsp-8h] [rbp-D0h]
  int v30; // [rsp+4h] [rbp-C4h]
  int v31; // [rsp+8h] [rbp-C0h]
  int v32; // [rsp+Ch] [rbp-BCh]
  int v33; // [rsp+20h] [rbp-A8h]
  char v36; // [rsp+29h] [rbp-9Fh]
  unsigned int v37; // [rsp+2Ch] [rbp-9Ch]
  unsigned int v38; // [rsp+2Ch] [rbp-9Ch]
  unsigned int v39; // [rsp+34h] [rbp-94h] BYREF
  __int64 v40; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int8 *v41; // [rsp+40h] [rbp-88h] BYREF
  char *v42; // [rsp+48h] [rbp-80h]
  __int64 v43; // [rsp+50h] [rbp-78h]
  char v44; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v45[2]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v46; // [rsp+78h] [rbp-50h]
  char v47; // [rsp+80h] [rbp-48h] BYREF

  v12 = a2;
  v13 = a1[2].m128i_i16[0];
  if ( (a3 & 4) != 0 )
  {
    if ( (unsigned __int16)(v13 - 406) <= 8u || (a2 = nullptr, (unsigned int)sub_155CBC0(a1, 0, 0)) )
    {
      v41 = nullptr;
      v42 = &v44;
      v45[0] = (char *)a1 + 504;
      v43 = 0x200000000LL;
      v45[1] = &v47;
      v46 = 0x200000000LL;
      sub_14AB020(a1, &v41);
      sub_147F500((__int64 *)v12 + 5, *((char **)v12 + 5), v42, &v42[8 * (unsigned int)v43]);
      a2 = (int *)v45;
      LODWORD(v43) = 0;
      sub_15D8C50(v12 + 18, v45);
      LODWORD(v46) = 0;
      sub_147A450(&v41);
    }
    v13 = a1[2].m128i_i16[0];
  }
  v30 = a3 & 8;
  v31 = a3 & 0xA;
  v14 = a3 & 1;
  v33 = a3 & 3;
  v15 = 0;
  v32 = v14;
  while ( 1 )
  {
    v40 = 0;
    v16 = a1[1].m128i_u32[0];
    v39 = 0;
    if ( (unsigned __int16)v13 <= 0x14Eu )
      break;
    if ( (unsigned __int16)v13 <= 0x17Fu )
    {
      if ( (unsigned __int16)v13 >= 0x17Cu )
      {
        a2 = v12 + 8;
        sub_147C1A0((__int64)a1, (__int64)(v12 + 8));
      }
      else if ( (unsigned __int16)v13 <= 0x169u )
      {
        if ( (unsigned __int16)v13 < 0x166u )
        {
          if ( (unsigned __int16)(v13 - 336) > 2u )
            goto LABEL_21;
          goto LABEL_45;
        }
        a2 = v12 + 8;
        sub_147C020((__int64)a1, (__int64)(v12 + 8));
      }
      else if ( v13 == 367 )
      {
        if ( !v31 )
          goto LABEL_21;
        a2 = v12 + 8;
        sub_147B980((__int64)a1, (__int64)(v12 + 8));
      }
      else
      {
        if ( v13 != 379 )
          goto LABEL_21;
        v37 = v16;
        if ( sub_141A630(0x17Bu) )
          v21 = 0;
        else
          v21 = a1[1].m128i_i64[1];
        LOBYTE(v22) = -10;
        v36 &= 0xFCu;
        HIBYTE(v22) = v36;
        v23 = sub_1479050((__int64)(v12 + 18), v21, ((unsigned __int64)v37 << 32) | v37, 0, 0, v22, 0);
        sub_147F4B0((__int64)(v12 + 10), v23);
        v24 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v24, a1[1].m128i_i32);
        a2 = v29;
      }
      goto LABEL_17;
    }
    if ( (unsigned __int16)v13 <= 0x183u )
    {
      if ( (unsigned __int16)v13 < 0x181u )
      {
        a2 = v12 + 8;
        sub_147B770((__int64)a1, (__int64)(v12 + 8));
        goto LABEL_17;
      }
      goto LABEL_55;
    }
    if ( v13 != 388 )
    {
      if ( v13 != 389 )
        goto LABEL_21;
LABEL_55:
      if ( !v30 )
        goto LABEL_21;
LABEL_53:
      a2 = v12 + 8;
      sub_147B5E0((__int64)a1, (__int64)(v12 + 8));
      goto LABEL_17;
    }
    if ( !v30 )
      goto LABEL_21;
    if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0 || !a5 || (unsigned int)sub_15AC7E0(v12) )
      goto LABEL_53;
    v26 = a1->m128i_i64[1];
    v27 = *(_QWORD *)(v26 + 2944);
    v28 = v27 >= *(unsigned int *)(v26 + 2912) ? sub_14180A0(v26, 1u) : *(_QWORD *)(v26 + 2904) + 24 * v27;
    if ( *(_WORD *)(v28 + 16) != 63 )
      goto LABEL_53;
    a2 = nullptr;
    if ( !(unsigned __int8)sub_1565920(a1, 0) )
      goto LABEL_53;
LABEL_17:
    v13 = a1[2].m128i_i16[0];
  }
  if ( (unsigned __int16)v13 >= 0x14Au )
    goto LABEL_45;
  if ( v13 == 141 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 47LL) & 0x20) == 0 )
      goto LABEL_21;
LABEL_45:
    m128i_i32 = a1[1].m128i_i32;
    sub_147BEC0((__int64)a1, (__int64)(v12 + 8));
LABEL_16:
    v19 = (__int64 *)a1->m128i_i64[1];
    a2 = m128i_i32;
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v19, m128i_i32);
    v15 = a1[2].m128i_i32[2];
    goto LABEL_17;
  }
  if ( (unsigned __int16)v13 > 0x8Du )
  {
    if ( (unsigned __int16)v13 > 0x146u )
    {
      if ( v13 != 328 )
        goto LABEL_21;
      m128i_i32 = a1[1].m128i_i32;
      if ( !(unsigned __int8)sub_15AF3B0(v12, 8, v16, &v40, &v39, *(_QWORD *)(a1->m128i_i64[1] + 56)) )
        goto LABEL_16;
      goto LABEL_42;
    }
    if ( (unsigned __int16)v13 >= 0x141u )
      goto LABEL_55;
    if ( v13 == 156 )
    {
      m128i_i32 = a1[1].m128i_i32;
      v18 = sub_15AF3B0(v12, 2, v16, &v40, &v39, *(_QWORD *)(a1->m128i_i64[1] + 56));
LABEL_15:
      if ( !v18 )
        goto LABEL_16;
LABEL_42:
      sub_1564840(&v41, a1, m128i_i32, v39);
      sub_1478320(&v41, v40);
      sub_AEA040((__int64)&v41);
      goto LABEL_16;
    }
    if ( v13 != 189 )
      goto LABEL_21;
    if ( v32 )
    {
      sub_1564840(&v41, a1, &a1[1], 1558);
      sub_AEA040((__int64)&v41);
    }
    if ( !v33 )
    {
LABEL_21:
      result = sub_15B23A0(v12, a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 248) + 17464LL);
      if ( v15 )
        v12[41] = v15;
      return result;
    }
    a2 = v12 + 8;
    sub_1490230(a1, (__int64)(v12 + 8), 0, 0, a6, a7);
    goto LABEL_17;
  }
  if ( v13 == 109 )
  {
    m128i_i32 = a1[1].m128i_i32;
    v18 = sub_15AF3B0(v12, 4, v16, &v40, &v39, *(_QWORD *)(a1->m128i_i64[1] + 56));
    goto LABEL_15;
  }
  if ( (unsigned __int16)v13 > 0x6Du )
  {
    if ( v13 == 113 )
    {
      v38 = v16;
      if ( !a4 )
        goto LABEL_21;
      m128i_i32 = a1[1].m128i_i32;
      sub_15687A0(a1, &a1[1]);
      v18 = sub_15AF3B0(v12, 16, v38, &v40, &v39, *(_QWORD *)(a1->m128i_i64[1] + 56));
      goto LABEL_15;
    }
    if ( v13 != 124 || !a4 )
      goto LABEL_21;
    a2 = v12 + 8;
    sub_1480E00((__int64)a1, (__int64)(v12 + 8));
    v15 = a1[2].m128i_i32[2];
    goto LABEL_17;
  }
  if ( v13 != 3 )
  {
    if ( v13 != 80 )
      goto LABEL_21;
    m128i_i32 = a1[1].m128i_i32;
    v18 = sub_15AF3B0(v12, 1, v16, &v40, &v39, *(_QWORD *)(a1->m128i_i64[1] + 56));
    goto LABEL_15;
  }
  v25 = a1->m128i_i64[1];
  if ( *(_QWORD *)(v25 + 760) )
  {
    *(_BYTE *)(v25 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v25 + 48) + 6LL) = 1;
  }
  a1[2].m128i_i16[0] = 1;
  if ( a9 )
    return a9(a10, a2, v16);
  else
    return sub_1709FA0(*(_QWORD *)(a1[6].m128i_i64[0] + 656), v12, v16);
}
