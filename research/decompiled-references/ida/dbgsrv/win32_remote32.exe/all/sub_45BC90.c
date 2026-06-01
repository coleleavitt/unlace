/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45BC90
// Address: 0x0045BC90

//----- (0045BC90) --------------------------------------------------------
int __usercall sub_45BC90@<eax>(int a1@<ebx>, int a2@<edi>, LPCCH lpMultiByteStr, _DWORD *a4, int a5)
{
  _DWORD *v5; // eax
  int v6; // ebx
  __int8 *v7; // eax
  const char *v8; // esi
  int v9; // eax
  void **v10; // edi
  unsigned int v11; // esi
  unsigned int v12; // eax
  char v13; // al
  int v14; // edi
  CHAR *v15; // eax
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // eax
  int v18; // esi
  int v19; // esi
  char *v21; // [esp-8h] [ebp-4Ch]
  unsigned int v22; // [esp-8h] [ebp-4Ch]
  LPWSTR v23; // [esp+14h] [ebp-30h] BYREF
  unsigned int v24; // [esp+18h] [ebp-2Ch]
  _DWORD *v25; // [esp+20h] [ebp-24h]
  int v26; // [esp+24h] [ebp-20h]
  void *v27; // [esp+28h] [ebp-1Ch] BYREF
  int v28; // [esp+2Ch] [ebp-18h]
  int v29; // [esp+30h] [ebp-14h]
  LPCCH v30; // [esp+34h] [ebp-10h]
  int v31; // [esp+40h] [ebp-4h]
  _BYTE v32[560]; // [esp+44h] [ebp+0h] BYREF

  v30 = lpMultiByteStr;
  v25 = a4;
  *a4 = 0;
  sub_4579C0(&v23, lpMultiByteStr);
  v31 = 0;
  if ( v24 > 1 )
  {
    v26 = sub_47503C(a1, a2, v23, (int)v32);
    if ( v26 != -1 )
    {
      v5 = sub_4627C2(0x248u);
      v6 = (int)v5;
      if ( v5 )
      {
        v5[142] = 0;
        v5[143] = 0;
        v5[144] = 0;
      }
      else
      {
        v6 = 0;
      }
      qmemcpy((void *)v6, v32, 0x230u);
      v21 = (char *)v30;
      *(_DWORD *)(v6 + 564) = a5;
      *(_DWORD *)(v6 + 560) = v26;
      v7 = sub_464F10(v21, 0x2Au);
      if ( v7 && *v7 == 42 && v7[1] == 46 && (v8 = v7 + 2, v30 = v7 + 2, LOBYTE(v9) = sub_474CD0(v7 + 2, "*?."), !v9) )
      {
        v10 = (void **)(v6 + 568);
        if ( v8 && (v11 = strlen(v8)) != 0 )
        {
          v12 = v11 + 1;
          if ( v11 + 1 > *(_DWORD *)(v6 + 576) )
          {
            *v10 = sub_453B00(v6 + 568, *v10, v11 + 1, 1u);
            v12 = v11 + 1;
          }
          v22 = (unsigned int)v30;
          *(_DWORD *)(v6 + 572) = v12;
          sub_464310((unsigned int)*v10, v22, v11);
          *((_BYTE *)*v10 + v11) = 0;
          v13 = 1;
        }
        else
        {
          *(_DWORD *)(v6 + 572) = 0;
          v13 = 1;
        }
      }
      else
      {
        v13 = 0;
      }
      v14 = (int)v25;
      *(_BYTE *)(v6 + 580) = v13;
      *(_DWORD *)v14 = v6;
      sub_45C070(v6, v14, v6);
      if ( (*(_BYTE *)(v6 + 564) & 0x10) == 0 && (*(_BYTE *)(v14 + 8) & 0x10) != 0 )
      {
LABEL_32:
        v18 = *(_DWORD *)v14;
        if ( *(_DWORD *)v14 )
        {
          while ( !sub_475047(v6, v14, *(HANDLE *)(v18 + 560), v18) )
          {
            sub_45C070(v6, v14, v18);
            if ( !sub_45BF60(v6, v14, v14, v18) )
            {
              v19 = 0;
              goto LABEL_40;
            }
          }
        }
        goto LABEL_39;
      }
      if ( *(_BYTE *)(v6 + 580) )
      {
        v27 = nullptr;
        v28 = 0;
        v29 = 0;
        LOBYTE(v31) = 1;
        if ( !sub_45A700((int)&v27, (unsigned __int16 *)(v6 + 36), -1) )
        {
          LOBYTE(v31) = 2;
LABEL_29:
          if ( v27 )
          {
            v28 = 0;
            sub_453A20(v27);
          }
          LOBYTE(v31) = 0;
          goto LABEL_32;
        }
        v15 = (CHAR *)MultiByteStr;
        if ( v28 )
          v15 = (CHAR *)v27;
        v16 = (unsigned __int8 *)sub_460570(v15);
        if ( v16 )
        {
          v17 = (unsigned __int8 *)MultiByteStr;
          if ( *(_DWORD *)(v6 + 572) )
            v17 = *(unsigned __int8 **)(v6 + 568);
          if ( sub_468261(v6, v14, v16, v17) )
          {
            LOBYTE(v31) = 3;
            goto LABEL_29;
          }
        }
        LOBYTE(v31) = 4;
        if ( v27 )
        {
          v28 = 0;
          sub_453A20(v27);
        }
      }
      v19 = 0;
      goto LABEL_40;
    }
  }
LABEL_39:
  v19 = -1;
LABEL_40:
  v31 = 5;
  if ( v23 )
  {
    v24 = 0;
    sub_453A20(v23);
  }
  return v19;
}
// 45BD07: conditional instruction was optimized away because %var_260.4>=2u
// 45BDAC: variable 'v9' is possibly undefined
