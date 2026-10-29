/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C8A0
// Address: 0x0041C8A0

//----- (0041C8A0) --------------------------------------------------------
char *__thiscall sub_41C8A0(char *this, int a2, char a3)
{
  _BYTE *v4; // esi
  struct _RTL_CRITICAL_SECTION *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // ecx

  *(_DWORD *)this = 289621065;
  *((_DWORD *)this + 1) = sub_428030();
  *((_DWORD *)this + 2) = sub_41C100();
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  v4 = this + 76;
  *((_DWORD *)this + 18) = a2;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 17) = 0;
  *(this + 76) = a3;
  *(this + 77) = 0;
  *((_DWORD *)this + 14) = 0;
  if ( !a3 )
  {
    v5 = dword_4B6B40;
    sub_4562D0(dword_4B6B40);
    v6 = *((_DWORD *)this + 1);
    if ( ++*(_DWORD *)(v6 + 72) == 1 && dword_4B4068 )
      dword_4B4068();
    *(this + 77) = 1;
    sub_4562F0(v5);
    v4 = this + 76;
  }
  if ( !sub_455100() )
    *(this + 76) = 1;
  if ( *(this + 76) )
  {
    v7 = -1;
    v8 = -1;
  }
  else
  {
    v7 = sub_469314(nullptr);
  }
  v9 = *((_DWORD *)this + 1);
  *(_DWORD *)(v9 + 64) = v7;
  *(_DWORD *)(v9 + 68) = v8;
  if ( !*v4 )
    ((void (__cdecl *)(int))off_4B46B0)(25);
  return this;
}
// 41C9C7: variable 'v8' is possibly undefined
// 4B4068: using guessed type int (*dword_4B4068)(void);
// 4B46B0: using guessed type _DWORD (__cdecl *off_4B46B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
