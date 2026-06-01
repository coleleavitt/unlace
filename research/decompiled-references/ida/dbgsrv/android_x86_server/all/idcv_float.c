/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_float
// Address: 0x00059E70

//----- (00059E70) --------------------------------------------------------
int __cdecl idcv_float(int a1)
{
  int result; // eax
  char **v2; // edi
  char *v3; // eax
  __int64 v4; // xmm0_8
  char *v5; // [esp+14h] [ebp-28h] BYREF
  _QWORD v6[2]; // [esp+18h] [ebp-24h] BYREF
  unsigned int v7; // [esp+28h] [ebp-14h]

  v7 = __readgsdword(0x14u);
  if ( !a1 )
    return set_qerrno(1531);
  while ( *(_BYTE *)a1 == 10 )
  {
    if ( !deref_idcv((char *)a1, 2) )
      return get_qerrno();
  }
  switch ( *(_BYTE *)a1 )
  {
    case 2:
      eltoe(*(_DWORD *)(a1 + 4), (_WORD *)(a1 + 4));
      goto LABEL_13;
    case 3:
      goto LABEL_14;
    case 7:
      v2 = (char **)(a1 + 4);
      if ( *(_DWORD *)(a1 + 8) )
        v3 = *v2;
      else
        v3 = byte_EF875;
      v5 = v3;
      asctoreal(&v5, (int)v6);
      free_idcv((char *)a1);
      v4 = v6[0];
      *(_QWORD *)(a1 + 12) = v6[1];
      *(_QWORD *)v2 = v4;
      goto LABEL_13;
    case 9:
      eltoe64(*(int *)(a1 + 4), (_WORD *)(a1 + 4));
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
