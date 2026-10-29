unsigned __int64 __fastcall sub_1F19070(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // r13d
  _QWORD *v5; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v25; // [rsp+8h] [rbp-70h]
  __int64 v26; // [rsp+10h] [rbp-68h]
  __int64 v27; // [rsp+18h] [rbp-60h]
  __int128 v28; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+30h] [rbp-48h]

  v2 = sub_1F194E0();
  v26 = v3;
  v25 = v2;
  v4 = sub_1EE7490(a1);
  sub_1F194A0(&v28, a1);
  v5 = *(_QWORD **)(a1 + 8);
  v6 = sub_1EE13A0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
  v11 = sub_1EDB980(v5, v6, v7, v8, v9, v10);
  v12 = *(_QWORD **)(a1 + 8);
  v13 = v11;
  v14 = sub_1EE13A0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
  v19 = sub_1EDB980(v12, v14, v15, v16, v17, v18);
  v20 = *(_QWORD *)(a1 + 32);
  v21 = v19;
  LODWORD(v19) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v19 + 1;
  v22 = (unsigned int)v19;
  v23 = 0;
  if ( *(_QWORD *)(v20 + 8 * v22) )
  {
    v27 = v21;
    v23 = sub_1F19000(a1);
    v21 = v27;
  }
  return sub_A55700(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v25, v26, v4, v13, v21, v28, v29, v23);
}
