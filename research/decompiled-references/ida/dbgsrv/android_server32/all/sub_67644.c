/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67644
// Address: 0x00067644

//----- (00067644) --------------------------------------------------------
int __fastcall sub_67644(int (__fastcall ***a1)(_DWORD, int))
{
  int v2; // r0
  _DWORD *v3; // r7
  int v4; // r5
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  bool v9; // zf
  int v10; // r1

  (*(void (__fastcall **)(int))(*(_DWORD *)dword_DE484 + 8))(dword_DE484);
  v2 = dword_DE484;
  v3 = *(_DWORD **)(dword_DE484 + 4);
  v4 = 0;
  if ( v3 != (_DWORD *)(dword_DE484 + 8) )
  {
    while ( 1 )
    {
      v5 = sub_5AB44(v3[4]);
      v6 = (**a1)(a1, v5);
      if ( v6 )
        break;
      v7 = (_DWORD *)v3[1];
      if ( v7 )
      {
        do
        {
          v3 = v7;
          v7 = (_DWORD *)*v7;
        }
        while ( v7 );
      }
      else
      {
        v8 = v3 + 2;
        v9 = *(_DWORD *)v3[2] == (_DWORD)v3;
        v3 = (_DWORD *)v3[2];
        if ( !v9 )
        {
          do
          {
            v10 = *v8;
            v8 = (_DWORD *)(*v8 + 8);
            v3 = *(_DWORD **)(v10 + 8);
          }
          while ( *v3 != v10 );
        }
      }
      v2 = dword_DE484;
      if ( v3 == (_DWORD *)(dword_DE484 + 8) )
      {
        v4 = 0;
        goto LABEL_11;
      }
    }
    v4 = v6;
    v2 = dword_DE484;
  }
LABEL_11:
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v4;
}
// DE484: using guessed type int dword_DE484;
