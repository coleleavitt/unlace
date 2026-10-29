/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_string
// Address: 0x00059CD0

//----- (00059CD0) --------------------------------------------------------
int __cdecl idcv_string(int a1)
{
  int result; // eax
  _BYTE *v2; // eax
  int s[256]; // [esp+8h] [ebp-414h] BYREF
  unsigned int v4; // [esp+408h] [ebp-14h]

  v4 = __readgsdword(0x14u);
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
      LOBYTE(s[0]) = *(_BYTE *)(a1 + 4);
      sub_2DCA0((_DWORD *)(a1 + 4), s, LOBYTE(s[0]) != 0);
      goto LABEL_11;
    case 3:
      realtoasc(s, (int *)&stru_400, (_WORD *)(a1 + 4), 50);
      sub_1B530(a1 + 4, (char *)s);
      goto LABEL_11;
    case 7:
      goto LABEL_12;
    case 9:
      LOBYTE(s[0]) = *(_BYTE *)(a1 + 4);
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 12) = 0;
      v2 = qvector_reserve(a1 + 4, nullptr, 2u, 1u);
      *(_DWORD *)(a1 + 4) = v2;
      *(_DWORD *)(a1 + 8) = 2;
      *v2 = s[0];
      *(_BYTE *)(*(_DWORD *)(a1 + 4) + 1) = 0;
LABEL_11:
      *(_BYTE *)a1 = 7;
LABEL_12:
      result = 0;
      break;
    default:
      result = set_qerrno(1531);
      break;
  }
  return result;
}
// 400: using guessed type Elf32_Sym;
