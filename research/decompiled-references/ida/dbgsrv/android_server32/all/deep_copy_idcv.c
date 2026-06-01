/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deep_copy_idcv
// Address: 0x00045FD4

//----- (00045FD4) --------------------------------------------------------
int __fastcall deep_copy_idcv(int a1, int a2)
{
  _DWORD *v3; // r5
  _DWORD *v4; // r7
  _DWORD *v5; // r4
  _DWORD *v6; // r7
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  bool v9; // zf
  int v10; // r1
  _DWORD *v12; // [sp+4h] [bp-8h]

  if ( *(_BYTE *)a2 != 5 )
    return copy_idcv((unsigned __int8 *)a1, (unsigned __int8 *)a2);
  v3 = operator new(0x14u);
  v4 = *(_DWORD **)(a2 + 8);
  *v3 = v3 + 1;
  v3[1] = 0;
  v3[2] = 0;
  v12 = v4;
  v5 = (_DWORD *)*v4;
  v6 = v4 + 1;
  while ( v6 != v5 )
  {
    sub_4D840((_DWORD **)v3, (int)(v3 + 1), (int)(v5 + 4), (int)(v5 + 4));
    v7 = (_DWORD *)v5[1];
    if ( v7 )
    {
      do
      {
        v5 = v7;
        v7 = (_DWORD *)*v7;
      }
      while ( v7 );
    }
    else
    {
      v8 = v5 + 2;
      v9 = *(_DWORD *)v5[2] == (_DWORD)v5;
      v5 = (_DWORD *)v5[2];
      if ( !v9 )
      {
        do
        {
          v10 = *v8;
          v8 = (_DWORD *)(*v8 + 8);
          v5 = *(_DWORD **)(v10 + 8);
        }
        while ( *v5 != v10 );
      }
    }
  }
  v3[3] = 1;
  v3[4] = v12[4];
  free_idcv((unsigned __int8 *)a1);
  *(_DWORD *)(a1 + 8) = v3;
  *(_BYTE *)a1 = 5;
  return 0;
}
