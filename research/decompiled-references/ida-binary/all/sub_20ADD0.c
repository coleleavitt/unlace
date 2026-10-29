__int64 __fastcall sub_20ADD0(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  int v5; // ebx
  __int64 bpt_kernel_interface; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rax
  double v11; // xmm0_8
  unsigned int v12; // [rsp+Ch] [rbp-8Ch]
  __int64 v13; // [rsp+10h] [rbp-88h] BYREF
  __int64 v14; // [rsp+18h] [rbp-80h]
  __int128 v15; // [rsp+20h] [rbp-78h]
  __int64 v16; // [rsp+30h] [rbp-68h]
  __int64 v17; // [rsp+38h] [rbp-60h]
  __int64 v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+48h] [rbp-50h]
  __int64 v20; // [rsp+50h] [rbp-48h]
  __int64 v21; // [rsp+58h] [rbp-40h]
  unsigned __int64 v22; // [rsp+60h] [rbp-38h]
  __int64 v23; // [rsp+68h] [rbp-30h]
  unsigned __int64 v24; // [rsp+78h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  v5 = a1;
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v7 = xmmword_8CC810;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 40LL))(
         bpt_kernel_interface,
         xmmword_8CC810);
  result = 0;
  if ( !v8 && (v5 != 4 || (~WORD4(xmmword_8CC820) & 0x600) == 0) )
  {
    v13 = 96;
    v14 = 0;
    v18 = 0xFFFFFFFFLL;
    v16 = -1;
    v17 = 0;
    v19 = -1;
    v20 = 4;
    v21 = 9;
    v22 = 0xFFFFFFFF00000000LL;
    v23 = 0;
    v15 = 0;
    v10 = get_bpt_kernel_interface(bpt_kernel_interface, v7);
    v11 = (*(double (__fastcall **)(__int64, __int64 *, _QWORD, bool, _QWORD))(*(_QWORD *)v10 + 128LL))(
            v10,
            &v13,
            xmmword_8CC810,
            v5 != 4,
            0);
    LODWORD(v20) = v5;
    LODWORD(v21) = v21 & 0xFFFFFFFC | 2;
    result = sub_19B410((__int64)&v13, v11, a4, a5) != 0;
    if ( v14 )
    {
      v12 = result;
      *(_QWORD *)&v15 = 0;
      qfree(v14, (const char *)&v13);
      return v12;
    }
  }
  return result;
}
