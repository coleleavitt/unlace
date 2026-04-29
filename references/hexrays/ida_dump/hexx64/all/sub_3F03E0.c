__int64 __fastcall sub_3F03E0(__int64 a1, __int64 a2, int a3, char a4)
{
  const char *v7; // rax
  __int64 v8; // [rsp-8h] [rbp-40h]
  _QWORD v9[2]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v10; // [rsp+10h] [rbp-28h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 84) != 8 || ((a3 - 32) & 0xFFFFFFDF) != 0 || sub_CFF70(0x7D5u, 0, 0, 0, 1, 0, 0) <= 0 )
    return 0;
  if ( a3 == 32 )
  {
    v7 = "__m256i";
    if ( a4 )
      v7 = "__m256d";
  }
  else
  {
    v7 = "__m512d";
    if ( !a4 )
      v7 = "__m512i";
  }
  v9[1] = v7;
  v10 = 0;
  v9[0] = get_idati(2005, v8, 0);
  create_tinfo(a2, 61, 61, v9);
  return 1;
}
