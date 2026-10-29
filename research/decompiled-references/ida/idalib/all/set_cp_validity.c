__int64 __fastcall set_cp_validity(unsigned int a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned int v4; // r14d
  unsigned int v6; // ebp
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v13; // rax

  v4 = a3;
  if ( a3 == -1 )
    v4 = a2 + 1;
  v6 = a2;
  v7 = (_QWORD *)sub_5A9ED0(qword_2CCB598, a1);
  v8 = v7[4];
  v9 = v7;
  v10 = v7[3];
  if ( v7[5] < (unsigned __int64)(v8 + 1) )
  {
    v13 = qvector_reserve(v7 + 3, v10, v8 + 1, 268);
    v8 = v9[4];
    v9[3] = v13;
    v10 = v13;
  }
  v11 = v10 + 268 * v8;
  *(_QWORD *)v11 = 0;
  *(_QWORD *)(v11 + 124) = 0;
  memset(
    (void *)((v11 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)v10 + 268 * (_DWORD)v8 - (((_DWORD)v11 + 8) & 0xFFFFFFF8) + 132) >> 3));
  *(_QWORD *)(v11 + 132) = 0;
  *(_QWORD *)(v11 + 256) = 0;
  memset(
    (void *)((v11 + 140) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v11 - (((_DWORD)v11 + 140) & 0xFFFFFFF8) + 264) >> 3));
  *(_WORD *)(v11 + 264) = 0;
  ++v9[4];
  if ( !a4 )
    sub_7A89E0(v11);
  sub_7A8A30(v11, v6);
  sub_7A89F0(v11);
  if ( v4 != -1 )
    v6 = v4 - 1;
  sub_7A8A30(v11, v6);
  return sub_5AAA60(v9);
}
