unsigned __int64 __fastcall sub_3675F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  _QWORD *v5; // rax
  QT::QAbstractButton *v6; // rbx
  unsigned int v7; // r12d
  int default_encoding_idx; // eax
  unsigned __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx

  while ( 1 )
  {
    v5 = *(_QWORD **)(a1 + 56);
    v6 = (QT::QAbstractButton *)a2;
    if ( a2 == v5[120] )
    {
      v7 = 1;
    }
    else if ( a2 == v5[122] )
    {
      v7 = 2;
    }
    else
    {
      if ( a2 != v5[124] )
        goto LABEL_13;
      v7 = 4;
    }
    default_encoding_idx = get_default_encoding_idx(v7);
    a2 = v7;
    result = sub_3672D0(default_encoding_idx, v7, 0);
    if ( !(_DWORD)result )
    {
      if ( under_debugger )
        goto LABEL_16;
      a1 = 40509;
      interr(40509, v7, v10, v11, a5);
LABEL_13:
      sub_34A8F0(a5, a1, a2, a3, a4);
      goto LABEL_14;
    }
    if ( (int)result <= 0 )
      return result;
    a2 = (unsigned int)result;
    if ( (unsigned __int8)set_default_encoding_idx(v7, (unsigned int)result) )
      return sub_34FF90(a1, v6, v12, v13, a5);
LABEL_14:
    if ( under_debugger )
LABEL_16:
      BUG();
    a1 = 40508;
    interr(40508, a2, v12, v13, a5);
    a2 = *(_QWORD *)&elf_gnu_hash_bucket[26];
  }
}
