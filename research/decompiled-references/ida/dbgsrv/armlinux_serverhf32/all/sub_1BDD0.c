/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BDD0
// Address: 0x0001BDD0

//----- (0001BDD0) --------------------------------------------------------
int __fastcall sub_1BDD0(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r4
  int v8; // r3
  int (__fastcall **v9)(_DWORD, int); // r1
  int v10; // r4
  char *v11; // r6
  char *v12; // r4
  _DWORD *v13; // r0
  char *v14; // r3
  _DWORD *v15; // t1
  _DWORD *v16; // r0
  unsigned int i; // r4
  int v19; // r0
  char *v20; // r0
  unsigned int v21; // r3
  void *v22; // r1
  int v23; // r3
  void *v24; // r1
  int v25; // r3
  int v26; // [sp+4h] [bp-28h]
  int (__fastcall **v27)(_DWORD, int); // [sp+8h] [bp-24h] BYREF
  void *dest; // [sp+Ch] [bp-20h] BYREF
  int v29; // [sp+10h] [bp-1Ch]
  unsigned int v30; // [sp+14h] [bp-18h]
  void *ptr; // [sp+18h] [bp-14h] BYREF
  unsigned int v32; // [sp+1Ch] [bp-10h]
  unsigned int v33; // [sp+20h] [bp-Ch]

  v5 = a1 + 1004;
  v6 = *(_DWORD *)(a1 + 1012);
  dest = nullptr;
  v29 = 0;
  v30 = 0;
  ptr = nullptr;
  v32 = 0;
  v33 = 0;
  if ( v6 == a1 + 1004 )
    goto LABEL_22;
  do
  {
    if ( (*(_DWORD *)(v6 + 16) == a2) == a3 )
      goto LABEL_7;
    if ( *(_DWORD *)(v6 + 40) || *(_BYTE *)(v6 + 44) || *(_BYTE *)(v6 + 45) )
      goto LABEL_6;
    if ( !sub_15C64(*(_DWORD *)(v6 + 20), 19) )
    {
      v23 = v29;
      v27 = (int (__fastcall **)(_DWORD, int))(v6 + 20);
      v24 = dest;
      if ( v30 < v29 + 1 )
      {
        v24 = sub_77EB0((int)&dest, dest, v29 + 1, 4u);
        v23 = v29;
        dest = v24;
      }
      *((_DWORD *)v24 + v23) = v6 + 20;
      v25 = v29;
      *(_BYTE *)(v6 + 44) = 1;
      v29 = v25 + 1;
LABEL_6:
      ++*(_DWORD *)(v6 + 24);
      goto LABEL_7;
    }
    v19 = *_errno_location();
    v26 = *(_DWORD *)(v6 + 20);
    if ( v19 == 3 )
    {
      v21 = v32;
      v22 = ptr;
      if ( v32 + 1 > v33 )
      {
        v22 = sub_77EB0((int)&ptr, ptr, v32 + 1, 4u);
        v21 = v32;
        ptr = v22;
      }
      *((_DWORD *)v22 + v21) = v26;
      ++v32;
    }
    else
    {
      v20 = strerror(v19);
      sub_172DC(a1, "failed to send SIGSTOP to thread %d: %s\n", v26, v20);
    }
LABEL_7:
    v6 = sub_81290(v6);
  }
  while ( v5 != v6 );
  if ( v29 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = *(unsigned __int8 *)(a1 + 1077);
        v27 = nullptr;
        v9 = (int (__fastcall **)(_DWORD, int))sub_20280(a1, (int *)&v27, -1, -v8);
        v10 = v29;
        if ( (int)v9 > 0 )
          break;
LABEL_17:
        if ( !v10 )
          goto LABEL_18;
      }
      v11 = (char *)dest;
      v12 = (char *)dest + 4 * v29;
      if ( v12 == dest )
        goto LABEL_16;
      v13 = *(_DWORD **)dest;
      if ( v9 != **(int (__fastcall ****)(_DWORD, int))dest )
        break;
LABEL_25:
      if ( (unsigned __int8)v27 == 127 && BYTE1(v27) == 19 )
      {
        *((_BYTE *)v13 + 24) = 0;
        v13[5] = 1;
      }
      else
      {
        sub_1771C((_DWORD *)a1, v9, v27);
        v12 = (char *)dest + 4 * v29;
      }
      memmove(v11, v11 + 4, ((v12 - v11) & 0xFFFFFFFC) - 4);
      if ( !--v29 )
        goto LABEL_18;
    }
    v14 = (char *)dest + 4;
    while ( 1 )
    {
      v11 = v14;
      if ( v14 == v12 )
        break;
      v15 = *(_DWORD **)v14;
      v14 += 4;
      v13 = v15;
      if ( (int (__fastcall **)(_DWORD, int))*v15 == v9 )
        goto LABEL_25;
    }
LABEL_16:
    sub_1771C((_DWORD *)a1, v9, v27);
    v10 = v29;
    goto LABEL_17;
  }
LABEL_18:
  v16 = ptr;
  for ( i = 0; i < v32; v16 = ptr )
    sub_1BCAC(a1, v16[i++], 3);
  if ( v16 )
  {
    v32 = 0;
    sub_77E08(v16);
  }
LABEL_22:
  if ( dest )
  {
    v29 = 0;
    sub_77E08(dest);
  }
  return 1;
}
