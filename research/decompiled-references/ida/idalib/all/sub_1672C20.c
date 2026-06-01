void __fastcall sub_1672C20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9

  if ( (a9 & 1) != 0 )
  {
    v14 = (_QWORD *)sub_9C8850(a2);
    v16 = sub_1671150(v14, v15);
    if ( (__int64 *)sub_9C88C0(a2) != v16 )
    {
      v17 = sub_B35EA0(*(_QWORD *)(a1 + 248), a7, a8, *v16, 1, 0);
      v22 = sub_B8C3D0(a2, a7, v18, v19, v20, v21);
      sub_1672BE0((__int64)v22, (__int64)v16);
      sub_B8CC60(a2, v17, v23, v24, v25, v26);
    }
  }
  else
  {
    v9 = sub_B35E00(*(_QWORD *)(a1 + 248), a7, a8, 372, (a9 & 2) != 0, 0);
    sub_B8CC60(a2, v9, v10, v11, v12, v13);
  }
}
