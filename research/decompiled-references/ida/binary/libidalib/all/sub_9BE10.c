__int64 __fastcall sub_9BE10(int a1)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rax
  unsigned int v5; // [rsp+Ch] [rbp-8Ch]
  __int64 v6; // [rsp+10h] [rbp-88h] BYREF
  __int64 v7; // [rsp+18h] [rbp-80h]
  __int128 v8; // [rsp+20h] [rbp-78h]
  __int64 v9; // [rsp+30h] [rbp-68h]
  __int64 v10; // [rsp+38h] [rbp-60h]
  __int64 v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+48h] [rbp-50h]
  __int64 v13; // [rsp+50h] [rbp-48h]
  __int64 v14; // [rsp+58h] [rbp-40h]
  unsigned __int64 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+68h] [rbp-30h]
  unsigned __int64 v17; // [rsp+78h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  bpt_kernel_interface = get_bpt_kernel_interface();
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 40LL))(
         bpt_kernel_interface,
         xmmword_2528A0);
  result = 0;
  if ( !v2 && (a1 != 4 || (~WORD4(xmmword_2528B0) & 0x600) == 0) )
  {
    v6 = 96;
    v7 = 0;
    v11 = 0xFFFFFFFFLL;
    v9 = -1;
    v10 = 0;
    v12 = -1;
    v13 = 4;
    v14 = 9;
    v15 = 0xFFFFFFFF00000000LL;
    v16 = 0;
    v8 = 0;
    v4 = get_bpt_kernel_interface();
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, bool, _QWORD))(*(_QWORD *)v4 + 128LL))(
      v4,
      &v6,
      xmmword_2528A0,
      a1 != 4,
      0);
    LODWORD(v13) = a1;
    LODWORD(v14) = v14 & 0xFFFFFFFC | 2;
    result = sub_98770((__int64)&v6) != 0;
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

