/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4230A0
// Address: 0x004230A0

//----- (004230A0) --------------------------------------------------------
char __userpurge sub_4230A0@<al>(_DWORD *a1@<ecx>, int a2@<ebx>, char *a3, int a4, int a5, char *a6, char *a7, int a8)
{
  _DWORD *v8; // edi
  LPVOID *v9; // esi
  unsigned int v10; // eax
  int v11; // esi
  unsigned int v13; // eax
  int v14; // ecx
  _BYTE *v15; // eax
  char v17[8]; // [esp+Ch] [ebp-28h] BYREF
  __int128 v18; // [esp+14h] [ebp-20h]
  _DWORD *v19; // [esp+24h] [ebp-10h]
  int v20; // [esp+30h] [ebp-4h]
  char v21; // [esp+47h] [ebp+13h]
  _DWORD *v22; // [esp+48h] [ebp+14h]

  v8 = a1;
  v19 = a1;
  v9 = (LPVOID *)(a1 + 9);
  v10 = a1[10] + 1;
  if ( v10 > a1[11] )
    *v9 = sub_453B00((int)(a1 + 9), *v9, v10, 4u);
  *((_DWORD *)*v9 + (_DWORD)v9[1]) = 0;
  v9[1] = (char *)v9[1] + 1;
  v11 = (int)(v8 + 3);
  if ( a5 <= 0 )
  {
    v22 = v8 + 3;
  }
  else
  {
    do
    {
      v17[0] = 2;
      v18 = 0;
      sub_423670(v17, a6);
      v13 = *(_DWORD *)(v11 + 4) + 1;
      v20 = 0;
      if ( v13 > *(_DWORD *)(v11 + 8) )
        *(_DWORD *)v11 = sub_453B00(v11, *(void **)v11, v13, 0x18u);
      v14 = 3 * *(_DWORD *)(v11 + 4);
      v15 = *(_BYTE **)v11;
      v15[8 * v14] = 2;
      *(_OWORD *)&v15[8 * v14 + 8] = 0;
      sub_423670(&v15[8 * v14], v17);
      ++*(_DWORD *)(v11 + 4);
      v20 = 2;
      sub_423B70((int)v17);
      a6 += 24;
      v20 = -1;
      --a5;
    }
    while ( a5 );
    v8 = v19;
    v22 = v19 + 3;
  }
  v21 = sub_420C30(v8, a2, a7, a3, a4);
  if ( !v21 )
  {
    if ( a8 )
    {
      v11 = (int)v22;
      sub_4200F0((int *)(*v22 + 24 * v22[1] - 24), a8);
    }
    if ( a7 )
      sub_423420((_DWORD *)v11, a7);
  }
  if ( *(_BYTE *)(v8[1] + 76) )
  {
    ((void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))off_4B46B0)(24, 10, 0, &off_4B46B0);
    *(_BYTE *)(v8[1] + 76) = 0;
  }
  return v21;
}
// 4B46B0: using guessed type _DWORD (__cdecl *off_4B46B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
