__int64 sub_800C0()
{
  unsigned __int64 *v0; // rax
  int v1; // edx
  __int64 result; // rax
  char v3; // al
  int v4; // edx
  __int128 v5; // [rsp+0h] [rbp-178h] BYREF
  __int64 v6; // [rsp+10h] [rbp-168h]
  __int64 v7; // [rsp+18h] [rbp-160h]
  __int64 v8; // [rsp+20h] [rbp-158h]
  char v9; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v10; // [rsp+168h] [rbp-10h] BYREF

  v10 = __readfsqword(0x28u);
  v5 = -1;
  v0 = (unsigned __int64 *)&v9;
  v6 = -1;
  v7 = 0;
  v8 = 0;
  do
  {
    *(_WORD *)v0 = 0;
    v0 += 5;
    *((_WORD *)v0 - 19) = 0;
    *((_WORD *)v0 - 18) = 0;
    *((_DWORD *)v0 - 2) = 0;
    *((_WORD *)v0 - 17) = 0;
    *((_OWORD *)v0 - 2) = 0;
    *(v0 - 2) = 0;
  }
  while ( &v10 != v0 );
  v1 = decode_insn();
  result = 14;
  if ( v1 > 0 && (v8 & 0xF) != 0xE )
  {
    v3 = sub_25F60((__int64)&v5);
    v4 = 16;
    if ( !v3 )
      v4 = 16 * (unsigned __int8)(2 * sub_32D40((__int64)&v5));
    return v4 | (unsigned int)(v8 & 0xF);
  }
  return result;
}
