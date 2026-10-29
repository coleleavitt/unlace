/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_float
// Address: 0x000000000006F900

//----- (000000000006F900) ----------------------------------------------------
__int64 __fastcall idcv_float(__int64 a1, int8x16x2_t a2)
{
  __int64 result; // x0
  char *v4; // x8
  __int128 v5; // q0
  char *v6; // [xsp+0h] [xbp-40h] BYREF
  __int128 v7; // [xsp+8h] [xbp-38h] BYREF
  __int64 v8; // [xsp+18h] [xbp-28h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a1 )
    return set_qerrno(0x5FBu);
  while ( *(_BYTE *)a1 == 10 )
  {
    if ( !deref_idcv((unsigned __int8 *)a1, 2) )
      return get_qerrno();
  }
  switch ( *(_BYTE *)a1 )
  {
    case 2:
      eltoe(*(_QWORD *)(a1 + 8), (_WORD *)(a1 + 8), a2);
      goto LABEL_12;
    case 3:
      return 0;
    case 7:
      if ( *(_QWORD *)(a1 + 16) )
        v4 = *(char **)(a1 + 8);
      else
        v4 = &byte_F154B;
      v6 = v4;
      asctoreal(&v6, (__int64)&v7);
      free_idcv((__int64 *)a1);
      v5 = v7;
      *(_BYTE *)a1 = 3;
      *(_OWORD *)(a1 + 8) = v5;
      return 0;
    case 9:
      eltoe64(*(_QWORD *)(a1 + 8), (_WORD *)(a1 + 8), a2);
LABEL_12:
      *(_BYTE *)a1 = 3;
      result = 0;
      break;
    default:
      return set_qerrno(0x5FBu);
  }
  return result;
}
// 6F96C: variable 'a2' is possibly undefined
// F154B: using guessed type char byte_F154B;
