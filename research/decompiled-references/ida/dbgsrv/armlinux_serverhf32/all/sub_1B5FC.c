/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B5FC
// Address: 0x0001B5FC

//----- (0001B5FC) --------------------------------------------------------
int __fastcall sub_1B5FC(int a1, int a2, int a3, int a4)
{
  int v8; // r9
  char *v9; // r0
  char *v10; // r2
  char *v11; // r3
  int (__fastcall **v12)(_DWORD, int); // r0
  int v13; // r3
  int v14; // r6
  int v15; // r2
  bool v16; // cc
  unsigned int v17; // r7
  __int64 v18; // kr00_8
  int *v20; // r0
  const char *v21; // r0
  const void *v22; // r9
  void *v23; // r0
  int v24; // [sp+Ch] [bp-38h] BYREF
  int v25; // [sp+10h] [bp-34h] BYREF
  int v26; // [sp+14h] [bp-30h]
  int v27; // [sp+18h] [bp-2Ch]
  char v28; // [sp+1Ch] [bp-28h]
  int v29; // [sp+20h] [bp-24h]
  void *dest; // [sp+24h] [bp-20h] BYREF
  unsigned int v31; // [sp+28h] [bp-1Ch]
  unsigned int v32; // [sp+2Ch] [bp-18h]
  int v33; // [sp+30h] [bp-14h]
  int v34; // [sp+34h] [bp-10h]
  int v35; // [sp+38h] [bp-Ch]

  v8 = sub_1A4DC(a1, a2);
  v9 = *(char **)(a1 + 1036);
  v10 = &v9[4 * *(_DWORD *)(a1 + 1040)];
  if ( v9 == v10 )
    goto LABEL_6;
  if ( *(_DWORD *)v9 != a2 )
  {
    v11 = v9 + 4;
    while ( 1 )
    {
      v9 = v11;
      if ( v10 == v11 )
        break;
      v11 += 4;
      if ( *(_DWORD *)v9 == a2 )
        goto LABEL_20;
    }
LABEL_6:
    v12 = (int (__fastcall **)(_DWORD, int))sub_20280(a1, &v24, a2, -1);
    if ( v12 == (int (__fastcall **)(_DWORD, int))-1 )
    {
      v20 = _errno_location();
      v21 = (const char *)sub_792D8(*v20);
      sub_172DC(a1, "Finish attaching to %d thread: %s\n", a2, v21);
      return 0;
    }
    if ( v12 == (int (__fastcall **)(_DWORD, int))a2 && (unsigned __int8)v24 == 127 )
    {
      if ( *(_BYTE *)(a1 + 1078) )
      {
        if ( v24 >> 16 == 128 )
          goto LABEL_21;
      }
      else if ( BYTE1(v24) == 19 )
      {
        goto LABEL_21;
      }
    }
    v13 = *(_DWORD *)(a1 + 1008);
    v14 = a1 + 1004;
    if ( v13 )
    {
      do
      {
        v15 = *(_DWORD *)(v13 + 16);
        if ( v15 < a2 )
          v13 = *(_DWORD *)(v13 + 12);
        else
          v14 = v13;
        if ( v15 >= a2 )
          v13 = *(_DWORD *)(v13 + 8);
      }
      while ( v13 );
      if ( a1 + 1004 != v14 && *(_DWORD *)(v14 + 16) <= a2 )
        v13 = v14 + 20;
    }
    *(_BYTE *)(v13 + 24) = 1;
    if ( (int)v12 > 0 )
      sub_1771C((_DWORD *)a1, v12, (int (__fastcall **)(_DWORD, int))v24);
    goto LABEL_21;
  }
LABEL_20:
  memmove(v9, v9 + 4, ((v10 - v9) & 0xFFFFFFFC) - 4);
  --*(_DWORD *)(a1 + 1040);
LABEL_21:
  v29 = 0;
  dest = nullptr;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v25 = -1;
  v27 = -1;
  v26 = 0;
  v28 = 0;
  sub_6E3C0(&v25, 3);
  v16 = (v29 & 0xFFFFFFFu) > 3;
  if ( (v29 & 0xFFFFFFF) != 3 )
    v16 = (v29 & 0xFFFFFFFu) - 9 > 1;
  if ( v16 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(3297);
  }
  if ( &dest != (void **)(v8 + 32) )
  {
    v17 = *(_DWORD *)(v8 + 36);
    if ( v17 > 1 )
    {
      v22 = *(const void **)(v8 + 32);
      v23 = dest;
      if ( v17 > v32 )
      {
        v23 = sub_77EB0((int)&dest, dest, v17, 1u);
        dest = v23;
      }
      v31 = v17;
      memmove(v23, v22, v17 - 1);
      *((_BYTE *)dest + v17 - 1) = 0;
    }
    else
    {
      v31 = 0;
    }
  }
  v25 = *(_DWORD *)(a1 + 1068);
  v26 = a2;
  if ( a4 )
    a3 = ptrace(PTRACE_PEEKUSER, a2, 60, 0, &_stack_chk_guard);
  v27 = a3;
  v28 = 1;
  if ( (v29 & 0xFFFFFFF) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( (_DWORD)v18 == HIDWORD(v18) )
    {
      sub_1B568((_DWORD *)(a1 + 56), (int)&v25);
    }
    else
    {
      *(_DWORD *)(v18 - 44) = -1;
      *(_DWORD *)(v18 - 36) = -1;
      *(_DWORD *)(v18 - 40) = 0;
      *(_BYTE *)(v18 - 32) = 0;
      *(_DWORD *)(v18 - 28) = 0;
      sub_6E4A8(v18 - 44, (int)&v25);
      *(_DWORD *)(a1 + 64) -= 44;
    }
    *(_BYTE *)(a1 + 1112) = 0;
  }
  sub_6E318(&v25);
  return 1;
}
// D5C00: using guessed type char under_debugger;
