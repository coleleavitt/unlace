/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A68
// Address: 0x00047A68

//----- (00047A68) --------------------------------------------------------
int __fastcall sub_47A68(void **a1, int a2, const char *a3)
{
  void *v6; // r7
  int v7; // r5
  int qerrno; // r6
  int v9; // r0
  int v10; // r0
  char v12; // [sp+18h] [bp-30h]

  v6 = a1[7];
  v12 = set_interr_throws(1);
  v7 = sub_4AD34((int)a1, a2, a3);
  set_interr_throws(v12);
  qerrno = get_qerrno();
  while ( a1[7] > v6 )
  {
    if ( !sub_487AC(a1) )
    {
      if ( !under_debugger )
        interr(508);
      __debugbreak();
    }
  }
  v9 = (int)a1[14] + 16;
  if ( !a1[14] )
    v9 = 0;
  a1[17] = (void *)v9;
  v10 = 0;
  if ( !v7 )
    v10 = qerrno;
  set_qerrno(v10);
  return v7;
}
// 47ABC: conditional instruction was optimized away because %s.4==0
// 47BEC: conditional instruction was optimized away because %var_28.4==0
// E0550: using guessed type char under_debugger;
