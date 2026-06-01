__int64 __fastcall sub_1A7E40(__int64 a1, __int64 a2)
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
  char *v15; // r14
  __int64 v16; // rax
  int v17; // r12d
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 *v20; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rcx
  _QWORD v28[9]; // [rsp+0h] [rbp-48h] BYREF

  v28[1] = __readfsqword(0x28u);
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
    if ( (unsigned __int8)sub_19A240((_QWORD *)a1, a2, v5 - *v6) )
      break;
    if ( (unsigned __int8)sub_19A240((_QWORD *)a1, a2, v5 - v6[3]) )
      break;
    if ( (unsigned __int8)sub_19A240((_QWORD *)a1, a2, v5 - v6[4]) )
      break;
    if ( (unsigned __int8)sub_19A240((_QWORD *)a1, a2, v5 - v6[1]) )
      break;
    v24 = v6[2];
    if ( (_WORD)v24 != 0xFFFF )
    {
      if ( (unsigned __int8)sub_19A240((_QWORD *)a1, a2, v5 - v24) )
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
      v25 = (_QWORD *)v3[2];
      if ( (*(_BYTE *)v25 & 2) != 0 )
      {
        v22 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
        v23 = *v22;
        if ( (*v22 & 2) != 0 || v3 != (_QWORD *)v22[2] )
        {
LABEL_22:
          v3 = v22;
        }
        else
        {
          while ( 1 )
          {
            v3 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
            v23 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v23 & 2) != 0 )
              break;
            v27 = v22;
            v22 = v3;
            if ( v27 != (_QWORD *)v3[2] )
              goto LABEL_22;
          }
        }
        goto LABEL_23;
      }
      do
      {
        v3 = v25;
        v25 = (_QWORD *)v25[1];
      }
      while ( (*(_BYTE *)v25 & 2) == 0 );
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
    if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v9 + v10) )
    {
      v26 = qvector_reserve();
      *(_QWORD *)(a1 + 24) = v26;
      v13 = v26;
      v12 = 8LL * *(_QWORD *)(a1 + 32) - v14;
    }
    v15 = (char *)(v13 + v14);
    memmove(&v15[v8], v15, v12);
    v16 = 0;
    if ( v8 )
    {
      do
      {
        *(_QWORD *)&v15[v16] = *(_QWORD *)(v11 + v16);
        v16 += 8;
      }
      while ( v8 != v16 );
    }
    *(_QWORD *)(a1 + 32) += v9;
    v7 = *(_QWORD *)(a2 + 104);
  }
  v17 = 0;
  v18 = 0;
  if ( v7 )
  {
LABEL_12:
    if ( !(unsigned __int8)sub_32F330(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v18) + 64LL, v28) )
    {
      if ( !under_debugger )
        sub_383060(51357);
      BUG();
    }
    v19 = *(__int64 **)(a1 + 8);
    if ( !v19 )
      goto LABEL_19;
    v20 = (__int64 *)(*v19 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v20 )
      goto LABEL_35;
    if ( (*(_BYTE *)(*v19 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_19;
    while ( 1 )
    {
      if ( v28[0] >= v20[3] )
      {
        if ( v28[0] <= v20[3] )
        {
          if ( v20 != v19 )
          {
LABEL_35:
            ++v17;
            sub_1A72E0((unsigned __int64 **)(a1 + 8), v20);
            v18 = v17;
            if ( (unsigned __int64)v17 >= *(_QWORD *)(a2 + 104) )
              return 1;
            goto LABEL_12;
          }
LABEL_19:
          v18 = ++v17;
          if ( (unsigned __int64)v17 >= *(_QWORD *)(a2 + 104) )
            return 1;
          goto LABEL_12;
        }
        v20 = (__int64 *)v20[2];
      }
      else
      {
        v20 = (__int64 *)v20[1];
      }
      if ( (*(_BYTE *)v20 & 2) != 0 )
        goto LABEL_19;
    }
  }
  return 1;
}
