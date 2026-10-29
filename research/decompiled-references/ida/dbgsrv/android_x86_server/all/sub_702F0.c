/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_702F0
// Address: 0x000702F0

//----- (000702F0) --------------------------------------------------------
int __cdecl sub_702F0(int a1, char *s)
{
  char *v2; // edi
  int v3; // ecx
  int v4; // ebx
  int *v5; // edx
  int v6; // ecx
  char *v7; // eax
  FILE *v8; // eax

  v2 = s;
  if ( *(_DWORD *)(a1 + 132) )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 140) )
        qfclose(*(FILE **)(a1 + 140));
      qfree(*(void **)(a1 + 144));
      *(_DWORD *)(a1 + 144) = 0;
      v3 = *(_DWORD *)(a1 + 128);
      v4 = *(_DWORD *)(a1 + 132);
      *(_DWORD *)(a1 + 140) = *(_DWORD *)(v3 + 24 * (v4 - 1) + 4);
      *(_DWORD *)(a1 + 148) = *(_DWORD *)(v3 + 24 * (v4 - 1) + 16);
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(v3 + 24 * (v4 - 1));
      *(_BYTE *)(a1 + 68) = *(_BYTE *)(v3 + 24 * (v4 - 1) + 20);
      *(_DWORD *)(a1 + 104) = *(_DWORD *)(v3 + 24 * (v4 - 1) + 8);
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(v3 + 24 * (v4 - 1) + 12);
      if ( !v4 )
        break;
      *(_DWORD *)(a1 + 132) = v4 - 1;
      v2 = s;
      if ( v4 == 1 )
        goto LABEL_9;
    }
    v2 = s;
LABEL_9:
    v5 = (int *)(a1 + 108);
  }
  else
  {
    v5 = (int *)(a1 + 108);
  }
  *(_DWORD *)(a1 + 104) = sub_697D0;
  *v5 = a1;
  *(_DWORD *)(a1 + 148) = 0;
  *(_BYTE *)(a1 + 164) = 0;
  *(_BYTE *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  if ( !v2 )
  {
    set_qerrno(1);
    *(_DWORD *)__errno(v6) = 2;
  }
  qfree(*(void **)(a1 + 144));
  v7 = (char *)qstrdup(v2);
  *(_DWORD *)(a1 + 144) = v7;
  if ( !v7 )
    return get_qerrno();
  v8 = fopenRT(v7);
  *(_DWORD *)(a1 + 140) = v8;
  if ( !v8 )
    return get_qerrno();
  if ( *(_BYTE *)(a1 + 272) )
    return sub_69C70(a1, 0, 0);
  return 0;
}
// 7042D: variable 'v6' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
