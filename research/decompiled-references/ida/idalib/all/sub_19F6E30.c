__int64 __fastcall sub_19F6E30(__int64 *a1, __int64 a2, char a3, int a4, __int64 a5, int a6, int a7)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdi

  v10 = *(_QWORD *)(*a1 + 3032);
  if ( !v10 )
    v10 = *(_QWORD *)(*a1 + 544);
  v11 = sub_168B6C0((__int64)a1);
  v12 = sub_B7ABF0(v11, v10, a3, a4, a5, a6, a7);
  v13 = sub_168B6C0((__int64)a1);
  v14 = sub_B31120(v13, 2 * (a3 != 0), 0);
  sub_B8CC60(v12, v14, v15, v16, v17, v18);
  sub_17B7670(*a1, v12, a2, 1, v19, v20);
  v21 = v12 + 48;
  v22 = *a1;
  if ( !v12 )
    v21 = 0;
  sub_17A2E00(v22, a2, v21);
  return v12;
}
