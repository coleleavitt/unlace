__int64 __fastcall clang_getVTableLayout(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // r13
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // rax
  _BYTE *v22; // rax
  _BYTE *v23; // r12
  _DWORD *v24; // rax
  __int64 v25; // rdi
  unsigned int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // r8d
  __int64 *v30; // r9
  __int64 v31; // r12
  __m128i v32; // xmm0
  __int64 v33; // rax
  int v34; // r10d
  __int64 *v35; // rax
  __int64 v36; // rdi
  int v37; // eax
  int v38; // ecx
  __m128i v39; // [rsp+0h] [rbp-58h]
  __m128i v40; // [rsp+0h] [rbp-58h]
  __int64 *v41; // [rsp+28h] [rbp-30h] BYREF

  if ( (unsigned int)(a7 - 600) > 4 && (unsigned int)(a7 - 1) > 0x26 )
    goto LABEL_3;
  v39 = _mm_loadu_si128((const __m128i *)&a7);
  v10 = sub_63A250(a1, a2, (int)a7 - 600, a4, a5, a6, v39.m128i_i32[0], v39.m128i_i64[1]);
  v11 = v10;
  if ( !v10 || (*(_BYTE *)(v10 + 28) & 0x7Fu) - 57 > 2 )
    goto LABEL_3;
  v12 = *(_QWORD *)(v10 + 128);
  if ( !v12 )
  {
    sub_5F98A0((__int64 *)(*(_QWORD *)(v11 + 104) + 96LL), *(_QWORD *)(v11 + 104));
    v12 = *(_QWORD *)(v11 + 128);
    if ( !v12 )
      BUG();
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( (*(_BYTE *)(v13 + 74) & 1) == 0 )
    goto LABEL_3;
  v14 = *(_QWORD *)(v13 + 104);
  v15 = *(_QWORD *)(v14 + 96);
  v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v15 & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_19;
  }
  else
  {
    if ( v16 <= 3 || (v15 & 2) == 0 )
      goto LABEL_19;
    v17 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
    v18 = v17[2275];
    if ( !v18 )
    {
      *(_QWORD *)(v14 + 96) = v14 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_19;
    }
    v19 = v17[274];
    v17[284] += 24LL;
    v16 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v17[275] >= v16 + 24 && v19 )
      v17[274] = v16 + 24;
    else
      v16 = sub_5F8390((__int64)(v17 + 274), 24, 3);
    *(_QWORD *)v16 = v18;
    v15 = v16 | 5;
    *(_DWORD *)(v16 + 8) = 0;
    *(_QWORD *)(v16 + 16) = v14;
    *(_QWORD *)(v14 + 96) = v16 | 5;
    LOBYTE(v16) = v16 & 0xFA | 4;
  }
  if ( (v16 & 4) != 0 )
  {
    v20 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v20 )
    {
      v36 = *(_QWORD *)v20;
      v37 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
      if ( v20[2] != v37 )
      {
        v20[2] = v37;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 144LL))(v36, v14);
      }
    }
  }
LABEL_19:
  if ( (*(_BYTE *)(*(_QWORD *)(v13 + 128) + 1LL) & 4) == 0 )
  {
    sub_5F98A0((__int64 *)(*(_QWORD *)(v13 + 104) + 96LL), *(_QWORD *)(v13 + 104));
    if ( !*(_DWORD *)(*(_QWORD *)(v13 + 128) + 20LL) )
      goto LABEL_3;
  }
  v21 = sub_798D40(v13);
  v22 = (_BYTE *)sub_6CE530(v21);
  v23 = v22;
  if ( !v22[32] )
  {
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v22 + 16LL))(v22, v13);
    v26 = *((_DWORD *)v23 + 20);
    if ( v26 )
    {
      v29 = v26 - 1;
      v25 = *((_QWORD *)v23 + 8);
      v34 = 1;
      v30 = nullptr;
      LODWORD(v27) = (v26 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
      v35 = (__int64 *)(v25 + 16LL * (unsigned int)v27);
      v28 = *v35;
      if ( v13 == *v35 )
      {
LABEL_32:
        v31 = v35[1];
        goto LABEL_23;
      }
      while ( v28 != -4096 )
      {
        if ( !v30 && v28 == -8192 )
          v30 = v35;
        v27 = v29 & ((_DWORD)v27 + v34);
        v35 = (__int64 *)(v25 + 16 * v27);
        v28 = *v35;
        if ( v13 == *v35 )
          goto LABEL_32;
        ++v34;
      }
      if ( v30 )
        v35 = v30;
      LODWORD(v27) = *((_DWORD *)v23 + 18) + 1;
      v38 = 2 * v26;
      v29 = 4 * v27;
      v41 = v35;
      if ( 4 * (int)v27 < 3 * v26 )
      {
        LODWORD(v28) = v26 - *((_DWORD *)v23 + 19) - v27;
        LODWORD(v25) = v26 >> 3;
        if ( v26 >> 3 < (unsigned int)v28 )
          goto LABEL_39;
        goto LABEL_38;
      }
    }
    else
    {
      v38 = 0;
    }
    v26 = v38;
LABEL_38:
    sub_628160((__int64)(v23 + 64), v26);
    v26 = v13;
    LODWORD(v25) = (_DWORD)v23 + 64;
    sub_5F8630((__int64 *)v23 + 8, v13, &v41);
    LODWORD(v27) = *((_DWORD *)v23 + 18) + 1;
    v35 = v41;
LABEL_39:
    *((_DWORD *)v23 + 18) = v27;
    if ( *v35 != -4096 )
      --*((_DWORD *)v23 + 19);
    *v35 = v13;
    v31 = 0;
    v35[1] = 0;
    goto LABEL_23;
  }
  v24 = (_DWORD *)sub_B3BD60(v22, v13);
  if ( v24[2] )
  {
    LODWORD(v25) = (_DWORD)v23;
    v26 = v13;
    v31 = sub_B3C180(v23, v13, *(_QWORD *)(**(_QWORD **)v24 + 104LL));
LABEL_23:
    v40 = _mm_loadu_si128((const __m128i *)&a7);
    v32 = _mm_loadu_si128((const __m128i *)&a8);
    v33 = sub_63A300(
            v25,
            v26,
            v27,
            v28,
            v29,
            (_DWORD)v30,
            v40.m128i_i32[0],
            v40.m128i_i32[2],
            v32.m128i_i32[0],
            v32.m128i_i64[1]);
    sub_639EC0(a1, v31, v13, v33);
    return a1;
  }
LABEL_3:
  sub_638F50(a1, 70, 0);
  return a1;
}

