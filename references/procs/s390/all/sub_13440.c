__int64 sub_13440()
{
  unsigned __int64 *v0; // rax
  int v1; // edx
  __int64 result; // rax
  __int128 v3; // [rsp+0h] [rbp-178h] BYREF
  __int64 v4; // [rsp+10h] [rbp-168h]
  __int64 v5; // [rsp+18h] [rbp-160h]
  __int64 v6; // [rsp+20h] [rbp-158h]
  char v7; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v8; // [rsp+168h] [rbp-10h] BYREF

  v8 = __readfsqword(0x28u);
  v0 = (unsigned __int64 *)&v7;
  v3 = -1;
  v4 = -1;
  v5 = 0;
  v6 = 0;
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
  while ( v0 != &v8 );
  v1 = decode_insn(&v3);
  result = 0;
  if ( v1 > 0 )
    return 2 * (unsigned int)((_WORD)v5 == 1104);
  return result;
}
