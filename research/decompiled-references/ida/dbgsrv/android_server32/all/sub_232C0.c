/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_232C0
// Address: 0x000232C0

//----- (000232C0) --------------------------------------------------------
int __fastcall sub_232C0(int a1)
{
  int v2; // r2
  int v3; // r4
  int v4; // r2
  int v5; // r2
  int v6; // r1
  _DWORD **v7; // r7
  _DWORD *v8; // r5
  int v9; // r1
  int v10; // r0
  _DWORD *v11; // r1
  _DWORD *v12; // r1
  bool v13; // zf
  int v14; // r2
  int v15; // r5
  _DWORD *v16; // r6
  int v17; // r0
  int v18; // r5
  int v19; // r4
  int v20; // r5
  int v21; // r2
  unsigned int v22; // r0
  _DWORD *v23; // r6
  _DWORD *v25; // [sp+18h] [bp-40h]
  int v26; // [sp+20h] [bp-38h]
  int *v27; // [sp+24h] [bp-34h]
  int v28; // [sp+28h] [bp-30h] BYREF
  int v29; // [sp+2Ch] [bp-2Ch]
  int v30; // [sp+30h] [bp-28h]
  char v31; // [sp+34h] [bp-24h]
  int v32; // [sp+38h] [bp-20h]
  int v33; // [sp+3Ch] [bp-1Ch]
  int v34; // [sp+40h] [bp-18h]
  int v35; // [sp+44h] [bp-14h]
  int v36; // [sp+48h] [bp-10h]
  int v37; // [sp+4Ch] [bp-Ch]
  int v38; // [sp+50h] [bp-8h]

  v2 = *(_DWORD *)(a1 + 800);
  if ( v2 )
    (*(void (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v2,
      a1 + 804,
      *(unsigned __int8 *)(a1 + 808));
  v3 = 0;
  *(_DWORD *)(a1 + 800) = 0;
  *(_BYTE *)(a1 + 808) = 0;
  v4 = *(_DWORD *)(a1 + 812);
  v26 = a1;
  if ( v4 )
    (*(void (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v4,
      a1 + 816,
      *(unsigned __int8 *)(a1 + 820));
  *(_DWORD *)(a1 + 812) = 0;
  *(_BYTE *)(a1 + 820) = 0;
  v5 = *(_DWORD *)(a1 + 824);
  if ( v5 )
    (*(void (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v5,
      a1 + 828,
      *(unsigned __int8 *)(a1 + 832));
  *(_DWORD *)(a1 + 824) = 0;
  *(_BYTE *)(a1 + 832) = 0;
  sub_2312C(a1);
  v27 = (int *)(a1 + 968);
  v6 = a1;
  v7 = (_DWORD **)(a1 + 916);
  v8 = *(_DWORD **)(v6 + 912);
  v25 = (_DWORD *)(v6 + 912);
  while ( v8 != v7 )
  {
    v9 = v8[5];
    v3 |= v9 == *v27;
    v10 = ptrace(PTRACE_DETACH, v9, 0, 0);
    v11 = (_DWORD *)v8[1];
    if ( v11 )
    {
      do
      {
        v8 = v11;
        v11 = (_DWORD *)*v11;
      }
      while ( v11 );
    }
    else
    {
      v12 = v8 + 2;
      v13 = *(_DWORD *)v8[2] == (_DWORD)v8;
      v8 = (_DWORD *)v8[2];
      if ( !v13 )
      {
        do
        {
          v14 = *v12;
          v12 = (_DWORD *)(*v12 + 8);
          v8 = *(_DWORD **)(v14 + 8);
        }
        while ( *v8 != v14 );
      }
    }
    if ( v10 )
      return -1;
  }
  v15 = -1;
  if ( v3 << 31 || !ptrace(PTRACE_DETACH, *v27, 0, 0) )
  {
    v16 = nullptr;
    v31 = 0;
    v29 = 0;
    v28 = -1;
    v30 = -1;
    v38 = 0;
    v37 = 0;
    v36 = 0;
    v35 = 0;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    set_debug_event_code((int)&v28, 12);
    v17 = *v27;
    v31 = 1;
    v29 = v17;
    v28 = v17;
    v30 = -1;
    v18 = v26;
    if ( 16 * v32 )
    {
      v19 = *(_DWORD *)(v26 + 60);
      v20 = *(_DWORD *)(v26 + 64);
      v21 = 93 * ((v20 - v19) >> 2) - 1;
      if ( v20 == v19 )
        v21 = v20 - v19;
      v22 = *(_DWORD *)(v26 + 76) + *(_DWORD *)(v26 + 72);
      if ( v21 == v22 )
      {
        sub_25954((void **)(v26 + 56));
        v22 = *(_DWORD *)(v26 + 72) + *(_DWORD *)(v26 + 76);
        v19 = *(_DWORD *)(v26 + 60);
        v20 = *(_DWORD *)(v26 + 64);
      }
      if ( v20 != v19 )
        v16 = (_DWORD *)(*(_DWORD *)(v19 + 4 * (v22 / 0x5D)) + 44 * (v22 % 0x5D));
      *v16 = -1;
      v16[1] = 0;
      v23 = v16 + 2;
      *v23 = -1;
      *((_BYTE *)v23 + 4) = 0;
      v23[2] = 0;
      copy_debug_event((int)(v23 - 2), (int)&v28);
      v18 = v26;
      *(_BYTE *)(v26 + 1020) = 0;
      ++*(_DWORD *)(v26 + 76);
    }
    *(_BYTE *)(v18 + 977) = 1;
    *(_BYTE *)(v18 + 1022) = 0;
    sub_25098((int)v25, *v7);
    *(_DWORD *)(v18 + 920) = 0;
    *v25 = v7;
    *v7 = nullptr;
    *v27 = -1;
    *(_BYTE *)(v18 + 976) = 0;
    free_debug_event(&v28);
    return 1;
  }
  return v15;
}
