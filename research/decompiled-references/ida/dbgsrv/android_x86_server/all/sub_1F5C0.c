/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F5C0
// Address: 0x0001F5C0

//----- (0001F5C0) --------------------------------------------------------
char __cdecl sub_1F5C0(int a1, int a2, int a3, char a4)
{
  int v4; // edx
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // ecx
  int (__cdecl **v8)(_DWORD, int); // eax
  int v9; // ecx
  bool v10; // cl
  int v11; // ecx
  int v12; // edx
  bool v13; // cc
  int v14; // ecx
  unsigned int v15; // edi
  size_t v16; // edx
  void *v17; // eax
  _DWORD *v18; // edi
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // esi
  unsigned int v22; // edx
  _DWORD *v23; // ebx
  int v24; // edi
  int v25; // ecx
  int v26; // eax
  int *v28; // eax
  void *v29; // eax
  char *v30; // [esp+10h] [ebp-4Ch]
  const void *v31; // [esp+10h] [ebp-4Ch]
  unsigned int v32; // [esp+18h] [ebp-44h] BYREF
  int v33; // [esp+1Ch] [ebp-40h]
  int v34; // [esp+20h] [ebp-3Ch]
  char v35; // [esp+24h] [ebp-38h]
  int v36; // [esp+28h] [ebp-34h]
  int v37; // [esp+2Ch] [ebp-30h] BYREF
  unsigned int v38; // [esp+30h] [ebp-2Ch]
  unsigned int v39; // [esp+34h] [ebp-28h]
  int v40; // [esp+38h] [ebp-24h]
  int v41; // [esp+3Ch] [ebp-20h]
  int v42; // [esp+40h] [ebp-1Ch]
  unsigned int v43; // [esp+48h] [ebp-14h]

  v43 = __readgsdword(0x14u);
  v30 = sub_20000(a1, a2);
  v4 = *(_DWORD *)(a1 + 596);
  v5 = 4 * v4;
  v6 = *(_DWORD **)(a1 + 592);
  if ( 4 * v4 )
  {
    v6 = *(_DWORD **)(a1 + 592);
    while ( *v6 != a2 )
    {
      ++v6;
      v5 -= 4;
      if ( !v5 )
        goto LABEL_8;
    }
  }
  v7 = *(_DWORD *)(a1 + 592) + 4 * v4;
  if ( v6 == (_DWORD *)v7 )
  {
LABEL_8:
    v8 = (int (__cdecl **)(_DWORD, int))sub_2F940(a1, (__time_t *)&v32, a2, -1);
    if ( v8 == (int (__cdecl **)(_DWORD, int))-1 )
    {
      v28 = (int *)__errno(v9);
      v29 = winerr(*v28);
      sub_1C9D0(a1, "Finish attaching to %d thread: %s\n", a2, v29);
      return 0;
    }
    if ( v8 != (int (__cdecl **)(_DWORD, int))a2 || (v32 & 0x7F) != 0x7F )
      goto LABEL_14;
    v10 = (v32 & 0xFF00) == 4864;
    if ( *(_BYTE *)(a1 + 634) )
      v10 = (v32 & 0xFFFF0000) == 0x800000;
    if ( !v10 )
    {
LABEL_14:
      v11 = a1 + 572;
      v12 = *(_DWORD *)(a1 + 572);
      do
      {
        if ( *(_DWORD *)(v12 + 16) >= a2 )
          v11 = v12;
        v12 = *(_DWORD *)(v12 + 4 * (*(_DWORD *)(v12 + 16) < a2));
      }
      while ( v12 );
      v13 = *(_DWORD *)(v11 + 16) <= a2;
      v14 = v11 + 20;
      if ( !v13 )
        v14 = 0;
      *(_BYTE *)(v14 + 24) = 1;
      if ( (int)v8 > 0 )
        sub_201C0(a1, v8, (int (__cdecl **)(_DWORD, int))v32);
    }
  }
  else
  {
    memmove(v6, v6 + 1, (v7 - 4 - (_DWORD)v6) & 0xFFFFFFFC);
    --*(_DWORD *)(a1 + 596);
  }
  v32 = -1;
  v33 = 0;
  v34 = -1;
  v35 = 0;
  v37 = 0;
  v36 = 0;
  v39 = 0;
  v38 = 0;
  v42 = 0;
  v41 = 0;
  v40 = 0;
  set_debug_event_code(&v32, 3);
  if ( (v36 & 0xFFFFFFFu) - 9 >= 2 && (v36 & 0xFFFFFFF) != 3 )
  {
    if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
      interr(3297);
    BUG();
  }
  if ( v30 + 32 != (char *)&v37 )
  {
    v15 = *((_DWORD *)v30 + 9);
    if ( !v15 || (v16 = v15 - 1, v15 == 1) )
    {
      v38 = 0;
    }
    else
    {
      v31 = *((const void **)v30 + 8);
      v17 = (void *)v37;
      if ( v39 < v15 )
      {
        v17 = qvector_reserve((int)&v37, (void *)v37, v15, 1u);
        v37 = (int)v17;
        v16 = v15 - 1;
      }
      v38 = v15;
      memmove(v17, v31, v16);
      *(_BYTE *)(v37 + v15 - 1) = 0;
    }
  }
  v18 = (_DWORD *)a1;
  v32 = *(_DWORD *)(a1 + 624);
  v33 = a2;
  if ( a4 )
  {
    v19 = ptrace(PTRACE_PEEKUSER, a2, 48, 0);
    v18 = (_DWORD *)a1;
  }
  else
  {
    v19 = a3;
  }
  v34 = v19;
  v35 = 1;
  if ( (v36 & 0xFFFFFFF) != 0 )
  {
    v20 = v18[18];
    if ( !v20 )
    {
      sub_2B960(v18 + 14);
      v18 = (_DWORD *)a1;
      v20 = *(_DWORD *)(a1 + 72);
    }
    v21 = v18[15];
    v22 = v20 / 0x5D;
    v23 = v18;
    v24 = *(_DWORD *)(v21 + 4 * (v20 / 0x5D));
    v25 = v24 + 44 * (v20 % 0x5D);
    v26 = 0;
    if ( v23[16] != v21 )
      v26 = v25;
    if ( v26 == v24 )
      v26 = *(_DWORD *)(v21 + 4 * v22 - 4) + 4092;
    *(_DWORD *)(v26 - 44) = -1;
    *(_DWORD *)(v26 - 40) = 0;
    *(_DWORD *)(v26 - 36) = -1;
    *(_BYTE *)(v26 - 32) = 0;
    *(_DWORD *)(v26 - 28) = 0;
    copy_debug_event(v26 - 44, &v32);
    --*(_DWORD *)(a1 + 72);
    ++*(_DWORD *)(a1 + 76);
    *(_BYTE *)(a1 + 676) = 0;
  }
  free_debug_event(&v32);
  return 1;
}
// 1F913: variable 'v9' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13ACD8: using guessed type __int64 qword_13ACD8;
