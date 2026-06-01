__int64 __fastcall sub_8CA260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v8; // rdx
  __m128 v9; // xmm0
  __int64 v10; // r15
  __m128i v11; // xmm0
  char v12; // al
  char v13; // cl
  int v14; // eax
  char v15; // cl
  unsigned __int8 v16; // si
  _BOOL8 v17; // rcx
  unsigned int v18; // ebp
  __int64 v19; // rsi
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  int v24; // eax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __m128i v30; // [rsp+0h] [rbp-538h] BYREF
  __int64 v31; // [rsp+18h] [rbp-520h]
  _DWORD v32[16]; // [rsp+20h] [rbp-518h] BYREF
  _BYTE v33[8]; // [rsp+60h] [rbp-4D8h] BYREF
  _DWORD v34[14]; // [rsp+68h] [rbp-4D0h] BYREF
  char v35; // [rsp+A0h] [rbp-498h]
  int v36; // [rsp+A8h] [rbp-490h]
  _QWORD v37[103]; // [rsp+C0h] [rbp-478h] BYREF
  __m128i v38; // [rsp+3F8h] [rbp-140h]
  __int64 v39; // [rsp+408h] [rbp-130h]
  __int64 v40; // [rsp+410h] [rbp-128h]
  unsigned int v41; // [rsp+418h] [rbp-120h]
  __int64 v42; // [rsp+420h] [rbp-118h]
  __int64 v43; // [rsp+428h] [rbp-110h]
  int v44; // [rsp+430h] [rbp-108h]
  __int64 v45; // [rsp+438h] [rbp-100h]
  char v46; // [rsp+448h] [rbp-F0h]
  __int64 v47; // [rsp+450h] [rbp-E8h]
  __int16 v48; // [rsp+458h] [rbp-E0h]
  char v49; // [rsp+45Ah] [rbp-DEh]
  __int64 v50; // [rsp+460h] [rbp-D8h]
  void *ptr; // [rsp+468h] [rbp-D0h]
  __int64 v52; // [rsp+470h] [rbp-C8h]
  _BYTE v53[64]; // [rsp+478h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+4B8h] [rbp-80h]
  __int64 v55; // [rsp+4C0h] [rbp-78h]
  int v56; // [rsp+4C8h] [rbp-70h]
  __int64 v57; // [rsp+4D0h] [rbp-68h]
  char v58; // [rsp+4DCh] [rbp-5Ch]
  __int64 v59; // [rsp+4E0h] [rbp-58h]
  char v60; // [rsp+4ECh] [rbp-4Ch]
  char v61; // [rsp+4F4h] [rbp-44h]

  v6 = a1 + 8;
  ++*(_DWORD *)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = _mm_loadh_ps((const double *)(a1 + 24));
  v10 = *(_QWORD *)(a1 + 16);
  v31 = a4;
  sub_8E96B0(v37, a1, v8, a2, a1 + 8, a6, v9.m128_u64[0], v9.m128_u64[1]);
  v11 = _mm_load_si128(&v30);
  v41 = 0;
  v39 = 0;
  v40 = 0;
  v37[0] = &off_49F7368;
  v48 = 0;
  v44 = 0;
  v52 = 0x300000000LL;
  v12 = *(_BYTE *)(a3 + 28);
  v42 = 0;
  v13 = v12;
  v14 = v12 & 0x7F;
  v43 = 0;
  v15 = v13 & 0x7F;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v49 = 0;
  v50 = 0;
  ptr = v53;
  v53[48] = 0;
  v53[56] = 0;
  v56 = 0;
  v54 = 0;
  v55 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v38 = v11;
  if ( (unsigned int)(v14 - 38) > 6 )
    goto LABEL_8;
  v16 = *(_BYTE *)(a3 + 96) & 7;
  if ( v16 )
  {
    if ( (*(_BYTE *)(a3 + 96) & 7) != 5 )
      goto LABEL_4;
    if ( v14 != 44 && v14 != 38 )
      goto LABEL_45;
    v27 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      v27 = *(_QWORD *)(v27 + 8);
    if ( !v27 )
    {
LABEL_45:
      if ( v15 == 41 )
        goto LABEL_8;
      goto LABEL_36;
    }
    v28 = *(_BYTE *)(sub_79C2A0(v27) + 8) & 0x7F;
    if ( (unsigned __int8)v28 > 0x10u )
    {
      if ( (((_BYTE)v28 + 96) & 0x7Fu) <= 5 )
        goto LABEL_52;
    }
    else
    {
      v29 = 65922;
      if ( _bittest64(&v29, v28) )
      {
LABEL_52:
        v16 = *(_BYTE *)(a3 + 96) & 7;
LABEL_4:
        if ( v16 > 3u )
        {
          v15 = *(_BYTE *)(a3 + 28) & 0x7F;
          goto LABEL_6;
        }
LABEL_36:
        v21 = *(_QWORD *)(a3 + 48);
        goto LABEL_37;
      }
    }
    if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x29 && (*(_BYTE *)(a3 + 96) & 7u) > 3 )
      goto LABEL_8;
    goto LABEL_36;
  }
  v21 = *(_QWORD *)(a3 + 48);
  v22 = *(_QWORD *)&byte_8[v21 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v22 & 8) == 0
    || (unsigned int)((*(__int64 *)((char *)&qword_18 + (v22 & 0xFFFFFFFFFFFFFFF0LL))
                     | (unsigned __int64)(((unsigned __int8)v22 | (unsigned __int8)v21) & 7)) >> 9) != 3 )
  {
    if ( (v15 & 0xFD) != 0x29 )
    {
      v23 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
        v23 = *(_QWORD *)(v23 + 8);
      v24 = *(_BYTE *)(sub_79C2A0(v23) + 8) & 0x7F;
      if ( v24 != 22 && v24 )
      {
        if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x29 )
        {
          if ( (*(_BYTE *)(a3 + 96) & 0x18) == 0 )
            goto LABEL_8;
        }
        else
        {
          v25 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
            v25 = *(_QWORD *)v25;
          if ( ((*(_BYTE *)(v25 + 8) + 72) & 0x7Fu) > 3 && (*(_BYTE *)(a3 + 96) & 0x18) == 0 )
          {
LABEL_7:
            if ( *(char *)(a3 + 97) >= 0 )
              goto LABEL_8;
            goto LABEL_36;
          }
        }
      }
      goto LABEL_36;
    }
    if ( (*(_BYTE *)(a3 + 96) & 0x18) == 0 )
    {
LABEL_6:
      if ( v15 == 41 )
      {
LABEL_8:
        v17 = 0;
        goto LABEL_9;
      }
      goto LABEL_7;
    }
  }
LABEL_37:
  v17 = 1;
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v26 + 16) != 47 )
    v17 = (unsigned __int8)(*(_BYTE *)(v26 + 16) - 2) <= 4u;
LABEL_9:
  sub_8FA730(v33, v37, a3, v17);
  if ( v36 == 3 )
  {
    v18 = 0;
    sub_8E97F0(v37);
    sub_A1A430(v6, v10);
  }
  else
  {
    if ( !v10 )
      sub_8E97F0(v37);
    sub_9A0B00(v32, v33);
    sub_6A01B0(v31, (__int64)v32);
    if ( v32[0] > 1u )
      sub_69F740((__int64)v32);
    v18 = 1;
  }
  if ( v35 != -1 )
  {
    if ( v35 == 1 )
    {
      sub_A1C0C0(v34);
    }
    else if ( (unsigned __int8)v35 > 2u && v34[0] > 1u )
    {
      sub_69F740((__int64)v34);
    }
    v35 = -1;
  }
  v37[0] = &off_49F7368;
  operator delete();
  if ( ptr != v53 )
    free(ptr);
  operator delete();
  v19 = 24LL * v41;
  operator delete();
  sub_93F7A0(v37, v19);
  return v18;
}

