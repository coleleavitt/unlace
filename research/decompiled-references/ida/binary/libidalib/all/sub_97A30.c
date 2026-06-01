__int64 __fastcall sub_97A30(__int64 a1)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v2; // rax
  unsigned int v3; // edx
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[3] = __readfsqword(0x28u);
  v5[0] = a1;
  v5[1] = 0;
  bpt_kernel_interface = get_bpt_kernel_interface();
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)bpt_kernel_interface + 280LL))(
         bpt_kernel_interface,
         v5);
  if ( v2 )
  {
    v3 = 2;
    if ( (*(_BYTE *)(v2 + 76) & 0x18) == 0 )
      return (*(_BYTE *)(v2 + 72) & 8) != 0;
  }
  else
  {
    return (unsigned int)-1;
  }
  return v3;
}

