__int64 __fastcall sub_199DB0(__int64 a1, __int64 a2)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v3; // rax
  unsigned int v4; // edx
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[3] = __readfsqword(0x28u);
  v6[0] = a1;
  v6[1] = 0;
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)bpt_kernel_interface + 280LL))(
         bpt_kernel_interface,
         v6);
  if ( v3 )
  {
    v4 = 2;
    if ( (*(_BYTE *)(v3 + 76) & 0x18) == 0 )
      return (*(_BYTE *)(v3 + 72) & 8) != 0;
  }
  else
  {
    return (unsigned int)-1;
  }
  return v4;
}
