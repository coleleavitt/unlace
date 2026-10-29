/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41FC70
// Address: 0x0041FC70

//----- (0041FC70) --------------------------------------------------------
void __thiscall sub_41FC70(void **this)
{
  unsigned int v2; // esi
  int v3; // edi
  int v4; // eax
  _BYTE *v5; // ecx
  int i; // edi
  _DWORD *v7; // esi
  void *v8; // eax
  void *v9; // [esp-4h] [ebp-20h]

  v2 = 0;
  if ( *(this + 4) )
  {
    v3 = 0;
    do
    {
      v4 = (int)*(this + 3);
      v5 = (_BYTE *)(v3 + v4 + 16);
      if ( *v5 == 5 || *v5 == 6 && -*(_DWORD *)(v4 + v3 + 24) >= (unsigned int)dword_4B4060 )
        sub_423B70((int)v5);
      ++v2;
      v3 += 40;
    }
    while ( v2 < (unsigned int)*(this + 4) );
  }
  if ( dword_4B4074 )
    dword_4B4074();
  for ( i = (int)*(this + 1) - 1; i >= 0; --i )
  {
    v7 = *((_DWORD **)*this + i);
    if ( v7 )
    {
      v8 = (void *)v7[4];
      if ( v8 )
      {
        v7[5] = 0;
        sub_453A20(v8);
        v7[4] = 0;
        v7[6] = 0;
      }
      sub_41C2E0(v7, (int)v7, *(int **)(*v7 + 4));
      sub_4627F2((void *)*v7);
      sub_4627F2(v7);
    }
  }
  if ( *this )
  {
    v9 = *this;
    *(this + 1) = nullptr;
    sub_453A20(v9);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
}
// 4B4060: using guessed type int dword_4B4060;
// 4B4074: using guessed type int (*dword_4B4074)(void);
