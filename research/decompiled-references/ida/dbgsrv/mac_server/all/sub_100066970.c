/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100066970
// Address: 0x0000000100066970

//----- (0000000100066970) ----------------------------------------------------
__int64 __fastcall sub_100066970(__int64 *a1, char a2, unsigned __int64 *a3)
{
  int v4; // r14d
  __int64 v5; // r15
  __int64 v6; // r12
  int v7; // eax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  char *v10; // rax
  const void *v11; // rsi
  unsigned __int64 v12; // rax
  void *v13; // rdi
  unsigned __int64 *v15; // [rsp+0h] [rbp-70h]
  __int128 v18; // [rsp+20h] [rbp-50h] BYREF
  __int128 v19; // [rsp+30h] [rbp-40h]

  v4 = unpack_dd(a3, a3[1]);
  if ( a1[1] != v4 )
  {
    v19 = 0;
    v18 = 0;
    sub_100067170((__int64)a1, v4, (unsigned __int64)&v18);
    if ( *((_QWORD *)&v18 + 1) )
    {
      *(_QWORD *)&v19 = 0;
      qfree(*((void **)&v18 + 1));
    }
  }
  if ( v4 > 0 )
  {
    v5 = 0;
    v15 = a3 + 1;
    do
    {
      v6 = *a1;
      *(_DWORD *)(v6 + v5) = unpack_dd(a3, a3[1]);
      v7 = unpack_dd(a3, *v15);
      v8 = v7;
      v9 = *(_QWORD *)(v6 + v5 + 16);
      if ( v9 >= v7 )
      {
        if ( v9 != v7 )
        {
          LOBYTE(v18) = 0;
          sub_10001CE90(v6 + v5 + 8, v7, (unsigned __int8 *)&v18);
        }
      }
      else
      {
        v10 = *(char **)(v6 + v5 + 8);
        if ( *(_QWORD *)(v6 + v5 + 24) < v8 )
        {
          v10 = (char *)qvector_reserve(v6 + v5 + 8, *(void **)(v6 + v5 + 8), v8, 1u);
          *(_QWORD *)(v6 + v5 + 8) = v10;
          v9 = *(_QWORD *)(v6 + v5 + 16);
        }
        __bzero(&v10[v9], v8 - v9);
        *(_QWORD *)(v6 + v5 + 16) = v8;
      }
      if ( a2 )
      {
        *(_DWORD *)(v6 + v5 + 4) = unpack_dd(a3, a3[1]);
        v11 = (const void *)*a3;
        v12 = *a3 + v8;
        if ( v12 >= *a3 && v12 <= *v15 )
        {
          v13 = *(void **)(v6 + v5 + 8);
          *a3 = v12;
          memcpy(v13, v11, v8);
        }
      }
      v5 += 32;
    }
    while ( 32LL * v4 != v5 );
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
