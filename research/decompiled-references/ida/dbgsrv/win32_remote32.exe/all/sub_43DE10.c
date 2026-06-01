/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DE10
// Address: 0x0043DE10

//----- (0043DE10) --------------------------------------------------------
_DWORD *__thiscall sub_43DE10(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // edx
  int v7; // edi
  int v8; // esi
  int *v9; // eax
  unsigned int v10; // ebx
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  LPVOID v14; // eax
  unsigned int v15; // eax
  LPVOID v16; // eax
  int v18; // edx
  int v20; // [esp+28h] [ebp+8h]

  v6 = this;
  *(this + 1) = a2;
  *(this + 2) = a3;
  *(this + 3) = a4;
  *(this + 4) = a5;
  *(this + 5) = a6;
  *this = &off_48DA6C;
  *(this + 1030) = -1;
  *(this + 1031) = this + 1031;
  *(this + 1032) = this + 1031;
  *(this + 1033) = 0;
  v7 = (int)(this + 1035);
  *(this + 1034) = -1;
  *(this + 1035) = 0;
  *(this + 1036) = 0;
  *(this + 1037) = 0;
  v8 = (int)(this + 1038);
  *(this + 1038) = 0;
  *(this + 1039) = 0;
  *(this + 1040) = 0;
  v9 = (int *)*(this + 3);
  v10 = 0;
  if ( v9[1] )
  {
    v11 = 0;
    v20 = 0;
    do
    {
      v12 = *v9;
      if ( *(_DWORD *)(v12 + v11 + 4) )
      {
        if ( (v6[4] & 1) == 0 || *(_DWORD *)(v12 + v11 + 16) )
        {
          v15 = *(_DWORD *)(v8 + 4) + 1;
          if ( v15 > *(_DWORD *)(v8 + 8) )
          {
            v16 = sub_453B00(v8, *(void **)v8, v15, 4u);
            v6 = this;
            *(_DWORD *)v8 = v16;
          }
          *(_DWORD *)(*(_DWORD *)v8 + 4 * (*(_DWORD *)(v8 + 4))++) = v10;
        }
        else
        {
          v13 = *(_DWORD *)(v7 + 4) + 1;
          if ( v13 > *(_DWORD *)(v7 + 8) )
          {
            v14 = sub_453B00(v7, *(void **)v7, v13, 4u);
            v6 = this;
            *(_DWORD *)v7 = v14;
          }
          *(_DWORD *)(*(_DWORD *)v7 + 4 * (*(_DWORD *)(v7 + 4))++) = v10;
        }
        v11 = v20;
      }
      v9 = (int *)v6[3];
      ++v10;
      v11 += 40;
      v20 = v11;
    }
    while ( v10 < v9[1] );
  }
  sub_464890((__m128i *)(v6 + 6), 0, 0x1000u);
  sub_453720();
  *(this + 1041) = v18;
  return this;
}
// 43DF60: variable 'v18' is possibly undefined
// 48DA6C: using guessed type _UNKNOWN *off_48DA6C;
