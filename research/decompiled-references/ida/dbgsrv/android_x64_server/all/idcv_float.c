/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_float
// Address: 0x0000000000073540

//----- (0000000000073540) ----------------------------------------------------
__int64 __fastcall idcv_float(__int64 a1, double a2, __m128 a3)
{
  __int64 result; // rax
  const char *v4; // rax
  const char *v5; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( !a1 )
    return set_qerrno(0x5FBu);
  while ( *(_BYTE *)a1 == 10 )
  {
    if ( !deref_idcv((char *)a1, 2, a2, a3) )
      return get_qerrno();
  }
  switch ( *(_BYTE *)a1 )
  {
    case 2:
      eltoe(*(_QWORD *)(a1 + 8), (_WORD *)(a1 + 8));
      goto LABEL_13;
    case 3:
      goto LABEL_14;
    case 7:
      if ( *(_QWORD *)(a1 + 16) )
        v4 = *(const char **)(a1 + 8);
      else
        v4 = s1;
      v5 = v4;
      asctoreal((_BYTE **)&v5, (__int64)&v6, a2, a3);
      free_idcv((char *)a1, a2, a3);
      *(_OWORD *)(a1 + 8) = v6;
      goto LABEL_13;
    case 9:
      eltoe64(*(_QWORD *)(a1 + 8), (_WORD *)(a1 + 8));
LABEL_13:
      *(_BYTE *)a1 = 3;
LABEL_14:
      result = 0;
      break;
    default:
      return set_qerrno(0x5FBu);
  }
  return result;
}
