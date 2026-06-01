/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140033EB0
// Address: 0x0000000140033EB0

//----- (0000000140033EB0) ----------------------------------------------------
__int64 __fastcall sub_140033EB0(__int64 a1, char *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r14
  unsigned __int64 v7; // r14
  int v8; // esi
  size_t v9; // r14
  void *v10; // rax
  __int64 v11; // rdi
  const char *v12; // rcx
  int v13; // eax
  char v14; // cl
  char *v15; // rdi
  void *v16; // rax
  unsigned __int64 v17; // r15
  int v18; // esi
  __int64 v19; // rdi
  const char *v20; // rcx
  unsigned int v21; // ebx
  __int64 v23; // rdx
  void *Src[2]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-30h]
  char v26[8]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v27; // [rsp+40h] [rbp-20h]
  __int64 v28; // [rsp+50h] [rbp-10h]

  sub_140035000((_QWORD *)(a1 + 104), 0);
  sub_140035000((_QWORD *)(a1 + 128), 0);
  sub_140035000((_QWORD *)(a1 + 152), 0);
  v4 = *(_QWORD *)(a1 + 424);
  if ( v4 )
  {
    v26[0] = 2;
    v28 = 0;
    v27 = 0u;
    v5 = 0;
    do
    {
      sub_140029390(v5 + *(_QWORD *)(a1 + 416));
      v5 += 32;
      --v4;
    }
    while ( v4 );
    *(_QWORD *)(a1 + 424) = 0;
    sub_140029390((__int64)v26);
  }
  if ( *(_QWORD *)(a1 + 224) )
    *(_QWORD *)(a1 + 224) = 0;
  if ( *(_QWORD *)(a1 + 248) )
    *(_QWORD *)(a1 + 248) = 0;
  if ( *(_QWORD *)(a1 + 272) )
    *(_QWORD *)(a1 + 272) = 0;
  if ( *(_QWORD *)(a1 + 296) )
    *(_QWORD *)(a1 + 296) = 0;
  if ( *(_QWORD *)(a1 + 320) )
    *(_QWORD *)(a1 + 320) = 0;
  if ( *(_QWORD *)(a1 + 344) )
    *(_QWORD *)(a1 + 344) = 0;
  sub_140034EA0(a1 + 360, 0);
  sub_140034EA0(a1 + 384, 0);
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 440) = -1;
  if ( !*(_QWORD *)(a1 + 176) )
  {
    v6 = sub_14002C9D0(*(_QWORD *)(a1 + 96), a2);
LABEL_54:
    if ( v6 == -1 )
    {
      sub_140063F70(0, a2);
      return sub_1400640B0(0x28u);
    }
    else
    {
      v23 = *(_QWORD *)(**(_QWORD **)(a1 + 96) + 8 * v6);
      *(_QWORD *)(a1 + 184) = v23;
      *(_QWORD *)(a1 + 192) = v23 + 32;
      *(_DWORD *)(a1 + 200) = 0;
      *(_BYTE *)(a1 + 204) = -90;
      if ( *(_DWORD *)(v23 + 136) != -1 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(484);
      }
      return 0;
    }
  }
  *(_OWORD *)Src = 0;
  v7 = 0;
  v25 = 0;
  v8 = 1;
  if ( a2 )
  {
    v9 = strlen(a2);
    v10 = nullptr;
    if ( v9 != -1 )
    {
      v10 = sub_14005ABE0((__int64)Src, nullptr, v9 + 1, 1u);
      Src[0] = v10;
    }
    Src[1] = (void *)(v9 + 1);
    memcpy(v10, a2, v9);
    *((_BYTE *)Src[0] + v9) = 0;
    v7 = v25;
  }
  v11 = *(_QWORD *)(a1 + 176);
  v12 = Str1;
  if ( *(_QWORD *)(v11 + 32) )
    v12 = *(const char **)(v11 + 24);
  v13 = strcmp(v12, a2);
  v14 = *(_BYTE *)(a1 + 212);
  if ( !v13 )
  {
    if ( v14 )
    {
      v15 = (char *)Src[1] - 1;
      if ( !Src[1] )
        v15 = nullptr;
      if ( (unsigned __int64)(v15 + 2) <= v7 )
      {
        v16 = Src[0];
      }
      else
      {
        v16 = sub_14005ABE0((__int64)Src, Src[0], (unsigned __int64)(v15 + 2), 1u);
        Src[0] = v16;
      }
      Src[1] = v15 + 2;
      v15[(_QWORD)v16 + 1] = 0;
      if ( v15 )
      {
        memcpy((char *)Src[0] + 1, Src[0], (size_t)v15);
        v15 = nullptr;
      }
      *((_BYTE *)Src[0] + (unsigned __int64)v15) = 126;
      v8 = 2;
      v11 = *(_QWORD *)(a1 + 176);
    }
    *(_DWORD *)(a1 + 208) = v8;
LABEL_36:
    v6 = sub_14002C3E0(v11, *(_QWORD *)(a1 + 96), (__int64)Src);
    if ( v6 != -1 )
    {
      if ( *(_DWORD *)(a1 + 208) == 2 )
        *(_DWORD *)(*(_QWORD *)(a1 + 176) + 56LL) = v6;
      v17 = *(_QWORD *)(a1 + 136);
      v18 = 0;
      if ( !v17 )
        goto LABEL_51;
      v19 = *(_QWORD *)(a1 + 128);
      while ( 1 )
      {
        v20 = Str1;
        if ( *(_QWORD *)(v19 + 8) )
          v20 = *(const char **)v19;
        if ( !strcmp(v20, "this") )
          break;
        ++v18;
        v19 += 24;
        if ( v18 >= v17 )
          goto LABEL_51;
      }
      if ( v18 == -1 )
LABEL_51:
        sub_140034D00((_QWORD *)(a1 + 128), "this");
    }
    if ( Src[0] )
    {
      Src[1] = nullptr;
      j_free(Src[0]);
      Src[0] = nullptr;
      v25 = 0;
    }
    goto LABEL_54;
  }
  if ( !v14 )
    goto LABEL_36;
  v21 = sub_1400640B0(0x630u);
  if ( Src[0] )
  {
    Src[1] = nullptr;
    j_free(Src[0]);
  }
  return v21;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
