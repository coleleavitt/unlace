__int64 __fastcall sub_BB2FE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbp
  __int64 v7; // [rsp-10h] [rbp-28h]

  result = sub_B72CF0(a2, *(_QWORD *)a1);
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    result = sub_BB26A0((const char **)a1, a2, 0, v3, v4, v5);
  v6 = *(_QWORD *)(a2 + 72);
  if ( v6 )
  {
    sub_995540(*(_QWORD *)a1, " = ");
    sub_F07C00(v6, *(_QWORD *)a1, 0, a1 + 8, *(_DWORD *)(a1 + 32), *(_QWORD *)(a1 + 24), (__int64)"\n", 1);
    return v7;
  }
  return result;
}
