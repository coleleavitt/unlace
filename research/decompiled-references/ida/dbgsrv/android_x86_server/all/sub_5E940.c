/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E940
// Address: 0x0005E940

//----- (0005E940) --------------------------------------------------------
int __cdecl sub_5E940(void **a1, char *a2, char *s2, int a4)
{
  void *v4; // edi
  char *v5; // eax
  void *v6; // ecx
  int v7; // ecx
  int v9; // [esp+14h] [ebp-58h]
  char v10; // [esp+18h] [ebp-54h]
  int qerrno; // [esp+1Ch] [ebp-50h]
  unsigned int v12; // [esp+58h] [ebp-14h]

  v12 = __readgsdword(0x14u);
  v4 = a1[7];
  v10 = set_interr_throws(1);
  v9 = sub_63E90((int)a1, a2, s2, a4);
  set_interr_throws(v10);
  qerrno = get_qerrno();
  while ( a1[7] > v4 )
  {
    if ( !sub_5FFF0(a1) )
    {
      if ( !(_BYTE)under_debugger )
        interr(508);
      BUG();
    }
  }
  v5 = (char *)a1[14];
  v6 = v5 + 16;
  if ( !v5 )
    v6 = nullptr;
  a1[17] = v6;
  v7 = qerrno;
  if ( (_BYTE)v9 )
    v7 = 0;
  set_qerrno(v7);
  return v9;
}
// 5E9D4: conditional instruction was optimized away because %0x1C.4==0
// 13E34C: using guessed type int under_debugger;
