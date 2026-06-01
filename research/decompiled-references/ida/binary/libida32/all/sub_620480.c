__int64 __fastcall sub_620480(__int64 *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // eax
  __int64 result; // rax

  while ( 1 )
  {
    v4 = sub_3B90A0(a1, a2);
    result = netnode_qsupstr(v4, 0, a3, 83);
    if ( result < 0 )
      break;
    sub_620260(a1, a2, a3++);
  }
  return result;
}

