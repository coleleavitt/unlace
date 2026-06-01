/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A450
// Address: 0x0044A450

//----- (0044A450) --------------------------------------------------------
char __cdecl sub_44A450(int a1, int a2)
{
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 *v6; // ecx
  int v7; // ebx
  unsigned int v8; // edx
  unsigned __int8 *v9; // ebp
  unsigned int v11; // esi
  int v12; // esi
  _DWORD *v13; // esi
  _DWORD *v14; // esi
  unsigned __int8 *v15; // ecx
  unsigned __int8 *v16; // ebp
  int v17; // edi
  unsigned int v18; // esi
  _DWORD *v19; // eax
  const char *v21; // [esp-Ch] [ebp-14h]
  unsigned __int8 *v22; // [esp+10h] [ebp+8h]

  v3 = sub_4541E0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  sub_45B9B0((_DWORD *)a1, v3);
  *(_DWORD *)a1 = sub_4541E0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  *(_DWORD *)(a1 + 4) = sub_4541E0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  *(_DWORD *)(a1 + 8) = sub_4542B0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  *(_BYTE *)(a1 + 12) = sub_4541E0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) != 0;
  v4 = (_DWORD *)((*(_DWORD *)(a1 + 16) & 0xFFFFFFF) - 1);
  switch ( *(_DWORD *)(a1 + 16) & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      v5 = sub_4145A0((_DWORD *)a1);
      v6 = *(unsigned __int8 **)a2;
      v7 = (int)v5;
      v8 = *(_DWORD *)(a2 + 4);
      v9 = *(unsigned __int8 **)a2;
      v22 = *(unsigned __int8 **)a2;
      do
      {
        if ( (unsigned int)v6 >= v8 )
          goto LABEL_10;
      }
      while ( *v6++ );
      *(_DWORD *)a2 = v6;
      if ( !v9 || (v11 = strlen((const char *)v9)) == 0 )
      {
LABEL_10:
        *(_DWORD *)(v7 + 4) = 0;
        goto LABEL_11;
      }
      if ( v11 + 1 > *(_DWORD *)(v7 + 8) )
        *(_DWORD *)v7 = sub_453B00(v7, *(void **)v7, v11 + 1, 1u);
      *(_DWORD *)(v7 + 4) = v11 + 1;
      sub_464310(*(_DWORD *)v7, (unsigned int)v22, v11);
      *(_BYTE *)(v11 + *(_DWORD *)v7) = 0;
LABEL_11:
      *(_DWORD *)(v7 + 12) = sub_4542B0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
      *(_DWORD *)(v7 + 16) = sub_4542B0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
      v4 = (_DWORD *)(sub_4542B0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1);
      *(_DWORD *)(v7 + 20) = v4;
      return (char)v4;
    case 2:
    case 4:
      v12 = sub_4541E0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
      v4 = sub_410C40((_DWORD *)a1);
      *v4 = v12;
      return (char)v4;
    case 3:
    case 9:
    case 0xA:
      v21 = sub_402A20((_DWORD *)a2);
      v19 = sub_413600((_DWORD *)a1);
      LOBYTE(v4) = sub_401590((int)v19, v21);
      return (char)v4;
    case 5:
      v13 = sub_40CCF0((_DWORD *)a1);
      *v13 = sub_4542B0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
      v4 = (_DWORD *)(sub_4542B0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1);
      v13[1] = v4;
      return (char)v4;
    case 7:
      v14 = sub_410C10((_DWORD *)a1);
      *v14 = sub_4541E0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
      *((_BYTE *)v14 + 4) = sub_4541E0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) != 0;
      v4 = (_DWORD *)(sub_4542B0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1);
      v14[2] = v4;
      v15 = *(unsigned __int8 **)a2;
      v16 = *(unsigned __int8 **)a2;
      break;
    default:
      return (char)v4;
  }
  do
  {
    if ( (unsigned int)v15 >= *(_DWORD *)(a2 + 4) )
    {
      v17 = (int)(v14 + 3);
LABEL_23:
      *(_DWORD *)(v17 + 4) = 0;
      return (char)v4;
    }
    LOBYTE(v4) = *v15++;
  }
  while ( (_BYTE)v4 );
  *(_DWORD *)a2 = v15;
  v17 = (int)(v14 + 3);
  if ( !v16 )
    goto LABEL_23;
  v18 = strlen((const char *)v16);
  if ( !v18 )
    goto LABEL_23;
  if ( v18 + 1 > *(_DWORD *)(v17 + 8) )
    *(_DWORD *)v17 = sub_453B00(v17, *(void **)v17, v18 + 1, 1u);
  *(_DWORD *)(v17 + 4) = v18 + 1;
  sub_464310(*(_DWORD *)v17, (unsigned int)v16, v18);
  v4 = *(_DWORD **)v17;
  *(_BYTE *)(v18 + *(_DWORD *)v17) = 0;
  return (char)v4;
}
// 44A557: variable 'v4' is possibly undefined
