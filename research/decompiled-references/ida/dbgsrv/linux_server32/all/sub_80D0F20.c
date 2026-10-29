/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0F20
// Address: 0x080D0F20

//----- (080D0F20) --------------------------------------------------------
_BOOL4 __cdecl sub_80D0F20(int a1, int a2, int a3)
{
  bool v3; // di
  int *v4; // esi
  int v5; // edx
  bool v6; // cl
  int *v7; // edi
  int v8; // eax
  bool v10; // [esp+6h] [ebp-1Eh]
  bool v11; // [esp+6h] [ebp-1Eh]
  bool v12; // [esp+7h] [ebp-1Dh]
  unsigned __int8 v13; // [esp+7h] [ebp-1Dh]

  v3 = 1;
  if ( (a3 & 0x7F) != 0 )
    v3 = (char)((a3 & 0x7F) + 1) > 1;
  v4 = *(int **)(a1 + 12);
  if ( v4 == (int *)(a1 + 12) )
    return 0;
  v5 = 0;
  v6 = v3;
  v7 = (int *)(a1 + 12);
  do
  {
LABEL_5:
    while ( 1 )
    {
      if ( !*((_BYTE *)v4 + 28) )
      {
        if ( !(_BYTE)v5 )
        {
          while ( 1 )
          {
            v10 = v4[2] == -1 || v4[2] == a2;
            if ( v10 )
              break;
            v4 = (int *)*v4;
            if ( v4 == v7 )
              return 0;
            if ( *((_BYTE *)v4 + 28) )
            {
              v4 = (int *)*v4;
              v5 = 0;
              if ( v4 != v7 )
                goto LABEL_5;
              return v5;
            }
          }
          if ( a3 != 0xFFFF || (v4[5] & 8) != 0 )
          {
            v12 = v6;
            v4[2] = a2;
            v4[3] = a3;
            *((_BYTE *)v4 + 28) = 1;
            sub_80D0DE0(v4[6]);
            v4 = (int *)*v4;
            v6 = v12;
            if ( v4 == v7 )
              return v10;
            v8 = *((unsigned __int8 *)v4 + 28);
            if ( !(_BYTE)v8 )
            {
              v5 = v10;
              goto LABEL_14;
            }
            v4 = (int *)*v4;
            if ( v7 == v4 )
              return v8;
            v5 = *((unsigned __int8 *)v4 + 28);
            if ( (_BYTE)v5 )
              goto LABEL_16;
            v5 = v8;
          }
        }
LABEL_14:
        if ( v6 && v4[2] == a2 )
          break;
      }
LABEL_16:
      v4 = (int *)*v4;
      if ( v4 == v7 )
        return v5;
    }
    v13 = v5;
    v11 = v6;
    *((_BYTE *)v4 + 16) = 1;
    *((_BYTE *)v4 + 28) = 1;
    sub_80D0DE0(v4[6]);
    v4 = (int *)*v4;
    v6 = v11;
    v5 = v13;
  }
  while ( v4 != v7 );
  return v5;
}
