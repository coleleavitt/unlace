__int64 sub_333000()
{
  __int64 v0; // rbp
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned int v9; // r13d
  unsigned __int64 *v10; // rdx
  __int64 v11; // [rsp+0h] [rbp-2B8h] BYREF
  __int64 v12; // [rsp+8h] [rbp-2B0h] BYREF
  char v13[256]; // [rsp+10h] [rbp-2A8h] BYREF
  __int128 v14; // [rsp+110h] [rbp-1A8h] BYREF
  __int64 v15; // [rsp+120h] [rbp-198h]
  __int64 v16; // [rsp+128h] [rbp-190h]
  __int64 v17; // [rsp+130h] [rbp-188h]
  char v18; // [rsp+138h] [rbp-180h] BYREF
  unsigned __int64 v19; // [rsp+278h] [rbp-40h] BYREF

  v19 = __readfsqword(0x28u);
  v0 = xmmword_8CC810;
  v1 = sub_331180(0, 0, 0);
  result = get_struct_operand(&v11, &v12, v13, v0, v1 & 0xF);
  if ( (_DWORD)result )
  {
    v3 = -1;
    if ( (int)result - 1 > 0 )
      v3 = *(_QWORD *)v13;
    set_abits(v0, 128);
    v4 = v12;
    v5 = v11;
    v7 = itext(1113, 128, v6);
    v9 = sub_1AD830(v7, v3, v5, v4, 1, v13);
    result = 1;
    if ( v9 )
    {
      v15 = -1;
      v10 = (unsigned __int64 *)&v18;
      v16 = 0;
      v17 = 0;
      v14 = -1;
      do
      {
        *(_WORD *)v10 = 0;
        v10 += 5;
        *((_WORD *)v10 - 19) = 0;
        *((_WORD *)v10 - 18) = 0;
        *((_DWORD *)v10 - 2) = 0;
        *((_WORD *)v10 - 17) = 0;
        *((_OWORD *)v10 - 2) = 0;
        *(v10 - 2) = 0;
      }
      while ( &v19 != v10 );
      if ( !(unsigned int)decode_insn(&v14, v0, v10, 0, 0, v8, 0.0) )
        v15 = v0;
      return (unsigned __int8)op_stroff(&v14, v1, v13, v9, v12);
    }
  }
  return result;
}
