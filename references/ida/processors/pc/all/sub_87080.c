__int64 __fastcall sub_87080(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebx
  unsigned __int64 *v5; // rax
  __int64 v6; // rdx
  int v7; // ecx
  __int64 result; // rax
  __int128 v9; // [rsp+0h] [rbp-198h] BYREF
  __int64 v10; // [rsp+10h] [rbp-188h]
  __int64 v11; // [rsp+18h] [rbp-180h]
  __int64 v12; // [rsp+20h] [rbp-178h]
  _BYTE v13[320]; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+168h] [rbp-30h] BYREF

  v14 = __readfsqword(0x28u);
  v4 = a3;
  v9 = -1;
  v10 = -1;
  v5 = (unsigned __int64 *)v13;
  v11 = 0;
  v12 = 0;
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
  while ( &v14 != v5 );
  if ( a3 )
  {
    while ( (unsigned int)decode_insn() )
    {
      v6 = *(_QWORD *)(a1 + 16);
      v7 = *(_DWORD *)(v6 + 104);
      if ( (unsigned __int16)v11 >= v7
        && (unsigned __int16)v11 < *(int *)(v6 + 108)
        && (*(_BYTE *)(*(_QWORD *)(v6 + 112) + 16LL * ((unsigned __int16)v11 - v7) + 8) & 3) != 0 )
      {
        if ( (_WORD)v11 == 16 && v13[1] == 7 )
        {
          result = sub_7F350(a1, (__int64)&v9, (__int64)v13);
          if ( a2 + WORD1(v11) != result )
            return result;
        }
        return -1;
      }
      a2 += WORD1(v11);
      if ( !--v4 )
        return -1;
    }
  }
  return -1;
}
