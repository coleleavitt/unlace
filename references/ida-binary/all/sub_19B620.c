char __fastcall sub_19B620(__int64 a1, __int64 a2, unsigned int a3, double a4, double a5, __m128 a6)
{
  unsigned int v6; // r12d
  __int64 bpt_kernel_interface; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  char result; // al
  __int64 *v13; // rdi
  bool v14; // r14
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // [rsp+Fh] [rbp-99h]
  __int64 v21; // [rsp+10h] [rbp-98h] BYREF
  __int64 v22; // [rsp+18h] [rbp-90h]
  __int128 v23; // [rsp+20h] [rbp-88h]
  __int64 v24; // [rsp+30h] [rbp-78h]
  __int64 v25; // [rsp+38h] [rbp-70h]
  __int64 v26; // [rsp+40h] [rbp-68h]
  __int64 v27; // [rsp+48h] [rbp-60h]
  __int64 v28; // [rsp+50h] [rbp-58h]
  __int64 v29; // [rsp+58h] [rbp-50h]
  unsigned __int64 v30; // [rsp+60h] [rbp-48h]
  __int64 v31; // [rsp+68h] [rbp-40h]
  unsigned __int64 v32; // [rsp+78h] [rbp-30h]

  v6 = a2;
  v32 = __readfsqword(0x28u);
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v10 = a1;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 40LL))(bpt_kernel_interface, a1);
  result = 0;
  if ( !v11 )
  {
    v21 = 96;
    v13 = &v21;
    v23 = 0;
    v26 = 0xFFFFFFFFLL;
    v22 = 0;
    v24 = -1;
    v25 = 0;
    v27 = -1;
    v28 = 4;
    v29 = 9;
    v30 = 0xFFFFFFFF00000000LL;
    v31 = 0;
    sub_19A0D0((__int64)&v21);
    v14 = 0;
    if ( a3 == 12 )
    {
      v10 = 4;
      v13 = (__int64 *)a1;
      v14 = (~((unsigned __int16)get_flags_ex(a1, 4) >> 8) & 6) == 0;
    }
    v15 = get_bpt_kernel_interface(v13, v10);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD, bool))(*(_QWORD *)v15 + 128LL))(v15, &v21, a1, 0, v14);
    if ( a3 == 12 )
    {
      a3 = v28;
      v16 = v30;
    }
    else
    {
      LODWORD(v28) = a3;
      v16 = v6;
      LODWORD(v30) = v6;
    }
    result = sub_19A750(a3, a1, v16);
    if ( result )
      result = sub_19B410((__int64)&v21, 0.0, a5, a6) != 0;
    if ( v22 )
    {
      v20 = result;
      *(_QWORD *)&v23 = 0;
      qfree(v22, a1, v17, v18, v19);
      return v20;
    }
  }
  return result;
}
