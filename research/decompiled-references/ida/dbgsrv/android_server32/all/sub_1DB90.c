/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DB90
// Address: 0x0001DB90

//----- (0001DB90) --------------------------------------------------------
int __fastcall sub_1DB90(int a1, int a2, int a3, int a4)
{
  _DWORD *v6; // r0
  int v7; // r2
  _DWORD *v8; // r1
  int v9; // r2
  int v10; // r7
  int (__fastcall **v11)(_DWORD, int); // r1
  _BOOL4 v12; // r0
  _DWORD *v13; // r2
  int v14; // r0
  int v15; // r3
  _DWORD *v16; // r4
  int v17; // r3
  _BYTE *v18; // r0
  _BYTE *v19; // r2
  int v20; // r4
  unsigned int v21; // r5
  size_t v22; // r2
  const void *v23; // r1
  void *v24; // r3
  size_t v25; // r5
  _DWORD *v26; // r7
  int (__fastcall **v27)(_DWORD, int); // r0
  unsigned int v28; // r5
  int v29; // r3
  int v30; // r2
  int v31; // r0
  int *v32; // r0
  const char *v33; // r0
  const void *v35; // [sp+8h] [bp-50h]
  char *v37; // [sp+14h] [bp-44h]
  int v39; // [sp+24h] [bp-34h]
  unsigned int v40; // [sp+28h] [bp-30h] BYREF
  int v41; // [sp+2Ch] [bp-2Ch]
  int v42; // [sp+30h] [bp-28h]
  char v43; // [sp+34h] [bp-24h]
  int v44; // [sp+38h] [bp-20h]
  void *ptr; // [sp+3Ch] [bp-1Ch] BYREF
  unsigned int v46; // [sp+40h] [bp-18h]
  unsigned int v47; // [sp+44h] [bp-14h]
  int v48; // [sp+48h] [bp-10h]
  int v49; // [sp+4Ch] [bp-Ch]
  int v50; // [sp+50h] [bp-8h]

  v37 = sub_1E25C(a1, a2);
  v6 = *(_DWORD **)(a1 + 936);
  v7 = *(_DWORD *)(a1 + 940);
  v8 = &v6[v7];
  v39 = a1;
  if ( 4 * v7 )
  {
    v9 = 4 * v7;
    v10 = a1;
    while ( *v6 != a2 )
    {
      v9 -= 4;
      ++v6;
      if ( !v9 )
        goto LABEL_9;
    }
  }
  else
  {
    v10 = a1;
  }
  if ( v6 == v8 )
  {
LABEL_9:
    v11 = (int (__fastcall **)(_DWORD, int))sub_2781C(v10, (__time_t *)&v40, a2, -1);
    if ( v11 == (int (__fastcall **)(_DWORD, int))-1 )
    {
      v32 = (int *)_errno(0);
      v33 = (const char *)winerr(*v32);
      sub_1BC48(v10, "Finish attaching to %d thread: %s\n", a2, v33);
      return 0;
    }
    if ( v11 != (int (__fastcall **)(_DWORD, int))a2 || (v40 & 0x7F) != 0x7F )
      goto LABEL_16;
    v12 = (v40 & 0xFF00) == 4864;
    if ( *(_BYTE *)(v10 + 978) )
      v12 = HIWORD(v40) == 128;
    if ( !v12 )
    {
LABEL_16:
      v13 = *(_DWORD **)(v10 + 916);
      v14 = v10 + 916;
      do
      {
        v15 = v13[4];
        if ( v15 >= a2 )
          v14 = (int)v13;
        v16 = v13 + 1;
        if ( v15 >= a2 )
          v16 = v13;
        v13 = (_DWORD *)*v16;
      }
      while ( *v16 );
      v17 = *(_DWORD *)(v14 + 16);
      v18 = (_BYTE *)(v14 + 44);
      v19 = (_BYTE *)&off_18;
      if ( v17 <= a2 )
        v19 = v18;
      *v19 = 1;
      if ( (int)v11 >= 1 )
        sub_1E384(v10, v11, (int (__fastcall **)(_DWORD, int))v40);
    }
  }
  else
  {
    memmove(v6, v6 + 1, ((char *)(v8 - 1) - (char *)v6) & 0xFFFFFFFC);
    --*(_DWORD *)(a1 + 940);
  }
  v20 = 0;
  v43 = 0;
  v41 = 0;
  v40 = -1;
  v42 = -1;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  ptr = nullptr;
  v44 = 0;
  set_debug_event_code((int)&v40, 3);
  if ( (v44 & 0xFFFFFFFu) - 9 >= 2 && (v44 & 0xFFFFFFF) != 3 )
  {
    if ( !under_debugger )
      interr(3297);
    __debugbreak();
  }
  if ( v37 + 32 != (char *)&ptr )
  {
    v21 = *((_DWORD *)v37 + 9);
    v22 = v21 - 1;
    if ( v21 < 2 )
    {
      v46 = 0;
    }
    else
    {
      v23 = *((const void **)v37 + 8);
      v24 = ptr;
      if ( v47 < v21 )
      {
        v35 = *((const void **)v37 + 8);
        v24 = qvector_reserve((int)&ptr, ptr, v21, 1u);
        ptr = v24;
        v22 = v21 - 1;
        v23 = v35;
      }
      v46 = v21;
      v25 = v22;
      memmove(v24, v23, v22);
      *((_BYTE *)ptr + v25) = 0;
    }
  }
  v26 = (_DWORD *)v39;
  v27 = *(int (__fastcall ***)(_DWORD, int))(v39 + 968);
  v41 = a2;
  v40 = (unsigned int)v27;
  if ( a4 )
  {
    a3 = ptrace(PTRACE_PEEKUSER, a2, 60, 0);
    v26 = (_DWORD *)v39;
  }
  v43 = 1;
  v42 = a3;
  if ( 16 * v44 )
  {
    v28 = v26[18];
    if ( !v28 )
    {
      sub_2519C((int)(v26 + 14));
      v26 = (_DWORD *)v39;
      v28 = *(_DWORD *)(v39 + 72);
    }
    v29 = v26[15];
    v30 = *(_DWORD *)(v29 + 4 * (v28 / 0x5D));
    if ( v26[16] != v29 )
      v20 = v30 + 44 * (v28 % 0x5D);
    if ( v20 == v30 )
      v20 = *(_DWORD *)(v29 + 4 * (v28 / 0x5D) - 4) + 4092;
    *(_DWORD *)(v20 - 44) = -1;
    v31 = v20 - 44;
    *(_DWORD *)(v31 + 4) = 0;
    *(_DWORD *)(v31 + 8) = -1;
    *(_BYTE *)(v31 + 12) = 0;
    *(_DWORD *)(v31 + 16) = 0;
    copy_debug_event(v20 - 44, (int)&v40);
    *(_BYTE *)(v39 + 1020) = 0;
    --*(_DWORD *)(v39 + 72);
    ++*(_DWORD *)(v39 + 76);
  }
  free_debug_event(&v40);
  return 1;
}
// 18: using guessed type _UNKNOWN *;
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// E0550: using guessed type char under_debugger;
