__int64 __fastcall sub_17A6A10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax

  v6 = sub_B80670(*(_QWORD *)(a1 + 248), 0, a3, a4, a5, a6);
  sub_B94AD0(*(__m128i **)(a1 + 544), v6, v7, v8, v9, v10);
  v14 = v6 + 40;
  if ( !v6 )
    v14 = 0;
  *(_QWORD *)(a1 + 544) = v14;
  *(_QWORD *)(a2 + 360) = v14;
  sub_15F1950(a1, v6, 0, v11, v12, v13);
  sub_15F2390(a1, 0);
  return v6;
}
