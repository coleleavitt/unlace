__int64 __fastcall sub_9BD10(int a1)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rax
  unsigned int v5; // [rsp+Ch] [rbp-7Ch]
  __int64 v6; // [rsp+10h] [rbp-78h] BYREF
  __int64 v7; // [rsp+18h] [rbp-70h]
  __int128 v8; // [rsp+20h] [rbp-68h]
  __int64 v9; // [rsp+30h] [rbp-58h]
  unsigned __int64 v10; // [rsp+38h] [rbp-50h]
  unsigned __int64 v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-38h]
  unsigned __int64 v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]
  unsigned __int64 v16; // [rsp+68h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  bpt_kernel_interface = get_bpt_kernel_interface();
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 40LL))(
         bpt_kernel_interface,
         (unsigned int)qword_251700);
  result = 0;
  if ( !v2 && (a1 != 4 || (~(_WORD)qword_251710 & 0x600) == 0) )
  {
    v6 = 88;
    v9 = 0xFFFFFFFFLL;
    v10 = 0xFFFFFFFF00000000LL;
    v11 = 0xFFFFFFFF00000000LL;
    v7 = 0;
    v12 = 4;
    v13 = 9;
    v14 = 0xFFFFFFFF00000000LL;
    v15 = 0;
    v8 = 0;
    v4 = get_bpt_kernel_interface();
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, bool, _QWORD))(*(_QWORD *)v4 + 128LL))(
      v4,
      &v6,
      (unsigned int)qword_251700,
      a1 != 4,
      0);
    LODWORD(v12) = a1;
    LODWORD(v13) = v13 & 0xFFFFFFFC | 2;
    result = sub_986A0((__int64)&v6) != 0;
    if ( v7 )
    {
      v5 = result;
      *(_QWORD *)&v8 = 0;
      qfree();
      return v5;
    }
  }
  return result;
}

