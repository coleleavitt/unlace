/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479840
// Address: 0x0000000000479840

//----- (0000000000479840) ----------------------------------------------------
__int64 __fastcall sub_479840(_DWORD *a1, unsigned __int8 **a2, unsigned __int64 a3)
{
  unsigned __int8 *v3; // r12
  unsigned __int8 *v4; // rbx
  int v5; // eax
  unsigned __int8 *v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v7[1] = (unsigned __int8 *)__readfsqword(0x28u);
  if ( a1 )
  {
    *a1 = -1;
    v3 = *a2;
    v4 = *a2 - 1;
    if ( (unsigned __int64)v4 >= a3 )
    {
      v5 = (char)*(v3 - 1);
      if ( (*(v3 - 1) & 0x80u) != 0 )
        goto LABEL_4;
LABEL_16:
      *a1 = v5;
      goto LABEL_17;
    }
    return 0;
  }
  v3 = *a2;
  v4 = *a2 - 1;
  if ( (unsigned __int64)v4 < a3 )
    return 0;
  LOBYTE(v5) = *(v3 - 1);
  if ( (v5 & 0x80u) != 0 )
  {
LABEL_4:
    if ( (v5 & 0xC0) == 0x80 )
    {
      while ( (unsigned __int64)--v4 >= a3 && v3 - v4 <= 4 )
      {
        if ( (*v4 & 0xC0) != 0x80 )
        {
          v7[0] = v4;
          v5 = sub_4796E0(v7);
          if ( v5 == -1 || v3 < v7[0] )
            return 0;
          if ( !a1 )
            goto LABEL_17;
          goto LABEL_16;
        }
      }
    }
    return 0;
  }
LABEL_17:
  *a2 = v4;
  return 1;
}
