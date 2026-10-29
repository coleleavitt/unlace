unsigned __int64 __fastcall sub_172CB0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  bool v4; // zf
  unsigned int v6; // r13d
  unsigned __int8 *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r15
  char v17; // al
  __int64 v18; // rbp
  unsigned __int8 v19; // al
  signed int v20; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-40h]

  v3 = a1[2];
  v4 = *(_BYTE *)a2 == 4;
  v21 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 4);
  v7 = (unsigned __int8 *)a1[6];
  v20 = 0;
  v8 = *(_QWORD *)(v3 + 480);
  v9 = *(_QWORD *)(v8 + 112);
  if ( v4 )
  {
    if ( !sub_125B90(v7, *(_QWORD *)(v8 + 112), *(unsigned int **)(a2 + 8), 0) )
    {
      if ( !under_debugger )
        sub_383060(50533);
      goto LABEL_31;
    }
    v10 = a1[6];
    if ( *(_DWORD *)(v10 + 68) != v6 && *(_DWORD *)v10 == 11 )
    {
      sub_125180(a2, (unsigned __int8 *)(v10 + 64));
      sub_1279B0(a2, v9, *(_QWORD *)(a1[4] + 24LL), v6);
      return v21 - __readfsqword(0x28u);
    }
  }
  else
  {
    if ( *(_DWORD *)v7 != 4 )
    {
      if ( *(_DWORD *)v7 == 67 )
      {
        if ( sub_1255D0((unsigned __int8 *)a2, *(_QWORD *)(v8 + 112), (__int64)(v7 + 32), 0) )
        {
          v10 = a1[6];
          goto LABEL_6;
        }
        if ( !under_debugger )
          sub_383060(50534);
      }
      else if ( !under_debugger )
      {
        sub_383060(50536);
      }
LABEL_31:
      BUG();
    }
    if ( !sub_1255D0((unsigned __int8 *)a2, *(_QWORD *)(v8 + 112), (__int64)(v7 + 32), 1)
      && !(unsigned __int8)sub_121BB0(a1[6] + 32LL, (char *)a2, &v20, v13, v14, v15) )
    {
      if ( !under_debugger )
        sub_383060(50535);
      goto LABEL_31;
    }
    v16 = sub_11CC50((unsigned __int8 *)(a1[6] + 32LL), v8);
    v17 = sub_11CC50((unsigned __int8 *)(a1[6] + 64LL), v8);
    v10 = a1[6];
    if ( v16 != v17 )
    {
      v20 = *(_DWORD *)(v10 + 68) - (v6 + v20);
      if ( v20 < 0 )
      {
        if ( !under_debugger )
          sub_383060(51501);
        goto LABEL_31;
      }
    }
  }
LABEL_6:
  sub_125180(a2, (unsigned __int8 *)(v10 + 64));
  if ( !(unsigned __int8)sub_126F10(a2, v9, v20, v11) )
  {
    if ( !under_debugger )
      sub_383060(50537);
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a2 + 4) != v6 && !(unsigned __int8)sub_1274C0((unsigned __int8 *)a2, v9, v6, 0) )
  {
    v18 = *(_QWORD *)(a1[4] + 24LL);
    v19 = sub_11CC50((unsigned __int8 *)a2, v8);
    sub_1207E0((char *)a2, v9, (unsigned int)v19 + 10, v18, v6);
  }
  return v21 - __readfsqword(0x28u);
}
