__int64 __fastcall sub_7F0270(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // ebp
  unsigned __int32 v12; // ebp
  const __m128i *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  _QWORD *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  _DWORD *v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // r15
  _DWORD *v29; // rdx
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rsi
  _DWORD *v40; // rdx
  __int64 v41; // rdi
  int v42; // eax
  __int64 v43; // rsi
  __int64 v44; // r14
  __int64 v45; // rdi
  int v46; // eax
  __m128i v47; // [rsp+0h] [rbp-58h]
  __int64 v48; // [rsp+0h] [rbp-58h]
  __int64 v49; // [rsp+0h] [rbp-58h]
  __int64 v50; // [rsp+0h] [rbp-58h]
  __int64 v51; // [rsp+18h] [rbp-40h]
  __int64 v52; // [rsp+18h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 120);
  if ( (v8 & 4) != 0 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = (const __m128i *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v12 >= v13[1].m128i_i32[0] )
        break;
      v14 = v12++;
      sub_7ECC20(a1, *(_QWORD *)(v13[1].m128i_i64[1] + 8 * v14));
      v8 = *(_QWORD *)(a2 + 120);
      if ( (v8 & 4) == 0 )
        goto LABEL_2;
    }
    v47 = _mm_loadu_si128(v13);
    v9 = sub_7EF1F0((__int64)a1, v47.m128i_i64[0], v47.m128i_i64[1], a4, a5, a6);
  }
  else
  {
LABEL_2:
    v9 = sub_7EF1F0((__int64)a1, 0, 0, a4, a5, a6);
  }
  v10 = v9;
  if ( !(_BYTE)v9 )
    return 0;
  if ( (*(_BYTE *)(a2 + 74) & 1) == 0 )
    return v10;
  v15 = *(_QWORD *)(a2 + 104);
  v16 = *(_QWORD *)(v15 + 96);
  v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v16 & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_41;
  }
  else
  {
    if ( v17 <= 3 || (v16 & 2) == 0 )
      goto LABEL_41;
    v18 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
    v19 = v18[2275];
    if ( !v19 )
    {
      *(_QWORD *)(v15 + 96) = v15 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_41;
    }
    v20 = v18[274];
    v18[284] += 24LL;
    v17 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v18[275] >= v17 + 24 && v20 )
    {
      v18[274] = v17 + 24;
    }
    else
    {
      v48 = v19;
      v17 = sub_7DAE50((__int64)(v18 + 274), 24, 3);
      v19 = v48;
    }
    *(_QWORD *)v17 = v19;
    *(_DWORD *)(v17 + 8) = 0;
    v16 = v17 | 5;
    *(_QWORD *)(v17 + 16) = v15;
    *(_QWORD *)(v15 + 96) = v17 | 5;
    LOBYTE(v17) = v17 & 0xFA | 4;
  }
  if ( (v17 & 4) != 0 )
  {
    v29 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v29 )
    {
      v30 = *(_QWORD *)v29;
      v31 = *(_DWORD *)(*(_QWORD *)v29 + 12LL);
      if ( v29[2] != v31 )
      {
        v29[2] = v31;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, v15);
      }
    }
  }
