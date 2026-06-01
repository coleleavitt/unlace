__int64 __fastcall sub_C00560(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v3; // rcx
  unsigned int *v4; // r12
  char v5; // r14
  bool v6; // r13
  bool v7; // bp
  bool v8; // r8
  bool v9; // r9
  __int64 result; // rax
  int v11; // r15d
  unsigned int v12; // edx
  bool v13; // zf
  unsigned int v14; // r14d
  int v15; // r13d
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  int v18; // r13d
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r12d
  unsigned __int64 v23; // rdx
  unsigned int v24; // edx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // [rsp+0h] [rbp-48h]
  bool v28; // [rsp+0h] [rbp-48h]
  bool v29; // [rsp+Eh] [rbp-3Ah]
  bool v30; // [rsp+Eh] [rbp-3Ah]
  bool v31; // [rsp+Eh] [rbp-3Ah]
  bool v32; // [rsp+Fh] [rbp-39h]
  bool v33; // [rsp+Fh] [rbp-39h]

  v2 = *(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL);
  v3 = *v2;
  v4 = v2 + 4;
  if ( (v2[4] & 0xDF) == 0x53 )
  {
    if ( !*v2 )
    {
      v5 = 1;
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      goto LABEL_6;
    }
    --v3;
    v4 = (unsigned int *)((char *)v2 + 17);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  switch ( v3 )
  {
    case 2LL:
      v6 = *(_WORD *)v4 == 26984;
      v7 = *(_WORD *)v4 == 28524;
      v8 = 0;
      v9 = 0;
      break;
    case 4LL:
      v8 = *v4 == 1852143205;
      v6 = 0;
      v7 = 0;
      v9 = 0;
      break;
    case 3LL:
      if ( *(_WORD *)v4 != 25711 || (v26 = 0, *((_BYTE *)v4 + 2) != 100) )
        v26 = 1;
      v9 = v26 == 0;
      v6 = 0;
      v7 = 0;
      v8 = 0;
      break;
    default:
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      break;
  }
LABEL_6:
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(result + 16) - 57 <= 1
    || (v25 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
            - 57,
        (unsigned int)v25 <= 1)
    && (v30 = v8,
        v28 = v9,
        result = sub_F63050(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v25, v3),
        v9 = v28,
        v8 = v30,
        result) )
  {
    v11 = *(_DWORD *)(result + 20);
    if ( !v11 )
      return result;
  }
  else
  {
    v11 = 1;
  }
  v12 = *(_DWORD *)(a2 + 8);
  if ( !v6 )
  {
    v13 = v5 == 0;
    v14 = 0;
    v27 = a2 + 16;
    if ( v13 )
    {
      do
      {
        while ( 1 )
        {
          v15 = v14;
          if ( !v7 )
          {
            if ( v8 )
            {
              v15 = 2 * v14;
            }
            else if ( v9 )
            {
              v15 = 2 * v14 + 1;
            }
            else
            {
              v15 = -1;
              if ( (unsigned __int8)(*((_BYTE *)v4 + v14) - 97) <= 0x19u )
                v15 = dword_23E80E0[(unsigned __int8)(*((_BYTE *)v4 + v14) - 97)];
            }
          }
          v16 = v12;
          v17 = v12 + 1LL;
          if ( v17 > *(unsigned int *)(a2 + 12) )
            break;
          ++v14;
          *(_DWORD *)(*(_QWORD *)a2 + 4 * v16) = v15;
          result = *(unsigned int *)(a2 + 8);
          v12 = result + 1;
          *(_DWORD *)(a2 + 8) = result + 1;
          if ( v11 == v14 )
            return result;
        }
        ++v14;
        v33 = v8;
        v31 = v9;
        sub_2237220(a2, v27, v17, 4);
        v9 = v31;
        v8 = v33;
        *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v15;
        result = *(unsigned int *)(a2 + 8);
        v12 = result + 1;
        *(_DWORD *)(a2 + 8) = result + 1;
      }
      while ( v11 != v14 );
      return result;
    }
    while ( 1 )
    {
      v18 = v14;
      if ( v7 )
        goto LABEL_21;
      v18 = 2 * v14;
      if ( v8 )
        goto LABEL_21;
      ++v18;
      if ( v9 )
      {
        v19 = v12;
        v20 = v12 + 1LL;
        if ( *(unsigned int *)(a2 + 12) < v20 )
          goto LABEL_27;
LABEL_22:
        ++v14;
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v19) = v18;
        result = *(unsigned int *)(a2 + 8);
        v12 = result + 1;
        *(_DWORD *)(a2 + 8) = result + 1;
        if ( v11 == v14 )
          return result;
      }
      else
      {
        v18 = -1;
        if ( (unsigned __int8)(*((_BYTE *)v4 + v14) - 48) <= 0x36u )
          v18 = byte_23E80A0[(unsigned __int8)(*((_BYTE *)v4 + v14) - 48)];
LABEL_21:
        v19 = v12;
        v20 = v12 + 1LL;
        if ( *(unsigned int *)(a2 + 12) >= v20 )
          goto LABEL_22;
LABEL_27:
        ++v14;
        v32 = v8;
        v29 = v9;
        sub_2237220(a2, v27, v20, 4);
        v9 = v29;
        v8 = v32;
        *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v18;
        result = *(unsigned int *)(a2 + 8);
        v12 = result + 1;
        *(_DWORD *)(a2 + 8) = result + 1;
        if ( v11 == v14 )
          return result;
      }
    }
  }
  v21 = v12;
  v22 = 2 * v11;
  v23 = v12 + 1LL;
  if ( v23 > *(unsigned int *)(a2 + 12) )
    goto LABEL_34;
  while ( 1 )
  {
    *(_DWORD *)(*(_QWORD *)a2 + 4 * v21) = v11;
    result = *(unsigned int *)(a2 + 8);
    ++v11;
    v24 = result + 1;
    *(_DWORD *)(a2 + 8) = result + 1;
    if ( v22 == v11 )
      break;
    v21 = v24;
    v23 = v24 + 1LL;
    if ( v23 > *(unsigned int *)(a2 + 12) )
    {
LABEL_34:
      sub_2237220(a2, a2 + 16, v23, 4);
      v21 = *(unsigned int *)(a2 + 8);
    }
  }
  return result;
}
