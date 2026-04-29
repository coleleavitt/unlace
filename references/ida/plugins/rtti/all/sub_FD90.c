__int64 __fastcall sub_FD90(__int64 a1, int a2, char a3)
{
  int v3; // r12d

  v3 = a3 & 2;
  if ( a2 != 4 )
  {
    create_data();
    if ( !v3 || get_qword() >= 0 )
      return set_op_type();
LABEL_8:
    toggle_sign();
    return set_op_type();
  }
  create_data();
  if ( v3 && (int)get_dword() < 0 )
    goto LABEL_8;
  return set_op_type();
}
