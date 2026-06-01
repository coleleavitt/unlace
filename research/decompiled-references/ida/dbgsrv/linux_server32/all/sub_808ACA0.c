/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808ACA0
// Address: 0x0808ACA0

//----- (0808ACA0) --------------------------------------------------------
unsigned int __cdecl sub_808ACA0(int a1, int a2, char a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax
  void (*v6)(void); // eax
  int v7; // eax
  unsigned int result; // eax
  time_t v9; // eax
  bool v10; // zf
  pthread_mutex_t *mutex; // [esp+40h] [ebp-30h]
  _BYTE v12[16]; // [esp+44h] [ebp-2Ch] BYREF
  unsigned int v13; // [esp+54h] [ebp-1Ch]

  v13 = __readgsdword(0x14u);
  *(_DWORD *)a1 = 289621065;
  *(_DWORD *)(a1 + 4) = sub_807F510();
  v3 = sub_80C3680();
  *(_BYTE *)(a1 + 77) = 0;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = a2;
  *(_BYTE *)(a1 + 76) = a3;
  *(_DWORD *)(a1 + 56) = 0;
  if ( !a3 )
  {
    mutex = (pthread_mutex_t *)dword_811E6F8;
    sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
    v4 = *(_DWORD *)(a1 + 4);
    v5 = *(_DWORD *)(v4 + 64) + 1;
    *(_DWORD *)(v4 + 64) = v5;
    if ( v5 == 1 )
    {
      v6 = (void (*)(void))dword_811D3A0[2];
      if ( v6 )
        v6();
    }
    *(_BYTE *)(a1 + 77) = 1;
    sub_80D1600(mutex);
  }
  if ( sub_80D14A0() )
  {
    if ( *(_BYTE *)(a1 + 76) )
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 4) + 60) = -1;
    }
    else
    {
      v9 = time(nullptr);
      v10 = *(_BYTE *)(a1 + 76) == 0;
      *(_DWORD *)(*(_DWORD *)(a1 + 4) + 60) = v9;
      if ( v10 )
        off_811E568(v12);
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 4);
    *(_BYTE *)(a1 + 76) = 1;
    *(_DWORD *)(v7 + 60) = -1;
  }
  result = v13 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811D3A0: using guessed type int dword_811D3A0[3];
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
// 811E6F8: using guessed type int dword_811E6F8;
