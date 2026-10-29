__int64 __fastcall sub_3004A0(__int64 a1, int *a2)
{
  void *v2; // r12
  int v3; // eax
  __int64 result; // rax

  v2 = qword_1C7F2C0;
  if ( (a2[1] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, a1 + 112, a2);
    if ( (a2[5] & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    v3 = *a2;
    *(_BYTE *)(a1 + 116) &= ~1u;
    *(_DWORD *)(a1 + 112) = v3;
    if ( (a2[5] & 1) == 0 )
    {
LABEL_3:
      result = (unsigned int)a2[4];
      *(_BYTE *)(a1 + 132) &= ~1u;
      *(_DWORD *)(a1 + 128) = result;
      return result;
    }
  }
  return sub_182C690(v2, a1 + 128, a2 + 4);
}

