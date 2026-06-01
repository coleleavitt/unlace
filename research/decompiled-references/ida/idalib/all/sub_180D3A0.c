__m128i *__fastcall sub_180D3A0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __m128i *v10; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 *v17; // rax
  __int64 *v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 *v21; // rax
  __int64 *i; // rax
  __int64 v23; // rcx
  _BYTE v24[32]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int8 *v25; // [rsp+20h] [rbp-88h] BYREF
  char v26; // [rsp+78h] [rbp-30h]
  char v27; // [rsp+84h] [rbp-24h]

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v12 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v13 = *v12;
  v14 = *v12 + 8LL * *((unsigned int *)v12 + 2);
  if ( *v12 >= v14 )
  {
    if ( v13 == v14 )
      goto LABEL_13;
    if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 195 )
    {
      v15 = (__int64 *)(v14 + 8);
      do
      {
        v14 = (unsigned __int64)v15;
        if ( (__int64 *)v13 == v15 )
          goto LABEL_13;
        v16 = *v15++;
      }
      while ( *(_WORD *)(v16 + 36) != 195 );
    }
LABEL_26:
    sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x7Fu, 0);
    if ( v26 )
    {
      sub_AE9DF0(&v25, (__int64)"'dllimport'", 1u);
    }
    else if ( v27 )
    {
      sub_180D0B0((__int64)v24, (__int64)"'dllimport'");
    }
    v10 = nullptr;
    sub_15F7200(v24);
    return v10;
  }
  v21 = (__int64 *)*v12;
  while ( 1 )
  {
    v13 = *v21;
    if ( *(_WORD *)(*v21 + 36) == 195 )
      break;
    if ( (__int64 *)v14 == ++v21 )
      goto LABEL_13;
  }
  if ( (__int64 *)v14 != v21 )
    goto LABEL_26;
LABEL_13:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v17 = sub_B8C3D0(a2, a2, v13, v14, a5, a6);
  v18 = (__int64 *)*v17;
  v19 = *v17 + 8LL * *((unsigned int *)v17 + 2);
  if ( *v17 >= v19 )
  {
    if ( v18 != (__int64 *)v19 )
    {
      if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 197 )
      {
        for ( i = (__int64 *)(v19 + 8); v18 != i; ++i )
        {
          v23 = *i;
          if ( *(_WORD *)(v23 + 36) == 197 )
            return nullptr;
        }
        goto LABEL_2;
      }
      return nullptr;
    }
LABEL_2:
    v8 = *(_QWORD **)(a1 + 248);
    v9 = v8[294];
    v8[304] += 40LL;
    v10 = (__m128i *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8[295] >= (unsigned __int64)&v10[2].m128i_u64[1] && v9 )
      v8[294] = (char *)v10 + 40;
    else
      v10 = (__m128i *)sub_986170((__int64)(v8 + 294), 40, 40, 3, a5, a6);
    sub_B11410(v10, *(_QWORD *)(a1 + 248), a3);
    return v10;
  }
  v20 = *v17;
  while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 197 )
  {
    v20 += 8LL;
    if ( v19 == v20 )
      goto LABEL_2;
  }
  if ( v19 == v20 )
    goto LABEL_2;
  return nullptr;
}
