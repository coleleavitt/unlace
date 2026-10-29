/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_27EB0
// Address: 0x00027EB0

//----- (00027EB0) --------------------------------------------------------
int __cdecl sub_27EB0(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // edx
  _DWORD *v10; // ecx
  int v11; // esi
  bool v12; // zf
  int result; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // eax
  int v17; // edx
  unsigned int v18; // ecx
  int v19; // esi
  int v20; // eax
  int v21; // [esp+0h] [ebp-4Ch]
  int v22; // [esp+0h] [ebp-4Ch]
  int v23; // [esp+8h] [ebp-44h] BYREF
  int v24; // [esp+Ch] [ebp-40h]
  int v25; // [esp+10h] [ebp-3Ch]
  char v26; // [esp+14h] [ebp-38h]
  int v27; // [esp+18h] [ebp-34h]
  int v28; // [esp+1Ch] [ebp-30h]
  int v29; // [esp+20h] [ebp-2Ch]
  int v30; // [esp+24h] [ebp-28h]
  int v31; // [esp+28h] [ebp-24h]
  int v32; // [esp+2Ch] [ebp-20h]
  int v33; // [esp+30h] [ebp-1Ch]
  unsigned int v34; // [esp+38h] [ebp-14h]

  v34 = __readgsdword(0x14u);
  v1 = *(_DWORD *)(a1 + 468);
  if ( v1 )
    (*(void (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v1,
      a1 + 472,
      *(unsigned __int8 *)(a1 + 473));
  *(_DWORD *)(a1 + 468) = 0;
  *(_BYTE *)(a1 + 473) = 0;
  v2 = *(_DWORD *)(a1 + 476);
  if ( v2 )
    (*(void (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v2,
      a1 + 480,
      *(unsigned __int8 *)(a1 + 481));
  *(_DWORD *)(a1 + 476) = 0;
  *(_BYTE *)(a1 + 481) = 0;
  v3 = *(_DWORD *)(a1 + 484);
  if ( v3 )
    (*(void (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v3,
      a1 + 488,
      *(unsigned __int8 *)(a1 + 489));
  *(_DWORD *)(a1 + 484) = 0;
  *(_BYTE *)(a1 + 489) = 0;
  sub_27CA0(a1);
  v4 = *(_DWORD **)(a1 + 568);
  v5 = (_DWORD *)(a1 + 572);
  v21 = 0;
  while ( v5 != v4 )
  {
    v6 = v4[5];
    v7 = a1;
    LOBYTE(v7) = 1;
    if ( v6 != *(_DWORD *)(a1 + 624) )
      v7 = v21;
    v21 = v7;
    v8 = ptrace(PTRACE_DETACH, v6, 0, 0);
    v9 = (_DWORD *)v4[1];
    if ( v9 )
    {
      do
      {
        v10 = v9;
        v9 = (_DWORD *)*v9;
      }
      while ( v9 );
    }
    else
    {
      v10 = (_DWORD *)v4[2];
      if ( (_DWORD *)*v10 != v4 )
      {
        v11 = (int)(v4 + 2);
        do
        {
          v10 = *(_DWORD **)(*(_DWORD *)v11 + 8);
          v12 = *v10 == *(_DWORD *)v11;
          v11 = *(_DWORD *)v11 + 8;
        }
        while ( !v12 );
      }
    }
    v4 = v10;
    if ( v8 )
      return -1;
  }
  if ( (v21 & 1) != 0 || (v14 = ptrace(PTRACE_DETACH, *(_DWORD *)(a1 + 624), 0, 0), result = -1, !v14) )
  {
    v23 = -1;
    v24 = 0;
    v25 = -1;
    v26 = 0;
    v28 = 0;
    v27 = 0;
    v30 = 0;
    v29 = 0;
    v33 = 0;
    v32 = 0;
    v31 = 0;
    set_debug_event_code(&v23, 12);
    v15 = a1;
    v23 = *(_DWORD *)(a1 + 624);
    v24 = v23;
    v25 = -1;
    v26 = 1;
    if ( (v27 & 0xFFFFFFF) != 0 )
    {
      v22 = *(_DWORD *)(a1 + 60);
      v16 = *(_DWORD *)(a1 + 64);
      v17 = 93 * ((v16 - v22) >> 2) - 1;
      if ( v16 == v22 )
        v17 = *(_DWORD *)(a1 + 64) - v22;
      v18 = *(_DWORD *)(a1 + 72) + *(_DWORD *)(a1 + 76);
      v19 = *(_DWORD *)(a1 + 60);
      if ( v17 == v18 )
      {
        sub_2C600((_DWORD *)(a1 + 56));
        v19 = *(_DWORD *)(a1 + 60);
        v16 = *(_DWORD *)(a1 + 64);
        v18 = *(_DWORD *)(a1 + 76) + *(_DWORD *)(a1 + 72);
      }
      if ( v16 == v19 )
        v20 = 0;
      else
        v20 = *(_DWORD *)(v19 + 4 * (v18 / 0x5D)) + 44 * (v18 % 0x5D);
      *(_DWORD *)v20 = -1;
      *(_DWORD *)(v20 + 4) = 0;
      *(_DWORD *)(v20 + 8) = -1;
      *(_BYTE *)(v20 + 12) = 0;
      *(_DWORD *)(v20 + 16) = 0;
      copy_debug_event(v20, &v23);
      v15 = a1;
      ++*(_DWORD *)(a1 + 76);
      *(_BYTE *)(a1 + 676) = 0;
    }
    *(_BYTE *)(v15 + 678) = 0;
    *(_BYTE *)(v15 + 633) = 1;
    sub_2B710(a1 + 568, *(void ***)(v15 + 572));
    *(_DWORD *)(v15 + 576) = 0;
    *(_DWORD *)(v15 + 568) = v5;
    *(_DWORD *)(v15 + 572) = 0;
    *(_DWORD *)(v15 + 624) = -1;
    *(_BYTE *)(v15 + 632) = 0;
    free_debug_event(&v23);
    return 1;
  }
  return result;
}
