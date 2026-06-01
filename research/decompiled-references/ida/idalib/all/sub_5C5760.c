unsigned __int64 __fastcall sub_5C5760(__int64 *a1, const __m128i *a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int16 v15; // ax
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int16 v18; // ax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // al
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int16 v32; // ax
  int v33; // eax
  unsigned __int16 v34; // ax
  unsigned __int64 v35; // rsi
  unsigned __int16 v36; // ax
  unsigned __int64 v37; // rsi
  unsigned __int16 v38; // ax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // [rsp+0h] [rbp-58h] BYREF
  int v43[2]; // [rsp+8h] [rbp-50h]
  int v44; // [rsp+10h] [rbp-48h]
  int v45[2]; // [rsp+18h] [rbp-40h]
  int v46; // [rsp+20h] [rbp-38h]
  int v47; // [rsp+28h] [rbp-30h]
  int v48; // [rsp+30h] [rbp-28h]
  int v49; // [rsp+38h] [rbp-20h]
  int v50; // [rsp+40h] [rbp-18h]
  int v51; // [rsp+48h] [rbp-10h]
  __int64 v52; // [rsp+50h] [rbp-8h]

  *(_QWORD *)v45 = __readfsqword(0x28u);
  v5 = qword_2CCB598;
  v6 = sub_634EF0(qword_2CCB598);
  if ( (dword_2CCC3C8 & 0x40) != 0 )
  {
    *a1 = 0;
    a1[17] = 0;
    memset(
      (void *)((unsigned __int64)(a1 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)a1 - (((_DWORD)a1 + 8) & 0xFFFFFFF8) + 144) >> 3));
    v8 = _mm_loadu_si128(a2);
    *((_DWORD *)a1 + 16) = -1;
    *(__m128i *)a1 = v8;
    return *(_QWORD *)v45 - __readfsqword(0x28u);
  }
  v42 = (__int64)a2;
  v10 = v6;
  *(_QWORD *)v43 = a3;
  if ( (unsigned __int8)is_cvt64(v5, a2, v7) )
  {
    v12 = (unsigned int)unpack_dd(&v42);
    if ( v12 == 0xFFFFFFFFLL )
      v12 = -1;
  }
  else
  {
    v12 = unpack_dq(&v42);
  }
  *a1 = v12;
  if ( (unsigned __int8)is_cvt64(&v42, a3, v11) )
  {
    v13 = (unsigned int)v12 + (unsigned int)unpack_dd(&v42);
    if ( v13 == 0xFFFFFFFFLL )
      v13 = -1;
  }
  else
  {
    v13 = v12 + unpack_dq(&v42);
  }
  a1[1] = v13;
  v14 = *(_QWORD *)v43;
  v15 = unpack_dw(&v42, *(_QWORD *)v43);
  a1[9] = 0;
  a1[11] = 0;
  a1[2] = v15;
  a1[13] = 0;
  a1[15] = 0;
  a1[17] = 0;
  *((_DWORD *)a1 + 20) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 28) = 0;
  *((_DWORD *)a1 + 32) = 0;
  *((_DWORD *)a1 + 16) = -1;
  a1[7] = 0;
  if ( a1 && (v15 & 0x8000u) != 0 )
  {
    v16 = *a1;
    if ( (unsigned __int8)is_cvt64(&v42, v14, v15) )
    {
      v17 = (unsigned int)v16 - (unsigned int)unpack_dd(&v42);
      if ( v17 == 0xFFFFFFFFLL )
        v17 = -1;
    }
    else
    {
      v17 = v16 - unpack_dq(&v42);
    }
    a1[3] = v17;
    v18 = unpack_dw(&v42, *(_QWORD *)v43);
    *((_DWORD *)a1 + 8) = v18;
    if ( !v18 )
      *((_DWORD *)a1 + 8) = unpack_dd(&v42);
    a1[5] = 0;
    v19 = v42;
    v20 = *(_QWORD *)v43;
    goto LABEL_15;
  }
  v24 = is_cvt64(&v42, v14, v15);
  v25 = *(_QWORD *)v43;
  if ( v24 )
  {
    v27 = (unsigned int)unpack_dd(&v42) + (unsigned int)v10;
    if ( (unsigned int)v27 == 0xFFFFFFFFLL )
      v27 = -1;
  }
  else
  {
    v27 = unpack_dq(&v42) + v10;
  }
  a1[3] = v27;
  if ( (unsigned __int8)is_cvt64(&v42, v25, v26) )
  {
    v28 = (unsigned int)unpack_dd(&v42);
    if ( (unsigned int)v28 == 0xFFFFFFFFLL )
      v28 = -1;
  }
  else
  {
    v28 = unpack_dq(&v42);
  }
  a1[4] = v28;
  v29 = *(_QWORD *)v43;
  *((_WORD *)a1 + 20) = unpack_dw(&v42, *(_QWORD *)v43);
  if ( (unsigned __int8)is_cvt64(&v42, v29, v30) )
  {
    v31 = (unsigned int)unpack_dd(&v42);
    if ( (unsigned int)v31 == 0xFFFFFFFFLL )
      v31 = -1;
  }
  else
  {
    v31 = unpack_dq(&v42);
  }
  a1[6] = v31;
  if ( (dword_2CCC3C8 & 0x100000) == 0 )
  {
    v33 = unpack_dd(&v42);
    v20 = *(_QWORD *)v43;
    *((_DWORD *)a1 + 17) = v33;
    if ( (dword_2CCC3C8 & 0x800) != 0 )
      goto LABEL_26;
LABEL_31:
    v34 = unpack_dw(&v42, v20);
    v35 = *(_QWORD *)v43;
    *((_DWORD *)a1 + 20) = v34;
    v36 = unpack_dw(&v42, v35);
    v37 = *(_QWORD *)v43;
    *((_DWORD *)a1 + 24) = v36;
    v38 = unpack_dw(&v42, v37);
    v20 = *(_QWORD *)v43;
    *((_DWORD *)a1 + 28) = v38;
    if ( (dword_2CCC3C8 & 0x8000) != 0 )
    {
      if ( v42 >= v20 )
        return *(_QWORD *)v45 - __readfsqword(0x28u);
      v19 = ++v42;
      goto LABEL_15;
    }
    v39 = unpack_dd(&v42);
    v20 = *(_QWORD *)v43;
    *((_DWORD *)a1 + 16) = v39 - 1;
    if ( (dword_2CCC3C8 & 0x10000) == 0 )
    {
      *((_DWORD *)a1 + 32) = (unsigned __int16)unpack_dw(&v42, v20);
      if ( (dword_2CCC3C8 & 0x20000) == 0 )
      {
        if ( (unsigned __int8)is_cvt64(&v42, v20, v40) )
        {
          v41 = (unsigned int)unpack_dd(&v42);
          if ( (unsigned int)v41 == 0xFFFFFFFFLL )
            v41 = -1;
        }
        else
        {
          v41 = unpack_dq(&v42);
        }
        a1[7] = v41;
      }
      v19 = v42;
      v20 = *(_QWORD *)v43;
      goto LABEL_15;
    }
    goto LABEL_26;
  }
  v32 = unpack_dw(&v42, *(_QWORD *)v43);
  v20 = *(_QWORD *)v43;
  *((_DWORD *)a1 + 17) = v32;
  if ( (dword_2CCC3C8 & 0x800) == 0 )
    goto LABEL_31;
LABEL_26:
  v19 = v42;
LABEL_15:
  if ( v19 < v20 )
  {
    v21 = a1[2];
    v22 = unpack_dq(&v42);
    a1[2] = v22;
    if ( (unsigned __int16)v22 != v21 )
    {
      sub_84F5B0(
        "%a: function data are in conflicting state\n",
        v42,
        v43[0],
        v44,
        v45[0],
        v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      v23 = a1[2];
      LOWORD(v23) = 0;
      a1[2] = v21 | v23;
    }
  }
  return *(_QWORD *)v45 - __readfsqword(0x28u);
}
