/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_float
// Address: 0x00044D90

//----- (00044D90) --------------------------------------------------------
int __fastcall idcv_float(int a1, int a2, int a3, int a4)
{
  int result; // r0
  char **v6; // r6
  char *v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r2
  unsigned __int8 *v11; // [sp+0h] [bp-18h] BYREF
  char *v12; // [sp+4h] [bp-14h] BYREF
  int v13; // [sp+8h] [bp-10h]
  int v14; // [sp+Ch] [bp-Ch]
  int v15; // [sp+10h] [bp-8h]

  if ( !a1 )
    return set_qerrno(1531);
  while ( *(_BYTE *)a1 == 10 )
  {
    if ( !deref_idcv((unsigned __int8 *)a1, 2) )
      return get_qerrno();
  }
  switch ( *(_BYTE *)a1 )
  {
    case 2:
      eltoe(*(_DWORD *)(a1 + 8), (_WORD *)(a1 + 8));
      goto LABEL_13;
    case 3:
      goto LABEL_14;
    case 7:
      v6 = (char **)(a1 + 8);
      if ( *(_DWORD *)(a1 + 12) )
        v7 = *v6;
      else
        v7 = &byte_B3CBE;
      asctoreal(&v11, &v12, a3, a4, (int)v7, (int)v12, v13, v14, v15);
      free_idcv((unsigned __int8 *)a1);
      v8 = v15;
      v9 = v14;
      v10 = v13;
      *v6 = v12;
      *(_DWORD *)(a1 + 12) = v10;
      *(_DWORD *)(a1 + 16) = v9;
      *(_DWORD *)(a1 + 20) = v8;
      goto LABEL_13;
    case 9:
      eltoe64(*(int *)(a1 + 8), (_WORD *)(a1 + 8));
LABEL_13:
      *(_BYTE *)a1 = 3;
LABEL_14:
      result = 0;
      break;
    default:
      return set_qerrno(1531);
  }
  return result;
}
// 44E0E: variable 'a3' is possibly undefined
// 44E0E: variable 'a4' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
