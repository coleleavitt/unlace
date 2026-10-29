/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_int64
// Address: 0x0000000000073180

//----- (0000000000073180) ----------------------------------------------------
__int64 __fastcall idcv_int64(__int64 a1, double a2, __m128 a3)
{
  unsigned int v4; // ebp
  unsigned int v6; // edi
  char *v7; // rdi
  _QWORD v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( !a1 )
    return set_qerrno(0x5FBu);
  while ( *(_BYTE *)a1 == 10 )
  {
    if ( !deref_idcv((char *)a1, 2, a2, a3) )
      return (unsigned int)get_qerrno();
  }
  switch ( *(_BYTE *)a1 )
  {
    case 2:
      *(_BYTE *)a1 = 9;
      goto LABEL_17;
    case 3:
      v4 = 0;
      v6 = 97;
      switch ( (unsigned int)eetol64(v8, (__int128 *)(a1 + 8), 0, a2, a3) )
      {
        case 1u:
          goto LABEL_16;
        case 2u:
          goto LABEL_13;
        case 4u:
          v6 = 86;
          goto LABEL_13;
        case 5u:
          v6 = 98;
          goto LABEL_13;
        default:
          return v4;
      }
      return v4;
    case 7:
      if ( *(_QWORD *)(a1 + 16) )
        v7 = *(char **)(a1 + 8);
      else
        v7 = (char *)s1;
      v8[0] = 0;
      qsscanf(v7, "%lli", v8);
      free_idcv((char *)a1, a2, a3);
LABEL_16:
      *(_BYTE *)a1 = 9;
      *(_QWORD *)(a1 + 8) = v8[0];
      goto LABEL_17;
    case 9:
LABEL_17:
      v4 = 0;
      break;
    default:
      v6 = 1531;
LABEL_13:
      v4 = set_qerrno(v6);
      break;
  }
  return v4;
}
