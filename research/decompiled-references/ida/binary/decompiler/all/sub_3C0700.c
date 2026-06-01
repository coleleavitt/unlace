__int64 __fastcall sub_3C0700(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  int v5; // ebx
  unsigned __int64 *v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int128 v12; // [rsp+0h] [rbp-198h] BYREF
  __int64 v13; // [rsp+10h] [rbp-188h]
  __int64 v14; // [rsp+18h] [rbp-180h]
  __int64 v15; // [rsp+20h] [rbp-178h]
  char v16; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v17; // [rsp+168h] [rbp-30h] BYREF

  v17 = __readfsqword(0x28u);
  result = 1;
  if ( a3 != -1 )
  {
    v5 = a3;
    v12 = -1;
    v7 = (unsigned __int64 *)&v16;
    v13 = -1;
    v14 = 0;
    v15 = 0;
    do
    {
      *(_WORD *)v7 = 0;
      v7 += 5;
      *((_WORD *)v7 - 19) = 0;
      *((_WORD *)v7 - 18) = 0;
      *((_DWORD *)v7 - 2) = 0;
      *((_WORD *)v7 - 17) = 0;
      *((_OWORD *)v7 - 2) = 0;
      *(v7 - 2) = 0;
    }
    while ( &v17 != v7 );
    if ( (int)decode_insn() > 0 )
    {
      return sub_3C04D0(a1, a2, (__int64)&v12, a4);
    }
    else
    {
      if ( !a4 )
        sub_2B1D90((unsigned int)"AUTOHIDE NONE\nCannot decode instruction at %a", v5, v8, v9, v10, v11);
      return 0;
    }
  }
  return result;
}
