void __fastcall sub_1BF3B70(
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
        char a13)
{
  unsigned __int64 *v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // rax
  char v21; // dl
  __int64 v22; // rsi
  __int64 *v23; // rdi
  __int64 v24; // r8
  __int64 *v25; // r11
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 *v28; // rdi
  unsigned __int64 v29; // rdi
  int v30; // esi
  unsigned __int64 *v32; // [rsp+10h] [rbp-58h]
  unsigned __int64 *v33; // [rsp+10h] [rbp-58h]

  v16 = a5;
  v17 = a6;
  v18 = a13;
  v19 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
  if ( v19 == sub_6EE8E0 )
  {
    v20 = a2[9];
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64 (__fastcall *)(__int64), unsigned __int64 *))v19)(
            a2,
            a13,
            sub_6EE8E0,
            a5);
    v18 = a13;
    v16 = a5;
    v17 = a6;
  }
  v21 = *(_BYTE *)(a9 + 2724);
  v22 = v20 | v18;
  if ( !v21 )
    goto LABEL_12;
  v23 = *(__int64 **)(a9 + 2704);
  v24 = *(unsigned int *)(a9 + 2716);
  v25 = &v23[v24];
  if ( v23 != v25 )
  {
    v26 = *(__int64 **)(a9 + 2704);
    if ( *v23 == v22 )
    {
LABEL_30:
      v21 = 0;
      v28 = &v23[*(unsigned int *)(a9 + 2716)];
      goto LABEL_14;
    }
    while ( v25 != ++v26 )
    {
      if ( v22 == *v26 )
        goto LABEL_30;
    }
  }
  if ( (unsigned int)v24 < *(_DWORD *)(a9 + 2712) )
  {
    *(_DWORD *)(a9 + 2716) = v24 + 1;
    *v25 = v22;
    v27 = *(_QWORD *)(a9 + 2704);
    v26 = (__int64 *)(v27 + 8 * v24);
  }
  else
  {
LABEL_12:
    v32 = v16;
    v26 = (__int64 *)sub_2236760(a9 + 2704, v22);
    v16 = v32;
    v27 = *(_QWORD *)(a9 + 2704);
    if ( !*(_BYTE *)(a9 + 2724) )
    {
      v28 = (__int64 *)(v27 + 8LL * *(unsigned int *)(a9 + 2712));
      goto LABEL_14;
    }
  }
  v28 = (__int64 *)(v27 + 8LL * *(unsigned int *)(a9 + 2716));
LABEL_14:
  if ( v28 != v26 && (*v26 == -2 || *v26 == -1) )
  {
    do
      ++v26;
    while ( v28 != v26 && (unsigned __int64)*v26 >= 0xFFFFFFFFFFFFFFFELL );
  }
  v33 = v16;
  if ( v21 )
  {
    v29 = sub_B97670(a2[6]) & 3;
    if ( a4 || (v30 = *(_DWORD *)(a9 + 2972), v30 == 2) || v30 == 5 || (*(_BYTE *)(a1[29] + 60LL) & 0x10) != 0 )
    {
      sub_1BF1E70(a1, (unsigned int *)a9, (__int64)a2, a3, a4, a10, a7, a8, v33, v17, a11, 1, a12, a13, 0);
      if ( v29 == 2 )
        goto LABEL_27;
    }
    else
    {
      if ( (*(_BYTE *)(a2[6] + 28) & 0x7F) == 0x26 && v29 == 2 )
      {
        sub_1BF1E70(a1, (unsigned int *)a9, (__int64)a2, a3, 0, a10, a7, a8, v33, v17, a11, 1, a12, a13, 0);
LABEL_27:
        *(_BYTE *)(a9 + 2867) |= 0x80u;
        return;
      }
      sub_1BDA1D0(a9, (__int64)a2, a3, (__int64)v33, v17, a10, a11, 1, a12, a13, 0);
    }
  }
}
