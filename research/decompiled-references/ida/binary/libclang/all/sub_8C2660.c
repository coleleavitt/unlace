__int64 __fastcall sub_8C2660(
        __int16 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const __m128i *a7,
        __int64 a8,
        void *src,
        __int64 a10,
        unsigned __int8 a11,
        unsigned __int8 a12,
        unsigned __int8 a13)
{
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // r14d
  __int16 v17; // r11
  __int64 v20; // r8
  const __m128i *v21; // rsi
  __int16 v22; // cx
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rcx
  __int16 v27; // dx
  char v28; // cl
  __int64 v29; // rax
  __int64 v30; // rsi
  __int16 v31; // dx
  int v32; // ecx
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 result; // rax
  void *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+18h] [rbp-50h]
  _BYTE v43[57]; // [rsp+2Fh] [rbp-39h] BYREF

  v14 = a4;
  v15 = a2;
  v16 = a6;
  v17 = a2 & 0x1FF;
  v20 = *(_QWORD *)(a3 + 18920);
  v21 = a7;
  *a1 = v17 | *a1 & 0xFE00;
  if ( byte_4AD234C )
  {
    v42 = a5;
    v40 = v20;
    sub_AC4570(v15);
    v21 = a7;
    v14 = a4;
    a5 = v42;
    v20 = v40;
  }
  v22 = *(__int16 *)((char *)a1 + 1);
  *((_QWORD *)a1 + 1) = v20;
  *((_QWORD *)a1 + 6) = a5;
  *((_QWORD *)a1 + 5) = v14;
  v23 = (a10 - (__int64)src) >> 3;
  *(__int16 *)((char *)a1 + 1) = v22 & 0xF801 | 2;
  v24 = _mm_loadu_si128(v21);
  v25 = (unsigned int)v23;
  v26 = v21[1].m128i_i64[0];
  *((_DWORD *)a1 + 1) = v23;
  *((__m128i *)a1 + 1) = v24;
  *((_QWORD *)a1 + 4) = v26;
  if ( a8 )
  {
    *((_BYTE *)a1 + 2) |= 8u;
    if ( !(_DWORD)v23 )
      goto LABEL_5;
  }
  else if ( v16 )
  {
    *((_BYTE *)a1 + 2) |= 8u;
    if ( !(_DWORD)v23 )
    {
LABEL_23:
      if ( (a1[1] & 8) != 0 )
      {
        v38 = 4LL * *((unsigned int *)a1 + 1);
        v39 = (__int64)&a1[v38 + 32];
        if ( (*a1 & 0x1FF) != 0x19 )
          v39 = (__int64)&a1[v38 + 40];
      }
      else
      {
        v39 = 0;
      }
      sub_B00030(v39, v16);
      goto LABEL_9;
    }
  }
  else
  {
    *((_BYTE *)a1 + 2) &= ~8u;
    if ( !(_DWORD)v23 )
      goto LABEL_9;
  }
  v36 = a1 + 40;
  if ( (*a1 & 0x1FF) == 0x19 )
    v36 = a1 + 32;
  memcpy(v36, src, 8LL * (unsigned int)v23);
  if ( a8 )
  {
    v25 = *((unsigned int *)a1 + 1);
LABEL_5:
    v27 = *a1;
    v28 = *((_BYTE *)a1 + 2);
    v29 = 8 * v25;
    v43[0] = 0;
    v30 = v29 + 64;
    v31 = v27 & 0x1FF;
    v32 = v28 & 8;
    if ( v32 )
    {
      v33 = (__int64)a1 + v30;
      if ( v31 == 25 )
      {
LABEL_7:
        v34 = (__int64)&a1[8 * ((v32 & 8) != 0)] + v30;
LABEL_8:
        sub_B00050(v33, v16, a8, v34, v43);
        goto LABEL_9;
      }
      v37 = v29 + 80;
      v33 = (__int64)a1 + v37;
    }
    else
    {
      v33 = 0;
      if ( v31 == 25 )
        goto LABEL_7;
      v37 = v29 + 80;
    }
    v34 = (__int64)&a1[8 * ((v32 & 8) != 0)] + v37;
    goto LABEL_8;
  }
  if ( v16 )
    goto LABEL_23;
LABEL_9:
  result = sub_76CC10((const __m128i *)a1, a11, a12, a13, v20, a6);
  *((_BYTE *)a1 + 1) = ((_BYTE)result << 6) | *((_BYTE *)a1 + 1) & 0x3F;
  *((_BYTE *)a1 + 2) = ((unsigned __int8)result >> 2) & 7 | a1[1] & 0xF8;
  if ( (result & 4) != 0 )
  {
    result = *(_QWORD *)(a3 + 18912);
    *((_QWORD *)a1 + 1) = result;
  }
  return result;
}

