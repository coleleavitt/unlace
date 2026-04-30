__int64 __fastcall struc_stroff_data_t__::vfunc_8(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, char a5)
{
  __int64 v7; // r9
  const char *v8; // r13
  unsigned int v9; // ebx
  char *v10; // rax
  unsigned __int64 v11; // rsi
  unsigned int v12; // ebx
  __int64 v14; // [rsp+0h] [rbp-1B8h] BYREF
  __int128 v15; // [rsp+8h] [rbp-1B0h]
  __int128 v16; // [rsp+20h] [rbp-198h] BYREF
  __int64 v17; // [rsp+30h] [rbp-188h]
  __int64 v18; // [rsp+38h] [rbp-180h]
  __int64 v19; // [rsp+40h] [rbp-178h]
  char v20; // [rsp+48h] [rbp-170h] BYREF
  _QWORD v21[6]; // [rsp+188h] [rbp-30h] BYREF

  v21[0] = __readfsqword(0x28u);
  v14 = 0;
  v15 = 0;
  sub_38ABA0(a1, &v14, a3);
  v8 = *(const char **)(a2 + 16);
  v9 = *(_DWORD *)(a2 + 24);
  v17 = -1;
  v18 = 0;
  v10 = &v20;
  v19 = 0;
  v16 = -1;
  do
  {
    *(_WORD *)v10 = 0;
    v10 += 40;
    *((_WORD *)v10 - 19) = 0;
    *((_WORD *)v10 - 18) = 0;
    *((_DWORD *)v10 - 2) = 0;
    *((_WORD *)v10 - 17) = 0;
    *((_OWORD *)v10 - 2) = 0;
    *((_QWORD *)v10 - 2) = 0;
  }
  while ( v21 != (_QWORD *)v10 );
  v11 = (unsigned __int64)v8;
  if ( (unsigned int)decode_insn(&v16, v8, v21, 0, 0, v7, 0.0)
    && (v11 = v9, v12 = op_stroff(&v16, v9, v14, (unsigned int)v15, a4), (_BYTE)v12) )
  {
    v11 = 128;
    if ( a5 )
      set_abits(v8, 128);
    else
      clr_abits(v8, 128);
  }
  else
  {
    v12 = 0;
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, (const char *)v11);
  }
  return v12;
}
