char *sub_74E510()
{
  bool v0; // sf
  __int64 v1; // rax

  v0 = dword_2CAA4F0 - 1 < 0;
  v1 = (unsigned int)--dword_2CAA4F0;
  if ( v0 )
    __longjmp_chk();
  return (char *)&unk_2CA2EE0 + 16 * v1 + 2000;
}

