unsigned __int64 __fastcall sub_2A0CB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r14
  unsigned int *v8; // r15
  int v9; // eax
  char tinfo_property; // al
  char v11; // al
  signed int v12; // eax
  __int64 v13; // rbp
  int v14; // eax
  __m128i v15; // xmm0
  int v16; // ecx
  __int64 v17; // r15
  __int64 v18; // r13
  char v19; // al
  char v20; // al
  __int64 v21; // rbx
  int v22; // eax
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rbx
  unsigned int *v27; // r13
  __int64 v28; // [rsp+10h] [rbp-88h]
  int v29; // [rsp+10h] [rbp-88h]
  int v30; // [rsp+1Ch] [rbp-7Ch]
  unsigned int v33[4]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v34; // [rsp+40h] [rbp-58h]
  __int64 v35; // [rsp+48h] [rbp-50h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v28 = (a3 - 1) / 2;
  if ( a2 < v28 )
  {
    for ( i = a2; ; i = v5 )
    {
      v5 = 2 * (i + 1);
      v6 = (i + 1) << 6;
      v7 = a1 + v6 - 32;
      v8 = (unsigned int *)(a1 + v6);
      v9 = *(_DWORD *)(v7 + 28);
      if ( *(_DWORD *)(a1 + v6 + 28) < v9 )
        goto LABEL_19;
      if ( *(_DWORD *)(a1 + v6 + 28) > v9 )
        goto LABEL_14;
      if ( (tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) != 0)
        && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D)
        && (get_tinfo_property() & 0x3F) == 0x2D
        || (v11 = get_tinfo_property(), (v11 & 0x3E) != 0)
        && ((v11 & 0xFu) <= 8 || (v11 & 0x3F) == 0x2D)
        && (get_tinfo_property() & 0x3F) == 0x2D )
      {
        v30 = score_tinfo();
        v14 = score_tinfo();
        if ( v30 > v14 )
          goto LABEL_14;
        if ( v30 < v14 )
          goto LABEL_19;
      }
      v12 = *(_DWORD *)(v7 + 24);
      if ( (int)v8[6] < v12 || (int)v8[6] <= v12 && (int)sub_29E6F0((__int64)v8, v7) < 0 )
      {
LABEL_19:
        --v5;
        v8 = (unsigned int *)(a1 + 32 * v5);
      }
LABEL_14:
      v13 = a1 + 32 * i;
      sub_29F770(v13, v8);
      copy_tinfo_t();
      *(_DWORD *)(v13 + 24) = v8[6];
      *(_DWORD *)(v13 + 28) = v8[7];
      if ( v5 >= v28 )
        goto LABEL_23;
    }
  }
  v5 = a2;
LABEL_23:
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v5 )
  {
    v24 = v5 + 1;
    v25 = 2 * (v5 + 1);
    v26 = a1 + 32 * v5;
    v27 = (unsigned int *)(a1 + (v24 << 6) - 32);
    sub_29F770(v26, v27);
    copy_tinfo_t();
    *(_DWORD *)(v26 + 24) = v27[6];
    *(_DWORD *)(v26 + 28) = v27[7];
    v5 = v25 - 1;
  }
  v33[0] = 0;
  sub_29F770((__int64)v33, (unsigned int *)a4);
  v34 = 0;
  copy_tinfo_t();
  v15 = _mm_loadl_epi64((const __m128i *)(a4 + 24));
  v35 = v15.m128i_i64[0];
  v16 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v15, 229));
  v17 = (v5 - 1) / 2;
  if ( v5 <= a2 )
  {
    v18 = a1 + 32 * v5;
  }
  else
  {
    while ( 1 )
    {
      v18 = a1 + 32 * v17;
      if ( v16 <= *(_DWORD *)(v18 + 28) )
      {
        if ( v16 < *(_DWORD *)(v18 + 28) )
          break;
        if ( (v19 = get_tinfo_property(), (v19 & 0x3E) == 0)
          || (v19 & 0xFu) > 8 && (v19 & 0x3F) != 0x2D
          || (get_tinfo_property() & 0x3F) != 0x2D )
        {
          v20 = get_tinfo_property();
          if ( (v20 & 0x3E) == 0 || (v20 & 0xFu) > 8 && (v20 & 0x3F) != 0x2D )
            goto LABEL_37;
          if ( (get_tinfo_property() & 0x3F) != 0x2D )
            goto LABEL_37;
        }
        v29 = score_tinfo();
        v22 = score_tinfo();
        if ( v29 > v22 )
          break;
        if ( v29 >= v22 )
        {
LABEL_37:
          if ( *(_DWORD *)(v18 + 24) >= (int)v35
            && (*(_DWORD *)(v18 + 24) > (int)v35 || (int)sub_29E6F0(a1 + 32 * v17, (__int64)v33) >= 0) )
          {
            break;
          }
        }
      }
      v21 = a1 + 32 * v5;
      sub_29F770(v21, (unsigned int *)(a1 + 32 * v17));
      copy_tinfo_t();
      *(_DWORD *)(v21 + 24) = *(_DWORD *)(v18 + 24);
      *(_DWORD *)(v21 + 28) = *(_DWORD *)(v18 + 28);
      if ( a2 >= v17 )
        goto LABEL_45;
      v5 = v17;
      v16 = HIDWORD(v35);
      v17 = (v17 - 1) / 2;
    }
    v18 = a1 + 32 * v5;
  }
LABEL_45:
  sub_29F770(v18, v33);
  copy_tinfo_t();
  *(_QWORD *)(v18 + 24) = v35;
  clear_tinfo_t();
  sub_29EC30((__int64)v33);
  return v36 - __readfsqword(0x28u);
}
