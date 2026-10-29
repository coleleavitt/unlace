/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EB50
// Address: 0x0008EB50

//----- (0008EB50) --------------------------------------------------------
int __cdecl sub_8EB50(int (__cdecl ***a1)(_DWORD, int))
{
  int v1; // ecx
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // eax
  int v8; // esi
  bool v9; // zf

  (*(void (__cdecl **)(int))(*(_DWORD *)dword_13BE6C + 8))(dword_13BE6C);
  v1 = dword_13BE6C;
  v2 = *(_DWORD **)(dword_13BE6C + 4);
  v3 = 0;
  if ( (_DWORD *)(dword_13BE6C + 8) != v2 )
  {
    while ( 1 )
    {
      v4 = sub_7C040(v2[4]);
      v5 = (**a1)(a1, v4);
      if ( v5 )
        break;
      v6 = (_DWORD *)v2[1];
      if ( v6 )
      {
        do
        {
          v7 = v6;
          v6 = (_DWORD *)*v6;
        }
        while ( v6 );
      }
      else
      {
        v7 = (_DWORD *)v2[2];
        if ( (_DWORD *)*v7 != v2 )
        {
          v8 = (int)(v2 + 2);
          do
          {
            v7 = *(_DWORD **)(*(_DWORD *)v8 + 8);
            v9 = *v7 == *(_DWORD *)v8;
            v8 = *(_DWORD *)v8 + 8;
          }
          while ( !v9 );
        }
      }
      v1 = dword_13BE6C;
      v2 = v7;
      if ( (_DWORD *)(dword_13BE6C + 8) == v7 )
      {
        v3 = 0;
        goto LABEL_12;
      }
    }
    v1 = dword_13BE6C;
    v3 = v5;
  }
LABEL_12:
  (*(void (__cdecl **)(int))(*(_DWORD *)v1 + 12))(v1);
  return v3;
}
// 13BE6C: using guessed type int dword_13BE6C;
