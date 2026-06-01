/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400288C0
// Address: 0x00000001400288C0

//----- (00000001400288C0) ----------------------------------------------------
__int64 __fastcall sub_1400288C0(__int64 a1, char *a2, int a3, unsigned int a4, char *a5, char *a6, __int64 a7)
{
  double v7; // xmm3_8
  __int64 v8; // rbp
  unsigned __int64 v12; // r8
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int8 v16; // si
  __int64 v17; // r8
  int v19; // [rsp+20h] [rbp-38h] BYREF
  __int128 v20; // [rsp+28h] [rbp-30h]
  __int64 v21; // [rsp+38h] [rbp-20h]

  v8 = a4;
  v12 = *(_QWORD *)(a1 + 80) + 1LL;
  if ( v12 > *(_QWORD *)(a1 + 88) )
    *(_QWORD *)(a1 + 72) = sub_14005ABE0(a1 + 72, *(void **)(a1 + 72), v12, 4u);
  *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4LL * (*(_QWORD *)(a1 + 80))++) = 0;
  if ( (int)v8 > 0 )
  {
    do
    {
      LOBYTE(v19) = 2;
      v20 = 0;
      v21 = 0;
      sub_140028E70((char *)&v19, a5);
      v14 = *(_QWORD *)(a1 + 32) + 1LL;
      if ( v14 > *(_QWORD *)(a1 + 40) )
        *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v14, 0x20u);
      v15 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
      *(_BYTE *)v15 = 2;
      *(_OWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 24) = 0;
      sub_140028E70((char *)v15, (char *)&v19);
      ++*(_QWORD *)(a1 + 32);
      sub_140029390((__int64)&v19);
      a5 += 32;
      --v8;
    }
    while ( v8 );
  }
  v16 = sub_140025DF0(a1, a6, a2, a3);
  if ( !v16 )
  {
    if ( a7 )
      sub_140025150(32LL * *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24) - 32LL, a7, v17, v7);
    if ( a6 )
      sub_140028C20((_QWORD *)(a1 + 24), a6);
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 124LL) )
  {
    off_1400C6AE0(24, (struct __crt_locale_pointers *)0xA, 0, (va_list)&off_1400C6AE0, v19);
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 124LL) = 0;
  }
  return v16;
}
// 1400289F9: variable 'v17' is possibly undefined
// 1400289F9: variable 'v7' is possibly undefined
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
