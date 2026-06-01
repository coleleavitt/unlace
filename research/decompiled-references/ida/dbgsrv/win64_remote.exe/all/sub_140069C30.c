/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140069C30
// Address: 0x0000000140069C30

//----- (0000000140069C30) ----------------------------------------------------
__int64 __fastcall sub_140069C30(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // r12
  __int16 v8; // si
  unsigned __int64 v9; // r8
  unsigned __int8 v10; // dl
  void *v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // dl
  unsigned __int16 v15; // cx
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // dl
  unsigned __int16 v18; // cx
  size_t v19; // r8
  const char *v20; // rdx
  void *Block; // [rsp+28h] [rbp-40h] BYREF
  __int64 v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+38h] [rbp-30h]
  unsigned __int16 v25; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int16 v26; // [rsp+7Ah] [rbp+12h]

  v3 = a3;
  v6 = a2;
  v7 = (unsigned __int64)&a2[a3];
  if ( a2 >= &a2[a3] )
    return v6 - a2;
  while ( 1 )
  {
    v8 = *v6;
    if ( (v8 & 0x80u) == 0 )
    {
      v9 = *(_QWORD *)(a1 + 8) + 1LL;
      if ( v9 > *(_QWORD *)(a1 + 16) )
        *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v9, 1u);
      *(_BYTE *)(*(_QWORD *)a1 + (*(_QWORD *)(a1 + 8))++) = v8;
      ++v6;
      --v3;
      goto LABEL_36;
    }
    if ( (v8 & 0xE0) != 0xC0 )
      break;
    if ( v3 < 2 )
      goto LABEL_39;
    v10 = v6[1];
    if ( (_BYTE)v8 == 0xC0 && v10 == 0x80 )
    {
      v11 = *(void **)a1;
      v12 = *(_QWORD *)(a1 + 8) + 1LL;
      if ( v12 > *(_QWORD *)(a1 + 16) )
      {
        v11 = sub_14005ABE0(a1, v11, v12, 1u);
        *(_QWORD *)a1 = v11;
      }
      *((_BYTE *)v11 + (*(_QWORD *)(a1 + 8))++) = 0;
      v6 += 2;
      v3 -= 2;
    }
    else
    {
      if ( (unsigned __int8)(v10 + 0x80) > 0x3Fu || (v10 & 0x3F | ((v8 & 0x1Fu) << 6)) < 0x80 )
        goto LABEL_38;
      sub_1400017A0((_QWORD *)a1, v6, 2u);
      v6 += 2;
      v3 -= 2;
    }
LABEL_36:
    if ( (unsigned __int64)v6 >= v7 )
      return v6 - a2;
  }
  if ( (v8 & 0xF0) != 0xE0 )
    goto LABEL_38;
  if ( v3 < 3 )
  {
LABEL_39:
    *errno() = 22;
    return -1;
  }
  v13 = v6[1];
  v14 = v6[2];
  if ( (unsigned __int8)(v13 + 0x80) > 0x3Fu )
    goto LABEL_38;
  if ( (unsigned __int8)(v14 + 0x80) > 0x3Fu )
    goto LABEL_38;
  v15 = v14 & 0x3F | (((unsigned __int16)(v8 << 6) | v13 & 0x3F) << 6);
  if ( v15 < 0x800u )
    goto LABEL_38;
  if ( (unsigned __int16)(v15 + 10240) > 0x3FFu )
  {
    sub_1400017A0((_QWORD *)a1, v6, 3u);
    v6 += 3;
    v3 -= 3;
    goto LABEL_36;
  }
  v25 = v15;
  if ( v3 - 3 < 3 )
    goto LABEL_39;
  v16 = v6[4];
  v17 = v6[5];
  if ( (unsigned __int8)(v16 + 0x80) > 0x3Fu
    || (unsigned __int8)(v17 + 0x80) > 0x3Fu
    || (v18 = v17 & 0x3F | (((v6[3] << 6) | v16 & 0x3F) << 6), v18 < 0xDC00u)
    || v18 >= 0xE000u )
  {
LABEL_38:
    *errno() = 42;
    return -1;
  }
  v26 = v18;
  Block = nullptr;
  v23 = 0;
  v24 = 0;
  if ( sub_140061D80((__int64)&Block, &v25, 2) )
  {
    v19 = v23 - 1;
    if ( !v23 )
      v19 = 0;
    v20 = Str1;
    if ( v23 )
      v20 = (const char *)Block;
    sub_1400017A0((_QWORD *)a1, v20, v19);
    v6 += 6;
    v3 -= 6;
    if ( Block )
    {
      v23 = 0;
      j_free(Block);
    }
    goto LABEL_36;
  }
  *errno() = 42;
  if ( Block )
  {
    v23 = 0;
    j_free(Block);
  }
  return -1;
}
