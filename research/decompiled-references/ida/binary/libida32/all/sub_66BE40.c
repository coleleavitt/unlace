__int64 __fastcall sub_66BE40(__m128i *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // r9
  _DWORD *v9; // r12
  char *v10; // rax
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  int v13; // eax
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+8h] [rbp-130h]
  unsigned __int8 v19; // [rsp+1Fh] [rbp-119h] BYREF
  __int64 v20; // [rsp+20h] [rbp-118h] BYREF
  __int64 v21; // [rsp+28h] [rbp-110h]
  __int64 v22; // [rsp+30h] [rbp-108h]
  char v23; // [rsp+38h] [rbp-100h] BYREF
  _QWORD v24[8]; // [rsp+F8h] [rbp-40h] BYREF

  v6 = a3;
  v7 = a1->m128i_i64[0];
  v24[0] = __readfsqword(0x28u);
  v17 = 0;
  v9 = (_DWORD *)sub_7F1870(v7, a2, a3, &v19);
  if ( !v9 )
  {
    if ( a4 )
      return (unsigned int)v19 + 1;
    v15 = sub_3B9AA0((__int64)a1, v6, 4);
    if ( (~(_WORD)v15 & 0x600) != 0 )
      return (unsigned int)v19 + 1;
    if ( (v15 & 0x10000000) == 0 )
      return (unsigned int)v19 + 1;
    v16 = is_align_insn(v6);
    v17 = v16;
    if ( v16 <= 0 )
      return (unsigned int)v19 + 1;
    v6 += v16;
    v9 = (_DWORD *)sub_7F1870(a1->m128i_i64[0], a2, v6, &v19);
    if ( !v9 )
      return (unsigned int)v19 + 1;
  }
  v20 = -1;
  v22 = 0;
  v21 = 0xFFFFFFFFLL;
  v10 = &v23;
  do
  {
    *(_WORD *)v10 = 0;
    v10 += 24;
    *((_WORD *)v10 - 11) = 0;
    *((_WORD *)v10 - 10) = 0;
    *((_DWORD *)v10 - 1) = 0;
    *((_WORD *)v10 - 9) = 0;
    *((_QWORD *)v10 - 2) = 0;
    *((_DWORD *)v10 - 2) = 0;
  }
  while ( v10 != (char *)v24 );
  decode_insn(&v20, v6, v24, 0, 0, v8);
  if ( WORD2(v21) != *(_DWORD *)(a1[1].m128i_i64[0] + 132) )
    return sub_66AE40(a1, a2, v6, v17, (__int64)v9, a4);
  v11 = v6 + *v9;
  v12 = v21 + HIWORD(v21);
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
    return sub_66AE40(a1, a2, v6, v17, (__int64)v9, a4);
}

