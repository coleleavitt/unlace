__int64 __fastcall sub_14A98F0(
        const __m128i *a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        __int32 *a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v12; // rax
  char *v13; // rbx
  __int64 v14; // rcx
  char v15; // dl
  int v16; // r15d
  char v17; // bp
  unsigned int v18; // edi
  unsigned int v19; // r13d
  __int16 v20; // ax
  __int64 *v21; // rax
  __int64 v22; // rdx
  int v23; // ebx
  __int64 v25; // rax
  int v26; // edi
  __int64 v27; // rax
  int v28; // ecx
  unsigned int v29; // eax
  size_t v30; // rax
  unsigned int *v31; // rcx
  size_t v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rbp
  __int32 v35; // eax
  __int64 v36; // rax
  size_t v37; // rax
  _DWORD *v38; // rcx
  unsigned __int32 v42; // [rsp+1Ch] [rbp-CCh]
  _DWORD v43[2]; // [rsp+20h] [rbp-C8h] BYREF
  char v44; // [rsp+28h] [rbp-C0h]
  __int64 v45; // [rsp+2Ch] [rbp-BCh]
  char v46; // [rsp+34h] [rbp-B4h]
  void *v47; // [rsp+38h] [rbp-B0h]
  __int64 v48; // [rsp+40h] [rbp-A8h]
  _BYTE v49[24]; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int8 *v50[17]; // [rsp+60h] [rbp-88h] BYREF

  v42 = a1[1].m128i_u32[0];
  v12 = a1->m128i_i64[1];
  v13 = *(char **)(v12 + 56);
  v14 = *(_QWORD *)(v12 + 64);
  v15 = *v13;
  if ( (v13[1] & 8) != 0 )
  {
    v16 = 242;
    v17 = 2;
    if ( v15 >= 0 )
    {
      v18 = 2;
      if ( (v13[89] & 1) == 0 )
        goto LABEL_4;
    }
  }
  else
  {
    v16 = 243;
    v17 = 3;
    if ( v15 >= 0 )
    {
      v18 = 3;
      if ( (v13[89] & 1) == 0 )
        goto LABEL_4;
    }
  }
  if ( (unsigned int)sub_FBCE00(5u, a6, (__int64)a2, v14, (__int64)v13) )
  {
    v17 = 5;
    HIBYTE(v20) = BYTE1(v16) & 0xFC;
    LOBYTE(v20) = -11;
    LOWORD(v16) = v20;
    goto LABEL_10;
  }
  v25 = a1->m128i_i64[1];
  v26 = (unsigned __int8)v13[1] << 28;
  v14 = *(_QWORD *)(v25 + 64);
  v13 = *(char **)(v25 + 56);
  v18 = (v26 >> 31) + 3;
LABEL_4:
  if ( !(unsigned int)sub_FBCE00(v18, a6, (__int64)a2, v14, (__int64)v13) )
  {
    v19 = 0;
    sub_146A990((__int64)a1);
    LOWORD(v50[0]) = 23;
    sub_15680D0(a1, v50, 1, 0);
    return v19;
  }
LABEL_10:
  if ( a6 )
  {
    v21 = *(__int64 **)(a6 + 16);
    v22 = *v21;
    if ( (unsigned int)*v21 == 3 )
    {
      if ( *((_WORD *)v21 + 8) == 28263 && *((_BYTE *)v21 + 18) == 117 )
        goto LABEL_43;
      if ( *((_WORD *)v21 + 8) == 28015 && *((_BYTE *)v21 + 18) == 112 )
      {
        v27 = a2[2];
        if ( (unsigned int)*(_QWORD *)v27 == 9 )
        {
          if ( *(_QWORD *)(v27 + 16) != 0x7669746365726964LL || *(_BYTE *)(v27 + 24) != 101 )
            goto LABEL_15;
        }
        else if ( (unsigned int)*(_QWORD *)v27 != 8 || *(_QWORD *)(v27 + 16) != 0x65636E6575716573LL )
        {
          goto LABEL_15;
        }
        v19 = 1;
        v28 = -(*(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) < 0x33u);
        LOBYTE(v28) = v28 & 0x6F;
        sub_1564820(v50, a1, a3, (unsigned int)(v28 + 2158));
        sub_AEA040((__int64)v50);
        sub_14A9480((__int64)a1, (__int64)a2, a10, *(double *)a7.m128i_i64, *(double *)a8.m128_u64);
        return v19;
      }
    }
    else
    {
      if ( (_DWORD)v22 != 7 )
      {
        if ( (_DWORD)v22 == 5 )
        {
          if ( *((_DWORD *)v21 + 4) == 1851878499 && *((_BYTE *)v21 + 20) == 103 )
            goto LABEL_30;
        }
        else if ( (_DWORD)v22 == 6 && *((_DWORD *)v21 + 4) == 1634485087 && *((_WORD *)v21 + 10) == 26478 )
        {
LABEL_30:
          v23 = sub_1494580((__int64)a1, (__int64)a2, a3, a4, a5, a6, a7, a8, a9, v16 & 0xFFFFFFF0 | v17 & 7);
          if ( !*(_DWORD *)(a4 + 16) )
            return 1;
          goto LABEL_31;
        }
        goto LABEL_15;
      }
      if ( *((_DWORD *)v21 + 4) == 1852268383 && *((_WORD *)v21 + 10) == 24437 && *((_BYTE *)v21 + 22) == 95 )
      {
LABEL_43:
        v33 = a6;
        v19 = 1;
        sub_148F5D0((__int64)a1, a2, a3, (__int64 *)a4, a5, v33, a7, a8, a9, v16 & 0xFFFFFFF0 | v17 & 7, 0);
        return v19;
      }
    }
LABEL_15:
    v23 = sub_148B990((__int64)a1, (__int64)a2, a3, a4, a5, a6, a7, a8, a9, v16 & 0xFFF0 | v17 & 7u);
    goto LABEL_16;
  }
  v36 = a2[2];
  if ( *(_DWORD *)v36 != 6 || *(_DWORD *)(v36 + 16) != 1970500449 || *(_WORD *)(v36 + 20) != 25965 )
    goto LABEL_15;
  v23 = 1;
  if ( (unsigned __int8)sub_14A6B90(a1, a4, (__int64)a2, a3, 0, 0, a5, v17 & 7 | v16 & 0xFFF0u) )
    return 1;
LABEL_16:
  if ( !*(_DWORD *)(a4 + 16) )
    return 1;
LABEL_31:
  v29 = sub_F963B0(a2, a6, 2);
  if ( v29 == 178 )
    goto LABEL_52;
  if ( v29 <= 0xB2 )
  {
    if ( v29 == 85 )
      goto LABEL_52;
    if ( v29 > 0x55 )
    {
      if ( v29 != 115 && v29 != 132 )
        return 1;
      goto LABEL_52;
    }
    if ( v29 == 79 )
      goto LABEL_52;
    return 1;
  }
  if ( v29 == 391 )
    goto LABEL_52;
  if ( v29 <= 0x187 )
  {
    if ( v29 == 238 )
      goto LABEL_52;
    return 1;
  }
  if ( v29 == 393 )
  {
    if ( a6 )
      return 1;
    v37 = j__strlen("maybe_unused");
    v38 = (_DWORD *)a2[2];
    if ( v37 != *v38 || v37 && memcmp(v38 + 4, "maybe_unused", v37) )
      return 1;
  }
  else
  {
    if ( v29 != 405 )
      return 1;
    if ( a6 )
      return 1;
    v30 = j__strlen("nodiscard");
    v31 = (unsigned int *)a2[2];
    v32 = *v31;
    if ( v30 != v32 || *v31 && memcmp(v31 + 4, "nodiscard", v32) )
      return 1;
  }
LABEL_52:
  v34 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * *(unsigned int *)(a4 + 16) - 8);
  v19 = sub_15D85B0(v34, *(_QWORD *)(a1->m128i_i64[1] + 64));
  if ( !(_BYTE)v19 )
  {
    v19 = 1;
    sub_1815810(a1[6].m128i_i64[0], v34);
    *(_BYTE *)(v34 + 58) |= 1u;
    return v19;
  }
  LOBYTE(v23) = (unsigned int)sub_15D8240(v34) != 0 && v23 == 0;
  if ( (_BYTE)v23 )
  {
    sub_1564820(v50, a1, v42, 1556);
    sub_AE9DF0(v50, (__int64)a2, 5u);
    v19 = v23;
    sub_AEA040((__int64)v50);
    *(_BYTE *)(v34 + 58) |= 1u;
    return v19;
  }
  if ( (unsigned int)sub_15D8240(v34) )
    return 1;
  sub_1564820(v50, a1, v42, 1580);
  sub_AE9DF0(v50, (__int64)a2, 5u);
  v45 = 0;
  v46 = 0;
  v35 = *a5;
  v47 = v49;
  v48 = 0;
  v49[0] = 0;
  v49[16] = 0;
  v43[0] = v42;
  v43[1] = v35;
  v44 = 1;
  if ( v35 )
  {
    if ( v42 )
    {
      sub_14A2370((__int64 *)v50, (unsigned __int64)v43);
      if ( v47 != v49 )
        operator delete(v47);
    }
  }
  sub_AEA040((__int64)v50);
  *(_BYTE *)(v34 + 58) |= 1u;
  return v19;
}
