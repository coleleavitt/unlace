__int64 __fastcall delete_extra_cmts(void *a1, signed int a2)
{
  __int64 *i; // r12
  unsigned __int64 v4; // rax
  __int64 result; // rax

  for ( i = *(__int64 **)(qword_2CCB598 + 1672); ; sub_63D3D0(i, a1, a2++) )
  {
    v4 = sub_3BDD60(i, (__int64)a1);
    result = netnode_qsupstr(v4, 0, a2, 83);
    if ( result < 0 )
      break;
  }
  return result;
}
