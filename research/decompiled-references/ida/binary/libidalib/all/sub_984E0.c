char __fastcall sub_984E0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v5; // rdx
  char result; // al
  bool v7; // r14
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  char v11; // [rsp+Fh] [rbp-99h]
  __int64 v12; // [rsp+10h] [rbp-98h] BYREF
  __int64 v13; // [rsp+18h] [rbp-90h]
  __int128 v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+30h] [rbp-78h]
  __int64 v16; // [rsp+38h] [rbp-70h]
  __int64 v17; // [rsp+40h] [rbp-68h]
  __int64 v18; // [rsp+48h] [rbp-60h]
  __int64 v19; // [rsp+50h] [rbp-58h]
  __int64 v20; // [rsp+58h] [rbp-50h]
  unsigned __int64 v21; // [rsp+60h] [rbp-48h]
  __int64 v22; // [rsp+68h] [rbp-40h]
  unsigned __int64 v23; // [rsp+78h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  bpt_kernel_interface = get_bpt_kernel_interface();
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 40LL))(bpt_kernel_interface, a1);
  result = 0;
  if ( !v5 )
  {
    v12 = 96;
    v14 = 0;
    v17 = 0xFFFFFFFFLL;
    v13 = 0;
    v15 = -1;
    v16 = 0;
    v18 = -1;
    v19 = 4;
    v20 = 9;
    v21 = 0xFFFFFFFF00000000LL;
    v22 = 0;
    sub_97D20((__int64)&v12);
    v7 = 0;
    if ( a3 == 12 )
      v7 = (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0;
    v8 = get_bpt_kernel_interface();
    (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD, bool))(*(_QWORD *)v8 + 128LL))(v8, &v12, a1, 0, v7);
    if ( a3 == 12 )
    {
      a3 = v19;
      v9 = v21;
    }
    else
    {
      LODWORD(v19) = a3;
      v9 = a2;
      LODWORD(v21) = a2;
    }
    result = sub_98370(a3, a1, v9);
    if ( result )
    {
      v10 = get_bpt_kernel_interface();
      result = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v10 + 312LL))(v10, &v12, 0) != 0;
    }
    if ( v13 )
    {
      v11 = result;
      *(_QWORD *)&v14 = 0;
      qfree();
      return v11;
    }
  }
  return result;
}

