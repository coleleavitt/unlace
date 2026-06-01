/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46354
// Address: 0x00046354

//----- (00046354) --------------------------------------------------------
int __fastcall sub_46354(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v3; // r4
  int v4; // r2
  __int64 v6; // r2
  _DWORD *v7; // r4
  int v8; // r1
  _DWORD *v9; // r4
  int v10; // r1
  int v11; // r2
  int v12; // r3

  if ( a1 == a2 )
    return 0;
  v3 = a1;
  if ( *a1 != 10 || (v3 = sub_45BF0(a1, 1)) != nullptr )
  {
    sub_45758(v3);
    v4 = *a2;
    *v3 = v4;
    switch ( v4 )
    {
      case 2:
      case 5:
      case 6:
      case 8:
        *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
        break;
      case 3:
        v9 = v3 + 8;
        v10 = *((_DWORD *)a2 + 3);
        v11 = *((_DWORD *)a2 + 4);
        v12 = *((_DWORD *)a2 + 5);
        *v9 = *((_DWORD *)a2 + 2);
        v9[1] = v10;
        v9[2] = v11;
        v9[3] = v12;
        break;
      case 7:
        v6 = *(_QWORD *)(v3 + 12);
        *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
        *((_DWORD *)v3 + 3) = *((_DWORD *)a2 + 3);
        *((_DWORD *)v3 + 4) = *((_DWORD *)a2 + 4);
        *(_QWORD *)(a2 + 12) = v6;
        break;
      case 9:
        *((_QWORD *)v3 + 1) = *((_QWORD *)a2 + 1);
        break;
      case 10:
        v7 = v3 + 8;
        v8 = *((_DWORD *)a2 + 3);
        *v7 = *((_DWORD *)a2 + 2);
        v7[1] = v8;
        break;
      default:
        if ( under_debugger )
          __und(0xFFu);
        sub_78C64(282);
    }
    *a2 = 2;
    *((_DWORD *)a2 + 2) = 0;
    return 0;
  }
  return sub_70B7C();
}
// D6C20: using guessed type char under_debugger;
