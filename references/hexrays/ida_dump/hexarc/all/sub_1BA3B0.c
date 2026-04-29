__int64 __fastcall sub_1BA3B0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rbp
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  bool v18; // zf
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // [rsp-8h] [rbp-48h]
  _QWORD *v27; // [rsp+0h] [rbp-40h]
  __int64 v28; // [rsp+8h] [rbp-38h]
  __int64 v29; // [rsp+10h] [rbp-30h]
  __int64 v30; // [rsp+18h] [rbp-28h]

  v9 = *(unsigned __int64 **)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  v30 = v8;
  v29 = v7;
  if ( !*(_QWORD *)(a1 + 8) )
    return 0;
  v10 = v9[1];
  if ( v9 == (unsigned __int64 *)v10 )
    return 0;
  v11 = *(_QWORD *)(v10 + 24);
  v27 = a2 + 3;
  v13 = v10 + 24;
  if ( *(_DWORD *)(v10 + 32) == -1 )
    goto LABEL_13;
LABEL_5:
  if ( (int)decode_insn(v27, v11, a3, a4, a5, a6, a7, v26, v27, v28, v29, v30) <= 0 )
  {
    if ( !under_debugger )
      sub_37B760(50440);
LABEL_27:
    BUG();
  }
  v14 = *(unsigned int *)(v13 + 8);
  if ( (unsigned int)v14 >= *(_DWORD *)(a3 + 64) )
  {
    if ( !under_debugger )
      sub_37B760(52719);
    goto LABEL_27;
  }
  a2[2] = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8 * v14);
  if ( !(unsigned int)sub_1B8840(a2, v11, (int *)(v10 + 32), a1) )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)v10;
      v16 = v10;
      if ( (*(_QWORD *)v10 & 2) == 0 )
      {
        v17 = *(_QWORD *)(v10 + 16);
        if ( (*(_BYTE *)v17 & 2) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
          v23 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v23 & 2) == 0 )
          {
            v24 = v10;
            do
            {
              if ( *(_QWORD *)(v16 + 16) != v24 )
                break;
              v24 = v16;
              v25 = v23 & 0xFFFFFFFFFFFFFFFCLL;
              v23 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
              v16 = v25;
            }
            while ( (v23 & 2) == 0 );
          }
        }
        else
        {
          do
          {
            v16 = v17;
            v17 = *(_QWORD *)(v17 + 8);
          }
          while ( (*(_BYTE *)v17 & 2) == 0 );
        }
      }
      sub_1B49C0((unsigned __int64 **)a1, (__int64 *)v10);
      if ( *(_QWORD *)a1 == v16 )
        return 0;
      v10 = v16;
      v18 = *(_DWORD *)(v16 + 32) == -1;
      v11 = *(_QWORD *)(v16 + 24);
      v13 = v10 + 24;
      if ( !v18 )
        goto LABEL_5;
LABEL_13:
      if ( (unsigned __int8)netnode_charval(*(_QWORD *)(a2[100] + 104LL), v11, 256) == 3 )
        sub_329B90(a3, v11, 39, v19, v20, v21);
    }
  }
  return 4294967289LL;
}
