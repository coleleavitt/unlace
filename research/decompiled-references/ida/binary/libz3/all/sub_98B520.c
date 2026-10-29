__int64 __fastcall sub_98B520(__int64 a1, int *a2)
{
  void *v2; // r13
  int v3; // eax
  int v4; // eax
  void *v5; // r12
  int v6; // eax
  __int64 result; // rax

  v2 = qword_1C7F2C0;
  if ( (a2[1] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, a1, a2);
    if ( (a2[5] & 1) == 0 )
    {
LABEL_3:
      v4 = a2[4];
      v5 = qword_1C7F2C0;
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v4;
      if ( (a2[9] & 1) == 0 )
        goto LABEL_4;
LABEL_8:
      sub_182C690(v5, a1 + 32, a2 + 8);
      if ( (a2[13] & 1) == 0 )
        goto LABEL_5;
      return sub_182C690(v5, a1 + 48, a2 + 12);
    }
  }
  else
  {
    v3 = *a2;
    *(_BYTE *)(a1 + 4) &= ~1u;
    *(_DWORD *)a1 = v3;
    if ( (a2[5] & 1) == 0 )
      goto LABEL_3;
  }
  sub_182C690(v2, a1 + 16, a2 + 4);
  v5 = qword_1C7F2C0;
  if ( (a2[9] & 1) != 0 )
    goto LABEL_8;
LABEL_4:
  v6 = a2[8];
  *(_BYTE *)(a1 + 36) &= ~1u;
  *(_DWORD *)(a1 + 32) = v6;
  if ( (a2[13] & 1) == 0 )
  {
LABEL_5:
    result = (unsigned int)a2[12];
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = result;
    return result;
  }
  return sub_182C690(v5, a1 + 48, a2 + 12);
}

