/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40860
// Address: 0x00040860

//----- (00040860) --------------------------------------------------------
int __cdecl sub_40860(int a1, _DWORD *a2)
{
  _DWORD *v2; // edi
  int result; // eax
  unsigned int v4; // ebx
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  _DWORD *v7; // ecx
  unsigned int v8; // ebx
  unsigned int v9; // esi
  _DWORD *v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // esi
  _DWORD *v13; // ebx
  int *v14; // edi
  int v15; // edi
  bool v16; // zf
  _DWORD *v17; // [esp+8h] [ebp-10h]

  v2 = *(_DWORD **)(a1 + 8);
  result = 1;
  if ( v2 )
  {
    v4 = a2[15];
    v5 = (_DWORD *)(a1 + 8);
    do
    {
      if ( v2[4] >= v4 )
        v5 = v2;
      v2 = (_DWORD *)v2[v2[4] < v4];
    }
    while ( v2 );
    if ( v5 != (_DWORD *)(a1 + 8) && v4 >= v5[4] )
    {
      v6 = (_DWORD *)v5[5];
      v7 = v5 + 6;
      if ( v7 != v6 )
      {
        v8 = a2[8];
        v9 = a2[9];
        if ( *((_QWORD *)a2 + 4) >= *((_QWORD *)v6 + 2) )
        {
          v10 = v6;
          while ( 1 )
          {
            v11 = v9;
            v12 = v8;
            v17 = v10;
            v13 = (_DWORD *)v6[1];
            if ( v13 )
            {
              do
              {
                v10 = v13;
                v13 = (_DWORD *)*v13;
              }
              while ( v13 );
              v8 = v12;
              v9 = v11;
              if ( v7 == v10 )
                return v17[6];
            }
            else
            {
              v10 = (_DWORD *)v6[2];
              v8 = v12;
              v9 = v11;
              if ( (_DWORD *)*v10 != v6 )
              {
                v14 = v6 + 2;
                do
                {
                  v15 = *v14;
                  v10 = *(_DWORD **)(v15 + 8);
                  v16 = *v10 == v15;
                  v14 = (int *)(v15 + 8);
                }
                while ( !v16 );
              }
              if ( v7 == v10 )
                return v17[6];
            }
            v6 = v10;
            if ( __PAIR64__(v9, v8) < *((_QWORD *)v10 + 2) )
              return v17[6];
          }
        }
      }
    }
  }
  return result;
}
