__int64 __fastcall sub_1C7790(__int64 a1, __int64 a2, signed int a3)
{
  unsigned int v3; // r12d
  int v5; // r15d
  _QWORD *v6; // rax
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  _DWORD v12[4]; // [rsp+0h] [rbp-68h] BYREF
  int v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  LOBYTE(v3) = a2 == 0 && a3 <= 0;
  if ( (_BYTE)v3 )
  {
    if ( !under_debugger )
      sub_383060(51579);
    BUG();
  }
  v5 = *(_DWORD *)a1;
  v6 = (_QWORD *)sub_339CA0();
  sub_1C6F80(v12, v6, a1, a3, 0);
  if ( v12[0] && sub_CFF70(0x7DBu, v12, a2, (unsigned int)a3) == 1 )
  {
    v8 = sub_339CA0();
    sub_1C59F0((__int64)&v13, v8, (__int64)v12, a3, 0);
    copy_argloc(a1, &v13);
    cleanup_argloc(&v13);
    if ( v5 != 2 && *(_DWORD *)a1 == 2 )
    {
      v9 = *(__int64 **)(a1 + 8);
      if ( v9[1] == 1 )
      {
        v10 = *v9;
        v13 = 0;
        copy_argloc(&v13, v10);
        v11 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v14;
        v14 = v11;
        LODWORD(v11) = *(_DWORD *)a1;
        *(_DWORD *)a1 = v13;
        v13 = v11;
        cleanup_argloc(&v13);
      }
    }
    v3 = 1;
  }
  cleanup_argloc(v12);
  return v3;
}
