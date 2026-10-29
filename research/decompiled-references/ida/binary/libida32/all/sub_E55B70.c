void __fastcall sub_E55B70(__int64 *a1, __int64 a2)
{
  unsigned int v3; // r14d
  unsigned __int64 *v4; // rax
  __int64 v5; // r12
  unsigned int v6; // eax
  unsigned __int64 v7; // rax
  unsigned int v8; // eax
  _BYTE *v9; // r14
  unsigned int v10; // edx
  char v11; // al
  char v12; // r15
  unsigned int v13; // r14d
  char v14; // r14
  char *v15; // rax
  __int64 v16; // rdx
  char *v17; // rsi
  char *v18; // rsi
  char v19; // dl
  char v20; // cl
  __int64 v21; // rdi
  _BYTE *v22; // rax
  void *v23; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v24; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __m128i si128; // [rsp+18h] [rbp-70h]
  _BYTE v27[96]; // [rsp+28h] [rbp-60h] BYREF

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 <= 0x40 )
  {
    v4 = *(unsigned __int64 **)a2;
    if ( *(_QWORD *)a2 )
    {
      if ( (unsigned __int64)v4 <= 0xA )
      {
        v24 = *(_DWORD *)(a2 + 8);
        v5 = *a1;
        v23 = v4;
        goto LABEL_5;
      }
      goto LABEL_15;
    }
LABEL_13:
    sub_971800(*a1, "A@");
    return;
  }
  if ( v3 - (unsigned int)sub_21E2A40(a2) > 0x40 )
    goto LABEL_15;
  v7 = **(_QWORD **)a2;
  if ( !v7 )
    goto LABEL_13;
  if ( v7 <= 0xA )
  {
    v5 = *a1;
    v24 = v3;
    sub_21E17D0(&v23);
LABEL_5:
    sub_21E1DC0(&v23, 1);
    v6 = v24;
    v24 = 0;
    si128.m128i_i32[0] = v6;
    ptr = v23;
    sub_21E8630(&ptr, v5, 1);
    if ( si128.m128i_i32[0] > 0x40u && ptr )
      operator delete[](ptr);
    if ( v24 > 0x40 )
    {
      if ( v23 )
        operator delete[](v23);
    }
    return;
  }
LABEL_15:
  ptr = v27;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
LABEL_16:
  if ( v3 <= 0x40 )
  {
    while ( *(_QWORD *)a2 )
    {
      v23 = *(void **)a2;
LABEL_32:
      v24 = 0;
      v11 = (unsigned __int8)v23 & 0xF;
      v23 = (void *)((unsigned __int8)v23 & 0xF);
LABEL_33:
      v14 = v11 + 65;
      if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
        sub_22130D0(&ptr, v27, si128.m128i_i64[0] + 1, 1);
      *((_BYTE *)ptr + si128.m128i_i64[0]++) = v14;
LABEL_24:
      if ( v24 > 0x40 && v23 )
        operator delete[](v23);
      v13 = *(_DWORD *)(a2 + 8);
      if ( v13 > 0x40 )
      {
        sub_21E6E90(a2, 4);
        v3 = *(_DWORD *)(a2 + 8);
        goto LABEL_16;
      }
      if ( v13 == 4 )
        *(_QWORD *)a2 = 0;
      else
        *(_QWORD *)a2 >>= 4;
    }
  }
  else if ( v3 - (unsigned int)sub_21E2A40(a2) > 0x40 || **(_QWORD **)a2 )
  {
    v24 = v3;
    sub_21E17D0(&v23);
    v8 = v24;
    if ( v24 > 0x40 )
    {
      *(_QWORD *)v23 &= 0xFuLL;
      v9 = v23;
      memset((char *)v23 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v8 + 63) >> 6) + 0x1FFFFFFF));
      v10 = v24;
      v11 = (char)v9;
      v24 = 0;
      if ( v10 > 0x40 )
      {
        v12 = *v9 + 65;
        if ( si128.m128i_i64[1] < (unsigned __int64)(si128.m128i_i64[0] + 1) )
          sub_22130D0(&ptr, v27, si128.m128i_i64[0] + 1, 1);
        *((_BYTE *)ptr + si128.m128i_i64[0]++) = v12;
        if ( v9 )
          operator delete[](v9);
        goto LABEL_24;
      }
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  v15 = (char *)ptr;
  v16 = si128.m128i_i64[0];
  v17 = (char *)ptr + si128.m128i_i64[0];
  if ( ptr != (char *)ptr + si128.m128i_i64[0] )
  {
    v18 = v17 - 1;
    if ( ptr >= v18 )
    {
      v17 = (char *)ptr;
    }
    else
    {
      do
      {
        v19 = *v15;
        v20 = *v18;
        ++v15;
        --v18;
        *(v15 - 1) = v20;
        v18[1] = v19;
      }
      while ( v15 < v18 );
      v16 = si128.m128i_i64[0];
      v17 = (char *)ptr;
    }
  }
  sub_22581D0(*a1, v17, v16);
  v21 = *a1;
  v22 = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)v22 >= *(_QWORD *)(*a1 + 24) )
  {
    sub_2257CD0(v21, 64);
  }
  else
  {
    *(_QWORD *)(v21 + 32) = v22 + 1;
    *v22 = 64;
  }
  if ( ptr != v27 )
    free(ptr);
}

