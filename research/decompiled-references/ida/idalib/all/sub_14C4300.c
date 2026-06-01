__int64 __fastcall sub_14C4300(__int64 a1, double a2, __m128 a3)
{
  int *v4; // rbx
  __m128i v5; // xmm0
  int v6; // eax
  __int64 *v7; // rdi
  char *v8; // rax
  char v9; // al
  __int64 v10; // r12
  __int64 v11; // rbp
  unsigned int v12; // r14d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int16 v16; // r13
  char v17; // al
  __int64 v18; // rsi
  __int16 v19; // ax
  int v20; // ebp
  __int64 *v21; // rdi
  __int64 v22; // r13
  int v23; // ebx
  unsigned int v24; // ebp
  unsigned int v25; // r14d
  size_t v26; // rax
  size_t v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  char v30; // al
  __int64 *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // [rsp+Ch] [rbp-13Ch]
  char v37; // [rsp+1Fh] [rbp-129h] BYREF
  __m128i v38; // [rsp+20h] [rbp-128h] BYREF
  __int64 v39; // [rsp+30h] [rbp-118h]
  __int64 v40[3]; // [rsp+40h] [rbp-108h] BYREF
  void *v41; // [rsp+58h] [rbp-F0h]
  __int64 v42; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE *v43; // [rsp+80h] [rbp-C8h] BYREF
  char v44; // [rsp+88h] [rbp-C0h]
  __int64 v45; // [rsp+90h] [rbp-B8h]
  void *v46; // [rsp+98h] [rbp-B0h]
  __int64 (__fastcall *v47)(__int64); // [rsp+A0h] [rbp-A8h]
  __int64 v48; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-98h]
  unsigned __int8 *v50[17]; // [rsp+C0h] [rbp-88h] BYREF

  v4 = (int *)(a1 + 16);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v39 = *(_QWORD *)(a1 + 32);
  v6 = *(_DWORD *)(a1 + 16);
  v38 = v5;
  *(_DWORD *)(a1 + 40) = v6;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v7 = *(__int64 **)(a1 + 8);
  if ( *(_WORD *)(a1 + 32) == 27 && (_WORD)v39 == 100 )
  {
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v7, v4);
    v19 = *(_WORD *)(a1 + 32);
    if ( v19 == 22 )
    {
      v45 = a1;
      v43 = (_BYTE *)(a1 + 1952);
      v30 = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      v44 = v30;
      LODWORD(v46) = 1507350;
      WORD2(v46) = 63;
      v47 = sub_146A990;
      v48 = 0;
      v49 = 0;
      sub_149FA40((__int64)&v43);
      if ( *(_WORD *)(a1 + 32) != 5 )
      {
        sub_1564840(v50, a1, v4, 1633);
        sub_AEA040((__int64)v50);
        LOWORD(v50[0]) = 23;
        sub_15680D0(a1, v50, 1, 1);
        *v43 = v44;
        return 1;
      }
      if ( sub_14B5A80(5) )
        v22 = 0;
      else
        v22 = *(_QWORD *)(a1 + 24);
      v31 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v31, v4);
      v36 = *(_DWORD *)(a1 + 40);
      sub_14808E0((__int64)&v43, (__int64 *)v4, v32, v33, v34, v35);
      v25 = HIDWORD(v49);
      if ( !HIDWORD(v49) )
        v25 = sub_13DC060(
                v36,
                0,
                *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
                v5,
                *(double *)a3.m128_u64);
      *v43 = v44;
    }
    else
    {
      if ( v19 != 5 )
      {
        sub_1564840(v50, a1, v4, 1887);
        sub_AEA040((__int64)v50);
        return 1;
      }
      v20 = *(_DWORD *)(a1 + 40);
      v21 = *(__int64 **)(a1 + 8);
      v22 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v21, v4);
      v23 = *(_DWORD *)(a1 + 40);
      v36 = v23;
      v24 = sub_13DC060(
              v20,
              0,
              *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
              v5,
              *(double *)a3.m128_u64);
      v25 = sub_13DC060(
              v23,
              0,
              *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
              v5,
              *(double *)a3.m128_u64);
      sub_1564820(v50, a1, v24, 1833);
      sub_AE9DF0(v50, v22, 5u);
      v26 = j__strlen("(");
      sub_9EC740((__int64)v40, v24, "(", v26, 0);
      if ( LODWORD(v40[0]) && HIDWORD(v40[0]) )
        sub_14B8100((__int64 *)v50, (unsigned __int64)v40);
      v27 = j__strlen(")");
      sub_9EC740((__int64)&v43, v25, ")", v27, 0);
      if ( (_DWORD)v43 && HIDWORD(v43) )
        sub_14B8100((__int64 *)v50, (unsigned __int64)&v43);
      if ( v46 != &v48 )
        operator delete(v46);
      if ( v41 != &v42 )
        operator delete(v41);
      sub_AEA040((__int64)v50);
    }
    if ( v22 )
    {
      v28 = *(_QWORD *)(a1 + 96);
      sub_18C79B0(v28, 0, 0, 4);
      v11 = sub_1E4EEA0(
              *(_QWORD *)(a1 + 96),
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
              v38.m128i_u32[0],
              v22,
              v36,
              v25);
      sub_190D5E0(v28);
      return v11;
    }
    return 1;
  }
  v8 = (char *)v7[7];
  if ( (v8[1] & 8) != 0 )
  {
    if ( (_WORD)v39 == 159 || (_WORD)v39 == 112 )
    {
      sub_1564840(v50, a1, &v38, 2111);
      sub_AEA040((__int64)v50);
      goto LABEL_8;
    }
    v9 = *v8;
  }
  else
  {
    v9 = *v8;
    if ( (v9 & 8) != 0 && (_WORD)v39 == 159 )
    {
      v14 = 2071;
LABEL_21:
      sub_1564840(v50, a1, &v38, v14);
      v15 = sub_10CBF50(v39);
      sub_AE9DF0(v50, v15, 1u);
      sub_AEA040((__int64)v50);
      goto LABEL_8;
    }
  }
  if ( (v9 & 0x10) != 0 && (_WORD)v39 == 125 )
  {
    v14 = 2066;
    goto LABEL_21;
  }
