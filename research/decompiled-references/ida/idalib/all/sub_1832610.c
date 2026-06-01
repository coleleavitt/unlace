void __fastcall sub_1832610(__int64 a1, __int64 a2, const __m128i *a3, double a4)
{
  __int64 v7; // rbp
  unsigned int v8; // eax
  unsigned __int8 v9; // cl
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // ebx
  unsigned __int64 v22; // rdx
  __int64 v23; // r12
  _DWORD *v24; // r12
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int32 v28; // ebx
  void *v29; // rbp
  __m128i *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // rax
  int v38; // ebp
  unsigned int v39; // esi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // [rsp+8h] [rbp-110h]
  void *base; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+28h] [rbp-F0h]
  _BYTE v48[32]; // [rsp+30h] [rbp-E8h] BYREF
  _DWORD v49[50]; // [rsp+50h] [rbp-C8h] BYREF

  v7 = 0;
  v47 = 0x800000000LL;
  base = v48;
  while ( a3[3].m128i_u16[4] > (unsigned int)v7 )
  {
    v23 = a3[5].m128i_i64[v7];
    v49[0] = 0;
    v24 = (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !(unsigned __int8)sub_1830010(a1, a2, (__int64)a3, (int)v7 + 1, v24, (__int64)v49, 0, 1u) )
      goto LABEL_33;
    v11 = 1;
    v25 = (v49[0] & 0x3FFFFFFF) - 1 - ((v49[0] & 0x40000000) != 0);
    v26 = sub_B8DC30(a2, 1);
    if ( v26 )
    {
      v8 = *(unsigned __int16 *)(v26 + 22);
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
      {
        if ( v25 >= *(_DWORD *)(a2 + 80) )
          goto LABEL_11;
        v10 = (v49[0] & 0x3FFFFFFF) - 1 - (unsigned int)((v49[0] & 0x40000000) != 0);
LABEL_21:
        v12 = 8 * v10;
        v13 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8 * v10);
        if ( v13 )
        {
LABEL_7:
          v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v15 = (unsigned int)v14;
          v16 = HIDWORD(v14);
          v12 = 8LL * ((v49[0] & 0x3FFFFFFF) - 1 - (unsigned int)((v49[0] & 0x40000000) != 0));
          goto LABEL_8;
        }
        goto LABEL_22;
      }
      v8 = *(_DWORD *)(a2 + 104);
    }
    if ( v25 >= v8 )
      goto LABEL_11;
    v9 = *(_BYTE *)(a2 + 28) & 0x7F;
    v10 = (v49[0] & 0x3FFFFFFF) - 1 - (unsigned int)((v49[0] & 0x40000000) != 0);
    v11 = (unsigned int)v9 - 34;
    v12 = 8 * v10;
    if ( (unsigned int)v11 <= 5 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v10);
LABEL_6:
      if ( v13 )
        goto LABEL_7;
LABEL_22:
      v16 = 0;
      v15 = 0;
      goto LABEL_8;
    }
    if ( v9 == 18 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v10);
      goto LABEL_6;
    }
    if ( v9 == 8 )
      goto LABEL_21;
    v16 = 0;
    v15 = 0;
LABEL_8:
    v45 = v15 | (v16 << 32);
    v17 = sub_EEC8C0((unsigned __int64)v24, v11, a4);
    v18 = sub_B8DC30(a2, 1);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + v12 + 48);
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
        v27 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v12);
      else
        v27 = *(_QWORD *)(*(_QWORD *)(a2 + 96) + v12);
      v19 = *(_QWORD *)(v27 + 48);
    }
    if ( (unsigned __int8)sub_180B6D0(a1, v19, (__int64)a3, v17, v45, 0) )
    {
LABEL_11:
      v20 = (unsigned int)v47;
      v21 = v49[0];
      v22 = (unsigned int)v47 + 1LL;
      if ( v22 > HIDWORD(v47) )
      {
        sub_2237220(&base, v48, v22, 4);
        v20 = (unsigned int)v47;
      }
      *((_DWORD *)base + v20) = v21;
      LODWORD(v47) = v47 + 1;
    }
    ++v7;
  }
  v28 = v47;
  if ( (_DWORD)v47 )
    goto LABEL_30;
  if ( a3[1].m128i_i32[2] < 0 || *(_DWORD *)(a1 + 11320) > *(_DWORD *)(a1 + 12596) )
  {
    v29 = base;
  }
  else
  {
    v35 = sub_B8DC30(a2, 1);
    if ( v35 )
    {
      LOBYTE(v36) = (unsigned __int8)BYTE3(*(_QWORD *)(v35 + 16)) >> 7;
    }
    else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
    {
      LOBYTE(v36) = (*(_BYTE *)(a2 + 49) & 0x20) != 0;
    }
    else
    {
      v36 = (*(_QWORD *)(a2 + 56) >> 18) & 1LL;
    }
    v37 = sub_B8DC30(a2, 1);
    if ( v37 )
    {
      v38 = *(unsigned __int16 *)(v37 + 22);
    }
    else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
    {
      v38 = *(_DWORD *)(a2 + 80);
    }
    else
    {
      v38 = *(_DWORD *)(a2 + 104);
    }
    if ( v38 )
    {
      while ( !(_BYTE)v36 )
      {
        v39 = v28++;
        v40 = sub_18064C0(a2, v39);
        LOBYTE(v36) = sub_1804940(v40, 0, v41, v42, v43, v44);
        if ( v28 == v38 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      if ( !(_BYTE)v36 )
      {
        sub_168B9F0((__int64)v49, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19B1u, 0);
        sub_15F7200(v49);
      }
    }
    v28 = v47;
LABEL_30:
    v29 = base;
    if ( 4 * (unsigned __int64)v28 > 4 )
      qsort(base, (4LL * v28) >> 2, 4u, (__compar_fn_t)sub_1803AD0);
  }
  v30 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
  sub_B2F020(v30, *(_QWORD *)(a1 + 248), a3, (__int64)v29, v28);
  sub_B8CC60(a2, (__int64)v30, v31, v32, v33, v34);
LABEL_33:
  if ( base != v48 )
    free(base);
}
