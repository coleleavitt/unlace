unsigned __int64 __fastcall sub_186060(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  char v7; // dl
  __int64 v8; // rax
  unsigned __int64 v10; // [rsp+18h] [rbp-60h]

  v10 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 + 200);
  v6 = v5 + 72LL * *(_QWORD *)(v4 + 208);
  if ( v6 == v5 )
  {
LABEL_20:
    if ( !under_debugger )
      interr();
    BUG();
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = v5;
    if ( *(_QWORD *)v5 != a2 )
      goto LABEL_3;
    if ( v7 )
      break;
    if ( *(_DWORD *)(v5 + 48) == a3 )
    {
LABEL_10:
      if ( !*(_QWORD *)(v5 + 32) )
      {
        sub_185FD0(*(__int64 **)(a1 + 8), *(_DWORD *)(v5 + 56));
        goto LABEL_14;
      }
    }
    while ( 1 )
    {
      v5 += 72;
      if ( v6 == v5 )
        goto LABEL_20;
      if ( a2 != *(_QWORD *)v5 )
        break;
      if ( *(_DWORD *)(v5 + 48) == a3 )
        goto LABEL_10;
    }
LABEL_3:
    v5 += 72;
    if ( v6 == v5 )
      goto LABEL_20;
  }
  while ( !*(_QWORD *)(v8 + 32) )
  {
LABEL_14:
    v8 = v5 + 72;
    if ( v5 + 72 == v6 )
      goto LABEL_20;
    if ( a2 == *(_QWORD *)(v5 + 72) )
    {
      v5 += 72;
    }
    else
    {
      v5 += 144;
      if ( v6 == v5 )
        goto LABEL_20;
      v8 = v5;
      if ( a2 != *(_QWORD *)v5 )
      {
        v7 = 1;
        goto LABEL_3;
      }
    }
  }
  sub_185FD0(*(__int64 **)(a1 + 8), *(_DWORD *)(v8 + 56));
  return v10 - __readfsqword(0x28u);
}

