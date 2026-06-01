/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414740
// Address: 0x0000000000414740

//----- (0000000000414740) ----------------------------------------------------
unsigned __int64 __fastcall sub_414740(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char **v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rdx
  void *v8; // rsi
  __int64 v9; // rbp
  const void *v10; // r13
  size_t v11; // rax
  size_t v12; // r14
  void *v13; // rbp
  __int64 v14; // r14
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  void **v17; // rax
  void *v18; // rax
  void *v19; // rdi
  unsigned __int64 v20; // rdx
  char *v21; // rsi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  void **v26; // rax
  void **v27; // rsi
  __int64 v28; // rax
  void *v29; // rax
  char *v30; // rax
  char *v31; // rax
  __int64 v32; // [rsp+0h] [rbp-70h]
  unsigned __int64 v33; // [rsp+8h] [rbp-68h]
  __int64 v34; // [rsp+20h] [rbp-50h] BYREF
  void *v35; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+30h] [rbp-40h]

  v3 = a1 + 88;
  v36 = __readfsqword(0x28u);
  *(_QWORD *)(v3 - 80) = a2;
  *(_QWORD *)(v3 - 72) = 0;
  *(_OWORD *)(v3 - 64) = 0;
  *(_QWORD *)(a1 + 40) = v3;
  *(_QWORD *)a1 = &off_4C21C8;
  *(_QWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 1065353216;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  memset(
    (void *)((a1 + 112) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 112) & 0xFFFFFFF8) + 320) >> 3));
  *(_QWORD *)(a1 + 320) = 0;
  v5 = off_4C7CA0;
  *(_QWORD *)(a1 + 824) = 0;
  memset(
    (void *)((a1 + 328) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 328) & 0xFFFFFFF8) + 832) >> 3));
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 3520) = 0;
  memset(
    (void *)((a1 + 840) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)a1 + 832 - (((_DWORD)a1 + 840) & 0xFFFFFFF8) + 2696) >> 3));
  *(_QWORD *)(a1 + 3528) = a1 + 832;
  *(_WORD *)(a1 + 3544) = 0;
  *(_BYTE *)(a1 + 3546) = 0;
  *(_QWORD *)(a1 + 3536) = 2696;
  if ( off_4C7CA0[0] )
  {
    v32 = a2 + 24;
    do
    {
      v7 = *(_QWORD *)(a2 + 32);
      v8 = *(void **)(a2 + 24);
      if ( *(_QWORD *)(a2 + 40) < (unsigned __int64)(v7 + 1) )
      {
        v18 = sub_481540(v32, v8, v7 + 1, 0x18u);
        *(_QWORD *)(a2 + 24) = v18;
        v7 = *(_QWORD *)(a2 + 32);
        v8 = v18;
      }
      ++v5;
      v9 = (__int64)v8 + 24 * v7;
      *(_QWORD *)v9 = 0;
      *(_OWORD *)(v9 + 8) = 0;
      ++*(_QWORD *)(a2 + 32);
      v10 = *(v5 - 1);
      if ( v10 && (v11 = strlen(*(v5 - 1)), (v12 = v11) != 0) )
      {
        v19 = *(void **)v9;
        v20 = v11 + 1;
        if ( *(_QWORD *)(v9 + 16) < v11 + 1 )
        {
          v33 = v11 + 1;
          v29 = sub_481540(v9, *(void **)v9, v20, 1u);
          *(_QWORD *)v9 = v29;
          v20 = v33;
          v19 = v29;
        }
        *(_QWORD *)(v9 + 8) = v20;
        memmove(v19, v10, v12);
        *(_BYTE *)(*(_QWORD *)v9 + v12) = 0;
      }
      else
      {
        *(_QWORD *)(v9 + 8) = 0;
      }
      v13 = *(void **)v9;
      v28 = *(_QWORD *)(a2 + 56);
      v14 = a2 + 48;
      v27 = *(void ***)(a2 + 48);
      v15 = *(_QWORD *)(a2 + 64);
      v35 = v13;
      v16 = v28 + 1;
      if ( &v35 < v27 || &v35 >= &v27[v15] )
      {
        if ( v15 < v16 )
        {
          v17 = (void **)sub_481540(a2 + 48, v27, v28 + 1, 8u);
          *(_QWORD *)(a2 + 48) = v17;
          v27 = v17;
          v13 = v35;
          v28 = *(_QWORD *)(a2 + 56);
        }
      }
      else if ( v15 < v16 )
      {
        v26 = (void **)sub_481540(a2 + 48, v27, v28 + 1, 8u);
        *(_QWORD *)(a2 + 48) = v26;
        v27 = v26;
        v28 = *(_QWORD *)(a2 + 56);
      }
      v27[v28] = v13;
      v6 = *(_QWORD *)(a2 + 56) + 1LL;
      *(_QWORD *)(a2 + 56) = v6;
    }
    while ( *v5 );
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 56);
    v14 = a2 + 48;
  }
  v21 = *(char **)(a2 + 48);
  v22 = *(_QWORD *)(a2 + 64);
  v23 = v6 + 1;
  v34 = 0;
  if ( &v34 >= (__int64 *)v21 && &v34 < (__int64 *)&v21[8 * v22] )
  {
    if ( v22 < v23 )
    {
      v31 = (char *)sub_481540(v14, v21, v6 + 1, 8u);
      *(_QWORD *)(a2 + 48) = v31;
      v6 = *(_QWORD *)(a2 + 56);
      v21 = v31;
    }
    *(_QWORD *)&v21[8 * v6] = 0;
  }
  else
  {
    v24 = 0;
    if ( v22 < v23 )
    {
      v30 = (char *)sub_481540(v14, v21, v6 + 1, 8u);
      *(_QWORD *)(a2 + 48) = v30;
      v21 = v30;
      v6 = *(_QWORD *)(a2 + 56);
      v24 = v34;
    }
    *(_QWORD *)&v21[8 * v6] = v24;
  }
  ++*(_QWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 96) = 1;
  return v36 - __readfsqword(0x28u);
}
// 4C21C8: using guessed type __int64 (__fastcall *off_4C21C8)();
// 4C7CA0: using guessed type char *off_4C7CA0[6];
