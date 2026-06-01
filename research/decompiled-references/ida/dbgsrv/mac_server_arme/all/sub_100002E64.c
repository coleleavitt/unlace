/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100002E64
// Address: 0x0000000100002E64

//----- (0000000100002E64) ----------------------------------------------------
__int64 __fastcall sub_100002E64(__int64 a1, unsigned int *a2, int a3)
{
  _DWORD *v6; // x0
  __int64 v7; // x8
  __int64 v8; // x10
  __int64 v9; // x22
  int v10; // w8
  char *v12; // x1
  __int64 v13; // x9
  unsigned __int64 v14; // x2
  char *v15; // x9

  sub_10005D17C();
  if ( !qword_1000A57A8 )
    goto LABEL_7;
  sub_10005D17C();
  if ( (qword_1000A57A8 & 0x1FFFFFFFFFFFFFFFLL) == 0 )
  {
LABEL_6:
    sub_10005D188();
LABEL_7:
    v9 = qwait_timed(a2, *(_DWORD *)(a1 + 528), a3 ^ 1u, a3 << 31 >> 31);
    v10 = *(_DWORD *)(a1 + 528);
    if ( (_DWORD)v9 != v10 && (unsigned int)(v9 - 1) <= 0xFFFFFFFD )
    {
      v12 = (char *)qword_1000A57A0;
      v13 = qword_1000A57A8;
      v14 = qword_1000A57A8 + 1;
      if ( qword_1000A57B0 < (unsigned __int64)(qword_1000A57A8 + 1) )
      {
        v12 = (char *)qvector_reserve(&qword_1000A57A0, (_QWORD *)qword_1000A57A0, v14, 8u);
        qword_1000A57A0 = (__int64)v12;
        v13 = qword_1000A57A8;
        v14 = qword_1000A57A8 + 1;
        v10 = *(_DWORD *)(a1 + 528);
      }
      v15 = &v12[8 * v13];
      qword_1000A57A8 = v14;
      *(_DWORD *)v15 = v10;
      *((_DWORD *)v15 + 1) = *a2;
    }
    goto LABEL_15;
  }
  v6 = (_DWORD *)qword_1000A57A0;
  v7 = qword_1000A57A0 + 8;
  v8 = 8 * qword_1000A57A8;
  while ( *v6 != *(_DWORD *)(a1 + 528) )
  {
    v6 += 2;
    v7 += 8;
    v8 -= 8;
    if ( !v8 )
      goto LABEL_6;
  }
  *a2 = v6[1];
  memmove(v6, v6 + 2, qword_1000A57A0 + 8 * qword_1000A57A8 - v7);
  --qword_1000A57A8;
  sub_10005D188();
  v9 = *(unsigned int *)(a1 + 528);
LABEL_15:
  sub_10005D188();
  return v9;
}
// 1000A57A0: using guessed type __int64 qword_1000A57A0;
// 1000A57A8: using guessed type __int64 qword_1000A57A8;
// 1000A57B0: using guessed type __int64 qword_1000A57B0;
