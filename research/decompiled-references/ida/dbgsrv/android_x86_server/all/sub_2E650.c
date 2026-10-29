/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E650
// Address: 0x0002E650

//----- (0002E650) --------------------------------------------------------
void __cdecl sub_2E650(int *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // eax
  int *v5; // edi
  int v6; // eax
  void **v7; // ecx
  void *v8; // eax
  size_t v9; // edx
  void **v10; // ecx
  void *v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // [esp+14h] [ebp-18h]
  size_t v15; // [esp+14h] [ebp-18h]
  size_t v16; // [esp+18h] [ebp-14h]

  v3 = a2;
  v4 = *a1;
  if ( *a1 == 3 )
  {
    ((void (__cdecl *)(int, _DWORD *, int))a1[2])(a3, a2, a1[4]);
    return;
  }
  v5 = (int *)(a1[2] + a3);
  switch ( v4 )
  {
    case 2:
      v15 = a1[3];
      v7 = (void **)(a2 + 1);
      if ( (int)*a2 >= -1 )
      {
        v8 = *v7;
        if ( *v7 )
        {
          a2[2] = 0;
          qfree(v8);
          a2[1] = 0;
          a2[3] = 0;
          v7 = (void **)(a2 + 1);
        }
        v3 = a2;
        *a2 = -2;
      }
      sub_2E590((int)v7, v5, v15);
      *v3 = 0;
      break;
    case 1:
      v9 = a1[3];
      v10 = (void **)(a2 + 1);
      if ( (int)*a2 >= -1 )
      {
        v11 = *v10;
        if ( *v10 )
        {
          v16 = a1[3];
          a2[2] = 0;
          qfree(v11);
          a2[1] = 0;
          a2[3] = 0;
          v10 = (void **)(a2 + 1);
          v9 = v16;
        }
        *a2 = -2;
      }
      sub_2E590((int)v10, v5, v9);
      *a2 = -1;
      break;
    case 0:
      v14 = 0;
      v6 = 0;
      switch ( a1[3] )
      {
        case 1:
          v6 = *(unsigned __int8 *)v5;
          break;
        case 2:
          v6 = *(unsigned __int16 *)v5;
          break;
        case 4:
          v6 = *v5;
          break;
        case 8:
          v6 = *v5;
          v14 = v5[1];
          break;
        default:
          break;
      }
      v12 = a1[4];
      if ( v12 != 4 )
      {
        if ( v12 == 2 )
        {
          v6 = (unsigned __int16)v6;
        }
        else
        {
          if ( v12 != 1 )
          {
            v13 = v14;
            goto LABEL_29;
          }
          v6 = (unsigned __int8)v6;
        }
      }
      v13 = 0;
LABEL_29:
      a2[1] = v6;
      a2[2] = v13;
      break;
  }
}
