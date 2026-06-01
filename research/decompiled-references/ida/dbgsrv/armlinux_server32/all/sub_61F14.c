/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61F14
// Address: 0x00061F14

//----- (00061F14) --------------------------------------------------------
unsigned int __fastcall sub_61F14(int a1, int a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r0
  int v6; // r3
  unsigned int result; // r0
  int v8; // r3
  int v9; // r3
  size_t v10; // r4
  unsigned int v11; // r6
  void *v12; // r0
  unsigned __int8 *v13; // r7
  _BYTE *v14; // r2
  bool v16; // zf
  char v17; // r2
  int v18; // r3

  v4 = sub_762E4((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  sub_6E52C((_DWORD *)a1, v4);
  *(_DWORD *)a1 = sub_762E4((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  *(_DWORD *)(a1 + 4) = sub_762E4((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  *(_DWORD *)(a1 + 8) = sub_763AC((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  v5 = sub_762E4((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  v6 = *(_DWORD *)(a1 + 16);
  result = v5 != 0;
  *(_BYTE *)(a1 + 12) = result;
  v8 = v6 & 0xFFFFFFF;
  switch ( v8 )
  {
    case 1:
    case 8:
    case 11:
      v16 = v8 == 1;
      if ( v8 != 1 )
        v16 = v8 == 11;
      v17 = !v16;
      if ( v8 == 8 )
        v18 = 0;
      else
        v18 = v17 & 1;
      if ( !v18 )
        return sub_61B98(a1 + 20, (unsigned __int8 **)a2);
      if ( !under_debugger )
        sub_78C64(3295);
      goto LABEL_30;
    case 2:
    case 4:
      result = sub_762E4((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
      if ( (((*(_DWORD *)(a1 + 16) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
      {
        *(_DWORD *)(a1 + 20) = result;
        return result;
      }
      if ( !under_debugger )
        sub_78C64(3296);
      goto LABEL_30;
    case 3:
    case 9:
    case 10:
      result = *(_DWORD *)(a2 + 4);
      v13 = *(unsigned __int8 **)a2;
      if ( result <= *(_DWORD *)a2 )
        goto LABEL_14;
      v14 = v13 + 1;
      if ( !*v13 )
        goto LABEL_2;
      break;
    case 5:
      *(_DWORD *)(a1 + 20) = sub_763AC((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
      result = sub_763AC((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
      *(_DWORD *)(a1 + 24) = result;
      return result;
    case 7:
      return sub_61E84(a1 + 20, (__int64 *)a2);
    default:
      return result;
  }
  do
  {
    if ( (_BYTE *)result == v14 )
    {
LABEL_14:
      if ( v8 == 3 || (unsigned int)(v8 - 9) <= 1 )
        goto LABEL_16;
LABEL_31:
      if ( !under_debugger )
        sub_78C64(3297);
LABEL_30:
      __und(0xFFu);
    }
  }
  while ( *v14++ );
LABEL_2:
  *(_DWORD *)a2 = v14;
  v9 = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
  if ( v9 != 3 && (unsigned int)(v9 - 9) > 1 )
    goto LABEL_31;
  if ( !v13 || (result = strlen((const char *)v13), (v10 = result) == 0) )
  {
LABEL_16:
    *(_DWORD *)(a1 + 24) = 0;
    return result;
  }
  v11 = result + 1;
  v12 = *(void **)(a1 + 20);
  if ( v11 > *(_DWORD *)(a1 + 28) )
  {
    v12 = sub_78018(a1 + 20, *(void **)(a1 + 20), v11, 1u);
    *(_DWORD *)(a1 + 20) = v12;
  }
  *(_DWORD *)(a1 + 24) = v11;
  result = (unsigned int)memmove(v12, v13, v10);
  *(_BYTE *)(*(_DWORD *)(a1 + 20) + v10) = 0;
  return result;
}
// D6C20: using guessed type char under_debugger;
