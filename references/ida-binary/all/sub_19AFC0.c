__int64 __fastcall sub_19AFC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 bpt_kernel_interface; // rax

  v2 = sub_384360();
  if ( v2 )
  {
    v3 = v2;
    v4 = sub_3844D0(v2);
    return sub_3840A0(v3, v4);
  }
  else
  {
    bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 40LL))(
             bpt_kernel_interface,
             xmmword_8CC810);
  }
}
