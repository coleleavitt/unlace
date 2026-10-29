__int64 __fastcall sub_1A42AD0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // r15d
  __int64 v7; // r14
  unsigned int v8; // r12d
  int v9; // eax
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-40h]

  if ( !a2 )
    return 1;
  v22 = a3 + 16;
  v7 = a2;
  v8 = 0;
  do
  {
    v9 = *(_BYTE *)(v7 + 28) & 0x7F;
    if ( (unsigned int)(v9 - 59) > 2 )
    {
      if ( (unsigned int)(v9 - 34) > 5 )
        LOBYTE(v4) = (unsigned int)sub_B740B0(v7) == 2;
      else
        LOBYTE(v4) = (unsigned int)sub_B77D20(v7) == 2;
    }
    else
    {
      LOBYTE(v4) = (unsigned int)sub_B97260(v7) == 2;
    }
    if ( (_BYTE)v4 )
    {
      v13 = *(_QWORD *)(v7 + 8) & 6LL;
      if ( a4 )
      {
        if ( !v13 )
          return v4;
        v15 = 1;
      }
      else
      {
        if ( !v13 )
          return v4;
        v15 = 0;
      }
      if ( sub_1A42350(a1, v7, v15, v10, v11, v12) )
        return v4;
      if ( !a3 )
        goto LABEL_18;
      v16 = *(_QWORD *)(v7 + 8) & 7LL;
      if ( *(char *)(v7 + 29) < 0 )
      {
        v17 = 0;
        if ( v16 )
        {
          v21 = sub_B8C660(v7);
          v18 = *(unsigned int *)(a3 + 8);
          v17 = v21;
          v19 = v18 + 1;
          if ( v18 + 1 <= (unsigned __int64)*(unsigned int *)(a3 + 12) )
            goto LABEL_17;
          goto LABEL_27;
        }
      }
      else if ( v16 )
      {
        v17 = *(_QWORD *)(v7 - 8);
      }
      else
      {
        v17 = 0;
      }
      v18 = *(unsigned int *)(a3 + 8);
      v19 = v18 + 1;
      if ( v18 + 1 <= (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
LABEL_17:
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v18) = v17;
        ++*(_DWORD *)(a3 + 8);
LABEL_18:
        v8 = v4;
        goto LABEL_19;
      }
LABEL_27:
      sub_2237220(a3, v22, v19, 8);
      v18 = *(unsigned int *)(a3 + 8);
      goto LABEL_17;
    }
LABEL_19:
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
    v7 = v20;
  }
  while ( a2 != v20 && v20 );
  return v8 ^ 1;
}
