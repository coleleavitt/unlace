unsigned __int64 __fastcall sub_1A3D890(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v21[3]; // [rsp+10h] [rbp-18h] BYREF

  v20 = a2;
  if ( sub_1A3D840(a2, a2, a3, a4, a5, a6) )
  {
    v21[1] = a1;
    v21[0] = &v20;
    sub_15F0FC0(a1, *(_DWORD *)(v20 + 24), (__int64 (__fastcall *)(__int64))sub_1A3DBF0, (__int64)v21);
  }
  v11 = *(_QWORD *)(a1 + 248);
  v12 = *(_QWORD *)(v20 + 48);
  if ( v12 )
  {
    v13 = v12 & 0xFFFFFFFFFFFFFFF0LL;
    v14 = v13;
  }
  else
  {
    v13 = sub_A7AA70(v11, v20, v7, v8, v9, v10);
    v11 = *(_QWORD *)(a1 + 248);
    v14 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v15 = sub_B87BD0(
          v11 + 17536,
          *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)(v14 + 8) | (unsigned __int8)v13) & 7);
  return sub_B94670(v20 + 64, v15, v16, v20, v17, v18);
}
