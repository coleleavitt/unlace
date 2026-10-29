char **__fastcall sub_66C710(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // r12d
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v23; // [rsp+8h] [rbp-30h]
  unsigned __int64 v24; // [rsp+18h] [rbp-20h]

  v4 = *(_QWORD *)(a2 + 1480);
  v24 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_79B370(a2, v4 + 2556) )
  {
    v6 = sub_79B3A0(*(_QWORD *)(a2 + 1480) + 2556LL, a2, 4294967294LL, 65);
    v7 = a3[1];
    v8 = *a3;
    v9 = v6;
    if ( a3[2] < (unsigned __int64)(v7 + 1) )
    {
      v19 = qvector_reserve(a3, v8, v7 + 1, 24);
      v7 = a3[1];
      *a3 = v19;
      v8 = v19;
    }
    v10 = v8 + 24 * v7;
    *(_QWORD *)v10 = 0;
    *(_OWORD *)(v10 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v10);
    if ( v9 > 0 )
    {
      v12 = *(_QWORD *)(a2 + 1480);
      v23 = 0;
      ptr = nullptr;
      sub_79B6F0(v12 + 2556, a2, &ptr, 0, 83);
      v13 = a3[1];
      v14 = *a3;
      if ( a3[2] < (unsigned __int64)(v13 + 1) )
      {
        v20 = qvector_reserve(a3, v14, v13 + 1, 24);
        *a3 = v20;
        v13 = a3[1];
        v14 = v20;
      }
      v15 = v14 + 24 * v13;
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      ++a3[1];
      sub_3573A0((char **)v15);
      if ( ptr )
      {
        *(_QWORD *)&v23 = 0;
        qfree(ptr);
      }
    }
  }
  if ( !(unsigned __int8)sub_79B370(a2, *(_QWORD *)(a2 + 1480) + 2560LL) )
    return (char **)(v24 - __readfsqword(0x28u));
  sub_79B3A0(*(_QWORD *)(a2 + 1480) + 2560LL, a2, 0, 65);
  v16 = a3[1];
  v17 = *a3;
  if ( a3[2] < (unsigned __int64)(v16 + 1) )
  {
    v21 = qvector_reserve(a3, v17, v16 + 1, 24);
    v16 = a3[1];
    *a3 = v21;
    v17 = v21;
  }
  v18 = v17 + 24 * v16;
  *(_QWORD *)v18 = 0;
  *(_OWORD *)(v18 + 8) = 0;
  ++a3[1];
  return sub_3573A0((char **)v18);
}

