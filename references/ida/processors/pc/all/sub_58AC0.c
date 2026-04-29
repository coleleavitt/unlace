unsigned __int64 __fastcall sub_58AC0(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // r13
  unsigned __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int128 v8; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v9; // [rsp+10h] [rbp-198h]
  __int64 v10; // [rsp+18h] [rbp-190h]
  __int64 v11; // [rsp+20h] [rbp-188h]
  _BYTE v12[16]; // [rsp+28h] [rbp-180h] BYREF
  __int64 v13; // [rsp+38h] [rbp-170h]
  char v14; // [rsp+51h] [rbp-157h]
  unsigned __int64 v15; // [rsp+168h] [rbp-40h] BYREF

  v15 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_6B2B0(a1, 2) && (unsigned __int8)sub_236C0(a1, a1 + 40) )
  {
    v2 = 0;
    if ( *(_BYTE *)(a1 + 41) == 4 )
      v2 = *(_QWORD *)(a1 + 56);
    v9 = -1;
    v10 = 0;
    v3 = get_dtype_size() + v2;
    v4 = (unsigned __int64 *)v12;
    v11 = 0;
    v8 = -1;
    do
    {
      *(_WORD *)v4 = 0;
      v4 += 5;
      *((_WORD *)v4 - 19) = 0;
      *((_WORD *)v4 - 18) = 0;
      *((_DWORD *)v4 - 2) = 0;
      *((_WORD *)v4 - 17) = 0;
      *((_OWORD *)v4 - 2) = 0;
      *(v4 - 2) = 0;
    }
    while ( &v15 != v4 );
    v5 = *(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26);
    v6 = 8;
    while ( (unsigned int)decode_insn() && (unsigned __int16)(v10 - 16) > 2u )
    {
      if ( (unsigned __int8)sub_6B2B0(&v8, 2) && (unsigned __int8)sub_236C0(&v8, v12) )
      {
        v7 = 0;
        if ( v12[1] == 4 )
          v7 = v13;
        if ( v3 == v7 )
        {
          if ( v14 == 5 )
            create_strlit();
          return v15 - __readfsqword(0x28u);
        }
      }
      v5 += WORD1(v10);
      if ( !--v6 )
        return v15 - __readfsqword(0x28u);
    }
  }
  return v15 - __readfsqword(0x28u);
}
