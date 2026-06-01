/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140036D10
// Address: 0x0000000140036D10

//----- (0000000140036D10) ----------------------------------------------------
__int64 __fastcall sub_140036D10(__int64 a1, const char **a2, unsigned __int64 a3, __int64 a4, char a5)
{
  _QWORD *v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rdi
  void *v13; // rdx
  __int64 v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  void **v17; // r14
  unsigned __int64 v18; // rbx
  void *v19; // rdi
  unsigned __int64 *v20; // rdi
  __int64 v21; // r8
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  const char **v25; // r14
  unsigned __int64 i; // rbx
  const char *v27; // rdi
  size_t v28; // rax
  void *v29; // rcx
  _QWORD v31[3]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v32; // [rsp+48h] [rbp-60h] BYREF
  __int128 v33; // [rsp+58h] [rbp-50h]

  v31[2] = a1;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  v9 = (_QWORD *)(a1 + 88);
  v31[0] = a1 + 88;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  v10 = operator new(0x38u);
  *v10 = v10;
  v10[1] = v10;
  v9[1] = v10;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 7;
  v9[7] = 8;
  *(_DWORD *)v9 = 1065353216;
  v11 = v9[1];
  v12 = operator new(0x80u);
  v13 = (void *)v9[3];
  v14 = (__int64)(v9[5] - (_QWORD)v13) >> 3;
  if ( v14 )
    sub_140011C80((__int64)(v9 + 3), v13, v14);
  v9[3] = v12;
  v15 = v12 + 16;
  v9[4] = v12 + 16;
  v9[5] = v12 + 16;
  do
    *v12++ = v11;
  while ( v12 != v15 );
  *(_BYTE *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = a4;
  *(_QWORD *)(a1 + 224) = sub_14003A240;
  *(_QWORD *)(a1 + 232) = a1;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 312) = -1;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_BYTE *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 356) = 0;
  *(_DWORD *)(a1 + 364) = 1;
  *(_QWORD *)(a1 + 624) = 0;
  *(_BYTE *)(a1 + 632) = 0;
  *(_BYTE *)(a1 + 636) = 0;
  *(_DWORD *)(a1 + 640) = 0;
  *(_BYTE *)(a1 + 644) = 0;
  *(_QWORD *)(a1 + 648) = 0;
  v31[0] = a1 + 656;
  *(_DWORD *)(a1 + 656) = 0;
  *(_QWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 672) = 0;
  v16 = operator new(0x48u);
  *v16 = v16;
  v16[1] = v16;
  *(_QWORD *)(a1 + 664) = v16;
  v17 = (void **)(a1 + 680);
  *(_QWORD *)(a1 + 680) = 0;
  *(_QWORD *)(a1 + 688) = 0;
  *(_QWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 704) = 7;
  *(_QWORD *)(a1 + 712) = 8;
  *(_DWORD *)(a1 + 656) = 1065353216;
  v18 = *(_QWORD *)(a1 + 664);
  v19 = *(void **)(a1 + 680);
  if ( (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 688) - (_QWORD)v19) >> 3) >= 0x10 )
  {
    v23 = (unsigned __int64)(*(_QWORD *)(a1 + 688) - *(_QWORD *)(a1 + 680) + 7LL) >> 3;
    if ( (unsigned __int64)v19 > *(_QWORD *)(a1 + 688) )
      v23 = 0;
    if ( v23 )
      memset64(v19, v18, v23);
  }
  else
  {
    v20 = (unsigned __int64 *)operator new(0x80u);
    v21 = (__int64)(*(_QWORD *)(a1 + 696) - *(_QWORD *)(a1 + 680)) >> 3;
    if ( v21 )
      sub_140011C80(a1 + 680, *v17, v21);
    *v17 = v20;
    v22 = v20 + 16;
    *(_QWORD *)(a1 + 688) = v20 + 16;
    *(_QWORD *)(a1 + 696) = v20 + 16;
    do
      *v20++ = v18;
    while ( v20 != v22 );
  }
  *(_BYTE *)(a1 + 720) = 0;
  *(_DWORD *)(a1 + 724) = 5;
  v24 = 132;
  if ( a2 )
    v24 = a3;
  v25 = (const char **)off_140095AA0;
  if ( a2 )
    v25 = a2;
  for ( i = 0; i < v24; ++i )
  {
    v27 = *v25++;
    v32 = 0;
    v33 = 0;
    v28 = strlen(v27);
    sub_140036210(&v32, v27, v28);
    *(_WORD *)(*(_QWORD *)sub_1400367B0(v9, (__int64)v31, (size_t *)&v32) + 48LL) = i + 128;
    if ( *((_QWORD *)&v33 + 1) > 0xFu )
    {
      v29 = (void *)v32;
      if ( (unsigned __int64)(*((_QWORD *)&v33 + 1) + 1LL) >= 0x1000 )
      {
        v29 = *(void **)(v32 - 8);
        if ( (unsigned __int64)(v32 - (_QWORD)v29 - 8) > 0x1F )
          invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      j_j_free(v29);
    }
  }
  sub_14003B360(a1, 0, a5);
  return a1;
}
// 140095AA0: using guessed type char *off_140095AA0[132];
