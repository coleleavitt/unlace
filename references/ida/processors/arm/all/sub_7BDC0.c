__int64 __fastcall sub_7BDC0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // r14
  unsigned __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int128 v9; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v10; // [rsp+20h] [rbp-198h]
  __int64 v11; // [rsp+28h] [rbp-190h]
  __int64 v12; // [rsp+30h] [rbp-188h]
  char v13; // [rsp+38h] [rbp-180h] BYREF
  _BYTE v14[16]; // [rsp+60h] [rbp-158h] BYREF
  __int64 v15; // [rsp+70h] [rbp-148h]
  unsigned __int64 v16; // [rsp+178h] [rbp-40h] BYREF

  v16 = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 24) == 32 && (unsigned __int8)sub_30240(a1, a2, a2 + 80) )
  {
    v3 = 0;
    if ( *(_BYTE *)(a2 + 81) == 4 )
      v3 = *(_QWORD *)(a2 + 96);
    v10 = -1;
    v11 = 0;
    v4 = get_dtype_size() + v3;
    v5 = (unsigned __int64 *)&v13;
    v12 = 0;
    v9 = -1;
    do
    {
      *(_WORD *)v5 = 0;
      v5 += 5;
      *((_WORD *)v5 - 19) = 0;
      *((_WORD *)v5 - 18) = 0;
      *((_DWORD *)v5 - 2) = 0;
      *((_WORD *)v5 - 17) = 0;
      *((_OWORD *)v5 - 2) = 0;
      *(v5 - 2) = 0;
    }
    while ( &v16 != v5 );
    v6 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
    v7 = 8;
    while ( (get_flags_ex(v6, 4) & 0x10000) != 0 && (unsigned int)decode_insn() && !sub_2CF00((__int64)a1, (__int64)&v9) )
    {
      if ( (_WORD)v11 == 32 && (unsigned __int8)sub_30240(a1, (__int64)&v9, (__int64)v14) )
      {
        v8 = 0;
        if ( v14[1] == 4 )
          v8 = v15;
        if ( v4 == v8 )
        {
          if ( !(unsigned int)find_reg_value() )
            return 0;
          return create_strlit();
        }
      }
      v6 += WORD1(v11);
      if ( !--v7 )
        return 0;
    }
  }
  return 0;
}
