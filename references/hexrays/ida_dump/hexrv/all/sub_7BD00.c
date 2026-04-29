unsigned __int64 __fastcall sub_7BD00(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rax
  __int128 v7; // rt0
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v10[0] = __readfsqword(0x28u);
  v2 = pack_dd(&v9, v10, *(unsigned int *)(a2 + 8));
  sub_7B360(a1, (__int64)&v9, v2 - (_QWORD)&v9);
  v3 = *(_QWORD **)a2;
  v4 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
  if ( v4 != *(_QWORD *)a2 )
  {
    do
    {
      v5 = *v3 - a1[5];
      v6 = a1[5] - *v3;
      if ( v6 < 0 )
        v6 = *v3 - a1[5];
      v3 += 2;
      *(_QWORD *)&v7 = v5;
      *((_QWORD *)&v7 + 1) = v6;
      sub_7B540(a1, v7 >> 63);
      sub_7B540(a1, *(v3 - 1) - *(v3 - 2));
    }
    while ( (_QWORD *)v4 != v3 );
  }
  return v10[0] - __readfsqword(0x28u);
}
