__int64 __fastcall sub_331F40(__int64 a1, unsigned int a2, unsigned int *a3, char a4)
{
  __int64 v8; // r9
  __int64 result; // rax
  const char *v10; // rsi
  int tinfo_udt_member; // r14d
  char *v12; // rax
  __int64 v13; // rsi
  __int128 *v14; // rdi
  __int64 v15; // rdx
  __int64 eah; // rax
  __int64 v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-238h] BYREF
  const char *v19; // [rsp+8h] [rbp-230h] BYREF
  _QWORD v20[2]; // [rsp+10h] [rbp-228h] BYREF
  __int64 v21; // [rsp+20h] [rbp-218h]
  __int128 v22; // [rsp+28h] [rbp-210h]
  __int64 v23; // [rsp+38h] [rbp-200h]
  __int128 v24; // [rsp+40h] [rbp-1F8h]
  _OWORD v25[3]; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v26; // [rsp+80h] [rbp-1B8h]
  int v27; // [rsp+88h] [rbp-1B0h]
  __int64 v28; // [rsp+90h] [rbp-1A8h]
  char v29; // [rsp+98h] [rbp-1A0h]
  __int128 v30; // [rsp+A0h] [rbp-198h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-188h]
  __int64 v32; // [rsp+B8h] [rbp-180h]
  __int64 v33; // [rsp+C0h] [rbp-178h]
  char v34; // [rsp+C8h] [rbp-170h] BYREF
  _QWORD v35[6]; // [rsp+208h] [rbp-30h] BYREF

  v35[0] = __readfsqword(0x28u);
  v18 = 0;
  sub_331AD0(&v18, a1, a2, 0, 0);
  if ( (a4 & 2) != 0 )
  {
    v19 = nullptr;
    if ( *a3 != 1 && *((_QWORD *)a3 + 33) + *((_QWORD *)a3 + 34) != v18
      || !(unsigned __int8)get_type_by_tid(&v19, *((_QWORD *)a3 + 1)) )
    {
      goto LABEL_5;
    }
    v10 = v19;
    v20[1] = 0;
    v21 = 0;
    v23 = 0;
    v26 = 1;
    v27 = -1;
    v28 = 0;
    v29 = 0;
    v20[0] = 8 * v18;
    v22 = 0;
    v24 = 0;
    v25[0] = 0;
    tinfo_udt_member = find_tinfo_udt_member(v20, v19, 0);
    clear_tinfo_t(v25);
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23, v10);
    }
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21, v10);
    }
    if ( tinfo_udt_member == -1 )
    {
LABEL_5:
      clear_tinfo_t(&v19);
      return 0;
    }
    clear_tinfo_t(&v19);
  }
  v31 = -1;
  v12 = &v34;
  v32 = 0;
  v33 = 0;
  v30 = -1;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 40;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *((_QWORD *)v12 - 2) = 0;
  }
  while ( v35 != (_QWORD *)v12 );
  if ( !(unsigned int)decode_insn(&v30, a1, v35, 0, 0, v8, 0.0) )
    v31 = a1;
  v13 = a2;
  v14 = &v30;
  if ( !(unsigned __int8)op_stroff(&v30, a2, a3 + 2, *a3, *((_QWORD *)a3 + 34)) )
    return 0;
  if ( !v18 )
  {
    v13 = 128;
    v14 = (__int128 *)a1;
    set_abits(a1, 128);
  }
  eah = get_eah(v14, v13, v15);
  v17 = *((_QWORD *)a3 + 33);
  if ( *(_DWORD *)(eah + 24) != 8 )
    v17 = (int)v17;
  result = 1;
  if ( v17 < 0 )
    return (unsigned __int8)toggle_sign(a1, a2);
  return result;
}
