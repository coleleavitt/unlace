__int64 __fastcall sub_C70460(
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
  __int64 v15; // r11
  const __m128i *v16; // rdx
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int16 v21; // cx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int16 v24; // cx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 result; // rax
  void *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rdi
  unsigned int v31; // [rsp+0h] [rbp-68h]
  __int64 v32; // [rsp+0h] [rbp-68h]
  __int64 v33; // [rsp+8h] [rbp-60h]
  __int64 v34; // [rsp+10h] [rbp-58h]
  unsigned int v35; // [rsp+1Ch] [rbp-4Ch]
  _BYTE v36[57]; // [rsp+2Fh] [rbp-39h] BYREF

  v15 = *(_QWORD *)(a3 + 19080);
  v16 = a7;
  *a1 = a2 & 0x1FF | *a1 & 0xFE00;
  if ( unk_2CAD564 )
  {
    v35 = a6;
    v34 = a5;
    v33 = a4;
    v32 = v15;
    sub_EC5E10(a2);
    v16 = a7;
    a6 = v35;
    a5 = v34;
    a4 = v33;
    v15 = v32;
  }
  v17 = *(__int16 *)((char *)a1 + 1);
  *((_QWORD *)a1 + 1) = v15;
  *(__int16 *)((char *)a1 + 1) = v17 & 0xF801 | 2;
  *((__m128i *)a1 + 1) = _mm_loadu_si128(v16);
  v18 = v16[1].m128i_i64[0];
  *((_QWORD *)a1 + 5) = a4;
  v19 = (a10 - (__int64)src) >> 3;
  *((_QWORD *)a1 + 4) = v18;
  *((_QWORD *)a1 + 6) = a5;
  v20 = (unsigned int)v19;
  *((_DWORD *)a1 + 1) = v19;
  if ( a8 )
  {
    *((_BYTE *)a1 + 2) |= 8u;
    if ( !(_DWORD)v19 )
      goto LABEL_5;
  }
  else if ( (_DWORD)a6 )
  {
    *((_BYTE *)a1 + 2) |= 8u;
    if ( !(_DWORD)v19 )
    {
LABEL_21:
      if ( (*(_QWORD *)a1 & 0x80000LL) != 0 )
      {
        v29 = 4LL * *((unsigned int *)a1 + 1);
        v30 = (__int64)&a1[v29 + 40];
        if ( (*a1 & 0x1FF) == 0x18 )
          v30 = (__int64)&a1[v29 + 32];
      }
      else
      {
        v30 = 0;
      }
      sub_EFA990(v30, (unsigned int)a6);
      goto LABEL_9;
    }
  }
  else
  {
    *((_BYTE *)a1 + 2) &= ~8u;
    if ( !(_DWORD)v19 )
      goto LABEL_9;
  }
  v28 = a1 + 40;
  v31 = a6;
  if ( (*a1 & 0x1FF) == 0x18 )
    v28 = a1 + 32;
  memcpy(v28, src, 8LL * (unsigned int)v19);
  a6 = v31;
  if ( a8 )
  {
    v20 = *((unsigned int *)a1 + 1);
LABEL_5:
    v21 = *a1;
    v22 = *(_QWORD *)a1;
    v36[0] = 0;
    v23 = 4 * v20;
    v24 = v21 & 0x1FF;
    if ( (v22 & 0x80000) != 0 )
    {
      v25 = (__int64)&a1[v23 + 32];
      if ( v24 == 24 )
      {
LABEL_7:
        v26 = (__int64)&a1[v23 + 32] + ((v22 >> 15) & 0x10);
LABEL_8:
        sub_EFA9B0(v25, (unsigned int)a6, a8, v26, v36);
        goto LABEL_9;
      }
      v25 = (__int64)&a1[v23 + 40];
    }
    else
    {
      v25 = 0;
      if ( v24 == 24 )
        goto LABEL_7;
    }
    v26 = (__int64)&a1[v23 + 40] + ((v22 >> 15) & 0x10);
    goto LABEL_8;
  }
  if ( v31 )
    goto LABEL_21;
LABEL_9:
  result = sub_B411D0((const __m128i *)a1, a11, a12, a13, a5, a6);
  *((_BYTE *)a1 + 1) = ((_BYTE)result << 6) | *((_BYTE *)a1 + 1) & 0x3F;
  *((_BYTE *)a1 + 2) = ((unsigned __int8)result >> 2) & 7 | a1[1] & 0xF8;
  if ( (result & 4) != 0 )
  {
    result = *(_QWORD *)(a3 + 19072);
    *((_QWORD *)a1 + 1) = result;
  }
  return result;
}

