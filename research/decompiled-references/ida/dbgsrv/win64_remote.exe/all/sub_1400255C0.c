/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400255C0
// Address: 0x00000001400255C0

//----- (00000001400255C0) ----------------------------------------------------
__int64 __fastcall sub_1400255C0(__int64 a1, char **a2)
{
  __int64 **v4; // rax
  char *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  char *v9; // r13
  int v10; // r12d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  const char *v14; // rdi
  size_t v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int8 v18; // bl
  char *v19; // rax
  __int64 *v20; // rbx
  char *v21; // rsi
  const char *v22; // rdi
  __int64 v23; // r13
  const char *v24; // rdx
  const char *v25; // rcx
  unsigned int v26; // eax
  __int64 *v27; // rcx
  const char *v28; // rdx
  int v29; // eax
  unsigned __int64 v30; // rdx
  char *Str; // [rsp+20h] [rbp-60h] BYREF
  __int64 v33; // [rsp+28h] [rbp-58h]
  __int64 v34; // [rsp+30h] [rbp-50h]
  char v35[8]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v36; // [rsp+40h] [rbp-40h] BYREF
  __int64 v37; // [rsp+50h] [rbp-30h]
  char v38[8]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v39; // [rsp+60h] [rbp-20h]
  __int64 v40; // [rsp+70h] [rbp-10h]
  __int64 **v41; // [rsp+C0h] [rbp+40h]

  Str = nullptr;
  v33 = 0;
  v34 = 0;
  v4 = (__int64 **)sub_140025910(a1, (__int64 *)&Str);
  v41 = v4;
  v5 = Str;
  if ( v4 )
  {
    v19 = (char *)*v4;
    v20 = *((__int64 **)v19 + 1);
    v21 = v19;
    v22 = Str1;
    v23 = v33;
    if ( !*((_BYTE *)v20 + 25) )
    {
      do
      {
        v24 = Str1;
        if ( v23 )
          v24 = v5;
        v25 = Str1;
        if ( v20[5] )
          v25 = (const char *)v20[4];
        v26 = (unsigned int)strcmp(v25, v24) >> 31;
        if ( !(_BYTE)v26 )
          v21 = (char *)v20;
        v27 = v20 + 2;
        if ( !(_BYTE)v26 )
          v27 = v20;
        v20 = (__int64 *)*v27;
      }
      while ( !*(_BYTE *)(*v27 + 25) );
    }
    if ( v21[25] )
    {
      v30 = (unsigned __int64)v41;
    }
    else
    {
      v28 = Str1;
      if ( *((_QWORD *)v21 + 5) )
        v28 = *((const char **)v21 + 4);
      if ( v23 )
        v22 = v5;
      v29 = strcmp(v22, v28);
      v30 = (unsigned __int64)v41;
      if ( v29 >= 0 && v21 != (char *)*v41 )
      {
        sub_140028E70(*a2, v21 + 56);
        *a2 = v21 + 56;
        v18 = 1;
        goto LABEL_36;
      }
    }
    v18 = sub_140025490(a1, v30, (const char **)&Str, a2);
    v5 = Str;
  }
  else
  {
    v6 = 32LL * *(_QWORD *)(a1 + 32);
    v7 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v6 + v7 - 32) == 2 && dword_1400C60B8 > 0 )
    {
      v8 = *(_QWORD *)(v6 + v7 - 24);
      v9 = *a2;
      *a2 = nullptr;
      v10 = *(_DWORD *)(a1 + 32);
      v11 = *(_QWORD *)(a1 + 80) + 1LL;
      if ( v11 > *(_QWORD *)(a1 + 88) )
        *(_QWORD *)(a1 + 72) = sub_14005ABE0(a1 + 72, *(void **)(a1 + 72), v11, 4u);
      *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4LL * (*(_QWORD *)(a1 + 80))++) = v10;
      v38[0] = 2;
      v40 = 0;
      v39 = v8;
      v12 = *(_QWORD *)(a1 + 32) + 1LL;
      if ( v12 > *(_QWORD *)(a1 + 40) )
        *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v12, 0x20u);
      v13 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
      *(_BYTE *)v13 = 2;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 8) = 0;
      ++*(_QWORD *)(a1 + 32);
      sub_14002A460((char *)v13, v38);
      v14 = Str1;
      if ( v33 )
        v14 = v5;
      v35[0] = 7;
      v36 = 0;
      v37 = 0;
      if ( v14 )
      {
        v15 = strlen(v14);
        sub_140001810((__int64)&v36, v14, v15);
      }
      v16 = *(_QWORD *)(a1 + 32) + 1LL;
      if ( v16 > *(_QWORD *)(a1 + 40) )
        *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v16, 0x20u);
      v17 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
      *(_BYTE *)v17 = 2;
      *(_QWORD *)(v17 + 16) = 0;
      *(_QWORD *)(v17 + 24) = 0;
      *(_QWORD *)(v17 + 8) = 0;
      ++*(_QWORD *)(a1 + 32);
      sub_14002A460((char *)v17, v35);
      v18 = sub_140025DF0(a1, v9, nullptr, -dword_1400C60B8);
      sub_140029390((__int64)v35);
      sub_140029390((__int64)v38);
    }
    else
    {
      sub_140024990(a1);
      v18 = 0;
    }
  }
LABEL_36:
  if ( v5 )
    j_free(v5);
  return v18;
}
// 1400C60B8: using guessed type int dword_1400C60B8;
