unsigned __int64 __fastcall sub_D0F10(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, char a7)
{
  __int64 v8; // rdx
  int v9; // r9d
  int v10; // r8d
  __int64 v11; // r14
  __int64 v12; // rbx
  signed __int64 v13; // r13
  __int64 v14; // rdx
  signed __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  int v21; // [rsp+10h] [rbp-58h] BYREF
  __int64 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 8);
  v9 = a5 - 1;
  v10 = -a5;
  v11 = v9;
  v12 = v10;
  v23 = __readfsqword(0x28u);
  v13 = v10 & (unsigned __int64)(v9 + v8);
  v14 = *(_QWORD *)(a2 + 16);
  if ( v14 != -1 )
  {
    v15 = v10 & (unsigned __int64)(v9 + v14);
    *(_QWORD *)(a2 + 16) = v15;
    if ( v13 < v15 )
      LODWORD(v13) = v15;
  }
  v22 = a3;
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL);
  v21 = 1;
  sub_CBD70(0x7DBu, &v21, 0, *(unsigned int *)(v16 + 80));
  if ( a7 && (int)v13 != v22 && *(_DWORD *)(*(_QWORD *)(a1 + 80) + 656LL) > a6 )
  {
    if ( !under_debugger )
      sub_37E160(51165);
    BUG();
  }
  *(_QWORD *)(a2 + 8) = a4 + v22;
  v17 = *(_QWORD *)(a2 + 16);
  if ( v17 != -1 )
    *(_QWORD *)(a2 + 16) = a4 + (v12 & (v11 + v17));
  cleanup_argloc(&v21);
  return v23 - __readfsqword(0x28u);
}
