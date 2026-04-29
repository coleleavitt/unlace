__int64 __fastcall sub_1A3140(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r12
  __int64 v5; // r14
  __int16 *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r15
  size_t v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  char *v16; // r14
  __int64 v17; // rax
  int v18; // r12d
  __int64 v19; // rax
  __int64 *v20; // rdx
  __int64 *v21; // rsi
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rcx
  _QWORD v29[9]; // [rsp+0h] [rbp-48h] BYREF

  v29[1] = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 8);
  if ( !v2 )
    return 0;
  if ( !*(_QWORD *)(a1 + 16) )
    return 0;
  v3 = (_QWORD *)v2[1];
  if ( v2 == v3 )
    return 0;
  while ( 1 )
  {
    v5 = v3[3];
    v6 = (__int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
    if ( (unsigned __int8)sub_195540((_QWORD *)a1, a2, v5 - *v6) )
      break;
    if ( (unsigned __int8)sub_195540((_QWORD *)a1, a2, v5 - v6[3]) )
      break;
    if ( (unsigned __int8)sub_195540((_QWORD *)a1, a2, v5 - v6[4]) )
      break;
    if ( (unsigned __int8)sub_195540((_QWORD *)a1, a2, v5 - v6[1]) )
      break;
    v25 = v6[2];
    if ( (_WORD)v25 != 0xFFFF )
    {
      if ( (unsigned __int8)sub_195540((_QWORD *)a1, a2, v5 - v25) )
        break;
    }
    if ( (*v3 & 2) != 0 )
    {
LABEL_23:
      if ( *(_QWORD **)(a1 + 8) == v3 )
        return 0;
    }
    else
    {
      v26 = (_QWORD *)v3[2];
      if ( (*(_BYTE *)v26 & 2) != 0 )
      {
        v23 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
        v24 = *v23;
        if ( (*v23 & 2) != 0 || v3 != (_QWORD *)v23[2] )
        {
LABEL_22:
          v3 = v23;
        }
        else
        {
          while ( 1 )
          {
            v3 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
            v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v24 & 2) != 0 )
              break;
            v28 = v23;
            v23 = v3;
            if ( v28 != (_QWORD *)v3[2] )
              goto LABEL_22;
          }
        }
        goto LABEL_23;
      }
      do
      {
        v3 = v26;
        v26 = (_QWORD *)v26[1];
      }
      while ( (*(_BYTE *)v26 & 2) == 0 );
      if ( *(_QWORD **)(a1 + 8) == v3 )
        return 0;
    }
  }
  v7 = *(_QWORD *)(a2 + 104);
  v8 = 8 * v7;
  v9 = (8 * v7) >> 3;
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v11 = *(_QWORD *)(a2 + 96);
    v12 = 0;
    v13 = *(_QWORD *)(a1 + 24);
    v14 = 8 * v10;
    v15 = v9 + v10;
    if ( *(_QWORD *)(a1 + 40) < v15 )
    {
      v27 = qvector_reserve(a1 + 24, v13, v15, 8);
      *(_QWORD *)(a1 + 24) = v27;
      v13 = v27;
      v12 = 8LL * *(_QWORD *)(a1 + 32) - v14;
    }
    v16 = (char *)(v13 + v14);
    memmove(&v16[v8], v16, v12);
    v17 = 0;
    if ( v8 )
    {
      do
      {
        *(_QWORD *)&v16[v17] = *(_QWORD *)(v11 + v17);
        v17 += 8;
      }
      while ( v8 != v17 );
    }
    *(_QWORD *)(a1 + 32) += v9;
    v7 = *(_QWORD *)(a2 + 104);
  }
  v18 = 0;
  v19 = 0;
  if ( v7 )
  {
LABEL_12:
    if ( !(unsigned __int8)sub_3297A0(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v19) + 64LL, v29) )
    {
      if ( !under_debugger )
        sub_37CFE0(51357);
      BUG();
    }
    v20 = *(__int64 **)(a1 + 8);
    if ( !v20 )
      goto LABEL_19;
    v21 = (__int64 *)(*v20 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v21 )
      goto LABEL_35;
    if ( (*(_BYTE *)(*v20 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_19;
    while ( 1 )
    {
      if ( v29[0] >= v21[3] )
      {
        if ( v29[0] <= v21[3] )
        {
          if ( v21 != v20 )
          {
LABEL_35:
            ++v18;
            sub_1A25E0((unsigned __int64 **)(a1 + 8), v21);
            v19 = v18;
            if ( (unsigned __int64)v18 >= *(_QWORD *)(a2 + 104) )
              return 1;
            goto LABEL_12;
          }
LABEL_19:
          v19 = ++v18;
          if ( (unsigned __int64)v18 >= *(_QWORD *)(a2 + 104) )
            return 1;
          goto LABEL_12;
        }
        v21 = (__int64 *)v21[2];
      }
      else
      {
        v21 = (__int64 *)v21[1];
      }
      if ( (*(_BYTE *)v21 & 2) != 0 )
        goto LABEL_19;
    }
  }
  return 1;
}
