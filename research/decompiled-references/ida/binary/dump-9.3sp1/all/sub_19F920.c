__int64 __fastcall sub_19F920(__int64 a1)
{
  unsigned __int8 (*v1)(void); // rax
  unsigned int v2; // r12d
  __int64 v4; // rbp
  int v5; // eax
  int v6; // r15d
  unsigned int v7; // edx
  unsigned int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax

  v1 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v1 == (char *)sub_194B60 )
  {
    if ( !*(_DWORD *)(a1 + 128) )
      return 0;
  }
  else if ( !v1() )
  {
    return 0;
  }
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  v5 = sub_19F880(a1);
  v6 = v5;
  if ( v5 == -1 )
    return 0;
  v7 = *(_DWORD *)(v4 + 64);
  if ( v7 != 1 )
  {
    v8 = 1;
    v2 = 0;
    v9 = 104LL * v5;
    while ( 1 )
    {
      if ( v8 >= v7 )
      {
        if ( !under_debugger )
          sub_383060(52719);
LABEL_32:
        BUG();
      }
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 528) + 8LL * v8) + 48LL);
      if ( v10 )
        break;
LABEL_18:
      if ( v7 == ++v8 )
        goto LABEL_19;
    }
    while ( 1 )
    {
      while ( (unsigned __int8)sub_19B9C0(v4, v10, nullptr) )
      {
        v2 = 1;
LABEL_16:
        v10 = *(_QWORD *)(v10 + 8);
        if ( !v10 )
        {
LABEL_17:
          v7 = *(_DWORD *)(v4 + 64);
          goto LABEL_18;
        }
      }
      if ( *(_DWORD *)v10 == 56 )
      {
        v13 = *(_QWORD *)(v10 + 72);
        if ( *(_DWORD *)(v13 + 284) == 25 )
        {
          if ( *(_QWORD *)(v13 + 32) != 2 )
          {
            if ( !under_debugger )
              sub_383060(51381);
            goto LABEL_32;
          }
          v14 = *(_QWORD *)(v13 + 24);
          if ( (*(_BYTE *)(v14 + 80) & 0xFD) != 9 )
          {
            if ( !under_debugger )
              sub_383060(51383);
            goto LABEL_32;
          }
          *(_BYTE *)(v14 + 80) = 9;
          v15 = j__qalloc_or_throw(24, v10, v11, v12);
          *(_QWORD *)v15 = v4;
          *(_QWORD *)(v15 + 8) = 0;
          *(_DWORD *)(v15 + 16) = v6;
          *(_QWORD *)(v14 + 88) = v15;
          *(_DWORD *)(v14 + 84) = *(_DWORD *)(*(_QWORD *)(v4 + 432) + v9 + 88);
          v2 = 1;
          copy_tinfo_t();
          goto LABEL_16;
        }
      }
      v10 = *(_QWORD *)(v10 + 8);
      if ( !v10 )
        goto LABEL_17;
    }
  }
  v2 = 0;
LABEL_19:
  if ( !*(_BYTE *)(v4 + 320) )
    sub_195400(v4);
  return v2;
}
