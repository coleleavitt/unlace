__int64 __fastcall sub_63D5F0(__int64 *a1, void *a2, signed int a3)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax

  while ( 1 )
  {
    v4 = sub_3BDD60(a1, (__int64)a2);
    result = netnode_qsupstr(v4, 0, a3, 83);
    if ( result < 0 )
      break;
    sub_63D3D0(a1, a2, a3++);
  }
  return result;
}
