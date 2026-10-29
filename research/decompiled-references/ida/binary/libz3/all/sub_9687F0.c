__int64 __fastcall sub_9687F0(__int64 a1)
{
  unsigned int *v2; // rbp
  unsigned int *v3; // r14
  __int64 v4; // rbx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  unsigned int v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  char v17; // al
  __int64 v18; // rdi
  char v19; // al
  unsigned __int8 v20; // [rsp+0h] [rbp-50h]
  unsigned __int8 v21; // [rsp+0h] [rbp-50h]
  __int64 v22; // [rsp+8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+10h] [rbp-40h]

  if ( !*(_QWORD *)(a1 + 9312) )
    return 1;
  v2 = *(unsigned int **)(a1 + 8920);
  if ( !v2 )
    return 1;
  v3 = &v2[*(v2 - 1)];
  if ( v2 == v3 )
    return 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *v2;
      v10 = *v2 >> 1;
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8 * v10);
      if ( (unsigned int)sub_8E7030(a1)
        && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 7488) + 56LL))(
              *(_QWORD *)(a1 + 7488),
              v11) )
      {
        goto LABEL_17;
      }
      v12 = *(_QWORD *)(a1 + 104);
      v22 = 0;
      v23 = v12;
      if ( v9 == dword_1C7EC7C )
      {
        v4 = *(_QWORD *)(v12 + 856);
        if ( !v4 )
          goto LABEL_22;
LABEL_8:
        ++*(_DWORD *)(v4 + 8);
        goto LABEL_9;
      }
      if ( v9 == dword_1C7EC78 )
      {
        v4 = *(_QWORD *)(v12 + 864);
        if ( !v4 )
          goto LABEL_9;
        goto LABEL_8;
      }
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8 * v10);
      if ( (v9 & 1) != 0 )
        break;
      if ( v4 )
        goto LABEL_8;
LABEL_9:
      if ( !*(_WORD *)(v4 + 4) && (*(_BYTE *)(v4 + 30) & 1) != 0 )
        goto LABEL_11;
LABEL_22:
      v8 = (*(_DWORD *)(v4 + 8))-- == 1;
      if ( !v8 )
        goto LABEL_17;
LABEL_23:
      ++v2;
      sub_15D7BC0(v12, v4);
      if ( v3 == v2 )
        return 1;
    }
    v14 = sub_15E1A70(v12);
    v4 = v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    if ( *(_WORD *)(v14 + 4) || (*(_BYTE *)(v14 + 30) & 1) == 0 )
    {
      v15 = v22;
      v16 = v23;
      if ( v22 )
      {
        v8 = (*(_DWORD *)(v22 + 8))-- == 1;
        if ( v8 )
        {
          sub_15D7BC0(v16, v15);
          v8 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v8 )
            goto LABEL_23;
          goto LABEL_17;
        }
      }
      goto LABEL_22;
    }
LABEL_11:
    v5 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v9);
    if ( v5 != -1 )
      break;
    v17 = sub_C05810(*(_QWORD *)(a1 + 9312), v4, &v22, 0);
    v6 = v22;
    if ( !v17 )
      goto LABEL_49;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 104) + 856LL) == v22 )
    {
LABEL_37:
      result = 0;
      goto LABEL_38;
    }
LABEL_14:
    if ( v6 && (v7 = v23, v8 = *(_DWORD *)(v6 + 8) == 1, --*(_DWORD *)(v6 + 8), v8) )
    {
      sub_15D7BC0(v7, v6);
      v8 = (*(_DWORD *)(v4 + 8))-- == 1;
      if ( v8 )
LABEL_47:
        sub_15D7BC0(v12, v4);
    }
    else
    {
      v8 = (*(_DWORD *)(v4 + 8))-- == 1;
      if ( v8 )
        goto LABEL_47;
    }
LABEL_17:
    if ( v3 == ++v2 )
      return 1;
  }
  if ( v5 != 1 )
  {
    v6 = v22;
    goto LABEL_14;
  }
  v19 = sub_C05810(*(_QWORD *)(a1 + 9312), v4, &v22, 0);
  v6 = v22;
  if ( v19 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 104) + 864LL) == v22 )
      goto LABEL_37;
    goto LABEL_14;
  }
LABEL_49:
  result = 1;
LABEL_38:
  if ( v6 )
  {
    v18 = v23;
    v8 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v8 )
    {
      v21 = result;
      sub_15D7BC0(v18, v6);
      result = v21;
    }
  }
  v8 = (*(_DWORD *)(v4 + 8))-- == 1;
  if ( v8 )
  {
    v20 = result;
    sub_15D7BC0(v12, v4);
    return v20;
  }
  return result;
}

