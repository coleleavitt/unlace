/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005A40
// Address: 0x0000000100005A40

//----- (0000000100005A40) ----------------------------------------------------
__int64 __fastcall sub_100005A40(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  unsigned int v7; // eax
  __int64 (__fastcall **v8)(); // [rsp+0h] [rbp-70h] BYREF
  int v9; // [rsp+8h] [rbp-68h]
  __int128 v10; // [rsp+Ch] [rbp-64h]
  __int64 v11; // [rsp+1Ch] [rbp-54h]
  __int128 v12; // [rsp+28h] [rbp-48h]
  __int128 v13; // [rsp+38h] [rbp-38h]
  __int128 v14; // [rsp+48h] [rbp-28h]
  __int64 v15; // [rsp+58h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 1144);
  if ( !v2 )
    return 0;
  v3 = *a2;
  v4 = a1 + 1144;
  do
  {
    if ( *(_QWORD *)(v2 + 32) >= v3 )
      v4 = v2;
    v2 = *(_QWORD *)(v2 + 8LL * (*(_QWORD *)(v2 + 32) < v3));
  }
  while ( v2 );
  if ( v4 != a1 + 1144 && v3 >= *(_QWORD *)(v4 + 32) )
  {
    v9 = 4;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v8 = off_1000A74F0;
    v15 = a1;
    LOBYTE(v7) = sub_100005930(a1, &v8, (unsigned __int64 *)(v4 + 40));
    v5 = v7;
    v8 = off_1000A7540;
    if ( *((_QWORD *)&v12 + 1) )
    {
      *(_QWORD *)&v13 = 0;
      qfree(*((void **)&v12 + 1));
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
// 100005AEB: variable 'v7' is possibly undefined
// 1000A74F0: using guessed type __int64 (__fastcall *off_1000A74F0[7])();
// 1000A7540: using guessed type __int64 (__fastcall *off_1000A7540[7])();
