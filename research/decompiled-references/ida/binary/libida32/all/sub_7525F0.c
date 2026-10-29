__int64 sub_7525F0()
{
  bool v0; // sf
  __int64 v1; // rax
  _BYTE *v2; // rdx
  __int64 result; // rax

  v0 = dword_2CAA4F0 - 1 < 0;
  v1 = (unsigned int)--dword_2CAA4F0;
  if ( v0 )
    __longjmp_chk();
  result = 16 * (v1 + 125);
  v2 = &byte_2CA2EE0[result];
  *(_QWORD *)v2 = "`anonymous namespace'";
  *((_DWORD *)v2 + 2) = 1376256;
  return (unsigned __int16)result;
}

