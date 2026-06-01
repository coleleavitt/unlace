/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C280
// Address: 0x0043C280

//----- (0043C280) --------------------------------------------------------
int __stdcall sub_43C280(void **a1, _DWORD *a2, double a3, int a4, int a5)
{
  int v6; // ecx
  int v7; // edi
  int v8; // edx
  int v9; // ecx
  _DWORD *v10; // esi
  _DWORD *v11; // ecx
  void *v12; // eax
  unsigned int v13; // eax
  int v14; // esi
  int *v15; // edi
  int v16; // ecx
  bool v17; // zf
  int v18; // eax
  int v19; // esi
  void **v20; // esi
  signed int v21; // eax
  unsigned int v22; // eax
  int v23; // ecx
  _DWORD *v24; // eax
  double v26; // [esp-8h] [ebp-58h]
  int v27; // [esp+0h] [ebp-50h]
  LPVOID v28; // [esp+14h] [ebp-3Ch]
  unsigned int v29; // [esp+18h] [ebp-38h]
  unsigned int v30; // [esp+1Ch] [ebp-34h]
  int v31; // [esp+34h] [ebp-1Ch]
  int v32; // [esp+38h] [ebp-18h]
  int v33; // [esp+3Ch] [ebp-14h]
  int v34; // [esp+40h] [ebp-10h]
  int v35; // [esp+58h] [ebp+8h]
  unsigned int v36; // [esp+58h] [ebp+8h]
  char v37; // [esp+5Bh] [ebp+Bh]

  if ( !a1[19] && a1[56] )
  {
    sub_415EF0(a1 + 56, 0);
    sub_453A20(a1[56]);
    a1[56] = nullptr;
    a1[58] = nullptr;
  }
  v6 = 0;
  v7 = LODWORD(a3);
  v34 = 0;
  v8 = LODWORD(a3) + 36 * HIDWORD(a3);
  v35 = v8;
  if ( LODWORD(a3) != v8 )
  {
    v9 = LODWORD(a3) + 36 * HIDWORD(a3);
    do
    {
      if ( !*(_BYTE *)(v7 + 24) )
      {
        if ( *(_DWORD *)(v7 + 16) == 4 )
        {
          HIDWORD(a3) = a1[52];
          LODWORD(a3) = *(_DWORD *)v7;
          (*((void (__thiscall **)(void **, double *, char *))*a1 + 67))(a1, &a3, (char *)&a3 + 4);
        }
        else
        {
          HIDWORD(a3) = *(_DWORD *)(v7 + 20);
          LODWORD(a3) = *(_DWORD *)v7;
        }
        v10 = a1[56];
        v11 = &v10[9 * (_DWORD)a1[57]];
        if ( v10 != v11 )
        {
          do
          {
            if ( *(_DWORD *)v7 == *v10 && *(_DWORD *)(v7 + 16) == v10[4] )
              break;
            v10 += 9;
          }
          while ( v10 != v11 );
          if ( v10 != v11 && v10[8] == *(_DWORD *)(v7 + 32) )
          {
            v12 = (void *)v10[1];
            if ( v12 )
            {
              v10[2] = 0;
              sub_453A20(v12);
              v10[1] = 0;
              v10[3] = 0;
            }
            v13 = (int)((unsigned __int64)(954437177LL * ((int)a1[56] + 36 * (int)a1[57] - (int)v10)) >> 32) >> 3;
            sub_464310((unsigned int)v10, (unsigned int)(v10 + 9), 36 * (v13 - 1 + (v13 >> 31)));
            a1[57] = (char *)a1[57] - 1;
          }
        }
        v14 = (*((int (__stdcall **)(void **, int, _DWORD, _DWORD, _DWORD))*a1 + 38))(
                a1,
                v7 + 4,
                *(_DWORD *)(v7 + 16),
                LODWORD(a3),
                HIDWORD(a3));
        sub_43C900((int)a1, (int)"dbg_add_bpt(type=%d, ea=%a, len=%d) => %d\n", *(_DWORD *)(v7 + 16), a3, v14, v27);
        switch ( v14 )
        {
          case -2:
            *(_BYTE *)(v7 + 24) = 7;
            break;
          case 1:
            ++v34;
            *(_BYTE *)(v7 + 24) = 0;
            break;
          case 2:
            ++v34;
            *(_BYTE *)(v7 + 24) = 10;
            break;
          default:
            *(_BYTE *)(v7 + 24) = 8;
            break;
        }
        v9 = v35;
      }
      v7 += 36;
    }
    while ( v7 != v9 );
    v6 = v34;
    v8 = v35;
  }
  v31 = v8 + 36 * a4;
  if ( v7 != v31 )
  {
    v15 = (int *)(v7 + 16);
    do
    {
      v16 = *v15;
      v17 = *v15 == 4;
      *((_BYTE *)v15 + 8) = 0;
      v18 = 2;
      if ( !v17 )
        v18 = 5;
      v19 = (*((int (__stdcall **)(void **, int, _DWORD, _DWORD, int))*a1 + 39))(
              a1,
              v16,
              *(v15 - 4),
              *(v15 - 3),
              v15[v18 - 4]);
      HIDWORD(v26) = v19;
      LODWORD(v26) = *(v15 - 4);
      sub_43C900((int)a1, (int)"dbg_del_bpt(type=%d, ea=%a) => %d\n", *v15, v26, v27);
      if ( v19 <= 0 )
      {
        *((_BYTE *)v15 + 8) = 8;
      }
      else
      {
        ++v34;
        if ( *v15 == 4 || *v15 == 8 )
        {
          v20 = a1 + 56;
          HIDWORD(a3) = *(v15 - 4);
          v21 = *(v15 - 2);
          v28 = nullptr;
          v29 = 0;
          v30 = 0;
          v36 = v21;
          if ( v21 )
          {
            v28 = sub_4539E0(v21);
            v30 = v36;
            sub_464310((unsigned int)v28, *(v15 - 3), v36);
            v29 = v36;
          }
          LODWORD(a3) = *v15;
          a4 = v15[1];
          v37 = *((_BYTE *)v15 + 8);
          v33 = v15[3];
          v32 = v15[4];
          v22 = (unsigned int)a1[57] + 1;
          if ( v22 > (unsigned int)a1[58] )
            *v20 = sub_453B00((int)(a1 + 56), *v20, v22, 0x24u);
          v23 = 9 * (_DWORD)a1[57];
          v24 = *v20;
          v24[v23] = HIDWORD(a3);
          v24[v23 + 1] = v28;
          v24[v23 + 2] = v29;
          v24[v23 + 3] = v30;
          v24[v23 + 4] = LODWORD(a3);
          v24[v23 + 5] = a4;
          LOBYTE(v24[v23 + 6]) = v37;
          v24[v23 + 7] = v33;
          v24[v23 + 8] = v32;
          a1[57] = (char *)a1[57] + 1;
        }
      }
      v15 += 9;
    }
    while ( v15 - 4 != (int *)v31 );
    v6 = v34;
  }
  if ( a2 )
    *a2 = v6;
  return 1;
}
// 43C419: variable 'v27' is possibly undefined
