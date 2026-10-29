__int64 __fastcall sub_674AD0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebp
  unsigned __int32 v12; // ebp
  const __m128i *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // r15
  _DWORD *v27; // rdx
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  _QWORD *v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rsi
  _DWORD *v38; // rdx
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // r14
  __int64 v42; // rdi
  int v43; // eax
  __m128i v44; // [rsp+0h] [rbp-58h]
  __int64 v45; // [rsp+0h] [rbp-58h]
  __int64 v46; // [rsp+0h] [rbp-58h]
  __int64 v47; // [rsp+0h] [rbp-58h]
  __int64 v48; // [rsp+18h] [rbp-40h]
  __int64 v49; // [rsp+18h] [rbp-40h]

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
      sub_673240(a1, *(_QWORD *)(v13[1].m128i_i64[1] + 8 * v14), a3, a4, a5, a6);
      v8 = *(_QWORD *)(a2 + 120);
      if ( (v8 & 4) == 0 )
        goto LABEL_2;
    }
    a4 = _mm_loadu_si128(v13);
    v44 = a4;
  }
  else
  {
LABEL_2:
    a3 = 0.0;
    v44 = 0;
  }
  v9 = v44.m128i_i64[0];
  v10 = sub_674510(a1, v44.m128i_i64[0], v44.m128i_i64[1], a3, a4, a5, a6);
  if ( !(_BYTE)v10 )
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
    v9 = v18[274];
    v18[284] += 24LL;
    v17 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v18[275] >= v17 + 24 && v9 )
    {
      v18[274] = v17 + 24;
    }
    else
    {
      v9 = 24;
      v45 = v19;
      v17 = sub_63DCB0((__int64)(v18 + 274), 24, 3);
      v19 = v45;
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
    v27 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v27 )
    {
      v28 = *(_QWORD *)v27;
      v29 = *(_DWORD *)(*(_QWORD *)v27 + 12LL);
      if ( v27[2] != v29 )
      {
        v27[2] = v29;
        v9 = v15;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, v15);
      }
    }
  }
LABEL_41:
  v30 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v30 + 24) & 1) != 0 )
    v31 = sub_7A2E20(v30, v9);
  else
    v31 = *(_QWORD *)(v30 + 24);
  v32 = *(_QWORD *)(a2 + 104);
  v33 = *(_QWORD *)(v32 + 96);
  v34 = v33 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v33 & 1) != 0 )
  {
    if ( v34 )
    {
LABEL_52:
      if ( (v34 & 4) != 0 )
      {
        v38 = (_DWORD *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v38 )
        {
          v39 = *(_QWORD *)v38;
          v40 = *(_DWORD *)(*(_QWORD *)v38 + 12LL);
          if ( v38[2] != v40 )
          {
            v38[2] = v40;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 144LL))(v39, v32);
          }
        }
      }
      v32 = *(_QWORD *)(a2 + 104);
      goto LABEL_57;
    }
    goto LABEL_68;
  }
  if ( v34 <= 3 )
  {
    if ( v34 )
      goto LABEL_57;
LABEL_68:
    v9 = *(_QWORD *)(a2 + 128);
    v41 = v31 + 24LL * *(unsigned int *)(v9 + 16);
    goto LABEL_59;
  }
  if ( (v33 & 2) == 0 )
  {
    v25 = *(_QWORD *)(a2 + 128);
    v41 = v31 + 24LL * *(unsigned int *)(v25 + 16);
    goto LABEL_29;
  }
  v35 = (_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
  v36 = v35[2275];
  if ( v36 )
  {
    v37 = v35[274];
    v35[284] += 24LL;
    v34 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v35[275] >= v34 + 24 && v37 )
    {
      v35[274] = v34 + 24;
    }
    else
    {
      v47 = v36;
      v49 = v32;
      v34 = sub_63DCB0((__int64)(v35 + 274), 24, 3);
      v32 = v49;
      v36 = v47;
    }
    *(_QWORD *)v34 = v36;
    *(_DWORD *)(v34 + 8) = 0;
    v33 = v34 | 5;
    *(_QWORD *)(v34 + 16) = v32;
    *(_QWORD *)(v32 + 96) = v34 | 5;
    LOBYTE(v34) = v34 & 0xFA | 4;
    goto LABEL_52;
  }
  *(_QWORD *)(v32 + 96) = v32 & 0xFFFFFFFFFFFFFFFALL | 1;
  v32 = *(_QWORD *)(a2 + 104);
LABEL_57:
  v9 = *(_QWORD *)(a2 + 128);
  v23 = *(_QWORD *)(v32 + 96);
  v25 = v9;
  v41 = v31 + 24LL * *(unsigned int *)(v9 + 16);
  v22 = v23 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v23 & 1) != 0 )
  {
    if ( !v22 )
      goto LABEL_59;
  }
  else
  {
    if ( v22 <= 3 )
    {
LABEL_59:
      v25 = v9;
      goto LABEL_29;
    }
    if ( (v23 & 2) == 0 )
      goto LABEL_29;
    v20 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
    v21 = v20[2275];
    if ( !v21 )
    {
      *(_QWORD *)(v32 + 96) = v32 & 0xFFFFFFFFFFFFFFFALL | 1;
      v9 = *(_QWORD *)(a2 + 128);
      goto LABEL_59;
    }
    v9 = v20[274];
    v20[284] += 24LL;
    v22 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v20[275] >= v22 + 24 && v9 )
    {
      v20[274] = v22 + 24;
    }
    else
    {
      v9 = 24;
      v46 = v21;
      v48 = v32;
      v22 = sub_63DCB0((__int64)(v20 + 274), 24, 3);
      v32 = v48;
      v21 = v46;
    }
    *(_QWORD *)v22 = v21;
    v23 = v22 | 5;
    *(_DWORD *)(v22 + 8) = 0;
    *(_QWORD *)(v22 + 16) = v32;
    *(_QWORD *)(v32 + 96) = v22 | 5;
    LOBYTE(v22) = v22 & 0xFA | 4;
  }
  if ( (v22 & 4) == 0 )
  {
    v9 = *(_QWORD *)(a2 + 128);
    goto LABEL_59;
  }
  v24 = (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v24 )
  {
    v42 = *(_QWORD *)v24;
    v43 = *(_DWORD *)(*(_QWORD *)v24 + 12LL);
    if ( v24[2] != v43 )
    {
      v24[2] = v43;
      v9 = v32;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 144LL))(v42, v32);
    }
  }
  v25 = *(_QWORD *)(a2 + 128);
LABEL_29:
  if ( (*(_BYTE *)(v25 + 24) & 1) != 0 )
    v26 = sub_7A2E20(v25, v9);
  else
    v26 = *(_QWORD *)(v25 + 24);
  if ( v41 != v26 )
  {
    while ( (unsigned __int8)sub_673BB0(a1, **(_QWORD **)(v26 + 16), *(_QWORD *)(v26 + 16) + 8LL, a3, a4, a5, a6) )
    {
      v26 += 24;
      if ( v26 == v41 )
        return v10;
    }
    return 0;
  }
  return v10;
}

