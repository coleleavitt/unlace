__int64 __fastcall sub_68B4C0(__m128i *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r9
  _QWORD *v9; // r13
  char *v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  int v13; // eax
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+8h] [rbp-1C0h]
  unsigned __int8 v19; // [rsp+1Fh] [rbp-1A9h] BYREF
  __int128 v20; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-198h]
  __int64 v22; // [rsp+38h] [rbp-190h]
  __int64 v23; // [rsp+40h] [rbp-188h]
  char v24; // [rsp+48h] [rbp-180h] BYREF
  _QWORD v25[8]; // [rsp+188h] [rbp-40h] BYREF

  v6 = a3;
  v7 = a1->m128i_i64[0];
  v25[0] = __readfsqword(0x28u);
  v17 = 0;
  v9 = (_QWORD *)sub_814BA0(v7, a2, a3, &v19);
  if ( !v9 )
  {
    if ( a4 )
      return (unsigned int)v19 + 1;
    v15 = sub_3BE900(a1, v6, 4);
    if ( (~(_WORD)v15 & 0x600) != 0 )
      return (unsigned int)v19 + 1;
    if ( (v15 & 0x10000000) == 0 )
      return (unsigned int)v19 + 1;
    v16 = is_align_insn(v6);
    v17 = v16;
    if ( v16 <= 0 )
      return (unsigned int)v19 + 1;
    v6 += v16;
    v9 = (_QWORD *)sub_814BA0(a1->m128i_i64[0], a2, v6, &v19);
    if ( !v9 )
      return (unsigned int)v19 + 1;
  }
  v21 = -1;
  v10 = &v24;
  v22 = 0;
  v23 = 0;
  v20 = -1;
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
  while ( v10 != (char *)v25 );
  decode_insn(&v20, v6, v25, 0, 0, v8, 0.0);
  if ( (unsigned __int16)v22 != *(_DWORD *)(a1[1].m128i_i64[0] + 132) )
    return sub_68A440(a1, a2, v6, v17, v9, a4);
  v11 = v6 + *(unsigned int *)v9;
  v12 = v21 + WORD1(v22);
  if ( v12 >= v11 )
    return 1;
  while ( 1 )
  {
    v13 = is_align_insn(v12);
    if ( !v13 )
      break;
    v12 += v13;
    if ( v12 >= v11 )
      return 1;
  }
  if ( v12 >= v11 )
    return 1;
  else
    return sub_68A440(a1, a2, v6, v17, v9, a4);
}
