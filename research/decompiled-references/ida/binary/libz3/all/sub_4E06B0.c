void __fastcall sub_4E06B0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // esi
  char *v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // r8
  char *v9; // rcx
  __int64 v10; // r8
  char *v11; // rdi
  char *v12; // rbx
  int v13; // edx
  size_t v14; // r12
  _BYTE *v15; // rsi
  _QWORD *v16; // r13
  _QWORD *v17; // rax
  __m128i *v18; // rax
  int v19; // esi
  int v20; // edx
  __int64 v21; // r15
  unsigned __int64 v22; // rdi
  void *v23; // [rsp+0h] [rbp-78h] BYREF
  size_t v24; // [rsp+8h] [rbp-70h]
  _QWORD dest[2]; // [rsp+10h] [rbp-68h] BYREF
  void *v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  _QWORD v28[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *(unsigned int *)(a2 + 24);
  v5 = *(_DWORD *)(a1 + 80);
  v6 = *(char **)(a2 + 16);
  LOBYTE(dest[0]) = 0;
  v7 = v4 - 1;
  v23 = dest;
  v24 = 0;
  v4 *= 48;
  v8 = 3LL * (v5 & v7);
  v9 = &v6[v4];
  v10 = 16 * v8;
  v11 = &v6[v10];
  if ( v10 == v4 )
  {
LABEL_20:
    while ( v11 != v6 )
    {
      v20 = *((_DWORD *)v6 + 1);
      if ( v20 == 2 )
      {
        if ( v5 == *(_DWORD *)v6 && v5 == *((_DWORD *)v6 + 2) )
        {
          v12 = v6;
          goto LABEL_8;
        }
      }
      else if ( !v20 )
      {
        break;
      }
      v6 += 48;
    }
LABEL_15:
    v26 = v28;
    v18 = (__m128i *)operator new(0x11u);
    v18[1].m128i_i8[0] = 0;
    v19 = *(_DWORD *)(a1 + 80);
    v26 = v18;
    v28[0] = 16;
    *v18 = _mm_load_si128((const __m128i *)&xmmword_18B6610);
    v27 = 16;
    sub_4DC570((unsigned int *)(a2 + 16), v19, v18, (char *)&word_10);
    if ( v26 != v28 )
      operator delete(v26, v28[0] + 1LL);
    goto LABEL_17;
  }
  v12 = &v6[v10];
  while ( 1 )
  {
    v13 = *((_DWORD *)v12 + 1);
    if ( v13 != 2 )
    {
      if ( !v13 )
        goto LABEL_15;
      goto LABEL_4;
    }
    if ( v5 == *(_DWORD *)v12 && v5 == *((_DWORD *)v12 + 2) )
      break;
LABEL_4:
    v12 += 48;
    if ( v9 == v12 )
      goto LABEL_20;
  }
LABEL_8:
  if ( &v23 == (void **)(v12 + 16) )
    return;
  v14 = *((_QWORD *)v12 + 3);
  if ( v14 > 0xF )
  {
    if ( (v14 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( v14 <= 0x1D )
    {
      v21 = 30;
      v22 = 31;
    }
    else
    {
      v21 = *((_QWORD *)v12 + 3);
      v22 = v14 + 1;
      if ( (__int64)(v14 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    v16 = (_QWORD *)operator new(v22);
    sub_233E40((__int64)&v23);
    v23 = v16;
    dest[0] = v21;
    v15 = *((_BYTE **)v12 + 2);
LABEL_32:
    memcpy(v16, v15, v14);
    v17 = v23;
    goto LABEL_14;
  }
  if ( !v14 )
    goto LABEL_13;
  v15 = *((_BYTE **)v12 + 2);
  v16 = dest;
  if ( v14 != 1 )
    goto LABEL_32;
  LOBYTE(dest[0]) = *v15;
LABEL_13:
  v17 = dest;
LABEL_14:
  v24 = v14;
  *((_BYTE *)v17 + v14) = 0;
LABEL_17:
  if ( v23 != dest )
    operator delete(v23, dest[0] + 1LL);
}

