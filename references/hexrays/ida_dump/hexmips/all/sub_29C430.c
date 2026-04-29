unsigned __int64 __fastcall sub_29C430(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // r13
  char tinfo_property; // al
  char v12; // al
  int v13; // eax
  __int64 v14; // rbp
  int v15; // eax
  __m128i v16; // xmm0
  int v17; // ecx
  __int64 v18; // r15
  __int64 v19; // r13
  char v20; // al
  char v21; // al
  __int64 v22; // rbx
  int v23; // eax
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rbx
  unsigned int *v28; // r13
  __int64 v29; // [rsp+10h] [rbp-88h]
  int v30; // [rsp+10h] [rbp-88h]
  int v31; // [rsp+1Ch] [rbp-7Ch]
  unsigned int v34[4]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+40h] [rbp-58h] BYREF
  __int64 v36; // [rsp+48h] [rbp-50h]
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v29 = (a3 - 1) / 2;
  if ( a2 < v29 )
  {
    for ( i = a2; ; i = v5 )
    {
      v5 = 2 * (i + 1);
      v6 = (i + 1) << 6;
      v7 = a1 + v6 - 32;
      v8 = a1 + v6;
      v9 = *(_DWORD *)(v7 + 28);
      if ( *(_DWORD *)(a1 + v6 + 28) < v9 )
        goto LABEL_19;
      v10 = v8 + 16;
      if ( *(_DWORD *)(a1 + v6 + 28) > v9 )
        goto LABEL_14;
      if ( (tinfo_property = get_tinfo_property(*(_QWORD *)(v8 + 16), 2), (tinfo_property & 0x3E) != 0)
        && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D)
        && (get_tinfo_property(*(_QWORD *)(v7 + 16), 2) & 0x3F) == 0x2D
        || (v12 = get_tinfo_property(*(_QWORD *)(v7 + 16), 2), (v12 & 0x3E) != 0)
        && ((v12 & 0xFu) <= 8 || (v12 & 0x3F) == 0x2D)
        && (get_tinfo_property(*(_QWORD *)(v8 + 16), 2) & 0x3F) == 0x2D )
      {
        v10 = v8 + 16;
        v31 = score_tinfo(v8 + 16);
        v15 = score_tinfo(v7 + 16);
        if ( v31 > v15 )
          goto LABEL_14;
        if ( v31 < v15 )
          goto LABEL_19;
      }
      v13 = *(_DWORD *)(v7 + 24);
      if ( *(_DWORD *)(v8 + 24) < v13 || (v10 = v8 + 16, *(_DWORD *)(v8 + 24) <= v13) && (int)sub_299E70(v8, v7) < 0 )
      {
LABEL_19:
        --v5;
        v8 = a1 + 32 * v5;
        v10 = v8 + 16;
      }
LABEL_14:
      v14 = a1 + 32 * i;
      sub_29AEF0(v14, (unsigned int *)v8);
      copy_tinfo_t(v14 + 16, v10);
      *(_DWORD *)(v14 + 24) = *(_DWORD *)(v8 + 24);
      *(_DWORD *)(v14 + 28) = *(_DWORD *)(v8 + 28);
      if ( v5 >= v29 )
        goto LABEL_23;
    }
  }
  v5 = a2;
LABEL_23:
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v5 )
  {
    v25 = v5 + 1;
    v26 = 2 * (v5 + 1);
    v27 = a1 + 32 * v5;
    v28 = (unsigned int *)(a1 + (v25 << 6) - 32);
    sub_29AEF0(v27, v28);
    copy_tinfo_t(v27 + 16, v28 + 4);
    *(_DWORD *)(v27 + 24) = v28[6];
    *(_DWORD *)(v27 + 28) = v28[7];
    v5 = v26 - 1;
  }
  v34[0] = 0;
  sub_29AEF0((__int64)v34, (unsigned int *)a4);
  v35 = 0;
  copy_tinfo_t(&v35, a4 + 16);
  v16 = _mm_loadl_epi64((const __m128i *)(a4 + 24));
  v36 = v16.m128i_i64[0];
  v17 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v16, 229));
  v18 = (v5 - 1) / 2;
  if ( v5 <= a2 )
  {
    v19 = a1 + 32 * v5;
  }
  else
  {
    while ( 1 )
    {
      v19 = a1 + 32 * v18;
      if ( v17 <= *(_DWORD *)(v19 + 28) )
      {
        if ( v17 < *(_DWORD *)(v19 + 28) )
          break;
        if ( (v20 = get_tinfo_property(*(_QWORD *)(v19 + 16), 2), (v20 & 0x3E) == 0)
          || (v20 & 0xFu) > 8 && (v20 & 0x3F) != 0x2D
          || (get_tinfo_property(v35, 2) & 0x3F) != 0x2D )
        {
          v21 = get_tinfo_property(v35, 2);
          if ( (v21 & 0x3E) == 0 || (v21 & 0xFu) > 8 && (v21 & 0x3F) != 0x2D )
            goto LABEL_37;
          if ( (get_tinfo_property(*(_QWORD *)(v19 + 16), 2) & 0x3F) != 0x2D )
            goto LABEL_37;
        }
        v30 = score_tinfo(v19 + 16);
        v23 = score_tinfo(&v35);
        if ( v30 > v23 )
          break;
        if ( v30 >= v23 )
        {
LABEL_37:
          if ( *(_DWORD *)(v19 + 24) >= (int)v36
            && (*(_DWORD *)(v19 + 24) > (int)v36 || (int)sub_299E70(a1 + 32 * v18, (__int64)v34) >= 0) )
          {
            break;
          }
        }
      }
      v22 = a1 + 32 * v5;
      sub_29AEF0(v22, (unsigned int *)(a1 + 32 * v18));
      copy_tinfo_t(v22 + 16, v19 + 16);
      *(_DWORD *)(v22 + 24) = *(_DWORD *)(v19 + 24);
      *(_DWORD *)(v22 + 28) = *(_DWORD *)(v19 + 28);
      if ( a2 >= v18 )
        goto LABEL_45;
      v5 = v18;
      v17 = HIDWORD(v36);
      v18 = (v18 - 1) / 2;
    }
    v19 = a1 + 32 * v5;
  }
LABEL_45:
  sub_29AEF0(v19, v34);
  copy_tinfo_t(v19 + 16, &v35);
  *(_QWORD *)(v19 + 24) = v36;
  clear_tinfo_t(&v35);
  sub_29A3B0((__int64)v34);
  return v37 - __readfsqword(0x28u);
}
