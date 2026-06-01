__m128i *__fastcall sub_180D120(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  unsigned __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __m128i *v21; // rbx
  __int64 v23; // rbx
  __int64 *v24; // rdx
  _BYTE v25[32]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int8 *v26; // [rsp+20h] [rbp-88h] BYREF
  char v27; // [rsp+78h] [rbp-30h]
  char v28; // [rsp+84h] [rbp-24h]

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
  {
LABEL_13:
    v19 = *(_QWORD **)(a1 + 248);
    v20 = v19[294];
    v19[304] += 40LL;
    v21 = (__m128i *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v19[295] >= (unsigned __int64)&v21[2].m128i_u64[1] && v20 )
      v19[294] = (char *)v21 + 40;
    else
      v21 = (__m128i *)sub_986170((__int64)(v19 + 294), 40, 40, 3, a5, a6);
    sub_B14500(v21, *(_QWORD *)(a1 + 248), a3);
    return v21;
  }
  v8 = a2;
  v9 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v11 = *v9;
  v12 = *v9 + 8LL * *((unsigned int *)v9 + 2);
  if ( v11 < v12 )
  {
    v10 = v11;
    a2 = *(_QWORD *)v11;
    if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 321 )
    {
      while ( 1 )
      {
        v10 += 8;
        if ( v12 == v10 )
          break;
        a2 = *(_QWORD *)v10;
        if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) == 321 )
          goto LABEL_20;
      }
LABEL_8:
      if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
      {
        v15 = sub_B8C3D0(v8, a2, v11, v10, a5, a6);
        v16 = *v15;
        v17 = *v15 + 8LL * *((unsigned int *)v15 + 2);
        if ( *v15 >= v17 )
        {
          if ( v16 != v17 )
          {
            while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 257 )
            {
              v17 += 8LL;
              if ( v16 == v17 )
                goto LABEL_13;
            }
            return nullptr;
          }
        }
        else
        {
          v18 = *v15;
          while ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 257 )
          {
            v18 += 8LL;
            if ( v17 == v18 )
              goto LABEL_13;
          }
          if ( v17 != v18 )
            return nullptr;
        }
      }
      goto LABEL_13;
    }
LABEL_20:
    if ( v12 == v10 )
      goto LABEL_8;
  }
  else
  {
    if ( v11 == v12 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 321 )
    {
      v13 = (__int64 *)(v12 + 8);
      do
      {
        v10 = (__int64)v13;
        if ( (__int64 *)v11 == v13 )
          goto LABEL_8;
        v14 = *v13++;
      }
      while ( *(_WORD *)(v14 + 36) != 321 );
    }
  }
  v23 = *(_QWORD *)v11;
  if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 321 )
  {
    v24 = (__int64 *)(v11 + 8);
    do
      v23 = *v24++;
    while ( *(_WORD *)(v23 + 36) != 321 );
  }
  sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x7Fu, 0);
  if ( v27 )
  {
    sub_AE9DF0(&v26, (__int64)"'minsize'", 1u);
  }
  else if ( v28 )
  {
    sub_180D0B0((__int64)v25, (__int64)"'minsize'");
  }
  sub_15F7200(v25);
  sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), *(_DWORD *)(v23 + 24), 0x16CFu, 0);
  sub_15F7200(v25);
  return nullptr;
}
