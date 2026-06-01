char **__fastcall describe_tlc_ordinal(__int64 a1, __int64 *a2, unsigned int a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r14
  __m128i v10; // xmm0
  _BYTE *v11; // rdi
  void *v12; // r13
  unsigned __int64 v13; // r12
  __m128i v14; // xmm0
  void *v15; // rdi
  _QWORD *v16; // rsi
  const void *v17; // r8
  _BYTE *v18; // rdi
  __int64 tinfo_size; // rax
  unsigned __int64 v20; // rsi
  char v21; // al
  __int64 v23; // rax
  _BYTE *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rax
  char v27; // al
  __m128i v28; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v30; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v6 = (_QWORD *)sub_540BA0(*(_QWORD *)(qword_2CA1698 + 1464), a2);
  v7 = sub_5467E0(v6, a2, a3, 0);
  *(_BYTE *)(a1 + 80) = 8;
  v8 = v7;
  if ( v7 )
  {
    if ( a1 != v7 + 8 )
    {
      v9 = *(_QWORD *)(v7 + 16);
      if ( v9 <= 1 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        goto LABEL_5;
      }
      v17 = *(const void **)(v7 + 8);
      v18 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v9 )
      {
        v24 = *(_BYTE **)a1;
        v25 = *(_QWORD *)(v7 + 16);
        v28.m128i_i64[0] = *(_QWORD *)(v7 + 8);
        v26 = qvector_reserve(a1, v24, v25, 1);
        v17 = (const void *)v28.m128i_i64[0];
        *(_QWORD *)a1 = v26;
        v18 = (_BYTE *)v26;
      }
      *(_QWORD *)(a1 + 8) = v9;
      memmove(v18, v17, v9 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v9 - 1) = 0;
    }
    if ( *(_QWORD *)(a1 + 8) > 1u )
    {
LABEL_19:
      if ( *(_BYTE *)(v8 + 100) )
        goto LABEL_20;
LABEL_30:
      *(_BYTE *)(a1 + 81) = 1;
      return (char **)(v31 - __readfsqword(0x28u));
    }
  }
  else if ( *(_QWORD *)(a1 + 8) > 1u )
  {
    goto LABEL_30;
  }
LABEL_5:
  (*(void (__fastcall **)(void **, __int64 *, _QWORD))(*a2 + 88))(&ptr, a2, a3);
  v10 = _mm_loadu_si128(&v30);
  v11 = *(_BYTE **)a1;
  v12 = ptr;
  v30 = 0;
  ptr = nullptr;
  v13 = v10.m128i_i64[0];
  if ( v11 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v28 = v10;
    qfree(v11);
    v14 = _mm_load_si128(&v28);
    v15 = ptr;
    *(_QWORD *)a1 = v12;
    *(__m128i *)(a1 + 8) = v14;
    if ( v15 )
    {
      v30.m128i_i64[0] = 0;
      qfree(v15);
      v13 = *(_QWORD *)(a1 + 8);
    }
  }
  else
  {
    *(_QWORD *)a1 = v12;
    *(__m128i *)(a1 + 8) = v10;
  }
  if ( v13 <= 1 || (v16 = *(_QWORD **)a1, **(_BYTE **)a1 != 35) )
  {
    if ( !v8 )
      goto LABEL_30;
    goto LABEL_19;
  }
  if ( *(_QWORD *)(a1 + 16) <= 8u )
  {
    v23 = qvector_reserve(a1, v16, 9, 1);
    *(_QWORD *)a1 = v23;
    v16 = (_QWORD *)v23;
  }
  *(_QWORD *)(a1 + 8) = 9;
  *v16 = 0x646574656C656423LL;
  *(_BYTE *)(*(_QWORD *)a1 + 8LL) = 0;
  if ( !v8 || !*(_BYTE *)(v8 + 100) )
    return (char **)(v31 - __readfsqword(0x28u));
LABEL_20:
  if ( !*(_DWORD *)(v8 + 96) )
  {
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(v8 + 88), 0);
    if ( tinfo_size == -1 )
    {
      if ( !*(_BYTE *)(v8 + 102)
        && (*(_BYTE *)(v8 + 100) != 61 || (v27 = *(_BYTE *)(v8 + 101)) == 0 || (v27 & 0x3F) != 1 && (v27 & 0xF) != 0xC) )
      {
        *(_BYTE *)(a1 + 81) = 1;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 72) = tinfo_size;
    }
    print_tinfo(a1 + 24, 0, 0, 0, 66594, v8 + 88, 0, 0);
    v20 = *(_QWORD *)(v8 + 88);
    if ( v20 > 0xFF )
      get_tinfo_pdata(a1 + 48, v20, 5);
    v21 = *(_BYTE *)(v8 + 100);
    switch ( v21 )
    {
      case 61:
        *(_BYTE *)(a1 + 80) = 3;
        break;
      case 45:
        *(_BYTE *)(a1 + 80) = 1;
        break;
      case 13:
        *(_BYTE *)(a1 + 80) = 2;
        break;
      default:
        *(_BYTE *)(a1 + 80) = 4 * (v21 != 29) + 4;
        break;
    }
    return (char **)(v31 - __readfsqword(0x28u));
  }
  return sub_3573A0((char **)(a1 + 24));
}

