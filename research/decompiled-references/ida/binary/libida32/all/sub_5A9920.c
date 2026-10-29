unsigned __int64 __fastcall sub_5A9920(int *a1, const __m128i *a2, __int64 a3)
{
  int v4; // eax
  __m128i v5; // xmm0
  int v7; // r13d
  int v8; // eax
  int v9; // r12d
  int v10; // eax
  unsigned __int64 v11; // rsi
  __int16 v12; // ax
  int v13; // r12d
  int v14; // eax
  unsigned __int64 v15; // rsi
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rsi
  int v24; // eax
  unsigned __int64 v25; // rsi
  unsigned __int16 v26; // ax
  int v27; // eax
  unsigned __int16 v28; // ax
  unsigned __int64 v29; // rsi
  unsigned __int16 v30; // ax
  unsigned __int64 v31; // rsi
  unsigned __int16 v32; // ax
  int v33; // eax
  unsigned __int16 v34; // ax
  int v35; // eax
  __int64 v36; // [rsp+0h] [rbp-58h] BYREF
  int v37[2]; // [rsp+8h] [rbp-50h]
  int v38; // [rsp+10h] [rbp-48h]
  int v39[2]; // [rsp+18h] [rbp-40h]
  int v40; // [rsp+20h] [rbp-38h]
  int v41; // [rsp+28h] [rbp-30h]
  int v42; // [rsp+30h] [rbp-28h]
  int v43; // [rsp+38h] [rbp-20h]
  int v44; // [rsp+40h] [rbp-18h]
  int v45; // [rsp+48h] [rbp-10h]
  __int64 v46; // [rsp+50h] [rbp-8h]

  *(_QWORD *)v39 = __readfsqword(0x28u);
  v4 = sub_6180E0(qword_2CA1698);
  if ( (dword_2CA24C8 & 0x40) != 0 )
  {
    *(_QWORD *)a1 = 0;
    *((_QWORD *)a1 + 14) = 0;
    memset(
      (void *)((unsigned __int64)(a1 + 2) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)a1 - (((_DWORD)a1 + 8) & 0xFFFFFFF8) + 120) >> 3));
    v5 = _mm_loadu_si128(a2);
    a1[9] = -1;
    *(__m128i *)a1 = v5;
    return *(_QWORD *)v39 - __readfsqword(0x28u);
  }
  *(_QWORD *)v37 = a3;
  v7 = v4;
  v36 = (__int64)a2;
  v8 = unpack_dd(&v36);
  *a1 = v8;
  v9 = v8;
  v10 = unpack_dd(&v36);
  v11 = *(_QWORD *)v37;
  a1[1] = v10 + v9;
  v12 = unpack_dw(&v36, v11);
  *((_QWORD *)a1 + 6) = 0;
  *((_QWORD *)a1 + 8) = 0;
  *((_QWORD *)a1 + 1) = (unsigned __int16)v12;
  *((_QWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 12) = 0;
  *((_QWORD *)a1 + 14) = 0;
  a1[14] = 0;
  a1[18] = 0;
  a1[22] = 0;
  a1[26] = 0;
  *((_QWORD *)a1 + 4) = 0xFFFFFFFF00000000LL;
  if ( a1 && v12 < 0 )
  {
    v13 = *a1;
    v14 = unpack_dd(&v36);
    v15 = *(_QWORD *)v37;
    a1[4] = v13 - v14;
    v16 = unpack_dw(&v36, v15);
    a1[5] = v16;
    if ( !v16 )
      a1[5] = unpack_dd(&v36);
    *((_QWORD *)a1 + 3) = 0;
    v17 = v36;
    v18 = *(_QWORD *)v37;
    goto LABEL_9;
  }
  a1[4] = unpack_dd(&v36) + v7;
  v22 = unpack_dd(&v36);
  v23 = *(_QWORD *)v37;
  a1[5] = v22;
  *((_WORD *)a1 + 12) = unpack_dw(&v36, v23);
  v24 = unpack_dd(&v36);
  v25 = *(_QWORD *)v37;
  a1[7] = v24;
  if ( (dword_2CA24C8 & 0x100000) != 0 )
  {
    v26 = unpack_dw(&v36, v25);
    v18 = *(_QWORD *)v37;
    a1[10] = v26;
    if ( (dword_2CA24C8 & 0x800) != 0 )
      goto LABEL_14;
  }
  else
  {
    v27 = unpack_dd(&v36);
    v18 = *(_QWORD *)v37;
    a1[10] = v27;
    if ( (dword_2CA24C8 & 0x800) != 0 )
      goto LABEL_14;
  }
  v28 = unpack_dw(&v36, v18);
  v29 = *(_QWORD *)v37;
  a1[14] = v28;
  v30 = unpack_dw(&v36, v29);
  v31 = *(_QWORD *)v37;
  a1[18] = v30;
  v32 = unpack_dw(&v36, v31);
  v18 = *(_QWORD *)v37;
  a1[22] = v32;
  if ( (dword_2CA24C8 & 0x8000) != 0 )
  {
    if ( v36 >= v18 )
      return *(_QWORD *)v39 - __readfsqword(0x28u);
    v17 = ++v36;
    goto LABEL_9;
  }
  v33 = unpack_dd(&v36);
  v18 = *(_QWORD *)v37;
  a1[9] = v33 - 1;
  if ( (dword_2CA24C8 & 0x10000) == 0 )
  {
    v34 = unpack_dw(&v36, v18);
    v18 = *(_QWORD *)v37;
    a1[26] = v34;
    if ( (dword_2CA24C8 & 0x20000) == 0 )
    {
      v35 = unpack_dd(&v36);
      v18 = *(_QWORD *)v37;
      a1[8] = v35;
      v17 = v36;
      goto LABEL_9;
    }
  }
LABEL_14:
  v17 = v36;
LABEL_9:
  if ( v17 < v18 )
  {
    v19 = *((_QWORD *)a1 + 1);
    v20 = unpack_dq(&v36, v18);
    *((_QWORD *)a1 + 1) = v20;
    if ( (unsigned __int16)v20 != v19 )
    {
      sub_82BC50(
        "%a: function data are in conflicting state\n",
        v36,
        v37[0],
        v38,
        v39[0],
        v40,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      v21 = *((_QWORD *)a1 + 1);
      LOWORD(v21) = 0;
      *((_QWORD *)a1 + 1) = v19 | v21;
    }
  }
  return *(_QWORD *)v39 - __readfsqword(0x28u);
}

