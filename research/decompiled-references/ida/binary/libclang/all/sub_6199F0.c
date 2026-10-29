__int64 __fastcall sub_6199F0(__m128i *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 *v11; // rbx
  unsigned int *v12; // r14
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rcx
  _DWORD *v26; // rdx
  __int64 v27; // rdi
  int v28; // eax
  __m128i v29; // [rsp+20h] [rbp-78h] BYREF
  __m128i v30; // [rsp+30h] [rbp-68h] BYREF
  __m128i v31; // [rsp+40h] [rbp-58h] BYREF
  __m128i v32[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 104);
  if ( !v4 )
  {
    v19 = *(_QWORD *)(a2 + 96);
    v20 = 0;
    v21 = *(_QWORD *)(v19 + 88);
    v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v21 & 1) != 0 )
    {
      if ( v22 )
        goto LABEL_19;
    }
    else if ( v22 <= 3 )
    {
      if ( v22 )
        goto LABEL_22;
    }
    else if ( (v21 & 2) != 0 )
    {
      v23 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
      v24 = v23[2275];
      if ( !v24 )
      {
        *(_QWORD *)(v19 + 88) = v19 & 0xFFFFFFFFFFFFFFFALL | 1;
        if ( (v19 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        {
LABEL_24:
          v4 = *(_QWORD *)(a2 + 104);
          goto LABEL_2;
        }
        goto LABEL_21;
      }
      v25 = v23[274];
      v23[284] += 24LL;
      v22 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v23[275] >= v22 + 24 && v25 )
        v23[274] = v22 + 24;
      else
        v22 = sub_5F8390((__int64)(v23 + 274), 24, 3);
      *(_QWORD *)v22 = v24;
      *(_DWORD *)(v22 + 8) = 0;
      v21 = v22 | 5;
      *(_QWORD *)(v22 + 16) = v19;
      *(_QWORD *)(v19 + 88) = v22 | 5;
      LOBYTE(v22) = v22 & 0xFA | 4;
LABEL_19:
      if ( (v22 & 4) != 0 )
      {
        v26 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v26 )
        {
          v27 = *(_QWORD *)v26;
          v28 = *(_DWORD *)(*(_QWORD *)v26 + 12LL);
          if ( v26[2] != v28 )
          {
            v26[2] = v28;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 144LL))(v27, v19);
            goto LABEL_24;
          }
        }
      }
LABEL_21:
      v20 = *(_QWORD *)(a2 + 104);
LABEL_22:
      v4 = v20;
      goto LABEL_2;
    }
LABEL_4:
    sub_639C30(&v29, a2, *(unsigned int *)(a2 + 24), a1->m128i_i64[0]);
    return sub_619180((__int64)a1, a2, v6, v7, v8, v9, (__int128)_mm_load_si128(&v29), (__int128)_mm_load_si128(&v30));
  }
LABEL_2:
  if ( v4 <= 7 )
    goto LABEL_4;
  v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2 != *(_QWORD *)v5 )
    goto LABEL_4;
  v11 = *(__int64 **)(v5 + 8);
  v12 = *(unsigned int **)(v5 + 24);
  v13 = &v11[*(unsigned int *)(v5 + 16)];
  if ( v13 == v11 )
    return sub_618260(a1, a2);
  while ( 1 )
  {
    v14 = *v11;
    sub_639C30(&v31, *v11, *v12, a1->m128i_i64[0]);
    result = sub_619180(
               (__int64)a1,
               v14,
               v15,
               v16,
               v17,
               v18,
               (__int128)_mm_load_si128(&v31),
               (__int128)_mm_load_si128(v32));
    if ( (_BYTE)result )
      break;
    ++v11;
    ++v12;
    if ( v11 == v13 )
      return sub_618260(a1, a2);
  }
  return result;
}

