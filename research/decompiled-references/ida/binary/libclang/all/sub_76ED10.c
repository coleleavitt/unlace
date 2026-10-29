__int64 __fastcall sub_76ED10(__int64 a1)
{
  _QWORD *v1; // r13
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  unsigned int v6; // eax
  __m128i si128; // xmm1
  unsigned int v8; // eax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  bool v17; // zf
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // rdi
  __int64 v24; // rax
  __m128i v25[3]; // [rsp+0h] [rbp-38h] BYREF

  v1 = (_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 8);
  v25[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 8), (__m128i)(unsigned __int64)(a1 + 8));
  if ( v3 != (_QWORD *)(a1 + 8) )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)v3[2];
      v5 = (_QWORD *)*v3;
      if ( v4 != v3 + 4 )
        free(v4);
      operator delete(v3, 0x90u);
      if ( v5 == v1 )
        break;
      v3 = v5;
    }
  }
  v6 = *(_DWORD *)(a1 + 32);
  si128 = _mm_load_si128(v25);
  *(_QWORD *)(a1 + 24) = 0;
  v8 = v6 >> 1;
  *(__m128i *)(a1 + 8) = si128;
  if ( !v8 )
  {
    result = *(unsigned int *)(a1 + 36);
    if ( !(_DWORD)result )
      goto LABEL_17;
    if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
    {
      v10 = *(unsigned int *)(a1 + 48);
      if ( (unsigned int)v10 <= 0x40 )
      {
LABEL_11:
        result = *(_QWORD *)(a1 + 40);
        v11 = 16 * v10;
        goto LABEL_12;
      }
LABEL_37:
      operator delete();
      *(_BYTE *)(a1 + 32) |= 1u;
      goto LABEL_38;
    }
LABEL_36:
    result = a1 + 40;
    v11 = 128;
LABEL_12:
    v12 = result + v11;
    if ( result != v12 )
    {
      if ( (((_BYTE)v12 - (_BYTE)result) & 0x10) == 0 || (*(_QWORD *)result = 0, result += 16, v12 != result) )
      {
        do
        {
          *(_QWORD *)result = 0;
          result += 32;
          *(_QWORD *)(result - 16) = 0;
        }
        while ( v12 != result );
      }
    }
    *(_QWORD *)(a1 + 32) &= 1uLL;
    goto LABEL_17;
  }
  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
    goto LABEL_36;
  v10 = *(unsigned int *)(a1 + 48);
  if ( 4 * v8 >= (unsigned int)v10 || (unsigned int)v10 <= 0x40 )
    goto LABEL_11;
  v15 = v8 - 1;
  if ( !v15 )
    goto LABEL_37;
  _BitScanReverse(&v15, v15);
  v16 = 1 << (v15 + 2);
  if ( v16 - 9 <= 0x36 )
  {
    v16 = 64;
    operator delete();
    v22 = *(_BYTE *)(a1 + 32);
    v23 = 1024;
    goto LABEL_48;
  }
  if ( v16 != (_DWORD)v10 )
  {
    operator delete();
    v22 = *(_BYTE *)(a1 + 32) | 1;
    *(_BYTE *)(a1 + 32) = v22;
    if ( v16 <= 8 )
    {
LABEL_38:
      v17 = (*(_QWORD *)(a1 + 32) & 1LL) == 0;
      *(_QWORD *)(a1 + 32) &= 1uLL;
      if ( v17 )
      {
        result = *(_QWORD *)(a1 + 40);
        v20 = 16LL * *(unsigned int *)(a1 + 48);
      }
      else
      {
        result = a1 + 40;
        v20 = 128;
      }
      v21 = result + v20;
      if ( result != v21 )
      {
        if ( (((_BYTE)v21 - (_BYTE)result) & 0x10) == 0 || (*(_QWORD *)result = 0, result += 16, v21 != result) )
        {
          do
          {
            *(_QWORD *)result = 0;
            result += 32;
            *(_QWORD *)(result - 16) = 0;
          }
          while ( v21 != result );
        }
      }
      goto LABEL_17;
    }
    v23 = 16LL * v16;
LABEL_48:
    *(_BYTE *)(a1 + 32) = v22 & 0xFE;
    v24 = sub_25CC9C0(v23, 8);
    *(_DWORD *)(a1 + 48) = v16;
    *(_QWORD *)(a1 + 40) = v24;
    goto LABEL_38;
  }
  v17 = (*(_QWORD *)(a1 + 32) & 1LL) == 0;
  *(_QWORD *)(a1 + 32) &= 1uLL;
  if ( v17 )
  {
    result = *(_QWORD *)(a1 + 40);
    v18 = 16LL * v16;
  }
  else
  {
    result = a1 + 40;
    v18 = 128;
  }
  v19 = result + v18;
  if ( (v18 & 0x10) == 0 || (*(_QWORD *)result = 0, result += 16, v19 != result) )
  {
    do
    {
      *(_QWORD *)result = 0;
      result += 32;
      *(_QWORD *)(result - 16) = 0;
    }
    while ( v19 != result );
  }
LABEL_17:
  if ( !*(_BYTE *)(a1 + 188) )
  {
    v13 = 4 * (*(_DWORD *)(a1 + 180) - *(_DWORD *)(a1 + 184));
    v14 = *(unsigned int *)(a1 + 176);
    if ( v13 < 0x20 )
      v13 = 32;
    if ( v13 < (unsigned int)v14 )
    {
      result = sub_25D52B0(a1 + 168);
      goto LABEL_23;
    }
    result = (__int64)memset(*(void **)(a1 + 168), -1, 8 * v14);
  }
  *(_QWORD *)(a1 + 180) = 0;
LABEL_23:
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  return result;
}

