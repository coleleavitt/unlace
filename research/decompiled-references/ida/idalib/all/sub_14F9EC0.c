void __fastcall sub_14F9EC0(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6,
        __m128i a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10,
        unsigned int *a11,
        unsigned __int8 a12)
{
  __int16 v14; // dx
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned int v19; // r14d
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int64 *v22; // rdi
  unsigned __int64 v23; // [rsp+Ch] [rbp-94h] BYREF
  char v24; // [rsp+14h] [rbp-8Ch]
  __int64 v25[17]; // [rsp+18h] [rbp-88h] BYREF

  sub_14F8F50(a1, a2, a3, a4, a5, (__int64)a6, a7, a8, a9, a10, (__int64)a11, a12, 0);
  v14 = *(_WORD *)(a1 + 32);
  if ( v14 == 1 )
    return;
  if ( a12 )
  {
    if ( v14 != 47 )
      return;
    if ( *(_DWORD *)(a9 + 8) )
    {
      v18 = a1 + 16;
      v19 = 0;
LABEL_10:
      sub_1564840(v25, a1, v18, 1771);
      v20 = *a11;
      v21 = *a6;
      v24 = 1;
      v23 = __PAIR64__(v20, v21);
      sub_AEC610(v25, (__int64 *)&v23);
      sub_AEA040((__int64)v25);
      LODWORD(v25[0]) = 3473460;
      sub_15680D0(a1, v25, 2, v19);
      return;
    }
LABEL_14:
    sub_14F5A70(a1, a9, (__int64)a10, 0, 0, a6, (__int64)a11, a12);
    return;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)(v15 + 2944);
  if ( v16 >= *(unsigned int *)(v15 + 2912) )
    v17 = sub_14180A0(v15, 1u);
  else
    v17 = *(_QWORD *)(v15 + 2904) + 24 * v16;
  if ( *(_WORD *)(v17 + 16) == 47 )
  {
    v18 = a1 + 16;
    v22 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v22, (int *)(a1 + 16));
    if ( *(_DWORD *)(a9 + 8) )
    {
      v19 = 2;
      goto LABEL_10;
    }
    goto LABEL_14;
  }
}
