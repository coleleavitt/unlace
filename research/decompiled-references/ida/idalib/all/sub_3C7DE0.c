__int64 __fastcall sub_3C7DE0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax

  v2 = -1;
  if ( *(_DWORD *)(a1[3] + 24LL) != 8 )
    v2 = 0x100000000LL;
  v3 = a2 == v2;
  v4 = -1;
  if ( !v3 )
    v4 = a2;
  v5 = v4;
  if ( a1[198] == v4 )
    return a1[199];
  a1[198] = v4;
  do
  {
    v5 = sub_3C2650(a1, v5);
    if ( v5 == -1 )
      break;
    if ( (unsigned __int8)sub_631AD0(*a1, 9) && (unsigned __int8)is_spec_ea(v5) )
      v5 &= -(__int64)(unsigned __int8)sub_631AD0(*a1, 9);
    v6 = (__int64 *)sub_3C7D00(a1, v5);
    if ( v6 )
      v5 = *v6;
  }
  while ( (getinf(45) & 0x20) == 0 && (get_aflags(v5) & 0x10) != 0 );
  a1[199] = v5;
  return v5;
}
