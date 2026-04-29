__int64 __fastcall sub_3BCD70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r15d
  int v7; // r13d
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r13d
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v18; // [rsp+0h] [rbp-38h]
  __int64 v19; // [rsp+0h] [rbp-38h]
  __int64 v20; // [rsp+8h] [rbp-30h]
  __int64 v21; // [rsp+8h] [rbp-30h]
  __int64 v22; // [rsp+10h] [rbp-28h]
  __int64 v23; // [rsp+10h] [rbp-28h]
  __int64 v24; // [rsp+18h] [rbp-20h]
  __int64 v25; // [rsp+18h] [rbp-20h]

  v6 = 0;
  v7 = ((__int64 (__fastcall *)(__int64, const char *, const char *, _QWORD, __int64, __int64))callui)(
         129,
         "Edit/Comments/Enter",
         "hx:EditCmt",
         0,
         a5,
         a6);
  v14 = callui(129, "View/Open/Hex", "hx:GenPseudo", 0, v8, v9, v18, v20, v22, v24) | v7;
  do
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(a1 + 880);
      v16 = 80LL * v6;
      if ( (unsigned __int8)callui(127, v15 + v16 + 5824, v10, v11, v12, v13, v19, v21, v23, v25) )
        v14 |= callui(
                 129,
                 *(_QWORD *)(v16 + v15 + 5888),
                 *(_QWORD *)(v16 + v15 + 5832),
                 *(_DWORD *)(v16 + v15 + 5896) & 3,
                 v12,
                 v13,
                 v19,
                 v21,
                 v23,
                 v25);
      if ( v6 )
        break;
      v6 = 2;
    }
    ++v6;
  }
  while ( v6 != 10 );
  return v14;
}
