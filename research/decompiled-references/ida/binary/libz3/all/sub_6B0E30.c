__int64 __fastcall sub_6B0E30(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  __int64 v7; // rdi
  char *v8; // rdi
  char *v9; // rcx
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void (__fastcall ***v20)(_QWORD); // rbp

  v2 = *(_QWORD *)(a1 + 520);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  sub_2334C0((__int64 *)(a1 + 504));
  v3 = *(_QWORD *)(a1 + 496);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(void **)(a1 + 472);
  if ( v4 )
    sub_186B220(v4);
  v5 = *(void **)(a1 + 440);
  *(_QWORD *)(a1 + 392) = &off_1C62200;
  if ( v5 )
    sub_186B220(v5);
  v6 = *(void **)(a1 + 416);
  if ( v6 )
    sub_186B220(v6);
  v7 = *(_QWORD *)(a1 + 384);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(char **)(a1 + 224);
  v9 = &v8[8 * *(unsigned int *)(a1 + 232)];
  if ( v8 != v9 )
  {
    v10 = *(char **)(a1 + 224);
    do
    {
      v11 = *(_QWORD *)v10;
      v10 += 8;
      *(_BYTE *)(v11 + 6) &= ~1u;
    }
    while ( v10 != v9 );
  }
  *(_DWORD *)(a1 + 232) = 0;
  if ( v8 != (char *)(a1 + 240) && v8 )
    sub_186B220(v8);
  v12 = *(_QWORD *)(a1 + 216);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *(_QWORD *)(a1 + 208);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = *(_QWORD *)(a1 + 200);
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = *(_QWORD *)(a1 + 192);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(_QWORD *)(a1 + 144);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD *)(a1 + 136);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  sub_2334C0((__int64 *)(a1 + 120));
  sub_2334C0((__int64 *)(a1 + 104));
  v18 = *(void **)(a1 + 80);
  if ( v18 )
    sub_186B220(v18);
  v19 = *(void **)(a1 + 56);
  if ( v19 )
    sub_186B220(v19);
  v20 = *(void (__fastcall ****)(_QWORD))(a1 + 48);
  if ( v20 )
  {
    (**v20)(*(_QWORD *)(a1 + 48));
    sub_186B220(v20);
  }
  return sub_14B63F0(a1 + 32);
}

