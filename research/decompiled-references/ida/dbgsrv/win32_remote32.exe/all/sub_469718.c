/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469718
// Address: 0x00469718

//----- (00469718) --------------------------------------------------------
int __usercall sub_469718@<eax>(
        int a1@<edi>,
        __m128i a2@<xmm0>,
        int a3,
        int a4,
        _DWORD *a5,
        unsigned int a6,
        int a7,
        _DWORD *a8,
        int a9)
{
  _BYTE *v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // [esp+4h] [ebp-484h] BYREF
  _BYTE v14[12]; // [esp+8h] [ebp-480h] BYREF
  int v15; // [esp+14h] [ebp-474h]
  _DWORD v16[2]; // [esp+18h] [ebp-470h] BYREF
  int v17; // [esp+20h] [ebp-468h]
  int v18; // [esp+24h] [ebp-464h]
  _DWORD *v19; // [esp+28h] [ebp-460h] BYREF
  __m128i v20[4]; // [esp+2Ch] [ebp-45Ch] BYREF
  LPVOID v21[262]; // [esp+6Ch] [ebp-41Ch] BYREF

  v19 = a5;
  if ( !a7 || a6 && !a5 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a6, a1);
    return -1;
  }
  sub_467FF8((int)&v13, a8);
  v18 = 0;
  v10 = v19;
  v15 = a3 & 2;
  v16[0] = v19;
  v16[1] = a6;
  v17 = 0;
  if ( (a3 & 2) != 0 || (LOBYTE(v18) = 0, !v19) )
    LOBYTE(v18) = 1;
  v19 = v16;
  sub_469D1D(v20, &v19, a3, a4, a7, (int)v14, a9);
  v21[260] = nullptr;
  v11 = sub_46A13D(v20, a6, (int)v10, a2);
  if ( !v10 )
    goto LABEL_22;
  if ( (a3 & 1) == 0 )
  {
    if ( v15 )
    {
      if ( !a6 )
        goto LABEL_22;
      if ( v11 < 0 )
      {
        *v10 = 0;
        goto LABEL_22;
      }
      v12 = v17;
      if ( v17 != a6 )
      {
LABEL_21:
        v10[v12] = 0;
        goto LABEL_22;
      }
    }
    else
    {
      if ( !a6 )
      {
LABEL_26:
        v11 = -1;
        goto LABEL_22;
      }
      v12 = v17;
      if ( v17 != a6 )
        goto LABEL_21;
      v11 = -2;
    }
    v10[a6 - 1] = 0;
    goto LABEL_22;
  }
  if ( !a6 && v11 )
    goto LABEL_26;
  v12 = v17;
  if ( v17 != a6 )
    goto LABEL_21;
  if ( v11 >= 0 && v11 > a6 )
    goto LABEL_26;
LABEL_22:
  sub_469D59(v21);
  if ( v14[8] )
    *(_DWORD *)(v13 + 848) &= ~2u;
  return v11;
}
