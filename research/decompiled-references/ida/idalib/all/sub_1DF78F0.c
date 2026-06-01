unsigned __int64 __fastcall sub_1DF78F0(
        __int64 *a1,
        unsigned __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128i a9,
        __m128i a10,
        double a11,
        double a12,
        __m128 a13,
        __m128i a14)
{
  unsigned __int64 v14; // r14
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // r13
  const __m128i **v23; // r15
  int v24; // ebp
  int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  const __m128i *v28; // r14
  __int16 v29; // ax
  const __m128i **v30; // r13
  __int64 v32; // rax
  bool v33; // zf
  __int64 v34; // rax
  __m128i *v35; // rax
  __m128i *v36; // rax
  unsigned __int16 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128i *v41; // rax
  __int64 v42; // rbp
  int v43; // ebx
  __int64 v44; // r9
  __int64 *v45; // [rsp+0h] [rbp-78h]
  __int64 v46; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int64 v48; // [rsp+28h] [rbp-50h]
  _BYTE v49[72]; // [rsp+30h] [rbp-48h] BYREF

  v14 = 1;
  v46 = sub_1DF6720(a1, *(_WORD **)(a2 + 8), a3, a7, a8, a9, a10, a11, a12, a13, a14, a4, a5, a6);
  if ( v46 == 1 )
    return v14;
  v18 = a2 + 16;
  v19 = *(_QWORD *)(a2 + 8);
  v20 = (unsigned __int64)v49;
  v48 = 0x100000000LL;
  v21 = *(_DWORD *)a2;
  ptr = v49;
  v22 = a2 + 16 + 8LL * (v21 >> 9);
  v45 = (__int64 *)(v46 & 0xFFFFFFFFFFFFFFFELL);
  if ( a2 + 16 == v22 )
  {
    v30 = (const __m128i **)v49;
    if ( v45 != (__int64 *)v19 )
    {
LABEL_22:
      v14 = v46;
      goto LABEL_23;
    }
LABEL_45:
    v14 = a2;
    goto LABEL_23;
  }
  v23 = (const __m128i **)(a2 + 16);
  v24 = 0;
  do
  {
    while ( 1 )
    {
      v28 = *v23;
      if ( !*v23 )
        goto LABEL_10;
      v29 = v28[2].m128i_i16[2];
      if ( (unsigned __int16)v29 <= 0x5Au )
        break;
      if ( (unsigned __int16)v29 > 0x1A1u )
      {
        if ( v29 == 418 )
        {
          v35 = sub_1DC8630(a1, *v23, v20, v16, v17, v18, a7, a8);
          v33 = v28 == v35;
          v28 = v35;
          LOBYTE(v20) = !v33;
          v24 |= v20;
          goto LABEL_28;
        }
        if ( (unsigned __int16)v29 > 0x1BAu )
        {
LABEL_37:
          v36 = sub_1DC8780(a1, *v23, a7, a8, v20, v16, v17, v18);
          v33 = v28 == v36;
          v28 = v36;
          LOBYTE(v20) = !v33;
          v24 |= v20;
        }
      }
      else
      {
        if ( (unsigned __int16)v29 >= 0x140u )
          goto LABEL_28;
        if ( v29 == 91 )
        {
          v34 = sub_1DC8510(a1, (__int64)*v23, (void *)v20, v16, v17, v18, a7, a8);
          v33 = v28 == (const __m128i *)v34;
          v28 = (const __m128i *)v34;
          LOBYTE(v20) = !v33;
          v24 |= v20;
          goto LABEL_28;
        }
        if ( (unsigned __int16)v29 > 0x13Eu )
          goto LABEL_37;
      }
LABEL_28:
      if ( v28 )
        goto LABEL_6;
LABEL_9:
      v19 = *(_QWORD *)(a2 + 8);
LABEL_10:
      if ( (const __m128i **)v22 == ++v23 )
        goto LABEL_19;
    }
    if ( (unsigned __int16)v29 >= 0x37u )
      goto LABEL_28;
    if ( v29 == 45 )
    {
      v37 = sub_1DC71F0(a1, v28[2].m128i_u64[1], v20, v16, v17, v18, a7, a8);
      v41 = sub_1C66200(
              (__int64 *)*a1,
              v28,
              (_DWORD *)((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFFELL),
              a7,
              a8,
              v38,
              v39,
              v40);
      v33 = v28 == v41;
      v28 = v41;
      LOBYTE(v20) = !v33;
      v24 |= v20;
      goto LABEL_28;
    }
    if ( (unsigned __int16)v29 <= 0x2Du )
    {
      if ( (unsigned __int16)v29 > 0x2Bu )
      {
        v32 = sub_1DC8440(a1, (__int64)*v23, v20, v16, v17, v18, a7, a8);
        v33 = v28 == (const __m128i *)v32;
        v28 = (const __m128i *)v32;
        LOBYTE(v20) = !v33;
        v24 |= v20;
      }
      goto LABEL_28;
    }
    if ( v29 != 53 )
    {
      if ( (unsigned __int16)v29 > 0x35u )
      {
        LOBYTE(v25) = sub_1C650A0(*a1, v19, (unsigned __int64)v45, (__int64)*v23);
        if ( (_BYTE)v25 )
          goto LABEL_18;
LABEL_6:
        v26 = (unsigned int)v48;
        v16 = HIDWORD(v48);
        v27 = (unsigned int)v48 + 1LL;
        if ( v27 > HIDWORD(v48) )
        {
          sub_2237220(&ptr, v49, v27, 8);
          v26 = (unsigned int)v48;
        }
        v20 = (unsigned __int64)ptr;
        *((_QWORD *)ptr + v26) = v28;
        LODWORD(v48) = v48 + 1;
        goto LABEL_9;
      }
      goto LABEL_28;
    }
    LOBYTE(v25) = sub_1C661B0(*a1, v19, (unsigned __int64)v45, (__int64)*v23);
    if ( !(_BYTE)v25 )
      goto LABEL_6;
LABEL_18:
    ++v23;
    v19 = *(_QWORD *)(a2 + 8);
    v24 = v25;
  }
  while ( (const __m128i **)v22 != v23 );
LABEL_19:
  v30 = (const __m128i **)ptr;
  if ( v45 == (__int64 *)v19 && !(_BYTE)v24 )
    goto LABEL_45;
  if ( !(_DWORD)v48 )
    goto LABEL_22;
  v42 = (unsigned int)v48;
  v43 = *(_DWORD *)(a2 + 4);
  v14 = 1;
  if ( !(unsigned __int8)sub_1C5F970(*a1, ptr, (unsigned int)v48) )
    v14 = sub_1C497E0(*a1, v43, v30, v42, v45, v44, *(double *)a7.m128_u64);
  v30 = (const __m128i **)ptr;
LABEL_23:
  if ( v30 != (const __m128i **)v49 )
    free(v30);
  return v14;
}
