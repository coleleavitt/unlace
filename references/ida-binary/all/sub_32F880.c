__int64 __fastcall sub_32F880(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v7; // r9
  __int64 func; // r15
  _QWORD *v9; // rdx
  __int64 v10; // r14
  const char *v11; // rsi
  int tinfo_udt_member; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // [rsp+8h] [rbp-250h]
  unsigned int v17; // [rsp+8h] [rbp-250h]
  const char *v18; // [rsp+18h] [rbp-240h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-238h] BYREF
  __int64 v20; // [rsp+30h] [rbp-228h]
  __int128 v21; // [rsp+38h] [rbp-220h]
  __int64 v22; // [rsp+48h] [rbp-210h]
  __int128 v23; // [rsp+50h] [rbp-208h]
  _OWORD v24[3]; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v25; // [rsp+90h] [rbp-1C8h]
  int v26; // [rsp+98h] [rbp-1C0h]
  __int64 v27; // [rsp+A0h] [rbp-1B8h]
  char v28; // [rsp+A8h] [rbp-1B0h]
  __int128 v29; // [rsp+B0h] [rbp-1A8h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-198h]
  __int64 v31; // [rsp+C8h] [rbp-190h]
  __int64 v32; // [rsp+D0h] [rbp-188h]
  _BYTE v33[320]; // [rsp+D8h] [rbp-180h] BYREF
  _QWORD v34[8]; // [rsp+218h] [rbp-40h] BYREF

  v34[0] = __readfsqword(0x28u);
  if ( (~((unsigned __int16)get_flags_ex(a1, 4) >> 8) & 6) != 0 )
    return 1;
  func = get_func(a1);
  if ( !func )
    return 1;
  v30 = -1;
  v9 = v33;
  v31 = 0;
  v32 = 0;
  v29 = -1;
  do
  {
    *(_WORD *)v9 = 0;
    v9 += 5;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *(v9 - 2) = 0;
  }
  while ( v34 != v9 );
  if ( !(unsigned int)decode_insn(&v29, a1, v9, v34, 0, v7, 0.0) )
    return 1;
  v10 = a2 & 0xF;
  v18 = nullptr;
  v16 = calc_stkvar_struc_offset(func, &v29, v10);
  tinfo_get_func_frame(&v18, func);
  v11 = v18;
  v19[1] = 0;
  v20 = 0;
  v19[0] = 8 * v16;
  v21 = 0;
  v22 = 0;
  v25 = 1;
  v26 = -1;
  v27 = 0;
  v28 = 0;
  v23 = 0;
  v24[0] = 0;
  tinfo_udt_member = find_tinfo_udt_member(v19, v18, 0);
  clear_tinfo_t(v24);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, v11);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20, v11);
  }
  if ( tinfo_udt_member == -1
    && (v33[40 * v10 + 1] == 5
      ? (v13 = *(_QWORD *)&v33[40 * v10 + 8], v14 = 0)
      : (v13 = *(_QWORD *)&v33[40 * v10 + 16], v14 = 1),
        !(unsigned __int8)insn_create_stkvar(&v29, (char *)&v29 + 40 * (int)v10 + 40, v13, v14) && (a4 & 2) != 0) )
  {
    v15 = 0;
  }
  else
  {
    v15 = (unsigned __int8)op_stkvar(a1, a2);
  }
  v17 = v15;
  clear_tinfo_t(&v18);
  return v17;
}
