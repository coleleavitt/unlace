/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424B40
// Address: 0x00424B40

//----- (00424B40) --------------------------------------------------------
int __stdcall sub_424B40(char *a1, int a2)
{
  char *v2; // esi
  char v4; // al
  int v5; // eax
  _DWORD *v6; // edi

  v2 = a1;
  if ( a1 != (char *)a2 )
  {
    if ( *a1 == 10 )
    {
      v2 = sub_4239C0(a1, 1);
      if ( !v2 )
        return sub_45C9E0();
    }
    sub_423B70((int)v2);
    v4 = *(_BYTE *)a2;
    *v2 = *(_BYTE *)a2;
    switch ( v4 )
    {
      case 2:
      case 5:
      case 6:
      case 8:
        v5 = *(_DWORD *)(a2 + 8);
        v6 = (_DWORD *)(a2 + 8);
        goto LABEL_10;
      case 3:
        *(_OWORD *)(v2 + 8) = *(_OWORD *)(a2 + 8);
        *(_DWORD *)(a2 + 8) = 0;
        *(_BYTE *)a2 = 2;
        return 0;
      case 7:
        sub_408340((int *)v2 + 2, (int *)(a2 + 8));
        *(_DWORD *)(a2 + 8) = 0;
        *(_BYTE *)a2 = 2;
        return 0;
      case 9:
      case 10:
        v5 = *(_DWORD *)(a2 + 8);
        v6 = (_DWORD *)(a2 + 8);
        *((_DWORD *)v2 + 3) = *(_DWORD *)(a2 + 12);
LABEL_10:
        *((_DWORD *)v2 + 2) = v5;
        *v6 = 0;
        *(_BYTE *)a2 = 2;
        break;
      default:
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(282);
    }
  }
  return 0;
}
// 4B70F0: using guessed type char byte_4B70F0;
