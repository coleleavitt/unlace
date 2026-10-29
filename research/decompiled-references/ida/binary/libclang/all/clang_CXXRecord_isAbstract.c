_BOOL8 __fastcall clang_CXXRecord_isAbstract(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // r12
  __int64 v24; // rcx
  _DWORD *v25; // rax
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rdi
  int v29; // edx
  __m128i v30; // [rsp+0h] [rbp-38h]

  if ( (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
    return 0;
  v30 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = sub_63A250(a1, a2, (int)a7 - 1, a4, a5, a6, v30.m128i_i32[0], v30.m128i_i64[1]);
  v9 = v8;
  if ( !v8 || (*(_BYTE *)(v8 + 28) & 0x7Fu) - 57 > 2 )
    return 0;
  v10 = *(_QWORD *)(v8 + 128);
  if ( v10 )
    goto LABEL_7;
  v19 = *(_QWORD *)(v9 + 104);
  v20 = *(_QWORD *)(v19 + 96);
  v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v20 & 1) != 0 )
  {
    if ( !v21 )
      return 0;
  }
  else
  {
    if ( v21 <= 3 || (v20 & 2) == 0 )
      return 0;
    v22 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
    v23 = v22[2275];
    if ( !v23 )
    {
      *(_QWORD *)(v19 + 96) = v19 & 0xFFFFFFFFFFFFFFFALL | 1;
      v10 = *(_QWORD *)(v9 + 128);
      goto LABEL_32;
    }
    v24 = v22[274];
    v22[284] += 24LL;
    v21 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v22[275] >= v21 + 24 && v24 )
      v22[274] = v21 + 24;
    else
      v21 = sub_5F8390((__int64)(v22 + 274), 24, 3);
    *(_QWORD *)v21 = v23;
    v20 = v21 | 5;
    *(_DWORD *)(v21 + 8) = 0;
    *(_QWORD *)(v21 + 16) = v19;
    *(_QWORD *)(v19 + 96) = v21 | 5;
    LOBYTE(v21) = v21 & 0xFA | 4;
  }
  if ( (v21 & 4) != 0 )
  {
    v25 = (_DWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v25 )
    {
      v28 = *(_QWORD *)v25;
      v29 = *(_DWORD *)(*(_QWORD *)v25 + 12LL);
      if ( v25[2] != v29 )
      {
        v25[2] = v29;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, v19);
      }
    }
  }
  v10 = *(_QWORD *)(v9 + 128);
LABEL_32:
  if ( !v10 )
    return 0;
LABEL_7:
  v11 = *(_QWORD *)(v10 + 88);
  if ( !v11 )
    return 0;
  v12 = *(_QWORD *)(v11 + 104);
  v13 = *(_QWORD *)(v12 + 96);
  v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v13 & 1) != 0 )
  {
    if ( v14 )
    {
LABEL_16:
      if ( (v14 & 4) != 0 )
      {
        v18 = (_DWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v18 )
        {
          v26 = *(_QWORD *)v18;
          v27 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
          if ( v18[2] != v27 )
          {
            v18[2] = v27;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, v12);
          }
        }
      }
    }
  }
  else if ( v14 > 3 && (v13 & 2) != 0 )
  {
    v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
    v16 = v15[2275];
    if ( v16 )
    {
      v17 = v15[274];
      v15[284] += 24LL;
      v14 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15[275] >= v14 + 24 && v17 )
        v15[274] = v14 + 24;
      else
        v14 = sub_5F8390((__int64)(v15 + 274), 24, 3);
      *(_QWORD *)v14 = v16;
      v13 = v14 | 5;
      *(_DWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = v12;
      *(_QWORD *)(v12 + 96) = v14 | 5;
      LOBYTE(v14) = v14 & 0xFA | 4;
      goto LABEL_16;
    }
    *(_QWORD *)(v12 + 96) = v12 & 0xFFFFFFFFFFFFFFFALL | 1;
  }
  return (*(_BYTE *)(*(_QWORD *)(v11 + 128) + 1LL) & 8) != 0;
}

