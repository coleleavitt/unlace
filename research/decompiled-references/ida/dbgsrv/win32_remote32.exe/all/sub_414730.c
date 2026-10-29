/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414730
// Address: 0x00414730

//----- (00414730) --------------------------------------------------------
char __thiscall sub_414730(_DWORD *this, unsigned int a2, int *a3)
{
  _DWORD *v3; // edi
  char result; // al
  unsigned int v5; // esi
  int v6; // eax
  int v7; // edx
  int v8; // edx
  unsigned int v9; // eax
  _DWORD *v10; // ecx

  if ( a2 >= *(this + 3) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3258);
  }
  v3 = (_DWORD *)(*(this + 2) + 20 * a2);
  if ( *v3 != 3 )
  {
    v5 = (unsigned int)this + v3[2];
    switch ( *v3 )
    {
      case 0:
        v6 = sub_4175C0(v3, a3[2], a3[3]);
        switch ( v3[3] )
        {
          case 1:
            *(_BYTE *)v5 = v6;
            result = 1;
            break;
          case 2:
            *(_WORD *)v5 = v6;
            result = 1;
            break;
          case 4:
            *(_DWORD *)v5 = v6;
            result = 1;
            break;
          case 8:
            *(_DWORD *)v5 = v6;
            *(_DWORD *)(v5 + 4) = v7;
            result = 1;
            break;
          default:
            return 1;
        }
        return result;
      case 1:
      case 2:
        v8 = *a3;
        if ( *a3 < -1 )
        {
          v9 = 0;
          if ( v8 == -2 )
            v9 = 8;
        }
        else
        {
          v9 = a3[3];
        }
        if ( v9 != v3[3] )
          return 0;
        v10 = a3 + 2;
        if ( v8 >= -1 )
          v10 = (_DWORD *)*v10;
        sub_464310(v5, (unsigned int)v10, v9);
        return 1;
      case 3:
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(3257);
      default:
        return 1;
    }
  }
  ((void (__cdecl *)(_DWORD *, int *, _DWORD))v3[3])(this, a3, v3[4]);
  return 1;
}
// 4147BB: variable 'v7' is possibly undefined
// 4B70F0: using guessed type char byte_4B70F0;
