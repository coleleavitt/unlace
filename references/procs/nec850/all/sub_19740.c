__int64 __fastcall sub_19740(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 *v4; // rax
  unsigned int v5; // r14d
  __int64 v6; // rax
  int v7; // r15d
  __int64 v8; // rax
  void *v9; // r9
  __int16 v10; // ax
  __int64 v12; // [rsp+10h] [rbp-1D8h] BYREF
  void *v13; // [rsp+18h] [rbp-1D0h] BYREF
  __int64 v14; // [rsp+20h] [rbp-1C8h] BYREF
  __int128 v15; // [rsp+28h] [rbp-1C0h]
  __int128 v16; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-198h]
  __int64 v18; // [rsp+58h] [rbp-190h]
  __int64 v19; // [rsp+60h] [rbp-188h]
  unsigned __int8 v20[8]; // [rsp+68h] [rbp-180h] BYREF
  __int64 v21; // [rsp+70h] [rbp-178h]
  char v22; // [rsp+91h] [rbp-157h]
  __int16 v23; // [rsp+96h] [rbp-152h]
  unsigned __int64 v24; // [rsp+1A8h] [rbp-40h] BYREF

  v24 = __readfsqword(0x28u);
  v4 = v20;
  v16 = -1;
  v17 = -1;
  v18 = 0;
  v19 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( &v24 != (unsigned __int64 *)v4 );
  if ( (int)decode_insn(&v16, a2, 0.0) <= 0 || !a3[1] )
    return (unsigned int)-1;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(*a3 + 80 * v6 + 8);
    v14 = 0;
    sub_10260(a1, &v14, (__int64)&v16);
    if ( (v7 & 0xFFE0) == 0 && (v14 & (1LL << v7)) != 0 )
      break;
    v6 = (int)++v5;
    if ( (unsigned __int64)(int)v5 >= a3[1] )
      return (unsigned int)-1;
  }
  v12 = 0;
  copy_tinfo_t(&v12, *a3 + 80LL * (int)v5 + 64);
  v8 = *a3 + 80LL * (int)v5;
  v9 = &unk_255D0;
  if ( !*(_QWORD *)(v8 + 24) )
  {
    v10 = v18;
    v13 = &unk_255D0;
    if ( (_WORD)v18 != 37 )
      goto LABEL_11;
LABEL_16:
    if ( v22 == 1 && v23 == 3 && v20[1] == 5 && (unsigned __int8)remove_tinfo_pointer(&v12, &v13, 0) )
      apply_tinfo_to_stkarg(&v16, v20, v21, &v12, v13);
    goto LABEL_13;
  }
  v9 = *(void **)(v8 + 16);
  v10 = v18;
  v13 = v9;
  if ( (_WORD)v18 == 37 )
    goto LABEL_16;
LABEL_11:
  if ( v10 == 38 )
  {
    v15 = 0;
    v14 = 0;
    sub_19030(a1, (__int64)&v16, (__int64)&v14, v20, &v12, (__int64)v9);
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14);
    }
  }
  else
  {
    v5 |= 0x80000000;
  }
LABEL_13:
  clear_tinfo_t(&v12);
  return v5;
}
