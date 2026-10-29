/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D9F44
// Address: 0x000D9F44

//----- (000D9F44) --------------------------------------------------------
int __usercall sub_D9F44@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // eax
  unsigned __int8 *v3; // eax
  int v4; // edi
  int v5; // esi
  int GR; // eax
  int v7; // eax
  int v8; // ecx
  unsigned __int8 *v9; // eax
  int v10; // eax
  unsigned __int8 *v11; // eax
  int v12; // edx
  int result; // eax
  unsigned int v14; // edx
  int v17; // [esp+18h] [ebp-A0h] BYREF
  int v18; // [esp+1Ch] [ebp-9Ch] BYREF
  _DWORD v19[38]; // [esp+20h] [ebp-98h] BYREF

  qmemcpy(v19, (const void *)a1, 0x80u);
  if ( ((v19[24] & 0x40000000) == 0 || !LOBYTE(v19[28])) && !v19[4] )
    sub_D91AB((int)v19, *(_DWORD *)(a1 + 72), 0, &v17);
  if ( (*(_BYTE *)(a1 + 99) & 0x40) != 0 )
    *(_BYTE *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v2 = *(_DWORD *)(a2 + 160);
  if ( v2 == 1 )
  {
    v4 = *(_DWORD *)(a2 + 148) + Unwind_GetGR((int)v19, *(_DWORD *)(a2 + 152));
  }
  else
  {
    if ( v2 != 2 )
LABEL_16:
      abort();
    v3 = sub_D9016(*(_BYTE **)(a2 + 156), &v18);
    v4 = sub_D99B1(v3, (unsigned int)&v3[v18], (int)v19, 0);
  }
  v5 = 0;
  *(_DWORD *)(a1 + 72) = v4;
  while ( 2 )
  {
    switch ( *(_DWORD *)(a2 + 8 * v5 + 4) )
    {
      case 1:
        GR = v4 + *(_DWORD *)(a2 + 8 * v5);
        goto LABEL_19;
      case 2:
        v7 = *(_DWORD *)(a2 + 8 * v5);
        if ( *((_BYTE *)&v19[27] + v7) )
        {
          GR = Unwind_GetGR((int)v19, v7);
          if ( (unsigned __int8)byte_13E5D4[v5] > 4u )
            goto LABEL_16;
          v8 = a1;
          *(_BYTE *)(a1 + v5 + 108) = 1;
        }
        else
        {
          GR = v19[v7];
LABEL_19:
          if ( (*(_BYTE *)(a1 + 99) & 0x40) != 0 )
            *(_BYTE *)(a1 + v5 + 108) = 0;
          v8 = a1;
        }
LABEL_29:
        *(_DWORD *)(v8 + 4 * v5) = GR;
LABEL_30:
        if ( ++v5 != 18 )
          continue;
        v12 = *(_DWORD *)(a1 + 96);
        result = v12 & 0x7FFFFFFF;
        v14 = v12 | 0x80000000;
        if ( *(_BYTE *)(a2 + 187) )
          result = v14;
        *(_DWORD *)(a1 + 96) = result;
        return result;
      case 3:
        v9 = sub_D9016(*(_BYTE **)(a2 + 8 * v5), &v18);
        v10 = sub_D99B1(v9, (unsigned int)&v9[v18], (int)v19, v4);
        if ( (*(_BYTE *)(a1 + 99) & 0x40) != 0 )
          *(_BYTE *)(a1 + v5 + 108) = 0;
        *(_DWORD *)(a1 + 4 * v5) = v10;
        goto LABEL_30;
      case 4:
        GR = v4 + *(_DWORD *)(a2 + 8 * v5);
        goto LABEL_27;
      case 5:
        v11 = sub_D9016(*(_BYTE **)(a2 + 8 * v5), &v18);
        GR = sub_D99B1(v11, (unsigned int)&v11[v18], (int)v19, v4);
LABEL_27:
        if ( (unsigned __int8)byte_13E5D4[v5] > 4u )
          goto LABEL_16;
        *(_BYTE *)(a1 + v5 + 108) = 1;
        v8 = a1;
        goto LABEL_29;
      default:
        goto LABEL_30;
    }
  }
}
