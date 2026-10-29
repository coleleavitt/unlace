/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45AE50
// Address: 0x0045AE50

//----- (0045AE50) --------------------------------------------------------
void __stdcall sub_45AE50(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  int v4; // ecx
  _DWORD *v5; // esi
  int v6; // esi
  _DWORD *v7; // ecx
  int v8; // esi
  int v9; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // eax

  v2 = a1;
  v3 = a2;
  if ( a1 != a2 )
  {
    sub_45B9B0(a1, a2[4] & 0xFFFFFFF);
    v4 = a2[4] & 0xFFFFFFF;
    switch ( v4 )
    {
      case 1:
      case 8:
      case 11:
        if ( v4 != 1 && v4 != 11 && v4 != 8 )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(3295);
        }
        v5 = sub_4145A0(a1);
        sub_403330((int)v5, a2 + 5);
        v5[3] = a2[8];
        v5[4] = a2[9];
        v3 = a2;
        v5[5] = a2[10];
        v2 = a1;
        break;
      case 2:
      case 4:
        if ( v4 != 2 && v4 != 4 )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(3296);
        }
        v6 = a2[5];
        *sub_410C40(a1) = v6;
        v2 = a1;
        break;
      case 3:
      case 9:
      case 10:
        if ( v4 != 3 && v4 != 9 && v4 != 10 )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(3297);
        }
        v7 = sub_413600(a1);
        sub_403330((int)v7, a2 + 5);
        break;
      case 5:
        v8 = a2[5];
        v9 = a2[6];
        v10 = sub_40CCF0(a1);
        *v10 = v8;
        v2 = a1;
        v10[1] = v9;
        v3 = a2;
        break;
      case 7:
        v11 = sub_410C10(a1);
        *v11 = a2[5];
        *((_BYTE *)v11 + 4) = *((_BYTE *)a2 + 24);
        v11[2] = a2[7];
        sub_403330((int)(v11 + 3), a2 + 8);
        break;
      default:
        break;
    }
    *v2 = *v3;
    v2[1] = v3[1];
    v2[2] = v3[2];
    *((_BYTE *)v2 + 12) = *((_BYTE *)v3 + 12);
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
