/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B4D4
// Address: 0x0003B4D4

//----- (0003B4D4) --------------------------------------------------------
int __fastcall sub_3B4D4(int a1, char *a2, int a3, int a4)
{
  int v8; // r0
  int result; // r0
  int v10; // r5
  int v11; // r3
  _BYTE *v12; // r0
  int (__fastcall ***v13)(_DWORD, char *); // r0
  unsigned int v14; // r0
  unsigned int v15; // r1
  _BOOL4 v16; // r3
  char v17; // r1
  int v18; // [sp+0h] [bp-Ch] BYREF

  v8 = sub_3AF70((_DWORD *)a1, a2, &v18);
  switch ( v18 )
  {
    case 0:
    case 5:
      v13 = *(int (__fastcall ****)(_DWORD, char *))(a1 + 228);
      if ( !v13 || (v14 = (**v13)(v13, a2), v14 == -1) )
      {
        sub_70C04(0, a2);
        return 53;
      }
      else
      {
        sub_3A87C(a1, v14);
        return 0;
      }
    case 1:
      if ( a3 )
        v15 = 64;
      else
        v15 = 96;
      goto LABEL_13;
    case 2:
      if ( !a3 )
      {
        v15 = 112;
LABEL_13:
        sub_3A648(a1, v15, (unsigned __int16)v8);
        goto LABEL_14;
      }
      v16 = v8 == 0;
      v15 = 80;
      if ( !*(_DWORD *)(a1 + 104) )
        v16 = 0;
      if ( !v16 )
        goto LABEL_13;
      return 1539;
    case 3:
      if ( a3 )
        v17 = -39;
      else
        v17 = -43;
      sub_3A594(a1, v17, (unsigned __int16)v8);
      goto LABEL_14;
    case 4:
      if ( a3 )
      {
        if ( dword_D3D10 <= 0 )
          return 1611;
        result = sub_3A7B4(a1, a2);
        if ( result )
          return result;
LABEL_14:
        result = a4;
        if ( a4 )
          return sub_3B0BC((_DWORD *)a1, a4);
        return result;
      }
      if ( dword_D3D0C <= 0 )
        return 1610;
      result = sub_3A750(a1, a2);
      if ( !result )
        goto LABEL_14;
      return result;
    case 6:
      result = 53;
      if ( a3 )
        return result;
      sub_3A43C(a1, a2, 0);
      v10 = *(_DWORD *)(a1 + 112);
      *(_BYTE *)(a1 + 120) = -82;
      v11 = *(_DWORD *)(v10 + 4);
      if ( (unsigned int)(v11 + 1) > *(_DWORD *)(v10 + 8) )
      {
        v12 = sub_78018(v10, *(void **)v10, v11 + 1, 1u);
        v11 = *(_DWORD *)(v10 + 4);
        *(_DWORD *)v10 = v12;
      }
      else
      {
        v12 = *(_BYTE **)v10;
      }
      v12[v11] = -82;
      ++*(_DWORD *)(v10 + 4);
      ++*(_DWORD *)(a1 + 116);
      goto LABEL_14;
    default:
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(271);
  }
}
// D3D0C: using guessed type int dword_D3D0C;
// D3D10: using guessed type int dword_D3D10;
// D6C20: using guessed type char under_debugger;
