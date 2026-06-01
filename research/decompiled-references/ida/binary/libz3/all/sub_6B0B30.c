__int64 __fastcall sub_6B0B30(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void (__fastcall ***v14)(_QWORD); // rbp

  v2 = *(__int64 **)(a1 + 224);
  v3 = &v2[*(unsigned int *)(a1 + 232)];
  if ( v2 != v3 )
  {
    v4 = v2;
    do
    {
      v5 = *v4++;
      *(_BYTE *)(v5 + 6) &= ~1u;
    }
    while ( v3 != v4 );
  }
  *(_DWORD *)(a1 + 232) = 0;
  if ( v2 != (__int64 *)(a1 + 240) && v2 )
    sub_186B220(v2);
  v6 = *(_QWORD *)(a1 + 216);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(_QWORD *)(a1 + 208);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD *)(a1 + 200);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *(_QWORD *)(a1 + 192);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 144);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *(_QWORD *)(a1 + 136);
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  sub_2334C0((__int64 *)(a1 + 120));
  sub_2334C0((__int64 *)(a1 + 104));
  v12 = *(void **)(a1 + 80);
  if ( v12 )
    sub_186B220(v12);
  v13 = *(void **)(a1 + 56);
  if ( v13 )
    sub_186B220(v13);
  v14 = *(void (__fastcall ****)(_QWORD))(a1 + 48);
  if ( v14 )
  {
    (**v14)(*(_QWORD *)(a1 + 48));
    sub_186B220(v14);
  }
  return sub_14B63F0(a1 + 32);
}

