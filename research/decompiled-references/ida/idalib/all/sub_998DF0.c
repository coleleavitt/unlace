_BOOL8 __fastcall sub_998DF0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  bool v9; // al
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v17; // rsi
  __int64 *v18; // rdi
  unsigned int v19; // ebx
  _BYTE v20[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 <= 1 )
  {
    v4 = sub_B73640(a2);
    if ( v4 )
    {
      v20[0] = 0;
      v5 = sub_995800(v4, v20);
      if ( v20[0] )
      {
        v3 = v5;
        goto LABEL_5;
      }
    }
    return 1;
  }
LABEL_5:
  while ( 1 )
  {
    v6 = sub_A72040(*a1, v3);
    v7 = v6;
    if ( !v6 || (unsigned int)*(unsigned __int8 *)(v6 + 16) - 2 > 1 )
      break;
    v8 = *(_QWORD *)(v6 + 40);
    if ( (*(_BYTE *)(v6 + 19) & 2) != 0 )
    {
      v19 = *(_DWORD *)(v8 + 8);
      if ( v19 <= 0x40 )
        v9 = *(_QWORD *)v8 == 0;
      else
        v9 = v19 == (unsigned int)sub_2206780(v8);
    }
    else
    {
      v9 = v8 == 0;
    }
    if ( v9 )
      return 1;
    v3 = *(_QWORD *)(v7 + 32);
  }
  v10 = sub_F63270(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL));
  v15 = v10;
  if ( !v10 )
    return 1;
  v17 = *(_QWORD *)(v10 + 104);
  v18 = (__int64 *)(v17 + 96);
  if ( !*(_QWORD *)(v10 + 128) )
  {
    sub_7052B0(v18, v17, v11, v12, v13, v14);
    if ( !*(_QWORD *)(v15 + 128) )
      return 1;
    v17 = *(_QWORD *)(v15 + 104);
    v18 = (__int64 *)(v17 + 96);
  }
  sub_7052B0(v18, v17, v11, v12, v13, v14);
  return (*(_WORD *)(*(_QWORD *)(v15 + 128) + 4LL) & 0x1000) != 0;
}
