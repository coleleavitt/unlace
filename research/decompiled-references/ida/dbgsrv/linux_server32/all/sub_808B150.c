/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808B150
// Address: 0x0808B150

//----- (0808B150) --------------------------------------------------------
void __cdecl __noreturn sub_808B150(int a1, int a2, int a3, char *a4)
{
  int v4; // esi
  void *v5; // eax
  void *v6; // eax
  char *v7; // esi
  int v8; // edx
  bool v9; // zf
  int v10; // [esp+8h] [ebp-84h]
  char *v11; // [esp+Ch] [ebp-80h]
  int v12; // [esp+10h] [ebp-7Ch]
  char *v13; // [esp+1Ch] [ebp-70h]
  char *v14; // [esp+2Ch] [ebp-60h]
  int v15; // [esp+30h] [ebp-5Ch]
  int v16; // [esp+34h] [ebp-58h]
  void *v17[3]; // [esp+38h] [ebp-54h] BYREF
  char v18[4]; // [esp+44h] [ebp-48h] BYREF
  char *v19; // [esp+48h] [ebp-44h]
  int v20; // [esp+4Ch] [ebp-40h]
  int v21; // [esp+50h] [ebp-3Ch]
  int v22; // [esp+54h] [ebp-38h]
  unsigned __int8 v23[4]; // [esp+58h] [ebp-34h] BYREF
  __int128 v24; // [esp+5Ch] [ebp-30h]
  unsigned int v25; // [esp+6Ch] [ebp-20h]
  int v26; // [esp+80h] [ebp-Ch]
  int v27; // [esp+84h] [ebp-8h]
  int v28; // [esp+88h] [ebp-4h]

  v25 = __readgsdword(0x14u);
  v18[0] = 2;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v19 = a4;
  memset(v17, 0, sizeof(v17));
  if ( a4 )
  {
    v11 = a4;
    v23[0] = 2;
    v24 = 0;
    sub_808AF40(v17, a4, v23);
    v4 = 0;
    sub_8089430((int)v23);
    v14 = nullptr;
    v13 = v18;
    if ( (int)a4 > 0 )
    {
      do
      {
        sub_8084300((__m128i *)((char *)v17[0] + v4), (__m128i *)(a3 + v4));
        v4 += 20;
        ++v14;
      }
      while ( a4 != v14 );
    }
  }
  v5 = *(void **)(a1 + 24);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    sub_80CF780(v5);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v6 = *(void **)(a1 + 36);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    sub_80CF780(v6);
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 44) = 0;
  }
  if ( *(_DWORD *)(a1 + 12) )
  {
    if ( *(_DWORD *)(a1 + 16) )
    {
      v7 = *(char **)(a1 + 16);
      v14 = nullptr;
      do
        sub_8089430(*(_DWORD *)(a1 + 12) + 20 * (_DWORD)v14++);
      while ( v7 != v14 );
    }
    *(_DWORD *)(a1 + 16) = 0;
    sub_80CF780(*(void **)(a1 + 12));
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
  v8 = *(_DWORD *)(a1 + 4);
  v9 = (*(_DWORD *)(v8 + 64))-- == 1;
  if ( v9 && off_811D3AC )
    off_811D3AC();
  *(_DWORD *)a1 = 0;
  (*(void (__stdcall **)(void *, char *, int, char *, int, int, void **, char *, int, char *, __int64 *, char *, int, int))(a2 + 4))(
    v17[0],
    v18,
    v10,
    v11,
    v12,
    a2,
    v17,
    v13,
    a3,
    v18,
    &qword_811CFF4,
    v14,
    v15,
    v16);
  if ( !byte_811F8A1 )
  {
    if ( v25 == __readgsdword(0x14u) )
      sub_80CFF40(291, v26, v27, v28);
    sub_80D7AB0();
  }
  BUG();
}
// 808B343: variable 'v10' is possibly undefined
// 808B343: variable 'v11' is possibly undefined
// 808B343: variable 'v12' is possibly undefined
// 808B343: variable 'v13' is possibly undefined
// 808B343: variable 'v14' is possibly undefined
// 808B343: variable 'v15' is possibly undefined
// 808B343: variable 'v16' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D3AC: using guessed type int (*off_811D3AC)();
// 811F8A1: using guessed type char byte_811F8A1;
