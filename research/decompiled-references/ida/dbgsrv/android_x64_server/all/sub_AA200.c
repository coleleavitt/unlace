/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AA200
// Address: 0x00000000000AA200

//----- (00000000000AA200) ----------------------------------------------------
unsigned __int64 __fastcall sub_AA200(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r13
  int v7; // r14d
  __int128 *v8; // r15
  __int128 *v9; // r12
  __int128 *v10; // rax
  _DWORD *v11; // rax
  __int128 *v12; // rbx
  __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // rcx
  char **v17; // [rsp+0h] [rbp-98h]
  __int64 v19; // [rsp+20h] [rbp-78h]
  __int128 *v20; // [rsp+28h] [rbp-70h] BYREF
  __int128 v21; // [rsp+30h] [rbp-68h] BYREF
  __int128 v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+50h] [rbp-48h]
  unsigned __int64 v24; // [rsp+60h] [rbp-38h]

  v3 = a2;
  v24 = __readfsqword(0x28u);
  v21 = 0;
  v20 = &v21;
  v4 = a3 + *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 88) < v4 )
    *(_QWORD *)(a1 + 72) = qvector_reserve(a1 + 72, *(char **)(a1 + 72), v4, 0x18u);
  if ( a3 )
  {
    v5 = 0;
    v17 = (char **)(a1 + 72);
    do
    {
      v6 = 3 * v5;
      if ( !*(_QWORD *)(v3 + 24 * v5 + 8) )
      {
        if ( !(_BYTE)under_debugger )
          interr(1619);
LABEL_26:
        BUG();
      }
      v7 = *(unsigned __int8 *)(v3 + 24 * v5);
      v8 = (__int128 *)v21;
      v9 = &v21;
      if ( !(_QWORD)v21 )
      {
        v8 = &v21;
        goto LABEL_14;
      }
      while ( *((_DWORD *)v8 + 7) <= v7 )
      {
        if ( *((_DWORD *)v8 + 7) >= v7 )
          goto LABEL_14;
        v9 = (__int128 *)((char *)v8 + 8);
        v10 = *((__int128 **)v8 + 1);
        if ( !v10 )
          goto LABEL_14;
LABEL_8:
        v8 = v10;
      }
      v10 = *(__int128 **)v8;
      v9 = v8;
      if ( *(_QWORD *)v8 )
        goto LABEL_8;
      v9 = v8;
LABEL_14:
      v19 = v5;
      if ( *(_QWORD *)v9 )
      {
        if ( !(_BYTE)under_debugger )
          interr(1620);
        goto LABEL_26;
      }
      v11 = operator new(0x20u);
      v12 = (__int128 *)(v3 + 8 * v6);
      v11[7] = v7;
      *(_OWORD *)v11 = 0;
      *((_QWORD *)v11 + 2) = v8;
      *(_QWORD *)v9 = v11;
      if ( *(_QWORD *)v20 )
      {
        v20 = *(__int128 **)v20;
        v11 = *(_DWORD **)v9;
      }
      sub_4A450((__int64 *)v21, (__int64 *)v11);
      ++*((_QWORD *)&v21 + 1);
      v23 = *((_QWORD *)v12 + 2);
      v22 = *v12;
      v13 = *(_QWORD *)(a1 + 80);
      if ( *(_QWORD *)(a1 + 88) >= (unsigned __int64)(v13 + 1) )
      {
        v14 = *v17;
        v3 = a2;
      }
      else
      {
        v14 = (char *)qvector_reserve((__int64)v17, *v17, v13 + 1, 0x18u);
        v3 = a2;
        *(_QWORD *)(a1 + 72) = v14;
        v13 = *(_QWORD *)(a1 + 80);
      }
      v15 = 3 * v13;
      *(_QWORD *)&v14[8 * v15 + 16] = v23;
      *(_OWORD *)&v14[8 * v15] = v22;
      ++*(_QWORD *)(a1 + 80);
      v5 = v19 + 1;
    }
    while ( v19 + 1 < a3 );
  }
  sub_AB1B0((__int64)&v20, (_QWORD *)v21);
  return __readfsqword(0x28u);
}
// 158B40: using guessed type __int64 under_debugger;
