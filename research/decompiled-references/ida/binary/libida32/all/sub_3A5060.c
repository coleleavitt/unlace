__int64 __fastcall sub_3A5060(_DWORD *a1, _BYTE *a2, __int64 a3, unsigned int a4)
{
  char *v6; // rax
  char v7; // cl
  __int64 result; // rax

  v6 = *(char **)a3;
  if ( *(_QWORD *)a3 < *(_QWORD *)(a3 + 8) )
  {
    v7 = *v6;
    *(_QWORD *)a3 = v6 + 1;
    a1[2] = v7 & 0x7F;
    if ( !a2 )
    {
      if ( (v7 & 0x7F) != 0 )
        goto LABEL_4;
      goto LABEL_7;
    }
  }
  else
  {
    a1[2] = 0;
    v7 = 0;
    if ( !a2 )
      goto LABEL_7;
  }
  *a2 = v7;
  if ( a1[2] )
  {
LABEL_4:
    a1[1] = unpack_dd(a3);
    *a1 = unpack_dd(a3);
    return a4;
  }
LABEL_7:
  result = a4 + (unsigned int)unpack_dd(a3);
  *a1 = result;
  return result;
}

