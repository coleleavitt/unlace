__int64 __fastcall sub_F43D70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8

  v5 = a1;
  if ( *(_BYTE *)(a1 + 16) != 34 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      return 0;
    v5 = sub_F3F130(a1);
    if ( !v5 )
      return 0;
  }
  v6 = *(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  v8 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v6 + 16LL) - 35;
  if ( (unsigned int)v8 > 1 )
  {
    v16 = sub_F3F130(v7);
    v9 = sub_9A4000(v16, a2, v17, v18, v19);
    v10 = v9;
    if ( !v9 )
      return 0;
  }
  else
  {
    v9 = sub_9A4000(v7, a2, v8, a4, a5);
    v10 = v9;
    if ( !v9 )
      return 0;
  }
  v11 = sub_B685F0(v9);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_A5E330(v11, v10, 0, v12, v13, v14) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                 & 0xFFFFFFFFFFFFFFF0LL) )
    return v5;
  return 0;
}

