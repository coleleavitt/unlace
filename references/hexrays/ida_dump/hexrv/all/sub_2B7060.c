unsigned __int64 __fastcall sub_2B7060(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rbp
  _BYTE *v7; // rdi
  _BYTE *v8; // rdi
  __int64 v9; // rdi
  const void *v10; // [rsp+0h] [rbp-58h] BYREF
  __int128 v11; // [rsp+8h] [rbp-50h]
  unsigned __int64 v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  __int16 v16; // [rsp+34h] [rbp-24h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v10 = nullptr;
  v12 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 256;
  v14 = a3;
  v11 = 0;
  sub_7D5E0(a2, (__int64 *)&v10);
  sub_2ACD80(a1, v10, v11);
  v3 = v12;
  if ( !v12 )
    goto LABEL_6;
  v4 = *(_QWORD *)v12;
  if ( !v13 )
  {
    *(_QWORD *)v12 = *(_QWORD *)v12 & 3LL | v12 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
    *(_QWORD *)v12 &= ~1uLL;
    *(_QWORD *)v12 |= 2uLL;
    goto LABEL_4;
  }
  v6 = v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v7 = *(_BYTE **)(v6 + 8);
    if ( (*v7 & 2) != 0 )
    {
      v8 = *(_BYTE **)(v6 + 16);
      if ( (*v8 & 2) != 0 )
        goto LABEL_19;
    }
    else
    {
      sub_2AC490((__int64)v7);
      v8 = *(_BYTE **)(v6 + 16);
      if ( (*v8 & 2) != 0 )
        goto LABEL_12;
    }
    sub_2AC490((__int64)v8);
LABEL_12:
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
LABEL_13:
      if ( v4 > 3 )
        qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v3 = v12;
      v4 = *(_QWORD *)v12;
      goto LABEL_16;
    }
LABEL_19:
    v9 = *(_QWORD *)(v6 + 32);
    if ( v9 )
    {
      *(_QWORD *)(v6 + 40) = 0;
      qfree(v9);
    }
    *(_QWORD *)v6 |= 2uLL;
    goto LABEL_13;
  }
LABEL_16:
  *(_QWORD *)v3 = v4 & 3 | v3 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
  *(_QWORD *)v12 &= ~1uLL;
  *(_QWORD *)v12 |= 2uLL;
  v13 = 0;
LABEL_4:
  if ( v12 )
    qfree(v12);
LABEL_6:
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v17 - __readfsqword(0x28u);
}
