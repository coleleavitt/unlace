__int64 __fastcall sub_1A42930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-40h]

  v15 = 1;
  if ( a2 )
  {
    v6 = a3 + 16;
    v8 = a2;
    while ( 1 )
    {
      if ( (*(_QWORD *)(v8 + 8) & 6LL) == 0 || sub_1A42350(a1, v8, 1u, v15, a5, a6) )
        return 1;
      if ( !a3 )
        goto LABEL_13;
      v10 = *(_QWORD *)(v8 + 8) & 7LL;
      if ( *(char *)(v8 + 29) >= 0 )
        break;
      v11 = 0;
      if ( !v10 )
        goto LABEL_11;
      v11 = sub_B8C660(v8);
      v12 = *(unsigned int *)(a3 + 8);
      v13 = v12 + 1;
      if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
LABEL_18:
        v16 = v11;
        sub_2237220(a3, v6, v13, 8);
        v12 = *(unsigned int *)(a3 + 8);
        v11 = v16;
      }
LABEL_12:
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v12) = v11;
      ++*(_DWORD *)(a3 + 8);
LABEL_13:
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
      v8 = v14;
      if ( a2 == v14 || !v14 )
        return 0;
    }
    if ( v10 )
      v11 = *(_QWORD *)(v8 - 8);
    else
      v11 = 0;
LABEL_11:
    v12 = *(unsigned int *)(a3 + 8);
    v13 = v12 + 1;
    if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      goto LABEL_18;
    goto LABEL_12;
  }
  return 1;
}
