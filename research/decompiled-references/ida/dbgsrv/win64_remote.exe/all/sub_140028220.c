/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140028220
// Address: 0x0000000140028220

//----- (0000000140028220) ----------------------------------------------------
char __fastcall sub_140028220(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  char *v7; // rbx
  _QWORD *v8; // r14
  __int64 i; // rdx
  char *v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // r10
  char **v14; // rcx
  char **v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  void *Block; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+28h] [rbp-38h]
  unsigned __int64 v26; // [rsp+30h] [rbp-30h]
  char v27[8]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v28; // [rsp+40h] [rbp-20h]
  __int64 v29; // [rsp+50h] [rbp-10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v3 = *(_QWORD *)(a1 + 104);
  if ( !v3 || (v4 = *(_DWORD *)(v3 + 136), v4 < 1) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(487);
  }
  *(_DWORD *)(v3 + 136) = v4 - 1;
  sub_14005D6D0(v2);
  v5 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 96) + 1 == v5 )
  {
LABEL_30:
    v18 = *(_QWORD *)(a1 + 80);
    if ( v18 )
    {
      do
      {
        if ( (unsigned __int64)*(int *)(*(_QWORD *)(a1 + 72) + 4LL * *(_QWORD *)(a1 + 80) - 4) < *(_QWORD *)(a1 + 32) )
          break;
        v19 = v18;
        if ( v18 )
        {
          v19 = v18 - 1;
          *(_QWORD *)(a1 + 80) = v18 - 1;
        }
        v18 = v19;
      }
      while ( v19 );
    }
    v20 = *(_QWORD *)(a1 + 48) + 24LL * *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 100) = *(_DWORD *)(v20 - 8);
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(v20 - 12);
    *(_QWORD *)(a1 + 112) = *(int *)(v20 - 16);
    v21 = *(_QWORD *)(v20 - 24);
    *(_QWORD *)(a1 + 104) = v21;
    v22 = *(_QWORD *)(a1 + 56);
    if ( v22 )
      *(_QWORD *)(a1 + 56) = v22 - 1;
    v23 = v21 + 32;
    if ( !v21 )
      v23 = 0;
    *(_QWORD *)(a1 + 128) = v23;
    return 1;
  }
  v27[0] = 2;
  v29 = 0;
  v28 = 0u;
  if ( !(unsigned int)sub_14002A460(v27, (char *)(*(_QWORD *)(a1 + 24) - 32LL + 32 * v5)) )
  {
    if ( v27[0] == 10 && SDWORD2(v28) >= *(_DWORD *)(a1 + 96) )
    {
      v7 = v27;
      Block = nullptr;
      v25 = 0;
      v26 = 0;
      v8 = sub_14002DA30();
      for ( i = 0; ; i = ++v25 )
      {
        v10 = v7 + 8;
        v7 = nullptr;
        v11 = *((int *)v10 + 2);
        if ( (v11 & 0x80000000) != 0LL )
        {
          v7 = (char *)sub_1400258A0((__int64)v8, ~(_DWORD)v11);
          i = v25;
        }
        else
        {
          v12 = *(_QWORD *)v10;
          if ( v12 && *(_DWORD *)v12 == 289621065 && v11 < *(_QWORD *)(v12 + 32) )
            v7 = (char *)(*(_QWORD *)(v12 + 24) + 32 * v11);
        }
        if ( !v7 )
          goto LABEL_40;
        if ( *v7 != 10 )
          break;
        v13 = Block;
        v14 = (char **)Block;
        v15 = (char **)((char *)Block + 8 * i);
        if ( Block != v15 )
        {
          while ( v7 != *v14 )
          {
            if ( ++v14 == v15 )
              goto LABEL_21;
          }
LABEL_40:
          sub_1400640B0(0x61Bu);
LABEL_41:
          if ( Block )
          {
            v25 = 0;
            j_free(Block);
          }
          sub_140029390((__int64)v27);
          return 0;
        }
LABEL_21:
        if ( i + 1 > v26 )
        {
          v13 = sub_14005ABE0((__int64)&Block, Block, i + 1, 8u);
          Block = v13;
          i = v25;
        }
        *((_QWORD *)v13 + i) = v7;
      }
      v27[0] = 2;
      if ( (unsigned int)sub_140028E70(v27, v7) )
        goto LABEL_41;
      if ( Block )
      {
        v25 = 0;
        j_free(Block);
      }
    }
    sub_1400286C0((unsigned __int64 *)(a1 + 24), *(int *)(a1 + 96));
    v16 = *(_QWORD *)(a1 + 32) + 1LL;
    if ( v16 > *(_QWORD *)(a1 + 40) )
      *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v16, 0x20u);
    v17 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
    *(_BYTE *)v17 = 2;
    *(_QWORD *)(v17 + 16) = 0;
    *(_QWORD *)(v17 + 24) = 0;
    *(_QWORD *)(v17 + 8) = 0;
    ++*(_QWORD *)(a1 + 32);
    sub_14002A460((char *)v17, v27);
    sub_140029390((__int64)v27);
    goto LABEL_30;
  }
  sub_140029390((__int64)v27);
  return 0;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
