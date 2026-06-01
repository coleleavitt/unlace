void __fastcall sub_1665460(__int64 a1, __int64 a2)
{
  int v3; // esi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  if ( *(_BYTE *)(a1 + 844) )
  {
    v9 = sub_B328F0(*(_QWORD *)(a1 + 248), 0, 0);
    sub_B8CC60(a2, v9, v10, v11, v12, v13);
  }
  v3 = *(_DWORD *)(a1 + 1140);
  if ( v3 != ((*(_BYTE *)(*(_QWORD *)(a1 + 232) + 212LL) >> 2) & 3) )
  {
    v4 = sub_B31300(*(_QWORD *)(a1 + 248), v3, 0);
    sub_B8CC60(a2, v4, v5, v6, v7, v8);
  }
}
