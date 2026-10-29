__int64 __fastcall delete_extra_cmts(unsigned int a1, unsigned int a2)
{
  __int64 *i; // r12
  unsigned int v4; // eax
  __int64 result; // rax

  for ( i = *(__int64 **)(qword_2CA1698 + 1480); ; sub_620260(i, a1, a2++) )
  {
    v4 = sub_3B90A0(i, a1);
    result = netnode_qsupstr(v4, 0, a2, 83);
    if ( result < 0 )
      break;
  }
  return result;
}

