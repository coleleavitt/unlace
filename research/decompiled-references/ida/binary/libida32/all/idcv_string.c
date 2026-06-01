__int64 __fastcall idcv_string(__int64 a1, __int64 a2)
{
  if ( a1 )
    return sub_776280(a1, a2);
  else
    return set_qerrno(1531, a2);
}

