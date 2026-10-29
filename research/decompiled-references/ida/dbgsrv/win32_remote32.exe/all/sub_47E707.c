/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E707
// Address: 0x0047E707

//----- (0047E707) --------------------------------------------------------
void __cdecl sub_47E707(char *lpMem)
{
  int **v1; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  LPVOID *v7; // ebx
  LPVOID *v8; // edi
  _DWORD *v9; // eax
  int v10; // [esp+Ch] [ebp-4h]

  v1 = *((int ***)lpMem + 34);
  if ( v1 )
  {
    if ( v1 != off_4B6800 )
    {
      v2 = *((_DWORD **)lpMem + 31);
      if ( v2 )
      {
        if ( !*v2 )
        {
          v3 = *((_DWORD **)lpMem + 33);
          if ( v3 && !*v3 )
          {
            sub_479216(*((LPVOID *)lpMem + 33));
            sub_47E304(*((LPVOID **)lpMem + 34));
          }
          v4 = *((_DWORD **)lpMem + 32);
          if ( v4 && !*v4 )
          {
            sub_479216(*((LPVOID *)lpMem + 32));
            sub_47E402(*((LPVOID **)lpMem + 34));
          }
          sub_479216(*((LPVOID *)lpMem + 31));
          sub_479216(*((LPVOID *)lpMem + 34));
        }
      }
    }
  }
  v5 = *((_DWORD **)lpMem + 35);
  if ( v5 && !*v5 )
  {
    sub_479216((LPVOID)(*((_DWORD *)lpMem + 36) - 254));
    sub_479216((LPVOID)(*((_DWORD *)lpMem + 37) - 128));
    sub_479216((LPVOID)(*((_DWORD *)lpMem + 38) - 128));
    sub_479216(*((LPVOID *)lpMem + 35));
  }
  sub_47E878(*((LPVOID **)lpMem + 39));
  v6 = 6;
  v7 = (LPVOID *)(lpMem + 160);
  v10 = 6;
  v8 = (LPVOID *)(lpMem + 40);
  do
  {
    if ( *(v8 - 2) != &dword_4B60E8 )
    {
      if ( *v8 && !*(_DWORD *)*v8 )
      {
        sub_479216(*v8);
        sub_479216(*v7);
      }
      v6 = v10;
    }
    if ( *(v8 - 3) )
    {
      v9 = *(v8 - 1);
      if ( v9 && !*v9 )
        sub_479216(*(v8 - 1));
      v6 = v10;
    }
    ++v7;
    v8 += 4;
    v10 = --v6;
  }
  while ( v6 );
  sub_479216(lpMem);
}
// 4B60E8: using guessed type int dword_4B60E8;
// 4B6800: using guessed type int *off_4B6800[10];
