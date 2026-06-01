/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8058C80
// Address: 0x08058C80

//----- (08058C80) --------------------------------------------------------
int __cdecl sub_8058C80(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // eax
  int v7; // esi
  unsigned int i; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int *v12; // edx
  unsigned int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // ecx

  v4 = a4;
  if ( !a4 )
    return -1;
  v5 = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(v5 + 52) = a2;
  *(_DWORD *)(v5 + 48) = a3;
  if ( !(*(unsigned __int8 (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 340) + 12))(*(_DWORD *)(a1 + 340)) )
    return -1;
  v7 = *(_DWORD *)(a1 + 340);
  for ( i = 0; i < *(_DWORD *)(v7 + 12); v4 += 16 )
  {
    if ( (*(_DWORD *)(v7 + 48) & *(unsigned __int8 *)(**(_DWORD **)(v7 + 4) + 20 * i + 8)) != 0 )
    {
      v9 = *(_DWORD *)(v7 + 8) + 20 * i;
      v10 = *(_DWORD *)v9;
      v11 = v9;
      if ( *(_DWORD *)v9 == 3 )
      {
        (*(void (__cdecl **)(int, int, _DWORD))(v9 + 8))(v7, v4, *(_DWORD *)(v9 + 16));
      }
      else
      {
        v12 = (int *)(v7 + *(_DWORD *)(v9 + 8));
        switch ( v10 )
        {
          case 1:
            sub_8058B70(v4, v12, *(_DWORD *)(v11 + 12), -1);
            break;
          case 2:
            sub_8058B70(v4, v12, *(_DWORD *)(v11 + 12), 0);
            break;
          case 0:
            v13 = *(_DWORD *)(v11 + 12);
            if ( v13 != 4 )
            {
              if ( v13 > 4 )
              {
                if ( v13 == 8 )
                {
                  v14 = *v12;
                  v15 = v12[1];
                  goto LABEL_17;
                }
              }
              else
              {
                if ( v13 == 1 )
                {
                  v14 = *(unsigned __int8 *)v12;
                  v15 = 0;
                  goto LABEL_17;
                }
                if ( v13 == 2 )
                {
                  v14 = *(unsigned __int16 *)v12;
                  v15 = 0;
LABEL_17:
                  v16 = *(_DWORD *)(v11 + 16);
                  switch ( v16 )
                  {
                    case 2:
                      v14 = (unsigned __int16)v14;
                      v15 = 0;
                      break;
                    case 4:
                      v15 = 0;
                      break;
                    case 1:
                      v14 = (unsigned __int8)v14;
                      v15 = 0;
                      break;
                  }
                  *(_DWORD *)(v4 + 4) = v14;
                  *(_DWORD *)(v4 + 8) = v15;
                  break;
                }
              }
              v14 = 0;
              v15 = 0;
              goto LABEL_17;
            }
            v14 = *v12;
            v15 = 0;
            goto LABEL_17;
        }
      }
    }
    ++i;
  }
  return 1;
}
