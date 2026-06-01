__int64 __fastcall Z3_goal_num_exprs(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  char v3; // bp
  unsigned int v4; // eax
  bool v5; // zf
  unsigned int v6; // r12d

  v2 = (_DWORD *)a2;
  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29C690();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 )
  {
    v2 = *(_DWORD **)(a2 + 24);
    if ( v2 )
      ++v2[8];
  }
  v4 = sub_ED6430(v2);
  v5 = v2[8]-- == 1;
  v6 = v4;
  if ( v5 )
  {
    sub_ED44E0(v2);
    sub_186B220(v2);
    if ( !v3 )
      return v6;
LABEL_10:
    byte_1C7EBA0 = 1;
    return v6;
  }
  if ( v3 )
    goto LABEL_10;
  return v6;
}

