void __fastcall sub_F1D510(__int64 a1, const char *a2)
{
  __int64 v2; // r12
  size_t v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  size_t v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  size_t v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rbp
  unsigned __int64 *v28; // rbx
  __int64 v29; // r13
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  _QWORD *v36; // rdi
  __int64 v37; // rdx
  __m128 v38; // [rsp+0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+18h] [rbp-50h]
  __int128 v40; // [rsp+20h] [rbp-48h] BYREF
  __int128 v41; // [rsp+30h] [rbp-38h]

  v2 = (__int64)a2;
  v38.m128_u64[0] = a1;
  v39 = a1;
  sub_F07020(a1, (__int64)a2);
  v3 = j__strlen("super");
  v8 = sub_B878F0((__int64)a2, (__int64)a2, v4, v5, v6, v7);
  if ( v8 )
  {
    v38.m128_u64[0] = v8;
    *(_QWORD *)&v40 = "super";
    *((_QWORD *)&v40 + 1) = v3;
    v41 = (__int128)_mm_loadh_ps((const double *)v38.m128_u64);
    v13 = j__strlen(&byte_22CD811);
    a2 = &byte_22CD811;
    sub_F1B570(v39, (__int64)&byte_22CD811, v13, v14, v15, v16, v40, v41);
  }
  v17 = sub_B88980(v2, (__int64)a2, v9, v10, v11, v12);
  if ( v17 )
  {
    v38.m128_u64[0] = v17;
    v40 = 0u;
    v41 = (__int128)_mm_loadh_ps((const double *)v38.m128_u64);
    v21 = j__strlen(&byte_22CD811);
    sub_F1B570(v39, (__int64)&byte_22CD811, v21, v22, v23, v24, v40, v41);
  }
  v25 = *(_QWORD *)(v2 + 120);
  if ( v25 )
  {
LABEL_6:
    v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v25 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (*(_BYTE *)(v26 + 72) & 1) == 0 )
      {
        v18 = *(unsigned int *)(v26 + 24);
        v27 = *(_QWORD *)(v26 + 16) + 8 * v18;
LABEL_9:
        if ( (*(_BYTE *)(v26 + 72) & 1) != 0 )
        {
          sub_B84BC0(v2);
          v26 = *(_QWORD *)(v2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v28 = *(unsigned __int64 **)(v26 + 16);
        goto LABEL_12;
      }
      sub_B84BC0(v2);
      v26 = *(_QWORD *)(v2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      v18 = *(_QWORD *)(v26 + 16);
      v27 = v18 + 8LL * *(unsigned int *)(v26 + 24);
      if ( *(_QWORD *)(v2 + 120) )
        goto LABEL_22;
    }
    else
    {
      if ( v25 )
        return;
      v27 = 0;
    }
    v29 = *(_QWORD *)(v2 + 96);
    v34 = *(_QWORD *)(v29 + 88);
    v35 = v34 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v34 & 1) == 0 )
      goto LABEL_26;
    goto LABEL_21;
  }
  v29 = *(_QWORD *)(v2 + 96);
  v30 = *(_QWORD *)(v29 + 88);
  v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v30 & 1) != 0 || (v32 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL), (v30 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
LABEL_25:
    *(_QWORD *)&v40 = v31;
    sub_B57E30(&v40);
    v25 = *(_QWORD *)(v2 + 120);
    goto LABEL_6;
  }
  v27 = 0;
  v33 = v30 & 2;
  if ( (_DWORD)v33 )
  {
    v31 = sub_6C1EC0(v32, *(_QWORD *)(v2 + 96), v33, v18, v19, v20) & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v29 + 88) = v31 | 1;
    goto LABEL_25;
  }
  v34 = *(_QWORD *)(v29 + 88);
  v35 = v34 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v34 & 1) == 0 )
  {
LABEL_26:
    v36 = (_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v34 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v28 = nullptr;
      v37 = v34 & 2;
      if ( !(_DWORD)v37 )
        goto LABEL_12;
      v35 = sub_6C1EC0(v36, v29, v37, v18, v19, v20) & 0xFFFFFFFFFFFFFFFELL;
      *(_QWORD *)(v29 + 88) = v35 | 1;
    }
  }
LABEL_21:
  *(_QWORD *)&v40 = v35;
  sub_B57E30(&v40);
  v26 = *(_QWORD *)(v2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_22:
  if ( v26 )
    goto LABEL_9;
  v28 = nullptr;
LABEL_12:
  while ( (unsigned __int64 *)v27 != v28 )
  {
    if ( *v28 )
    {
      v38.m128_u64[0] = *v28;
      v40 = 0u;
      v38 = _mm_loadh_ps((const double *)v38.m128_u64);
      v41 = (__int128)v38;
      sub_F1B570(v39, (__int64)&byte_22CD811, 0, v18, v19, v20, 0, (__int128)v38);
    }
    ++v28;
  }
}

