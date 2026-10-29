__int64 __fastcall sub_E23300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  _WORD *v10; // rdx

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_BYTE **)(v6 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v6 + 24) )
  {
    sub_2257CD0(v6, 76);
  }
  else
  {
    v8 = (__int64)(v7 + 1);
    *(_QWORD *)(v6 + 32) = v7 + 1;
    *v7 = 76;
  }
  sub_E1BE40(a1, a2, v8, a4, a5);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_WORD **)(v9 + 32);
  if ( *(_QWORD *)(v9 + 24) - (_QWORD)v10 <= 1u )
    return sub_22581D0(v9, "0E", 2);
  *v10 = 17712;
  *(_QWORD *)(v9 + 32) += 2LL;
  return 17712;
}

