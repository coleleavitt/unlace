__int64 __fastcall sub_CE4CC0(__int64 a1, int *a2)
{
  __int64 v2; // rax

  v2 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v2 == 0xFF )
    goto LABEL_4;
  if ( (_BYTE)v2 != 3 )
  {
    funcs_CC1BB6[v2]();
LABEL_4:
    sub_A2FF00(a1, a2);
    *(_BYTE *)(a1 + 56) = 3;
    return a1;
  }
  sub_A30FE0(a1, a2);
  return a1;
}

