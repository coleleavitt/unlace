char __fastcall sub_98420(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v5; // rdx
  char result; // al
  bool v7; // r14
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  char v11; // [rsp+Fh] [rbp-89h]
  __int64 v12; // [rsp+10h] [rbp-88h] BYREF
  __int64 v13; // [rsp+18h] [rbp-80h]
  __int128 v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+30h] [rbp-68h]
  unsigned __int64 v16; // [rsp+38h] [rbp-60h]
  unsigned __int64 v17; // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+48h] [rbp-50h]
  __int64 v19; // [rsp+50h] [rbp-48h]
  unsigned __int64 v20; // [rsp+58h] [rbp-40h]
  int v21; // [rsp+60h] [rbp-38h]
  unsigned __int64 v22; // [rsp+68h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  bpt_kernel_interface = get_bpt_kernel_interface();
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 40LL))(bpt_kernel_interface, a1);
  result = 0;
  if ( !v5 )
  {
    v12 = 88;
    v15 = 0xFFFFFFFFLL;
    v16 = 0xFFFFFFFF00000000LL;
    v17 = 0xFFFFFFFF00000000LL;
    v13 = 0;
    v18 = 4;
    v19 = 9;
    v20 = 0xFFFFFFFF00000000LL;
    v21 = 0;
    v14 = 0;
    sub_97C60((__int64)&v12);
    v7 = 0;
    if ( a3 == 12 )
      v7 = (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0;
    v8 = get_bpt_kernel_interface();
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, bool))(*(_QWORD *)v8 + 128LL))(v8, &v12, a1, 0, v7);
    if ( a3 == 12 )
    {
      a3 = v18;
      v9 = v20;
    }
    else
    {
      LODWORD(v18) = a3;
      v9 = a2;
      LODWORD(v20) = a2;
    }
    result = sub_982B0(a3, a1, v9);
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

