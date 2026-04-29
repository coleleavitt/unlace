__int64 __fastcall sub_3C5800(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned __int64 *v8; // rax
  __int128 v9; // [rsp+0h] [rbp-198h] BYREF
  __int64 v10; // [rsp+10h] [rbp-188h]
  __int64 v11; // [rsp+18h] [rbp-180h]
  __int64 v12; // [rsp+20h] [rbp-178h]
  char v13; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+168h] [rbp-30h] BYREF

  v14 = __readfsqword(0x28u);
  result = 1;
  if ( a3 != -1 )
  {
    v9 = -1;
    v8 = (unsigned __int64 *)&v13;
    v10 = -1;
    v11 = 0;
    v12 = 0;
    do
    {
      *(_WORD *)v8 = 0;
      v8 += 5;
      *((_WORD *)v8 - 19) = 0;
      *((_WORD *)v8 - 18) = 0;
      *((_DWORD *)v8 - 2) = 0;
      *((_WORD *)v8 - 17) = 0;
      *((_OWORD *)v8 - 2) = 0;
      *(v8 - 2) = 0;
    }
    while ( &v14 != v8 );
    if ( (int)decode_insn(&v9, a3, 0, 0, 0, a6, 0.0) > 0 )
    {
      return sub_3C55D0(a1, a2, (__int64)&v9, a4);
    }
    else
    {
      if ( !a4 )
        sub_2B4E70((__int64)"AUTOHIDE NONE\nCannot decode instruction at %a", 0.0);
      return 0;
    }
  }
  return result;
}
