__int64 __fastcall sub_10A22E0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // r13
  signed __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __m128i v8; // xmm0
  bool v9; // zf
  __int64 v10; // rcx
  const char *v11; // rdx
  unsigned int v12; // ebx
  char v14; // [rsp+Fh] [rbp-99h] BYREF
  _QWORD v15[2]; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int8 v16; // [rsp+20h] [rbp-88h]
  unsigned __int8 v17; // [rsp+21h] [rbp-87h]
  void *v18; // [rsp+30h] [rbp-78h]
  signed __int64 v19; // [rsp+38h] [rbp-70h]
  _QWORD v20[2]; // [rsp+40h] [rbp-68h] BYREF
  __m128i v21; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+60h] [rbp-48h]

  v4 = *(_BYTE **)(a1 + 216);
  v5 = *(_QWORD *)(a1 + 224);
  v18 = v20;
  if ( &v4[v5] && !v4 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v5 > 0xF )
  {
    if ( v5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v6 = (_QWORD *)operator new(v5 + 1);
    v20[0] = v5;
    v18 = v6;
LABEL_18:
    memcpy(v6, v4, v5);
    v6 = v18;
    goto LABEL_6;
  }
  if ( v5 == 1 )
  {
    LOBYTE(v20[0]) = *v4;
    v6 = v20;
    goto LABEL_6;
  }
  v6 = v20;
  if ( v5 )
    goto LABEL_18;
LABEL_6:
  v19 = v5;
  *((_BYTE *)v6 + v5) = 0;
  v7 = *(_QWORD *)(a1 + 264);
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 248));
  v9 = *(_DWORD *)(a1 + 260) == 20;
  v15[0] = a2;
  v22 = v7;
  v21 = v8;
  v15[1] = a3;
  v17 = 0;
  v14 = 1;
  if ( v9 )
  {
    sub_B7E0A0((__int64)v15, &v14, "4xxmac", 6);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "altivec", 7);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "arch_2_05", 9);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "arch_2_06", 9);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "arch_2_07", 9);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "arch_3_00", 9);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "arch_3_1", 8);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "booke", 5);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "cellbe", 6);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "darn", 4);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "dfp", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "dscr", 4);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "ebb", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "efpsingle", 9);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "efpdouble", 9);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "fpu", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "htm", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "isel", 4);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "mma", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "mmu", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "pa6t", 4);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "power4", 6);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "power5", 6);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "power5+", 7);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "power6x", 7);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "ppc32", 5);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "ppc601", 6);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "ppc64", 5);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "ppcle", 5);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "smt", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "spe", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "tar", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "true_le", 7);
    v14 = 1;
    v10 = 6;
    v11 = "ucache";
  }
  else
  {
    sub_B7E0A0((__int64)v15, &v14, "4xxmac", 6);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "altivec", 7);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "arch_2_05", 9);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "arch_2_06", 9);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "arch_2_07", 9);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "arch_3_00", 9);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "arch_3_1", 8);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "archpmu", 7);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "booke", 5);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "cellbe", 6);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "darn", 4);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "dfp", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "dscr", 4);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "ebb", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "efpdouble", 9);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "efpsingle", 9);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "fpu", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "htm", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "htm-nosc", 8);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "htm-no-suspend", 14);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "ic_snoop", 8);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "ieee128", 7);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "isel", 4);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "mma", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "mmu", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "notb", 4);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "pa6t", 4);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "power4", 6);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "power5", 6);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "power5+", 7);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "power6x", 7);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "ppc32", 5);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "ppc601", 6);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "ppc64", 5);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "ppcle", 5);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "scv", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "smt", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "spe", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "tar", 3);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "true_le", 7);
    v14 = 1;
    sub_B7E0A0((__int64)v15, &v14, "ucache", 6);
    v14 = 1;
    v10 = 7;
    v11 = "vcrypto";
  }
  sub_B7E0A0((__int64)v15, &v14, v11, v10);
  v14 = 1;
  sub_B7E0A0((__int64)v15, &v14, "vsx", 3);
  v12 = v17;
  if ( v17 )
    v12 = v16;
  if ( v18 != v20 )
    operator delete(v18);
  return v12;
}
