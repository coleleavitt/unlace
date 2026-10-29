__int64 __fastcall Z3_goal_precision(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // r12
  char v4; // bl
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29C4D0();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 || (v3 = *(_QWORD *)(a2 + 24)) == 0 )
    BUG();
  v4 = *(_BYTE *)(v3 + 123) >> 6;
  if ( *(_DWORD *)(v3 + 32) )
  {
    if ( v4 != 2 )
      goto LABEL_7;
LABEL_12:
    result = 2;
    if ( !v2 )
      return result;
LABEL_13:
    byte_1C7EBA0 = 1;
    return result;
  }
  sub_ED44E0(v3);
  sub_186B220((void *)v3);
  if ( v4 == 2 )
    goto LABEL_12;
LABEL_7:
  result = 3;
  if ( v4 != 3 )
    result = v4 != 0;
  if ( v2 )
    goto LABEL_13;
  return result;
}

