unsigned __int64 __fastcall sub_43D90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v7; // r12
  int v8; // r9d
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v15; // [rsp+8h] [rbp-30h] BYREF
  __int64 v16; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v4 = *(_QWORD *)(a2 + 456);
  v5 = *(_QWORD *)(a1 + 328);
  v17 = __readfsqword(0x28u);
  v7 = v4 & (*(_QWORD *)(a2 + 608) + *(_QWORD *)(a3 + 8) + v5);
  v15 = -1;
  if ( v4 == v7 )
    v7 = -1;
  netnode_check(&v15, "$ got", 0, 1);
  v16 = ea2node(v7) + 1;
  netnode_supset(v15, 0, &v16, 8, 65);
  v8 = *(_DWORD *)(a2 + 164);
  if ( !v8 || !*(_DWORD *)(a2 + 168) )
  {
    v9 = *(unsigned int *)(a2 + 568);
    if ( (unsigned int)v9 > 1 )
    {
      v10 = 1;
      while ( 1 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a2 + 1352) + 32 * v10 + 16) != -1 )
        {
          if ( !*(_BYTE *)(a2 + 248) )
          {
            if ( !under_debugger )
              interr(20099);
            BUG();
          }
          v11 = v10 < *(_QWORD *)(a2 + 120) ? *(_QWORD *)(a2 + 112) + (v10 << 6) : 0LL;
          v12 = *(_QWORD *)(v11 + 16);
          v13 = *(_QWORD *)(a3 + 8);
          if ( v13 >= v12 && v13 < *(_QWORD *)(v11 + 32) + v12 )
            break;
        }
        if ( ++v10 == v9 )
          return v17 - __readfsqword(0x28u);
      }
      if ( *(_WORD *)(a2 + 522) != 15 && !v8 )
        *(_DWORD *)(a2 + 164) = v10;
      if ( !*(_DWORD *)(a2 + 168) )
        *(_DWORD *)(a2 + 168) = v10;
    }
  }
  return v17 - __readfsqword(0x28u);
}

