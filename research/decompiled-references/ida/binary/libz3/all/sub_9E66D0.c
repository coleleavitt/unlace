__int64 __fastcall sub_9E66D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r10
  __int64 v4; // r12
  unsigned int v5; // ebx
  __int64 v6; // r15
  __int64 v7; // rax
  _DWORD *v8; // rdx
  int v9; // ecx
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  _DWORD *v12; // r8
  _DWORD *i; // rax
  int v14; // ecx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int **v18; // rbx
  unsigned int **v19; // r14
  unsigned int **v20; // r12
  int v21; // eax
  _DWORD *v22; // rdx
  int v23; // edi
  __int64 v24; // rax
  unsigned int v25; // esi
  _DWORD *v26; // r9
  __int64 v27; // rsi
  _DWORD *v28; // r8
  _DWORD *v29; // rax
  int v30; // ecx
  __int64 v31; // rdx
  unsigned int **v32; // rbx
  unsigned int v33; // r15d
  int v34; // eax
  __int64 v35; // [rsp+0h] [rbp-68h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  __int64 v37; // [rsp+18h] [rbp-50h]
  int v38[15]; // [rsp+2Ch] [rbp-3Ch] BYREF

  v36 = a1 + 1384;
  sub_9E4980(a1 + 1384);
  v3 = *a2;
  if ( !*a2 || v3 == v3 + 40LL * *(unsigned int *)(v3 - 4) )
    return 0;
  v35 = v3 + 40LL * *(unsigned int *)(v3 - 4);
  v4 = *a2;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v4 + 32);
    if ( v5 != -1 && !sub_9B1230(a1, v5) )
      break;
LABEL_15:
    v4 += 40;
    if ( v35 == v4 )
      return 0;
  }
  v6 = **(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * v5);
  if ( !(unsigned __int8)sub_98ACD0(v6) )
  {
    v7 = *(unsigned int *)(a1 + 1392);
    v8 = *(_DWORD **)(a1 + 1384);
    v9 = v7 - 1;
    v7 *= 8;
    v10 = (_DWORD *)((char *)v8 + v7);
    v11 = 8LL * (v5 & v9);
    v12 = &v8[(unsigned __int64)v11 / 4];
    if ( v11 != v7 )
    {
      for ( i = &v8[(unsigned __int64)v11 / 4]; v10 != i; i += 2 )
      {
        v14 = i[1];
        if ( v14 + 0x80000000 > 1 )
        {
          if ( *i == v5 && v5 == v14 )
            return 1;
        }
        else if ( v14 == 0x80000000 )
        {
          goto LABEL_14;
        }
      }
    }
    for ( ; v12 != v8; v8 += 2 )
    {
      v16 = v8[1];
      if ( v16 + 0x80000000 > 1 )
      {
        if ( *v8 == v5 && v5 == v16 )
          return 1;
      }
      else if ( v16 == 0x80000000 )
      {
        break;
      }
    }
LABEL_14:
    v38[0] = v5;
    sub_9E1E20(v36, v38);
    goto LABEL_15;
  }
  v17 = 8LL * *(unsigned int *)(v6 + 24);
  v18 = (unsigned int **)(v6 + 32 + v17);
  if ( !v17 )
    goto LABEL_15;
  v37 = v4;
  v19 = (unsigned int **)(v6 + 32);
  v20 = (unsigned int **)(v6 + 32);
LABEL_28:
  while ( 2 )
  {
    v21 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **v20), *(unsigned int *)(a1 + 8));
    v22 = *(_DWORD **)(a1 + 1384);
    v23 = v21;
    v24 = *(unsigned int *)(a1 + 1392);
    v25 = v24 - 1;
    v24 *= 8;
    v26 = (_DWORD *)((char *)v22 + v24);
    v27 = 8LL * (v23 & v25);
    v28 = &v22[(unsigned __int64)v27 / 4];
    if ( v27 == v24 )
    {
LABEL_41:
      while ( v28 != v22 )
      {
        v34 = v22[1];
        if ( v34 + 0x80000000 > 1 )
        {
          if ( *v22 == v23 && v23 == v34 )
            return 1;
        }
        else if ( v34 == 0x80000000 )
        {
          if ( v18 == ++v20 )
            goto LABEL_36;
          goto LABEL_28;
        }
        v22 += 2;
      }
LABEL_35:
      if ( v18 != ++v20 )
        continue;
LABEL_36:
      v4 = v37;
      v31 = 8LL * *(unsigned int *)(v6 + 24);
      v32 = (unsigned int **)(v6 + 32 + v31);
      if ( v31 )
      {
        do
        {
          v33 = sub_B39350(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **v19),
                  *(unsigned int *)(a1 + 8));
          if ( !sub_9B1230(a1, v33) )
          {
            v38[0] = v33;
            sub_9E1E20(v36, v38);
          }
          ++v19;
        }
        while ( v32 != v19 );
      }
      goto LABEL_15;
    }
    break;
  }
  v29 = &v22[(unsigned __int64)v27 / 4];
  while ( 2 )
  {
    v30 = v29[1];
    if ( v30 + 0x80000000 <= 1 )
    {
      if ( v30 == 0x80000000 )
        goto LABEL_35;
      goto LABEL_32;
    }
    if ( *v29 != v23 || v23 != v30 )
    {
LABEL_32:
      v29 += 2;
      if ( v26 == v29 )
        goto LABEL_41;
      continue;
    }
    return 1;
  }
}

