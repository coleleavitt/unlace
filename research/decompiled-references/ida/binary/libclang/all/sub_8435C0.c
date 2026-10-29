__int64 __fastcall sub_8435C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  int v9; // r8d
  __int64 v10; // r8
  char *v11; // rdx
  char *v12; // rax
  __int64 v13; // rax
  _WORD *v14; // rdi
  unsigned int v15; // ebx
  _BYTE *v17; // rax
  __int64 v18; // r12
  __int64 v19; // rdx
  size_t v20; // rdx
  unsigned __int8 v21; // [rsp+8h] [rbp-140h]
  __int64 v22[4]; // [rsp+10h] [rbp-138h] BYREF
  void *v23; // [rsp+30h] [rbp-118h] BYREF
  __m128i v24; // [rsp+38h] [rbp-110h]
  _BYTE dest[72]; // [rsp+48h] [rbp-100h] BYREF
  char v26; // [rsp+90h] [rbp-B8h]
  __int64 v27; // [rsp+A0h] [rbp-A8h] BYREF
  void *ptr; // [rsp+A8h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-98h]
  _WORD v30[12]; // [rsp+C0h] [rbp-88h] BYREF
  unsigned __int8 v31; // [rsp+D8h] [rbp-70h]
  char v32; // [rsp+100h] [rbp-48h]
  __int64 v33; // [rsp+108h] [rbp-40h]

  v7 = sub_70E2F0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a4 + 8));
  v27 = a1;
  v8 = v7;
  v9 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 17288LL) + 272LL);
  ptr = v30;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  v10 = v9 ^ 1u;
  if ( v7 )
  {
    if ( v7 > 0x20 )
    {
      v21 = v10;
      sub_25D6230(&ptr, v30, v7, 2);
      v10 = v21;
      if ( 2 * v8 == 2 * si128.m128i_i64[0] )
      {
LABEL_7:
        si128.m128i_i64[0] = v8;
        goto LABEL_8;
      }
      v12 = (char *)ptr + 2 * si128.m128i_i64[0];
      v11 = (char *)ptr + 2 * v8;
    }
    else
    {
      v11 = (char *)&v30[v7];
      v12 = (char *)v30;
    }
    if ( (((_BYTE)v11 - (_BYTE)v12) & 2) == 0 || (v12[1] = 0, v12 += 2, v12 != v11) )
    {
      do
      {
        v12[1] = 0;
        v12 += 4;
        *(v12 - 1) = 0;
      }
      while ( v12 != v11 );
    }
    goto LABEL_7;
  }
LABEL_8:
  v13 = *(_QWORD *)(a4 + 16);
  v32 = v10;
  v33 = a4;
  if ( (unsigned __int8)sub_836AC0((__int64)&v27, a3, *(_QWORD *)(v13 + 8), 0, v10) )
  {
    v17 = dest;
    v18 = si128.m128i_i64[0];
    v23 = dest;
    v24 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( !si128.m128i_i64[0] )
    {
      v14 = ptr;
      goto LABEL_15;
    }
    if ( si128.m128i_i64[0] > 0x20uLL )
    {
      sub_25D6230(&v23, dest, si128.m128i_i64[0], 2);
      v14 = ptr;
      v20 = 2 * si128.m128i_i64[0];
      if ( !(2 * si128.m128i_i64[0]) )
        goto LABEL_29;
      v17 = v23;
    }
    else
    {
      v14 = ptr;
      v20 = 2 * si128.m128i_i64[0];
    }
    memcpy(v17, v14, v20);
    v14 = ptr;
LABEL_29:
    v24.m128i_i64[0] = v18;
LABEL_15:
    v26 = 1;
    dest[64] = v32;
    if ( v14 == v30 )
      goto LABEL_16;
    goto LABEL_10;
  }
  v14 = ptr;
  v26 = 0;
  if ( ptr == v30 )
    return 0;
LABEL_10:
  free(v14);
  if ( !v26 )
    return 0;
LABEL_16:
  v19 = *(_QWORD *)(a4 + 8);
  v22[2] = a4;
  v22[0] = a1;
  v22[1] = (__int64)&v23;
  sub_8425B0((__int64)&v27, v22, v19, 0);
  v15 = v31;
  if ( v31 )
  {
    sub_6A01B0(a2, (__int64)&v27);
    if ( v31 )
    {
      v31 = 0;
      if ( (unsigned int)v27 > 1 )
        sub_69F740((__int64)&v27);
    }
  }
  if ( v26 && v23 != dest )
    free(v23);
  return v15;
}

