/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440450
// Address: 0x00440450

//----- (00440450) --------------------------------------------------------
char *__thiscall sub_440450(char *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // ecx
  int v4; // ebx
  _DWORD *v5; // esi
  void *v6; // eax
  unsigned int v7; // ebx
  int v8; // esi
  int v9; // ecx
  int v10; // ebx
  int v11; // esi
  void *v12; // eax
  void *v14; // [esp-4h] [ebp-28h]
  void *v15; // [esp-4h] [ebp-28h]
  void *v16; // [esp-4h] [ebp-28h]
  int v17; // [esp+14h] [ebp-10h]
  int v18; // [esp+14h] [ebp-10h]

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_WORD *)this + 48) = 0;
  *((_DWORD *)this + 25) = -1;
  *((_DWORD *)this + 26) = -1;
  *((_DWORD *)this + 28) = -1;
  *((_DWORD *)this + 29) = -1;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  v2 = *(void (__thiscall ****)(_DWORD, int))this;
  if ( v2 )
  {
    (**v2)(v2, 1);
    *(_DWORD *)this = 0;
  }
  sub_464890((__m128i *)(this + 4), 0, 0x30u);
  if ( *((_DWORD *)this + 13) )
  {
    v3 = *((_DWORD *)this + 14);
    v17 = v3;
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = (_DWORD *)(v4 + *((_DWORD *)this + 13));
        v6 = (void *)v5[3];
        if ( v6 )
        {
          v5[4] = 0;
          sub_453A20(v6);
          v3 = v17;
          v5[3] = 0;
          v5[5] = 0;
        }
        v4 += 104;
        v17 = --v3;
      }
      while ( v3 );
    }
    v14 = *((void **)this + 13);
    *((_DWORD *)this + 14) = 0;
    sub_453A20(v14);
    *((_DWORD *)this + 13) = 0;
    *((_DWORD *)this + 15) = 0;
  }
  v7 = 0;
  if ( *((_DWORD *)this + 36) )
  {
    v8 = 0;
    do
    {
      sub_453A20(*(void **)(*((_DWORD *)this + 35) + v8 + 28));
      ++v7;
      v8 += 40;
    }
    while ( v7 < *((_DWORD *)this + 36) );
  }
  if ( *((_DWORD *)this + 16) )
  {
    v15 = *((void **)this + 16);
    *((_DWORD *)this + 17) = 0;
    sub_453A20(v15);
    *((_DWORD *)this + 16) = 0;
    *((_DWORD *)this + 18) = 0;
  }
  if ( *((_DWORD *)this + 38) )
  {
    v9 = *((_DWORD *)this + 39);
    v18 = v9;
    if ( v9 )
    {
      v10 = 0;
      do
      {
        v11 = v10 + *((_DWORD *)this + 38);
        v12 = *(void **)v11;
        if ( *(_DWORD *)v11 )
        {
          *(_DWORD *)(v11 + 4) = 0;
          sub_453A20(v12);
          v9 = v18;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 8) = 0;
        }
        v10 += 12;
        v18 = --v9;
      }
      while ( v9 );
    }
    v16 = *((void **)this + 38);
    *((_DWORD *)this + 39) = 0;
    sub_453A20(v16);
    *((_DWORD *)this + 38) = 0;
    *((_DWORD *)this + 40) = 0;
  }
  return this;
}
