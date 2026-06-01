/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80894E0
// Address: 0x080894E0

//----- (080894E0) --------------------------------------------------------
_DWORD *__cdecl sub_80894E0(_DWORD *a1)
{
  unsigned int v1; // edi
  int v2; // eax
  char v3; // dl
  _DWORD *result; // eax
  int v5; // esi
  _DWORD *v6; // edi
  void *v7; // eax
  int v8; // ebp
  _DWORD *v9; // eax
  void *v10; // ecx
  _DWORD *v12; // [esp+0h] [ebp-20h]

  if ( a1[4] )
  {
    v1 = 0;
    do
    {
      while ( 1 )
      {
        v2 = a1[3] + 32 * v1;
        v3 = *(_BYTE *)(v2 + 12);
        if ( v3 == 5 || v3 == 6 && (unsigned int)-*(_DWORD *)(v2 + 16) >= dword_811D3A0[0] )
          break;
        if ( ++v1 >= a1[4] )
          goto LABEL_8;
      }
      ++v1;
      sub_8089430(v2 + 12);
    }
    while ( v1 < a1[4] );
  }
LABEL_8:
  if ( *(_DWORD *)&algn_811D3B0[4] )
    (*(void (**)(void))&algn_811D3B0[4])();
  result = (_DWORD *)*a1;
  v5 = a1[1] - 1;
  if ( v5 >= 0 )
  {
    do
    {
      v6 = (_DWORD *)result[v5];
      if ( v6 )
      {
        v7 = (void *)v6[8];
        if ( v7 )
        {
          v6[9] = 0;
          sub_80CF780(v7);
        }
        v8 = v6[2];
        while ( v8 )
        {
          sub_8083F80(*(_DWORD **)(v8 + 12));
          v9 = (_DWORD *)v8;
          v8 = *(_DWORD *)(v8 + 8);
          v10 = (void *)v9[4];
          if ( v10 )
          {
            v12 = v9;
            v9[5] = 0;
            sub_80CF780(v10);
            v9 = v12;
          }
          operator delete(v9, 0x20u);
        }
        operator delete(v6, 0x38u);
        result = (_DWORD *)*a1;
      }
    }
    while ( v5-- != 0 );
  }
  if ( result )
  {
    a1[1] = 0;
    sub_80CF780(result);
    result = a1;
    *a1 = 0;
    a1[2] = 0;
  }
  return result;
}
// 811D3A0: using guessed type int dword_811D3A0[3];
// 811D3B0: using guessed type _BYTE algn_811D3B0[16];
