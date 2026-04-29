__int64 __fastcall sub_2D3360(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rax
  __m128i v22; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v23; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+18h] [rbp-C0h]
  __int64 v25; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+38h] [rbp-A0h]
  __int64 v27; // [rsp+50h] [rbp-88h] BYREF
  __int128 v28; // [rsp+58h] [rbp-80h]
  __int64 v29; // [rsp+70h] [rbp-68h] BYREF
  __int128 v30; // [rsp+78h] [rbp-60h]
  unsigned __int64 v31; // [rsp+88h] [rbp-50h]
  __int128 v32; // [rsp+90h] [rbp-48h]
  int v33; // [rsp+A0h] [rbp-38h]
  unsigned __int64 v34; // [rsp+A8h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v24 = 0;
  v23 = 0;
  v2 = sub_2B15B0(a1, a2, 0);
  v3 = 0;
  if ( netnode_qgetblob(v2, &v23, 1, 0, 118) <= 0 )
    goto LABEL_2;
  v29 = 0;
  v30 = 0;
  v32 = 0;
  v26 = 0;
  v31 = 0;
  v33 = 1;
  v25 = 0;
  v22 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)(v23 + (unsigned __int64)v24));
  sub_2D2770(a1, (__int64)&v29, &v22, a2, &v25, v22);
  v28 = 0;
  v27 = 0;
  sub_2B7240((__int64)&v27, a2, (__int64)&v29, &v25);
  v5 = v27;
  v6 = v28;
  v7 = sub_2B15B0(a1, a2, 1);
  netnode_setblob(v7, v5, (v6 == 0) + v6 - 1, 0, 118);
  if ( v5 )
    qfree(v5);
  v8 = v25;
  if ( v25 )
  {
    v9 = v26;
    if ( (_QWORD)v26 )
    {
      v10 = 0;
      do
      {
        v11 = (__int64 *)(v8 + 24 * v10);
        v12 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v12);
          v8 = v25;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v8);
  }
  v13 = v31;
  if ( v31 )
  {
    v14 = *(_QWORD *)v31;
    if ( !(_QWORD)v32 )
    {
      *(_QWORD *)v31 = *(_QWORD *)v31 & 3LL | v31 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
      *(_QWORD *)v31 &= ~1uLL;
      *(_QWORD *)v31 |= 2uLL;
LABEL_25:
      if ( v31 )
        qfree(v31);
      goto LABEL_27;
    }
    v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_24:
      *(_QWORD *)v13 = v14 & 3 | v13 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
      *(_QWORD *)v31 &= ~1uLL;
      *(_QWORD *)v31 |= 2uLL;
      *(_QWORD *)&v32 = 0;
      goto LABEL_25;
    }
    v16 = *(_QWORD **)(v15 + 8);
    if ( (*(_BYTE *)v16 & 2) != 0 )
    {
      v17 = *(_QWORD **)(v15 + 16);
      if ( (*(_BYTE *)v17 & 2) != 0 )
        goto LABEL_35;
    }
    else
    {
      sub_2ABC20(v16);
      v17 = *(_QWORD **)(v15 + 16);
      if ( (*(_BYTE *)v17 & 2) != 0 )
        goto LABEL_20;
    }
    sub_2ABC20(v17);
LABEL_20:
    if ( (*(_BYTE *)v15 & 2) != 0 )
    {
LABEL_21:
      if ( v14 > 3 )
        qfree(v14 & 0xFFFFFFFFFFFFFFFCLL);
      v13 = v31;
      v14 = *(_QWORD *)v31;
      goto LABEL_24;
    }
LABEL_35:
    cleanup_argloc(v15 + 48);
    cleanup_argloc(v15 + 24);
    *(_QWORD *)v15 |= 2uLL;
    goto LABEL_21;
  }
LABEL_27:
  v18 = v29;
  if ( v29 )
  {
    v19 = v30;
    if ( (_QWORD)v30 )
    {
      v20 = 0;
      do
      {
        v21 = 3 * v20++;
        sub_2B4D80((_QWORD *)(32 * v21 + v18));
        v18 = v29;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v30 = 0;
    qfree(v18);
  }
  v3 = 1;
LABEL_2:
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  return v3;
}
