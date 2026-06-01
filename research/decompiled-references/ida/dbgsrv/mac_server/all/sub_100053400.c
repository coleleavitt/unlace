/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100053400
// Address: 0x0000000100053400

//----- (0000000100053400) ----------------------------------------------------
char __fastcall sub_100053400(__int64 a1, __int64 a2)
{
  int v2; // r15d
  _DWORD *v3; // rax
  __int128 v5; // [rsp+0h] [rbp-40h] BYREF
  __int64 v6; // [rsp+10h] [rbp-30h]

  v5 = 0;
  v6 = 0;
  v2 = *(_DWORD *)(a1 + 24);
  sub_100053220(a1 + 28, (__int64)&v5, v2 == 25);
  v3 = (_DWORD *)(a1 + 32);
  if ( v2 == 25 )
    v3 = (_DWORD *)(a1 + 2088);
  sub_100002D00(a2, "%s|%d|%d|%s", *(const char **)a1, *(_DWORD *)(a1 + 24), *v3, (const char *)v5);
  if ( (_QWORD)v5 )
  {
    *((_QWORD *)&v5 + 1) = 0;
    qfree((void *)v5);
  }
  return 1;
}
