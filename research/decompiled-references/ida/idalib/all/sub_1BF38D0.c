void __fastcall sub_1BF38D0(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        unsigned __int8 a9,
        char a10)
{
  unsigned __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // rsi
  char v17; // dl
  __int64 *v18; // rdi
  __int64 v19; // r11
  __int64 *v20; // r9
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 *v23; // rdi
  char v24; // al
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+8h] [rbp-50h]
  unsigned __int64 *v29; // [rsp+10h] [rbp-48h]
  unsigned __int64 *v30; // [rsp+10h] [rbp-48h]
  unsigned __int64 *v31; // [rsp+10h] [rbp-48h]

  v14 = a5;
  v15 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
  if ( v15 == sub_6EE8E0 )
  {
    v16 = a2[9];
  }
  else
  {
    v31 = a4;
    v27 = v15((__int64)a2);
    a4 = v31;
    v14 = a5;
    v16 = v27;
  }
  v17 = *(_BYTE *)(a6 + 2724);
  if ( !v17 )
    goto LABEL_12;
  v18 = *(__int64 **)(a6 + 2704);
  v19 = *(unsigned int *)(a6 + 2716);
  v20 = &v18[v19];
  if ( v18 != v20 )
  {
    v21 = *(__int64 **)(a6 + 2704);
    if ( v16 == *v18 )
    {
LABEL_28:
      v17 = 0;
      v23 = &v18[*(unsigned int *)(a6 + 2716)];
      goto LABEL_14;
    }
    while ( v20 != ++v21 )
    {
      if ( v16 == *v21 )
        goto LABEL_28;
    }
  }
  if ( (unsigned int)v19 < *(_DWORD *)(a6 + 2712) )
  {
    *(_DWORD *)(a6 + 2716) = v19 + 1;
    *v20 = v16;
    v22 = *(_QWORD *)(a6 + 2704);
    v21 = (__int64 *)(v22 + 8 * v19);
  }
  else
  {
LABEL_12:
    v29 = a4;
    v21 = (__int64 *)sub_2236760(a6 + 2704, v16);
    a4 = v29;
    v22 = *(_QWORD *)(a6 + 2704);
    if ( !*(_BYTE *)(a6 + 2724) )
    {
      v23 = (__int64 *)(v22 + 8LL * *(unsigned int *)(a6 + 2712));
      goto LABEL_14;
    }
  }
  v23 = (__int64 *)(v22 + 8LL * *(unsigned int *)(a6 + 2716));
LABEL_14:
  if ( v21 != v23 && (*v21 == -2 || *v21 == -1) )
  {
    do
      ++v21;
    while ( v23 != v21 && (unsigned __int64)*v21 >= 0xFFFFFFFFFFFFFFFELL );
  }
  v30 = a4;
  if ( v17 )
  {
    v24 = sub_B97670(a2[6]);
    v25 = *(_DWORD *)(a6 + 2972);
    v26 = v24 & 3;
    if ( v25 != 2 && v25 != 5 && (*(_BYTE *)(a1[29] + 60LL) & 0x10) == 0 )
    {
      if ( (*(_BYTE *)(a2[6] + 28) & 0x7F) != 0x26 || v26 != 2 )
      {
        sub_1BDA1D0(a6, (__int64)a2, a3, (__int64)v30, v14, a9, 0, a10, 0, 0, 0);
        return;
      }
      sub_1BF1E70(a1, (unsigned int *)a6, (__int64)a2, a3, 0, a9, a7, a8, v30, v14, 0, a10, 0, 0, 0);
      goto LABEL_31;
    }
    v28 = v26;
    sub_1BF1E70(a1, (unsigned int *)a6, (__int64)a2, a3, 0, a9, a7, a8, v30, v14, 0, a10, 0, 0, 0);
    if ( v28 == 2 )
LABEL_31:
      *(_BYTE *)(a6 + 2867) |= 0x80u;
  }
}
