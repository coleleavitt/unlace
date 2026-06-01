/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B5A0
// Address: 0x0044B5A0

//----- (0044B5A0) --------------------------------------------------------
char __thiscall sub_44B5A0(unsigned int *this, int a2, _DWORD *a3, int a4)
{
  int v5; // edi
  unsigned int v7; // eax
  int (__stdcall *v8)(unsigned int *, _DWORD, int *, int, _DWORD); // edx
  int v9; // eax
  char *v10; // edi
  _DWORD *v11; // ecx
  int v12; // esi
  void *v13; // eax
  int v14; // [esp+Ch] [ebp-30h] BYREF
  __int64 v15; // [esp+14h] [ebp-28h]
  __int64 v16; // [esp+1Ch] [ebp-20h]
  char *v17; // [esp+24h] [ebp-18h] BYREF
  _DWORD *v18; // [esp+28h] [ebp-14h]
  int v19; // [esp+2Ch] [ebp-10h]
  int v20; // [esp+38h] [ebp-4h]

  v5 = a2;
  if ( sub_43DD50(a2, a3, a4) )
    return 1;
  v17 = nullptr;
  v18 = nullptr;
  v19 = 0;
  v7 = *(this + 67);
  v20 = 0;
  if ( v7 || (v7 = *(this + 79)) != 0 )
  {
    v14 = -2;
    v16 = 0;
    v15 = -1;
    LOBYTE(v20) = 7;
    sub_43D9E0((int)&v17, v7, &v14);
    LOBYTE(v20) = 0;
    if ( v14 >= -1 )
    {
      LOBYTE(v20) = 9;
      if ( (_DWORD)v15 )
      {
        HIDWORD(v15) = 0;
        sub_453A20((void *)v15);
      }
      LOBYTE(v20) = 0;
    }
  }
  HIBYTE(a4) = (*(int (__stdcall **)(unsigned int *, int, int, char *, _DWORD))(*this + 108))(this, v5, 1, v17, 0) == 1
            && (*(int (__stdcall **)(unsigned int *, _DWORD, char *, int, _DWORD))(*this + 140))(
                 this,
                 *(_DWORD *)&v17[24 * *(this + 81) + 8],
                 (char *)&a3 + 3,
                 1,
                 0) == 1
            && (HIBYTE(a3) == 0xC3 || HIBYTE(a3) == 0xC2)
            && (v8 = *(int (__stdcall **)(unsigned int *, _DWORD, int *, int, _DWORD))(*this + 140),
                v9 = *(this + 80),
                a2 = -1,
                v8(this, *(_DWORD *)&v17[24 * v9 + 8], &a2, 4, 0) == 4)
            && a4 == a2;
  v10 = v17;
  v20 = 12;
  if ( v17 )
  {
    v11 = v18;
    a3 = v18;
    if ( v18 )
    {
      v12 = 0;
      do
      {
        if ( *(int *)&v10[v12] >= -1 )
        {
          v13 = *(void **)&v10[v12 + 8];
          LOBYTE(v20) = 13;
          if ( v13 )
          {
            *(_DWORD *)&v10[v12 + 12] = 0;
            sub_453A20(v13);
            v11 = a3;
            *(_DWORD *)&v10[v12 + 8] = 0;
            *(_DWORD *)&v10[v12 + 16] = 0;
          }
          *(_DWORD *)&v10[v12] = -2;
          v10 = v17;
          LOBYTE(v20) = 12;
        }
        v12 += 24;
        v11 = (_DWORD *)((char *)v11 - 1);
        a3 = v11;
      }
      while ( v11 );
    }
    v18 = nullptr;
    sub_453A20(v10);
  }
  return HIBYTE(a4);
}
