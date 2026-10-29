__int64 __fastcall sub_8EAE50(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rdi
  char v16; // [rsp+17h] [rbp-99h] BYREF
  __int64 v17[4]; // [rsp+18h] [rbp-98h] BYREF
  __int64 v18[4]; // [rsp+38h] [rbp-78h] BYREF
  __int64 v19[11]; // [rsp+58h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v7 = *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a1 + 800) = *a4;
  v8 = (_QWORD *)sub_A1A5A0(v7, 24);
  v9 = *v8;
  v11 = v8;
  v14 = sub_2575D20(v7, 24, v10);
  if ( v9 == v14 )
    sub_257D000(v17, v11, v12, v13);
  else
    sub_2576960(v17, v11);
  sub_A1A5E0(v7, 24);
  if ( v14 == v17[0] )
    sub_257CF50(v19, v17);
  else
    sub_25768A0(v19, v17);
  sub_2582620(v19, a2, a3, &v16);
  if ( v14 == v19[0] )
    sub_257CF50(v18, v19);
  else
    sub_25768A0(v18, v19);
  sub_5FF3B0(v19);
  v15 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  if ( v18[0] == v14 )
    sub_257CF50(v15, v18);
  else
    sub_25768A0(v15, v18);
  sub_5FF3B0(v18);
  sub_5FF3B0(v17);
  return 1;
}

