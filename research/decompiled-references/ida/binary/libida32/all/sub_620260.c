__int64 __fastcall sub_620260(__int64 *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // r12d
  unsigned int v7; // r14d
  unsigned int v8; // eax

  v4 = sub_3B90A0(a1, a2);
  v5 = netnode_supdel(v4, a3, 83);
  if ( (_BYTE)v5 )
  {
    if ( a3 == 1000 )
    {
      v7 = 2000;
    }
    else
    {
      if ( a3 != 2000 )
      {
LABEL_4:
        sub_396090(0x3Au, a2, a3, 0);
        return v5;
      }
      v7 = 1000;
    }
    v8 = sub_3B90A0(a1, a2);
    if ( netnode_qsupstr(v8, 0, v7, 83) <= 0 )
      sub_3CA820(*a1, a2, 0x2000);
    goto LABEL_4;
  }
  return v5;
}

