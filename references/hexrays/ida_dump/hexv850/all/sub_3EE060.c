void __fastcall sub_3EE060(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  __int64 v5; // rax
  int v6; // r12d
  __int64 v8; // rdx
  __int64 v9; // rax
  int v11; // r13d

  if ( *(_BYTE *)(a1 + 65) != 10 || (v5 = *(_QWORD *)(a1 + 72), v6 = a2, a2 = (unsigned int)v5, (unsigned int)v5 > 0xF) )
  {
    if ( !under_debugger )
      sub_37CFE0(0, a2, a5);
    BUG();
  }
  v8 = *(_QWORD *)(a1 + 832);
  v9 = *(_QWORD *)(v8 + 584);
  if ( !v9 )
    sub_3E4140(a5, a1, a2);
  v11 = *(_DWORD *)(*(_QWORD *)(v8 + 576) + 4 * v9 - 4);
  *(_QWORD *)(v8 + 584) = v9 - 1;
  sub_3ED6D0(a1, a2, v11, a5);
  sub_3ED490(a1, *(unsigned __int16 *)(a1 + 842), a3, v6, v11, a4, a5, *(_WORD *)(a1 + 48) == 104);
  sub_3E62F0(*(_QWORD *)(a1 + 832), v11);
}
