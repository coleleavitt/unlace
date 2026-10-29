__int64 __fastcall sub_8F4110(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r13
  _QWORD *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = (_QWORD *)sub_A1A5A0(a2, 24);
  v3 = *v2;
  v4 = v2;
  if ( v3 == sub_2575D20(a2, 24, v5) )
    sub_257D000(a1, v4, v6, v7);
  else
    sub_2576960(a1, v4);
  sub_A1A5E0(a2, 24);
  return a1;
}

