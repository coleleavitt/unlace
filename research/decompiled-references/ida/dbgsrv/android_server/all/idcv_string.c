/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_string
// Address: 0x000000000006F78C

//----- (000000000006F78C) ----------------------------------------------------
__int64 __fastcall idcv_string(__int64 a1)
{
  __int64 result; // x0
  size_t v3; // x2
  _BYTE *v4; // x8
  pthread_mutex_t s[25]; // [xsp+8h] [xbp-438h] BYREF
  __int64 v6; // [xsp+408h] [xbp-38h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
      v3 = *(_BYTE *)(a1 + 8) != 0;
      s[0].__size[0] = *(_BYTE *)(a1 + 8);
      sub_4968C((pthread_mutex_t *)(a1 + 8), s, v3);
      goto LABEL_10;
    case 3:
      realtoasc(s, 0x400u, (int8x16_t *)(a1 + 8), 50);
      sub_39140((_QWORD *)(a1 + 8), (char *)s);
LABEL_10:
      *(_BYTE *)a1 = 7;
      result = 0;
      break;
    case 7:
      result = 0;
      break;
    case 9:
      s[0].__size[0] = *(_BYTE *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      v4 = qvector_reserve((pthread_mutex_t *)(a1 + 8), nullptr, 2u, 1u);
      *(_QWORD *)(a1 + 8) = v4;
      *(_QWORD *)(a1 + 16) = 2;
      *v4 = s[0].__size[0];
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 0;
      *(_BYTE *)a1 = 7;
      result = 0;
      break;
    default:
      return set_qerrno(0x5FBu);
  }
  return result;
}
