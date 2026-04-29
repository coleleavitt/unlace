__int64 __fastcall sub_3A7980(__int64 *a1, __int64 a2, int a3)
{
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // r9
  char *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD v17[2]; // [rsp+0h] [rbp-1C8h] BYREF
  char v18; // [rsp+10h] [rbp-1B8h]
  __int128 v19; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v20; // [rsp+30h] [rbp-198h]
  __int64 v21; // [rsp+38h] [rbp-190h]
  __int64 v22; // [rsp+40h] [rbp-188h]
  char v23; // [rsp+48h] [rbp-180h] BYREF
  _QWORD v24[8]; // [rsp+188h] [rbp-40h] BYREF

  v24[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)xrefblk_t_first_to(v17, a2, 8) )
    return 0;
  v4 = 0;
  do
  {
    if ( v18 )
      goto LABEL_8;
    if ( (~((unsigned __int16)get_flags_ex(v17[0], 4) >> 8) & 6) != 0 )
      goto LABEL_8;
    v20 = -1;
    v9 = &v23;
    v21 = 0;
    v22 = 0;
    v19 = -1;
    do
    {
      *(_WORD *)v9 = 0;
      v9 += 40;
      *((_WORD *)v9 - 19) = 0;
      *((_WORD *)v9 - 18) = 0;
      *((_DWORD *)v9 - 2) = 0;
      *((_WORD *)v9 - 17) = 0;
      *((_OWORD *)v9 - 2) = 0;
      *((_QWORD *)v9 - 2) = 0;
    }
    while ( v24 != (_QWORD *)v9 );
    v10 = v17[0];
    if ( (unsigned int)decode_insn(&v19, v17[0], v24, 0, 0, v8, 0.0) )
    {
      if ( (unsigned __int8)is_call_insn(&v19, v10, v11, v12, v13, v14) || (unsigned __int8)is_indirect_jump_insn(&v19) )
      {
LABEL_8:
        if ( a1 )
        {
          v5 = a1[1];
          v6 = v17[0];
          v7 = *a1;
          if ( a1[2] < (unsigned __int64)(v5 + 1) )
          {
            v15 = qvector_reserve(a1, v7, v5 + 1, 8);
            *a1 = v15;
            v7 = v15;
            v5 = a1[1];
          }
          *(_QWORD *)(v7 + 8 * v5) = v6;
          ++a1[1];
        }
        if ( ++v4 >= a3 )
        {
          if ( a3 )
            break;
        }
      }
    }
  }
  while ( (unsigned __int8)xrefblk_t_next_to(v17) );
  return v4;
}
