/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76F30
// Address: 0x00076F30

//----- (00076F30) --------------------------------------------------------
char __cdecl sub_76F30(int a1, int a2)
{
  unsigned __int16 *v2; // edi
  unsigned __int16 v3; // ax
  int (__cdecl *v4)(int); // eax
  int v5; // eax
  int v6; // edx
  int (__cdecl *v7)(_DWORD); // ecx
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  char *v12; // eax
  unsigned __int16 *v14; // [esp+8h] [ebp-14h]

  v2 = *(unsigned __int16 **)(*(_DWORD *)(a1 + 8) + 4 * a2);
  v14 = v2;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = *v2;
      if ( *v2 )
        break;
LABEL_12:
      if ( (__int16)v2[1] != -1 && !(unsigned __int8)sub_76F30(a1, (__int16)v2[1]) )
        return 0;
      v5 = *((unsigned __int8 *)v2 + 5);
      if ( v5 == 255 )
        goto LABEL_20;
      v6 = *(_DWORD *)(a1 + 12);
      v7 = *(int (__cdecl **)(_DWORD))(v6 + 8 * v5);
      v8 = (_DWORD *)(a1 + *(_DWORD *)(v6 + 8 * v5 + 4));
      if ( ((unsigned __int8)v7 & 1) != 0 )
        v7 = *(int (__cdecl **)(_DWORD))((char *)v7 + *v8 - 1);
      v9 = v7(v8);
      if ( !v9 )
      {
LABEL_20:
        v10 = *((unsigned __int8 *)v2 + 4);
        if ( v10 == 255 )
          return 1;
        v2 = &v14[3 * v10];
      }
      else
      {
        if ( v9 != 1507 )
          return 0;
        *(_BYTE *)(a1 + 16) = 1;
        v2 += 3;
      }
    }
    if ( v3 == 0xFFFF )
      break;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v4 = *(int (__cdecl **)(int))a1;
      if ( (*(_DWORD *)a1 & 1) != 0 )
        v4 = *(int (__cdecl **)(int))((char *)v4 + *(_DWORD *)(a1 + *(_DWORD *)(a1 + 4)) - 1);
      if ( v4(a1 + *(_DWORD *)(a1 + 4)) )
        return 0;
      *(_BYTE *)(a1 + 16) = 1;
      v3 = *v2;
    }
    if ( (__int16)v3 == *(unsigned __int16 *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 16) = 0;
      goto LABEL_12;
    }
    v2 += 3;
  }
  v11 = (__int16)v2[1];
  if ( !v11 )
    return 1;
  if ( (unsigned __int16)v11 == 67 )
  {
    if ( *(_DWORD *)(a1 + 24) )
      v12 = *(char **)(a1 + 20);
    else
      v12 = byte_EF875;
    set_error_string(0, v12);
  }
  set_qerrno(v11);
  return 0;
}
