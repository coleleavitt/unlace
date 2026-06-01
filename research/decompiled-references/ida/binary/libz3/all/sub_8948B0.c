__int64 __fastcall sub_8948B0(__int64 *a1, int *a2)
{
  __int64 v2; // r12
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 result; // rax

  v2 = *a1;
  if ( (a2[1] & 1) != 0 )
  {
    sub_182EA00(*a1, a1 + 1, a2);
    if ( (a2[5] & 1) == 0 )
    {
LABEL_3:
      v4 = a2[4];
      *((_BYTE *)a1 + 28) &= ~1u;
      *((_DWORD *)a1 + 6) = v4;
      if ( (a2[9] & 1) == 0 )
        goto LABEL_4;
LABEL_8:
      sub_182EA00(v2, a1 + 5, a2 + 8);
      if ( (a2[13] & 1) == 0 )
        goto LABEL_5;
      return sub_182EA00(v2, a1 + 7, a2 + 12);
    }
  }
  else
  {
    v3 = *a2;
    *((_BYTE *)a1 + 12) &= ~1u;
    *((_DWORD *)a1 + 2) = v3;
    if ( (a2[5] & 1) == 0 )
      goto LABEL_3;
  }
  sub_182EA00(v2, a1 + 3, a2 + 4);
  if ( (a2[9] & 1) != 0 )
    goto LABEL_8;
LABEL_4:
  v5 = a2[8];
  *((_BYTE *)a1 + 44) &= ~1u;
  *((_DWORD *)a1 + 10) = v5;
  if ( (a2[13] & 1) == 0 )
  {
LABEL_5:
    result = (unsigned int)a2[12];
    *((_BYTE *)a1 + 60) &= ~1u;
    *((_DWORD *)a1 + 14) = result;
    return result;
  }
  return sub_182EA00(v2, a1 + 7, a2 + 12);
}

