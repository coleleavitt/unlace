__int64 __fastcall sub_8EC160(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rdx

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  *(_QWORD *)(a1 + 800) = *a3;
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A4E0(v4, 24);
  v6 = *a2;
  v7 = v5;
  if ( v6 == sub_2575D20(v4, 24, v8) )
    sub_257CF50(v7, a2);
  else
    sub_25768A0(v7, a2);
  return 1;
}

