__int64 __fastcall sub_8EB3A0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r14
  _QWORD *v5; // rax
  __int64 v6; // r13
  __int64 v7; // rdx
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 *v13; // rax
  bool v14; // bl
  __int64 v15[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v4 = *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a1 + 800) = *a3;
  v5 = (_QWORD *)sub_A1A5A0(v4, 24);
  v6 = *v5;
  v8 = v5;
  v11 = sub_2575D20(v4, 24, v7);
  if ( v6 == v11 )
    sub_257D000(v15, v8, v9, v10);
  else
    sub_2576960(v15, v8);
  sub_A1A5E0(v4, 24);
  v12 = *(_QWORD *)(a1 + 568);
  v13 = v15;
  if ( v15[0] == v11 )
    v13 = (__int64 *)v15[1];
  v14 = (*((_BYTE *)v13 + 20) & 7) != 3;
  *(_BYTE *)sub_A1A4E0(v12, 8) = v14;
  sub_5FF3B0(v15);
  return 1;
}

