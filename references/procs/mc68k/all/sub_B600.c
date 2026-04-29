bool __fastcall sub_B600(__int64 a1)
{
  char *v1; // rax
  int v2; // edx
  bool result; // al
  char refinfo; // al
  __int64 v5; // rdx
  _QWORD v6[4]; // [rsp-8h] [rbp-198h] BYREF
  __int128 v7; // [rsp+18h] [rbp-178h] BYREF
  __int64 v8; // [rsp+28h] [rbp-168h]
  __int64 v9; // [rsp+30h] [rbp-160h]
  __int64 v10; // [rsp+38h] [rbp-158h]
  char v11; // [rsp+40h] [rbp-150h] BYREF
  _QWORD v12[2]; // [rsp+180h] [rbp-10h] BYREF

  v12[0] = __readfsqword(0x28u);
  v1 = &v11;
  v7 = -1;
  v8 = -1;
  v9 = 0;
  v10 = 0;
  do
  {
    *(_WORD *)v1 = 0;
    v1 += 40;
    *((_WORD *)v1 - 19) = 0;
    *((_WORD *)v1 - 18) = 0;
    *((_DWORD *)v1 - 2) = 0;
    *((_WORD *)v1 - 17) = 0;
    *((_OWORD *)v1 - 2) = 0;
    *((_QWORD *)v1 - 2) = 0;
  }
  while ( v12 != (_QWORD *)v1 );
  v2 = decode_insn(&v7, *(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26), v12, 0.0);
  result = 0;
  if ( v2 > 0 )
  {
    refinfo = get_refinfo(v6, v8, 0);
    v5 = -1;
    if ( refinfo )
      v5 = v6[1];
    return *(_QWORD *)(a1 + 56) + 16LL * (_QWORD)v7 == v5;
  }
  return result;
}
