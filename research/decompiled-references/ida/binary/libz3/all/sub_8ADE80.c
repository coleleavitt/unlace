__int64 __fastcall sub_8ADE80(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax
  __int64 result; // rax

  if ( (a3[1] & 1) != 0 )
  {
    sub_182EA00(a1, a2, a3);
    if ( (a3[5] & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    v4 = *a3;
    *(_BYTE *)(a2 + 4) &= ~1u;
    *(_DWORD *)a2 = v4;
    if ( (a3[5] & 1) == 0 )
    {
LABEL_3:
      result = (unsigned int)a3[4];
      *(_BYTE *)(a2 + 20) &= ~1u;
      *(_DWORD *)(a2 + 16) = result;
      return result;
    }
  }
  return sub_182EA00(a1, a2 + 16, a3 + 4);
}

