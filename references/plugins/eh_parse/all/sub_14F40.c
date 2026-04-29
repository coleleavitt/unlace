__int64 __fastcall sub_14F40(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  char *v5; // rax
  __int64 v6; // rdx
  int v7; // r14d
  __int64 result; // rax
  __int128 v9; // [rsp+0h] [rbp-198h] BYREF
  __int64 v10; // [rsp+10h] [rbp-188h]
  __int64 v11; // [rsp+18h] [rbp-180h]
  __int64 v12; // [rsp+20h] [rbp-178h]
  char v13; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int16 v14; // [rsp+2Eh] [rbp-16Ah]
  _QWORD v15[6]; // [rsp+168h] [rbp-30h] BYREF

  v3 = a2;
  v15[0] = __readfsqword(0x28u);
  v5 = &v13;
  v9 = -1;
  v10 = -1;
  v11 = 0;
  v12 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 40;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *((_QWORD *)v5 - 2) = 0;
  }
  while ( v15 != (_QWORD *)v5 );
  if ( a3 >= a2 && (int)decode_insn(&v9, a2, v15, 0.0) > 0 && (_WORD)v11 == 92 )
  {
    v7 = v14;
    do
    {
      v3 += WORD1(v11);
      if ( v3 >= a3 || (int)decode_insn(&v9, v3, v6, 0.0) <= 0 )
        break;
      if ( sub_13BC0((__int64)&v9, v7, 1u) )
      {
        if ( (_WORD)v11 == 122 )
        {
          result = sub_136B0(a1);
          if ( result != -1 )
            return result;
        }
      }
    }
    while ( !sub_13BC0((__int64)&v9, v7, 0) );
  }
  return -1;
}
