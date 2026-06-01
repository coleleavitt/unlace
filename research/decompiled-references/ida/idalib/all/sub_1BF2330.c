void __fastcall sub_1BF2330(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 a6,
        double a7,
        __m128 a8,
        __int64 a9,
        unsigned __int8 a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  __int64 v17; // rax
  unsigned __int64 *v18; // rcx
  unsigned __int64 v19; // rbx
  char v20; // dl
  __int64 v21; // rsi
  __int64 *v22; // rax
  __int64 v23; // r9
  __int64 *v24; // r11
  __int64 *v25; // r8
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rdi
  __int64 *v30; // rsi
  unsigned __int64 v31; // r13
  int v32; // edi
  unsigned __int64 *v34; // [rsp+0h] [rbp-78h]

  v17 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 32))(a2);
  v18 = a5;
  v19 = a6;
  v20 = *(_BYTE *)(a9 + 2724);
  v21 = v17 | a14;
  if ( !v20 )
    goto LABEL_10;
  v22 = *(__int64 **)(a9 + 2704);
  v23 = *(unsigned int *)(a9 + 2716);
  v24 = &v22[v23];
  if ( v22 != v24 )
  {
    v25 = *(__int64 **)(a9 + 2704);
    if ( *v22 == v21 )
    {
LABEL_28:
      v20 = 0;
      v27 = &v22[*(unsigned int *)(a9 + 2716)];
      goto LABEL_12;
    }
    while ( v24 != ++v25 )
    {
      if ( v21 == *v25 )
        goto LABEL_28;
    }
  }
  if ( (unsigned int)v23 < *(_DWORD *)(a9 + 2712) )
  {
    *(_DWORD *)(a9 + 2716) = v23 + 1;
    *v24 = v21;
    v26 = *(_QWORD *)(a9 + 2704);
    v25 = (__int64 *)(v26 + 8 * v23);
  }
  else
  {
LABEL_10:
    v28 = sub_2236760(a9 + 2704, v21);
    v18 = a5;
    v19 = a6;
    v25 = (__int64 *)v28;
    v26 = *(_QWORD *)(a9 + 2704);
    if ( !*(_BYTE *)(a9 + 2724) )
    {
      v27 = (__int64 *)(v26 + 8LL * *(unsigned int *)(a9 + 2712));
      goto LABEL_12;
    }
  }
  v27 = (__int64 *)(v26 + 8LL * *(unsigned int *)(a9 + 2716));
LABEL_12:
  if ( v27 != v25 && (unsigned __int64)*v25 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v29 = v25 + 1;
    do
    {
      v30 = v29;
      if ( v27 == v29 )
        break;
      ++v29;
    }
    while ( (unsigned __int64)*v30 >= 0xFFFFFFFFFFFFFFFELL );
  }
  v34 = v18;
  if ( v20 )
  {
    v31 = sub_B97670(a2[6]) & 3;
    if ( a4 || (v32 = *(_DWORD *)(a9 + 2972), v32 == 2) || v32 == 5 || (*(_BYTE *)(a1[29] + 60LL) & 0x10) != 0 )
    {
      sub_1BF1E70(a1, (unsigned int *)a9, (__int64)a2, a3, a4, a10, a7, a8, v34, v19, a11, a12, a13, a14, a15);
      if ( v31 == 2 )
        goto LABEL_25;
    }
    else
    {
      if ( (*(_BYTE *)(a2[6] + 28) & 0x7F) == 0x26 && v31 == 2 )
      {
        sub_1BF1E70(a1, (unsigned int *)a9, (__int64)a2, a3, 0, a10, a7, a8, v34, v19, a11, a12, a13, a14, a15);
LABEL_25:
        *(_BYTE *)(a9 + 2867) |= 0x80u;
        return;
      }
      sub_1BDA1D0(a9, (__int64)a2, a3, (__int64)v34, v19, a10, a11, a12, a13, a14, a15);
    }
  }
}
