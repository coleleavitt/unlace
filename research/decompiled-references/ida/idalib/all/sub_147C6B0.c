unsigned __int64 __fastcall sub_147C6B0(__int64 a1, _DWORD *a2)
{
  int *v3; // rbx
  bool v4; // al
  int v5; // edx
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  unsigned __int8 *v9; // rsi
  unsigned __int64 v10; // r12
  char *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned __int8 *v15; // rcx
  unsigned int v16; // r12d
  int i; // edi
  __int64 v18; // r8
  __int64 *v19; // rdi
  unsigned __int64 v20; // rbx
  unsigned int v22; // r15d
  unsigned __int8 v23; // cl
  int v24; // r8d
  unsigned __int8 *v25; // rsi
  __int64 v26; // rdi
  unsigned int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rdi
  int v30; // r15d
  unsigned __int8 *v31; // rcx
  __int64 v32; // rdi
  __int64 *v33; // rdi
  int *v34; // rdx
  __int64 *v35; // rdi
  int v36; // [rsp+0h] [rbp-2C8h]
  int v37; // [rsp+0h] [rbp-2C8h]
  int v38; // [rsp+8h] [rbp-2C0h]
  unsigned int v39; // [rsp+Ch] [rbp-2BCh]
  char v40; // [rsp+17h] [rbp-2B1h] BYREF
  unsigned __int8 *v41; // [rsp+18h] [rbp-2B0h] BYREF
  _DWORD v42[20]; // [rsp+20h] [rbp-2A8h] BYREF
  void *ptr; // [rsp+70h] [rbp-258h] BYREF
  __m128i si128; // [rsp+78h] [rbp-250h]
  _BYTE v45[576]; // [rsp+88h] [rbp-240h] BYREF

  v3 = (int *)(a1 + 16);
  v4 = sub_10CCDE0(*(_WORD *)(a1 + 32));
  v5 = *(_DWORD *)(a1 + 16);
  if ( v4 )
  {
    v6 = *(_DWORD *)(a1 + 20);
    if ( !v6 )
      v6 = *(_DWORD *)(a1 + 16);
  }
  else
  {
    v6 = v5 + *(_DWORD *)(a1 + 20);
  }
  v7 = *(_WORD *)(a1 + 32) == 7;
  *a2 = v5;
  a2[1] = v6;
  if ( !v7 )
  {
    sub_1564840(&ptr, a1, v3, 1660);
    v20 = 0;
    sub_AEA040((__int64)&ptr);
    LODWORD(ptr) = 1507394;
    sub_15680D0(a1, &ptr, 2, 7);
    return v20;
  }
  v8 = *(_DWORD *)(a1 + 20);
  v9 = v45;
  ptr = v45;
  v10 = (unsigned int)(v8 + 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8EA0);
  if ( v8 != -1 )
  {
    v11 = v45;
    if ( v10 > 0x200 )
    {
      sub_2236E10(&ptr, v45, (unsigned int)(v8 + 1), 1);
      v9 = (unsigned __int8 *)ptr;
      v11 = (char *)ptr + si128.m128i_i64[0];
    }
    if ( &v9[v10] != (unsigned __int8 *)v11 )
    {
      memset(v11, 0, &v9[v10] - (unsigned __int8 *)v11);
      v9 = (unsigned __int8 *)ptr;
    }
    si128.m128i_i64[0] = v10;
  }
  v12 = *(_QWORD *)(a1 + 8);
  v41 = v9;
  v40 = 0;
  v13 = sub_13D1B40((__int64)v3, (__int64 *)&v41, *(_QWORD *)(v12 + 88), *(_QWORD *)(v12 + 56), &v40);
  if ( v40 )
    goto LABEL_24;
  if ( !v13 )
    goto LABEL_23;
  v14 = *v41;
  if ( (byte_2411740[2 * v14] & 8) == 0 )
    goto LABEL_23;
  v15 = v41 + 1;
  v16 = 0;
  for ( i = 0; ; ++i )
  {
    v16 = (char)v14 + 10 * v16 - 48;
    if ( i + 1 == v13 )
    {
      v19 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v19, v3);
      if ( v16 )
      {
        v20 = v16;
        goto LABEL_25;
      }
      goto LABEL_48;
    }
    v18 = *v15++;
    LOBYTE(v14) = v18;
    if ( (byte_2411740[2 * v18] & 8) == 0 )
      break;
  }
  if ( (_BYTE)v18 != 46 && (_BYTE)v18 != 95 )
    goto LABEL_23;
  v22 = i + 2;
  if ( i + 2 == v13 )
    goto LABEL_23;
  v23 = v41[v22];
  if ( v22 >= v13 || (byte_2411740[2 * v23] & 8) == 0 )
  {
    v24 = 0;
    goto LABEL_37;
  }
  v24 = 0;
  v25 = &v41[i + 3];
  while ( 1 )
  {
    ++v22;
    v24 = (char)v23 + 10 * v24 - 48;
    if ( v22 >= v13 )
      break;
    v26 = *v25++;
    v23 = v26;
    if ( (byte_2411740[2 * v26] & 8) == 0 )
      goto LABEL_37;
  }
  if ( v22 == v13 )
  {
    v35 = *(__int64 **)(a1 + 8);
    v37 = v24;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v35, v3);
    if ( v37 | v16 )
    {
      v20 = (((unsigned __int64)(v37 & 0x7FFFFFFF) << 32) | v16) & 0xFFFFFFFFFFFFFFLL
          | ((((unsigned __int64)(v37 & 0x7FFFFFFF) << 32 >> 56) | 0x80) << 56);
      goto LABEL_25;
    }
