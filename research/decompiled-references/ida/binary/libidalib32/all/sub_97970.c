__int64 __fastcall sub_97970(int a1)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v2; // rax
  unsigned int v3; // edx
  _DWORD v5[3]; // [rsp+Ch] [rbp-1Ch] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v5[0] = a1;
  v5[1] = 0;
  v5[2] = 0;
  bpt_kernel_interface = get_bpt_kernel_interface();
  v2 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)bpt_kernel_interface + 280LL))(
         bpt_kernel_interface,
         v5);
  if ( v2 )
  {
    v3 = 2;
    if ( (*(_BYTE *)(v2 + 68) & 0x18) == 0 )
      return (*(_BYTE *)(v2 + 64) & 8) != 0;
  }
  else
  {
    return (unsigned int)-1;
  }
  return v3;
}

