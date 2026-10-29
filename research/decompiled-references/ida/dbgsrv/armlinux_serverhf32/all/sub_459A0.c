/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459A0
// Address: 0x000459A0

//----- (000459A0) --------------------------------------------------------
int __fastcall sub_459A0(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v3; // r4
  int v4; // r2
  unsigned __int8 *v5; // r5
  _DWORD *v6; // r4
  int v7; // r1
  size_t v9; // r6
  void *v10; // r0
  unsigned __int8 *v11; // r5
  _DWORD *v12; // r4
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r3

  if ( a1 == a2 )
    return 0;
  v3 = a1;
  if ( *a1 != 10 || (v3 = sub_45A60(a1, 1)) != nullptr )
  {
    sub_455C8(v3);
    v4 = *a2;
    *v3 = v4;
    switch ( v4 )
    {
      case 2:
      case 6:
      case 8:
        *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
        return 0;
      case 3:
        v11 = a2 + 8;
        v12 = v3 + 8;
        v13 = *((_DWORD *)v11 + 1);
        v14 = *((_DWORD *)v11 + 2);
        v15 = *((_DWORD *)v11 + 3);
        *v12 = *(_DWORD *)v11;
        v12[1] = v13;
        v12[2] = v14;
        v12[3] = v15;
        return 0;
      case 5:
        v16 = *((_DWORD *)a2 + 2);
        *((_DWORD *)v3 + 2) = v16;
        ++*(_DWORD *)(v16 + 24);
        return 0;
      case 7:
        *((_DWORD *)v3 + 2) = 0;
        *((_DWORD *)v3 + 3) = 0;
        *((_DWORD *)v3 + 4) = 0;
        v9 = *((_DWORD *)a2 + 3);
        if ( v9 )
        {
          v10 = sub_77E84(*((_DWORD *)a2 + 3));
          *((_DWORD *)v3 + 4) = v9;
          *((_DWORD *)v3 + 2) = v10;
          memcpy(v10, *((const void **)a2 + 2), v9);
          *((_DWORD *)v3 + 3) = v9;
        }
        return 0;
      case 9:
        *((_QWORD *)v3 + 1) = *((_QWORD *)a2 + 1);
        return 0;
      case 10:
        v5 = a2 + 8;
        v6 = v3 + 8;
        v7 = *((_DWORD *)v5 + 1);
        *v6 = *(_DWORD *)v5;
        v6[1] = v7;
        return 0;
      default:
        if ( under_debugger )
          __und(0xFFu);
        sub_78AFC(283);
    }
  }
  return sub_70A10();
}
// D5C00: using guessed type char under_debugger;
