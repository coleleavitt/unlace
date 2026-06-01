/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7AF80
// Address: 0x0007AF80

//----- (0007AF80) --------------------------------------------------------
int __fastcall sub_7AF80(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r1
  _DWORD *v8; // r7
  int result; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r1
  unsigned int v13; // r2
  signed int v14; // r0
  int v15; // r1
  int v16; // r0
  bool v17; // zf
  bool v18; // cf
  _BYTE *v19; // [sp+14h] [bp-8h]

  v7 = *(_DWORD *)(a1 + 32) ^ a3 | *(_DWORD *)(a1 + 36) ^ a4;
  v8 = (_DWORD *)(a1 + 32);
  result = 0;
  v10 = -1;
  if ( v7 )
    return -1;
  v11 = a1 + 32869;
  if ( !*(_BYTE *)(a1 + 32869) )
  {
    v12 = a6;
    *(_DWORD *)(a1 + 56) = a5;
    *(_DWORD *)(a1 + 60) = a6;
    if ( !a6 )
    {
LABEL_27:
      result = v12 - *(_DWORD *)(a1 + 60);
      v18 = __CFADD__(*v8, result);
      *v8 += result;
      v8[1] += v18;
      return result;
    }
    v19 = (_BYTE *)(a1 + 32868);
    while ( 1 )
    {
      v14 = *(_DWORD *)(a1 + 48);
      if ( !v14 )
      {
        v13 = *(_DWORD *)(a1 + 40);
        if ( v13 >= 0x8000 )
          v13 = 0x8000;
        v14 = qlread(*(_DWORD *)(a1 + 24), (void *)(a1 + 100), v13);
        if ( v14 < 0 )
          return -1;
        v15 = *(_DWORD *)(a1 + 40);
        if ( v15 != -1 )
          *(_DWORD *)(a1 + 40) = v15 - v14;
        *(_DWORD *)(a1 + 44) = a1 + 100;
        *(_DWORD *)(a1 + 48) = v14;
        v10 = a1 + 32868;
        if ( *v19 )
        {
          *v19 = 0;
          if ( byte_DF535 )
          {
            sub_88D1C(a1 + 44);
            v14 = *(_DWORD *)(a1 + 48);
          }
        }
      }
      v16 = sub_88D24((_DWORD *)(a1 + 44), 4 * (v14 == 0), v10, v11);
      if ( v16 < 0 || v16 == 1 )
        break;
      if ( !*(_DWORD *)(a1 + 60) )
        goto LABEL_23;
    }
    if ( v16 == -5 && byte_DF535 )
    {
      if ( *(_DWORD *)(a1 + 48) )
        return -1;
    }
    else
    {
LABEL_23:
      if ( v16 != 1 )
        goto LABEL_25;
    }
    *(_BYTE *)(a1 + 32869) = 1;
    v16 = sub_8A494((_DWORD *)(a1 + 44));
LABEL_25:
    v17 = v16 == 0;
    result = -1;
    v12 = a6;
    if ( v17 )
      goto LABEL_27;
  }
  return result;
}
// 7B024: variable 'v10' is possibly undefined
// 7B024: variable 'v11' is possibly undefined
// DF535: using guessed type char byte_DF535;
