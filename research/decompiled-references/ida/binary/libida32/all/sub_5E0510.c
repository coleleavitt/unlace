__int64 __fastcall sub_5E0510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  char v9; // dl
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  char v13; // al
  int v14; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v9 = sub_727BB0(&v14, a1);
  result = 3;
  if ( v9 )
  {
    v11 = a6 + 464;
    v12 = a6 + 448;
    if ( a4 )
      v12 = v11;
    v13 = *(_BYTE *)(v12 + 9);
    if ( v14 )
      *(_BYTE *)(v12 + 9) = a5 | v13;
    else
      *(_BYTE *)(v12 + 9) = v13 & ~a5;
    return 0;
  }
  return result;
}

