bool __fastcall sub_B98360(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx

  if ( (unsigned int)sub_B77890((__int64)a1) != 15
    || sub_B979F0(a1)
    || sub_B77AF0((__int64)a1)
    || sub_B77A30((__int64)a1) )
  {
    return 0;
  }
  v6 = sub_B76070((__int64)a1, a2, v4, v5);
  if ( !sub_B979F0(a1) )
    v6 -= (unsigned __int8)sub_B771C0((__int64)a1, a2, v7, v8);
  if ( v6 != 1 )
    return 0;
  v9 = sub_B771C0((__int64)a1, a2, v7, v8);
  v12 = a1[15];
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8LL * v9) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 44 )
    return 0;
  v14 = sub_F68450(v13, a2, v12, v10, v11);
  v15 = sub_B8C330((__int64)a1);
  v16 = sub_B72690((__int64)(a1 + 9));
  if ( !v16 )
    BUG();
  v20 = *(_QWORD *)(v16 - 16);
  if ( v20 )
  {
    LOBYTE(v21) = v20 & 0xF0;
    v22 = v20 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v21 = sub_A7AA70(v15, v16 - 64, 0, v17, v18, v19);
    v22 = v21 & 0xFFFFFFFFFFFFFFF0LL;
  }
  return sub_B95DA0(
           *(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF8LL
         | ((unsigned __int8)*(_QWORD *)(v22 + 8) | (unsigned __int8)v21) & 7,
           v14);
}
