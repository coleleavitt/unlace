__int64 __fastcall sub_63D3D0(__int64 *a1, void *a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // r12d
  __int64 v7; // r14
  unsigned __int64 v8; // rax

  v4 = sub_3BDD60(a1, (__int64)a2);
  v5 = netnode_supdel(v4, (int)a3, 83);
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
        sub_39ADA0(0x3Au, a2, a3, 0);
        return v5;
      }
      v7 = 1000;
    }
    v8 = sub_3BDD60(a1, (__int64)a2);
    if ( netnode_qsupstr(v8, 0, v7, 83) <= 0 )
      sub_3D0110(*a1, a2, 0x2000);
    goto LABEL_4;
  }
  return v5;
}