LABEL_41:
  v32 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v32 + 24) & 1) != 0 )
    v33 = sub_7A2E20(v32);
  else
    v33 = *(_QWORD *)(v32 + 24);
  v34 = *(_QWORD *)(a2 + 104);
  v35 = *(_QWORD *)(v34 + 96);
  v36 = v35 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v35 & 1) != 0 )
  {
    if ( v36 )
    {
LABEL_52:
      if ( (v36 & 4) != 0 )
      {
        v40 = (_DWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v40 )
        {
          v41 = *(_QWORD *)v40;
          v42 = *(_DWORD *)(*(_QWORD *)v40 + 12LL);
          if ( v40[2] != v42 )
          {
            v40[2] = v42;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 144LL))(v41, v34);
          }
        }
      }
      v34 = *(_QWORD *)(a2 + 104);
      goto LABEL_57;
    }
    goto LABEL_68;
  }
  if ( v36 <= 3 )
  {
    if ( v36 )
      goto LABEL_57;
LABEL_68:
    v43 = *(_QWORD *)(a2 + 128);
    v44 = v33 + 24LL * *(unsigned int *)(v43 + 16);
    goto LABEL_59;
  }
  if ( (v35 & 2) == 0 )
  {
    v27 = *(_QWORD *)(a2 + 128);
    v44 = v33 + 24LL * *(unsigned int *)(v27 + 16);
    goto LABEL_29;
  }
  v37 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL);
  v38 = v37[2275];
  if ( v38 )
  {
    v39 = v37[274];
    v37[284] += 24LL;
    v36 = (v39 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v37[275] >= v36 + 24 && v39 )
    {
      v37[274] = v36 + 24;
    }
    else
    {
      v50 = v38;
      v52 = v34;
      v36 = sub_7DAE50((__int64)(v37 + 274), 24, 3);
      v34 = v52;
      v38 = v50;
    }
    *(_QWORD *)v36 = v38;
    *(_DWORD *)(v36 + 8) = 0;
    v35 = v36 | 5;
    *(_QWORD *)(v36 + 16) = v34;
    *(_QWORD *)(v34 + 96) = v36 | 5;
    LOBYTE(v36) = v36 & 0xFA | 4;
    goto LABEL_52;
  }
  *(_QWORD *)(v34 + 96) = v34 & 0xFFFFFFFFFFFFFFFALL | 1;
  v34 = *(_QWORD *)(a2 + 104);
LABEL_57:
  v43 = *(_QWORD *)(a2 + 128);
  v25 = *(_QWORD *)(v34 + 96);
  v27 = v43;
  v44 = v33 + 24LL * *(unsigned int *)(v43 + 16);
  v24 = v25 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v25 & 1) != 0 )
  {
    if ( !v24 )
      goto LABEL_59;
  }
  else
  {
    if ( v24 <= 3 )
    {
LABEL_59:
      v27 = v43;
      goto LABEL_29;
    }
    if ( (v25 & 2) == 0 )
      goto LABEL_29;
    v21 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
    v22 = v21[2275];
    if ( !v22 )
    {
      *(_QWORD *)(v34 + 96) = v34 & 0xFFFFFFFFFFFFFFFALL | 1;
      v43 = *(_QWORD *)(a2 + 128);
      goto LABEL_59;
    }
    v23 = v21[274];
    v21[284] += 24LL;
    v24 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v21[275] >= v24 + 24 && v23 )
    {
      v21[274] = v24 + 24;
    }
    else
    {
      v49 = v22;
      v51 = v34;
      v24 = sub_7DAE50((__int64)(v21 + 274), 24, 3);
      v34 = v51;
      v22 = v49;
    }
    *(_QWORD *)v24 = v22;
    v25 = v24 | 5;
    *(_DWORD *)(v24 + 8) = 0;
    *(_QWORD *)(v24 + 16) = v34;
    *(_QWORD *)(v34 + 96) = v24 | 5;
    LOBYTE(v24) = v24 & 0xFA | 4;
  }
  if ( (v24 & 4) == 0 )
  {
    v43 = *(_QWORD *)(a2 + 128);
    goto LABEL_59;
  }
  v26 = (_DWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v26 )
  {
    v45 = *(_QWORD *)v26;
    v46 = *(_DWORD *)(*(_QWORD *)v26 + 12LL);
    if ( v26[2] != v46 )
    {
      v26[2] = v46;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 144LL))(v45, v34);
    }
  }
  v27 = *(_QWORD *)(a2 + 128);
LABEL_29:
  if ( (*(_BYTE *)(v27 + 24) & 1) != 0 )
    v28 = sub_7A2E20(v27);
  else
    v28 = *(_QWORD *)(v27 + 24);
  if ( v44 != v28 )
  {
    while ( (unsigned __int8)sub_7EEDC0((__int64)a1, **(_QWORD **)(v28 + 16), *(_QWORD *)(v28 + 16) + 8LL) )
    {
      v28 += 24;
      if ( v28 == v44 )
        return v10;
    }
    return 0;
  }
  return v10;
}

