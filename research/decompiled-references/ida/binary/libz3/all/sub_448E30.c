__int64 __fastcall sub_448E30(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __m128i si128; // xmm0
  __int64 v5; // rdi
  char v6; // al
  __int64 *v7; // rbx
  char v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rbp
  _BYTE *v19; // rdi
  char *v20; // rcx
  char *v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rbx
  unsigned __int64 v24; // r12
  __int64 v25; // rsi
  __m128 v27; // [rsp+0h] [rbp-128h] BYREF
  __int64 v28; // [rsp+10h] [rbp-118h] BYREF
  __int64 *v29; // [rsp+18h] [rbp-110h]
  __int64 v30; // [rsp+20h] [rbp-108h] BYREF
  __int64 *v31; // [rsp+28h] [rbp-100h]
  __int64 v32; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v33[16]; // [rsp+38h] [rbp-F0h] BYREF
  __m128i v34; // [rsp+48h] [rbp-E0h]
  void *ptr; // [rsp+58h] [rbp-D0h]
  __int64 v36; // [rsp+60h] [rbp-C8h]
  _BYTE v37[192]; // [rsp+68h] [rbp-C0h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v29 = nullptr;
  v28 = v3;
  v32 = v3;
  v27 = _mm_loadh_ps((const double *)(a2 + 120));
  sub_16669D0(v33, v3);
  si128 = _mm_load_si128((const __m128i *)&v27);
  v5 = *(_QWORD *)(a2 + 24);
  ptr = v37;
  v36 = 0x1000000000LL;
  v31 = nullptr;
  v30 = v3;
  v34 = si128;
  sub_15EEF60(v5);
  v6 = sub_4AFB60(&v32, &v30, &v28);
  v7 = v31;
  v8 = v6;
  if ( v31 )
  {
    v9 = (unsigned __int64)&v31[*((unsigned int *)v31 - 1)];
    if ( (unsigned __int64)v31 >= v9 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v10 = *v7;
        if ( *v7 )
        {
          v11 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v7 >= v9 )
          goto LABEL_8;
      }
      sub_15D7BC0(v30, v10);
      ++v7;
    }
    while ( (unsigned __int64)v7 < v9 );
LABEL_8:
    v7 = v31;
    if ( v31 )
LABEL_9:
      sub_186B220(v7 - 1);
  }
  if ( v8 )
  {
    v12 = *(_QWORD *)(a2 + 16);
    v13 = v28;
    if ( v29 )
      v14 = *((unsigned int *)v29 - 1);
    else
      v14 = 0;
    v27.m128_u64[0] = a2 + 40;
    v15 = sub_15EC1C0(v28, v14);
    v16 = v27.m128_u64[0];
    v17 = v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v18 = sub_405720(v12 + 136, *(_QWORD *)(a2 + 8), *(_WORD *)(a2 + 72), *(_WORD *)(a2 + 74), v15, v16);
    if ( v17 )
    {
      v11 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v13, v17);
    }
  }
  else
  {
    v18 = 0;
  }
  v19 = ptr;
  v20 = (char *)ptr + 8 * (unsigned int)v36;
  v21 = (char *)ptr;
  if ( ptr != v20 )
  {
    do
    {
      v22 = *(_QWORD *)v21;
      v21 += 8;
      *(_BYTE *)(v22 + 6) &= ~2u;
    }
    while ( v21 != v20 );
  }
  LODWORD(v36) = 0;
  if ( v19 && v19 != v37 )
    sub_186B220(v19);
  v23 = v29;
  if ( v29 )
  {
    v24 = (unsigned __int64)&v29[*((unsigned int *)v29 - 1)];
    if ( (unsigned __int64)v29 >= v24 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v11 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v23 >= v24 )
          goto LABEL_30;
      }
      sub_15D7BC0(v28, v25);
      ++v23;
    }
    while ( (unsigned __int64)v23 < v24 );
LABEL_30:
    v23 = v29;
    if ( v29 )
LABEL_31:
      sub_186B220(v23 - 1);
  }
  return v18;
}