LABEL_48:
    v34 = v3;
    v20 = 0;
    sub_1564840(v42, a1, v34, 1935);
    sub_AEA040((__int64)v42);
    goto LABEL_25;
  }
  v23 = v41[v22];
LABEL_37:
  if ( v23 == 46 || v23 == 95 )
  {
    if ( (_BYTE)v14 != v23 )
    {
      v39 = v13;
      v38 = v24;
      sub_1564840(v42, a1, v3, 2139);
      sub_AEA040((__int64)v42);
      v13 = v39;
      v24 = v38;
    }
    v27 = v22 + 1;
    if ( v22 + 1 >= v13 )
    {
      v30 = 0;
    }
    else
    {
      v28 = v41[v27];
      if ( (byte_2411740[2 * v28] & 8) == 0 )
        goto LABEL_23;
      v29 = v22 + 2;
      v30 = 0;
      v31 = &v41[v29];
      while ( 1 )
      {
        ++v27;
        v30 = (char)v28 + 10 * v30 - 48;
        if ( v27 >= v13 )
          break;
        v32 = *v31++;
        LOBYTE(v28) = v32;
        if ( (byte_2411740[2 * v32] & 8) == 0 )
          goto LABEL_23;
      }
    }
    if ( v13 == v27 )
    {
      v33 = *(__int64 **)(a1 + 8);
      v36 = v24;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v33, v3);
      v20 = ((((((unsigned __int64)(v36 & 0x7FFFFFFF) << 32) | v16) >> 56)
            | ((unsigned __int64)(v30 & 0x7FFFFFFF) << 8)
            | 0x8000000080LL) << 56)
          | (((unsigned __int64)(v36 & 0x7FFFFFFF) << 32) | v16) & 0xFFFFFFFFFFFFFFLL;
      goto LABEL_25;
    }
  }
LABEL_23:
  sub_1564840(v42, a1, v3, 1660);
  sub_AEA040((__int64)v42);
  v42[0] = 1507394;
  sub_15680D0(a1, v42, 2, 7);
LABEL_24:
  v20 = 0;
LABEL_25:
  if ( ptr != v45 )
    free(ptr);
  return v20;
}
