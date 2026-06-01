__int64 __fastcall sub_A8A2C0(_QWORD *a1)
{
  __int64 result; // rax
  size_t v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  unsigned __int64 v9; // rsi

  result = a1[205];
  if ( !result )
  {
    v2 = j__strlen("instancetype");
    v3 = sub_A8A250(a1);
    v8 = *(_QWORD *)(v3 + 48);
    if ( v8 )
      v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v9 = sub_A7AA70((__int64)a1, v3, v4, v5, v6, v7);
    result = sub_A8A070(a1, v9, "instancetype", v2);
    a1[205] = result;
  }
  return result;
}
