__int64 __fastcall sub_4C6C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9

  sub_4C6B70((__int64 *)a1, *(unsigned int *)(a1 + 1060), a3, a4, a5, a6);
  sub_4C6B70((__int64 *)a1, *(unsigned __int16 *)(a1 + 1058) | (*(unsigned __int16 *)(a1 + 1056) << 16), v6, v7, v8, v9);
  v10 = ea2node(*(_QWORD *)(a1 + 1064));
  sub_4C6B70((__int64 *)a1, v10, v11, v12, v13, v14);
  v15 = ea2node(*(_QWORD *)(a1 + 1048));
  return sub_4C6B70((__int64 *)a1, v15, v16, v17, v18, v19);
}