LABEL_8:
  v10 = *(_QWORD *)(a1 + 96);
  sub_18C79B0(v10, 0, 0, 4);
  v40[0] = 0;
  v43 = nullptr;
  v11 = sub_14C3CF0(a1, (unsigned int *)&v38, &v37, v40, &v43, v5, a3);
  if ( (_WORD)v39 == 159 )
    goto LABEL_55;
  if ( (unsigned __int16)v39 <= 0x9Fu )
  {
    if ( (_WORD)v39 != 112 )
    {
      if ( (_WORD)v39 == 125 )
      {
        v12 = 2;
        if ( (**(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL) & 0x10) == 0 )
        {
          sub_1564840(v50, a1, &v38, 1945);
          v29 = sub_10CBF50(v39);
          sub_AE9DF0(v50, v29, 1u);
          sub_AEA040((__int64)v50);
          goto LABEL_26;
        }
        goto LABEL_14;
      }
      if ( (_WORD)v39 == 101 )
      {
        v12 = 1;
        goto LABEL_14;
      }
LABEL_25:
      v12 = 0;
LABEL_26:
      if ( v37 )
        goto LABEL_15;
      if ( (_WORD)v39 == 159 || (_WORD)v39 == 112 )
      {
        sub_1564840(v50, a1, &v38, 1939);
        v16 = v39;
        v17 = sub_141A630((unsigned __int16)v39);
        if ( v16 == 1 || v17 )
          v18 = 0;
        else
          v18 = v38.m128i_i64[1];
        sub_AE9DF0(v50, v18, 5u);
        sub_AEA040((__int64)v50);
      }
LABEL_32:
      if ( v11 != 1 )
        v11 = sub_1967CB0(*(_QWORD *)(a1 + 96), v38.m128i_u32[0], v12, 0, v11 & 0xFFFFFFFFFFFFFFFELL, v43);
      goto LABEL_16;
    }
LABEL_55:
    v12 = 3;
    goto LABEL_26;
  }
  if ( (_WORD)v39 == 340 )
  {
    v12 = 6;
    goto LABEL_14;
  }
  if ( (unsigned __int16)v39 <= 0x154u )
  {
    v12 = 4;
    if ( (_WORD)v39 == 188 )
      goto LABEL_14;
    goto LABEL_25;
  }
  if ( (_WORD)v39 != 366 )
  {
    v12 = 8;
    if ( (_WORD)v39 == 402 )
      goto LABEL_14;
    goto LABEL_25;
  }
  v12 = 7;
LABEL_14:
  if ( !v37 )
    goto LABEL_32;
LABEL_15:
  v11 = sub_1967CB0(*(_QWORD *)(a1 + 96), v38.m128i_u32[0], v12, 1, v40[0], v43);
LABEL_16:
  sub_190D5E0(v10);
  return v11;
}
