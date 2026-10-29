__int64 __fastcall sub_7EF650(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  __int64 v16; // r15
  __m128i v17; // rax
  __int64 v18; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r15
  __m128i v25; // [rsp+0h] [rbp-88h] BYREF
  __int64 v26; // [rsp+10h] [rbp-78h]
  __m128i v27; // [rsp+20h] [rbp-68h] BYREF
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  __int64 v30; // [rsp+40h] [rbp-48h]

  v7 = sub_7EF1F0((__int64)a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48), a4, a5, a6);
  if ( !(_BYTE)v7 )
    return 0;
  v11 = v7;
  if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
  {
    v20 = 8LL * *(unsigned int *)(a2 + 4);
    if ( (*(_WORD *)a2 & 0x1FF) == 0x19 )
    {
      v8 = *(unsigned int *)(a2 + v20 + 64);
      if ( !(_DWORD)v8 )
        goto LABEL_3;
      v21 = *(unsigned int *)(a2 + v20 + 76);
      v22 = a2 + v20 + 80;
    }
    else
    {
      if ( !*(_DWORD *)(a2 + v20 + 80) )
        goto LABEL_3;
      v21 = *(unsigned int *)(a2 + v20 + 92);
      v22 = a2 + v20 + 96;
    }
    if ( (_DWORD)v21 )
    {
      v23 = 32 * v21;
      v24 = v22 + v23;
      while ( (unsigned __int8)sub_7EF520(a1, v22, v23, v8, v9, v10) )
      {
        v22 += 32;
        if ( v22 == v24 )
          goto LABEL_3;
      }
      return 0;
    }
  }
LABEL_3:
  sub_AC4830(&v27);
  v15 = v29;
  v16 = v30;
  v26 = v28;
  v17 = _mm_load_si128(&v27);
  v25 = v17;
LABEL_4:
  if ( v15 != v17.m128i_i64[0] )
  {
LABEL_5:
    v18 = v17.m128i_i8[8] & 3;
    if ( (_DWORD)v18 )
      v17.m128i_i64[0] = sub_ACE280(&v25, a2, v18, v12, v13, v14);
    do
    {
      a2 = *(_QWORD *)v17.m128i_i64[0];
      if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v17.m128i_i64[0], a3) )
        return 0;
      v17.m128i_i64[1] = v25.m128i_i64[1];
      if ( (v25.m128i_i8[8] & 3) != 0 )
      {
        if ( v25.m128i_i64[1] <= 3uLL )
        {
          a2 = 1;
          sub_ACE0F0(&v25, 1);
        }
        else
        {
          sub_ACE150(&v25);
        }
        v17 = v25;
        goto LABEL_4;
      }
      v17.m128i_i64[0] = v25.m128i_i64[0] + 8;
      v25.m128i_i64[0] = v17.m128i_i64[0];
    }
    while ( v15 != v17.m128i_i64[0] );
  }
  if ( v16 != v17.m128i_i64[1] )
    goto LABEL_5;
  return v11;
}

