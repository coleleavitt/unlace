__int64 __fastcall sub_6746C0(__int64 *a1, __int64 a2, __int64 a3, double a4, __m128i a5, double a6, __m128 a7)
{
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i v13; // xmm0
  __int64 v14; // r13
  __int64 v15; // r15
  __m128i v16; // rax
  __int64 v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // r15
  __m128i v23; // [rsp+0h] [rbp-88h] BYREF
  __int64 v24; // [rsp+10h] [rbp-78h]
  __m128i v25; // [rsp+20h] [rbp-68h] BYREF
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h]

  v8 = sub_674510(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48), a4, a5, a6, a7);
  if ( !(_BYTE)v8 )
    return 0;
  v9 = v8;
  if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
  {
    v19 = 8LL * *(unsigned int *)(a2 + 4);
    if ( (*(_WORD *)a2 & 0x1FF) == 0x19 )
    {
      if ( !*(_DWORD *)(a2 + v19 + 64) )
        goto LABEL_3;
      v20 = *(unsigned int *)(a2 + v19 + 76);
      v21 = a2 + v19 + 80;
    }
    else
    {
      if ( !*(_DWORD *)(a2 + v19 + 80) )
        goto LABEL_3;
      v20 = *(unsigned int *)(a2 + v19 + 92);
      v21 = a2 + v19 + 96;
    }
    if ( (_DWORD)v20 )
    {
      v22 = v21 + 32 * v20;
      while ( (unsigned __int8)sub_674590(a1, v21, a4, a5, a6, a7) )
      {
        v21 += 32;
        if ( v21 == v22 )
          goto LABEL_3;
      }
      return 0;
    }
  }
LABEL_3:
  sub_AC4830(&v25);
  v13 = _mm_load_si128(&v25);
  v14 = v27;
  v15 = v28;
  v24 = v26;
  v16 = v13;
  v23 = v13;
LABEL_4:
  if ( v14 != v16.m128i_i64[0] )
  {
LABEL_5:
    v17 = v16.m128i_i8[8] & 3;
    if ( (_DWORD)v17 )
      v16.m128i_i64[0] = sub_ACE280(&v23, a2, v17, v10, v11, v12);
    do
    {
      a2 = *(_QWORD *)v16.m128i_i64[0];
      if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v16.m128i_i64[0], a3, *(double *)v13.m128i_i64, a5, a6, a7) )
        return 0;
      v16.m128i_i64[1] = v23.m128i_i64[1];
      if ( (v23.m128i_i8[8] & 3) != 0 )
      {
        if ( v23.m128i_i64[1] <= 3uLL )
        {
          a2 = 1;
          sub_ACE0F0(&v23, 1);
        }
        else
        {
          sub_ACE150(&v23);
        }
        v16 = v23;
        goto LABEL_4;
      }
      v16.m128i_i64[0] = v23.m128i_i64[0] + 8;
      v23.m128i_i64[0] = v16.m128i_i64[0];
    }
    while ( v14 != v16.m128i_i64[0] );
  }
  if ( v15 != v16.m128i_i64[1] )
    goto LABEL_5;
  return v9;
}

