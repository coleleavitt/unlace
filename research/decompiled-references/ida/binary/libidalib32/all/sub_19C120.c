unsigned __int64 __fastcall sub_19C120(__int64 a1, char *a2)
{
  unsigned __int64 result; // rax
  char v3; // r13
  unsigned __int8 v4; // r12

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
  result = (unsigned int)*a2;
  v3 = a2[1];
  v4 = *a2;
  if ( (unsigned int)result <= 0x7F )
  {
    result = (unsigned __int64)*__ctype_b_loc();
    if ( (*(_BYTE *)(result + 2LL * v4 + 1) & 4) != 0 )
    {
      v3 = 0;
      result = (unsigned __int64)*__ctype_toupper_loc();
      v4 = *(_BYTE *)(result + 4LL * v4);
      goto LABEL_6;
    }
    if ( !v4 )
      goto LABEL_6;
  }
  if ( (a2[4] & 0xC) == 0 )
  {
    result = (unsigned __int64)&unk_2350A0;
    while ( *(_WORD *)a2 != *(_WORD *)result )
    {
      result += 16LL;
      if ( (_BYTE *)result == algn_2355D0 )
      {
        v3 = 0;
        break;
      }
    }
  }
LABEL_6:
  *(_BYTE *)a1 = v4;
  *(_BYTE *)(a1 + 1) = v3;
  return result;
}

