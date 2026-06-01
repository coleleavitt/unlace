/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: del_idcv_attr
// Address: 0x0005C6E0

//----- (0005C6E0) --------------------------------------------------------
int __cdecl del_idcv_attr(int a1, char *s)
{
  int v2; // esi
  int v4[9]; // [esp+8h] [ebp-24h] BYREF

  v4[4] = __readgsdword(0x14u);
  if ( !a1 || *(_BYTE *)a1 != 5 )
    return set_qerrno(1532);
  sub_1B530((int)v4, s);
  v2 = 0;
  if ( !sub_68F50(*(_DWORD **)(a1 + 4), (int)v4) )
  {
    set_error_string(0, s);
    v2 = set_qerrno(1538);
  }
  if ( v4[0] )
  {
    v4[1] = 0;
    qfree((void *)v4[0]);
    v4[0] = 0;
    v4[2] = 0;
  }
  return v2;
}
