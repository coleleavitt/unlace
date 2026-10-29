unsigned __int64 __fastcall sub_A8A430(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  size_t v11; // rax
  __int64 v12; // [rsp-8h] [rbp-20h]

  v6 = a1[185];
  if ( !v6 )
  {
    v9 = sub_A750A0((__int64)a1, a1[2392], nullptr, 0, nullptr, 0, 0);
    v10 = sub_A74EC0((__int64)a1, v9);
    v11 = j__strlen("id");
    v6 = sub_A8A070(a1, v10, "id", v11);
    a1[185] = v6;
    a3 = v12;
  }
  v7 = *(_QWORD *)(v6 + 48);
  if ( v7 )
    return v7 & 0xFFFFFFFFFFFFFFF0LL;
  else
    return sub_A7AA70((__int64)a1, v6, a3, a4, a5, a6);
}
