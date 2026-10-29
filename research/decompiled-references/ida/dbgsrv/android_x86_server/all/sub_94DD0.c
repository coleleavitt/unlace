/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94DD0
// Address: 0x00094DD0

//----- (00094DD0) --------------------------------------------------------
int __cdecl sub_94DD0(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  unsigned int v5; // edx
  unsigned __int64 v6; // rax
  int v8; // edi
  unsigned int v9; // esi
  __suseconds_t v10; // eax
  unsigned int v11; // edx
  int v12; // kr00_4
  unsigned __int64 v13; // rax
  int v14; // eax
  int v15; // esi
  unsigned int v17; // [esp+Ch] [ebp-20h]
  __suseconds_t v18; // [esp+10h] [ebp-1Ch]
  int v19; // [esp+14h] [ebp-18h]
  unsigned int v20; // [esp+18h] [ebp-14h]

  v4 = 0;
  if ( a4 < 0 )
  {
    v6 = 0;
    if ( !a3 )
      return v4;
  }
  else
  {
    v4 = 0;
    v18 = qtime64();
    v6 = (unsigned int)dword_F4240 * (unsigned __int64)v5 + (unsigned int)v18 + 1000LL * a4;
    if ( !a3 )
      return v4;
  }
  v8 = a3;
  v20 = HIDWORD(v6);
  v17 = v6;
  while ( 1 )
  {
    v19 = a2;
    if ( v6 )
    {
      v9 = HIDWORD(v6);
      v10 = qtime64();
      v12 = v10 + (_DWORD)dword_F4240 * v11;
      HIDWORD(v13) = ((unsigned int)v10 + (unsigned int)dword_F4240 * (unsigned __int64)v11) >> 32;
      LODWORD(v13) = 0;
      if ( __PAIR64__(HIDWORD(v13), v12) < __PAIR64__(v9, v17) )
        v13 = (__PAIR64__(v20, v17) - __PAIR64__(HIDWORD(v13), v12)) / 0x3E8;
    }
    else
    {
      LODWORD(v13) = -1;
    }
    if ( (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, v13) <= 0 )
      break;
    v14 = (*(int (__cdecl **)(int, int, int))(*(_DWORD *)a1 + 28))(a1, v19, v8);
    if ( v14 <= 0 )
      break;
    v15 = v14 + v19;
    v8 -= v14;
    v6 = __PAIR64__(v20, v17);
    a2 = v15;
    if ( !v8 )
      return a3;
  }
  return a3 - v8;
}
// 94E0C: variable 'v5' is possibly undefined
// 94E72: variable 'v11' is possibly undefined
// F4240: using guessed type int dword_F4240[37];
