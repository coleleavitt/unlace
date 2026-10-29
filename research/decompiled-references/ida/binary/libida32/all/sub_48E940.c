__int64 __fastcall sub_48E940(__int64 a1, __int64 a2, __int64 a3, __int32 a4)
{
  unsigned int v4; // r13d
  __int64 v6; // r12
  __int64 v7; // rbp
  unsigned __int64 v9; // rax
  __int64 v11; // r8
  unsigned int v12; // r14d
  bool v13; // al
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned int v22; // eax
  unsigned int v23; // r14d
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // [rsp+8h] [rbp-50h]
  __int64 v31; // [rsp+8h] [rbp-50h]
  int v32; // [rsp+10h] [rbp-48h]
  __int64 v33; // [rsp+10h] [rbp-48h]
  unsigned int v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+18h] [rbp-40h]
  int v36; // [rsp+18h] [rbp-40h]

  v6 = a4;
  v7 = (int)a3;
  v9 = *(_QWORD *)a2 & 0xFLL;
  if ( v9 == 11 )
    return sub_48D960(a1, (unsigned int *)(a2 + 12), (unsigned int)a3, a4, 1);
  if ( v9 <= 0xB )
  {
    if ( v9 != 8 )
    {
      if ( v9 == 10 )
        return sub_4565A0(a1, a2 + 8, a3, a4);
      return 1;
    }
    return sub_48D960(a1, (unsigned int *)(a2 + 12), (unsigned int)a3, a4, 1);
  }
  if ( v9 == 12 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(__int16 *)(a2 + 8);
    LOBYTE(v4) = (_DWORD)a3 == a4 || (_DWORD)a3 == 2;
    if ( (_BYTE)v4 )
      sub_47DF80(a1, a2, a3, (unsigned int)*(__int16 *)(a2 + 10));
    v35 = *(_QWORD *)(a1 + 8);
    v32 = *(__int16 *)(a2 + 10);
    v30 = v11 + 240;
    v13 = sub_3E3CD0(v11 + 240, v12);
    v14 = v32;
    v15 = v35;
    if ( !v13 )
      goto LABEL_19;
    v16 = 48LL * (int)v7;
    v17 = v30 + v16 + 32;
    v18 = *(_QWORD *)(v35 + v16 + 280);
    if ( !v18 )
      goto LABEL_19;
    v19 = v17;
    do
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v18 + 16);
        v21 = *(_QWORD *)(v18 + 24);
        if ( *(_DWORD *)(v18 + 32) < v12 )
          break;
        v19 = v18;
        v18 = *(_QWORD *)(v18 + 16);
        if ( !v20 )
          goto LABEL_15;
      }
      v18 = *(_QWORD *)(v18 + 24);
    }
    while ( v21 );
LABEL_15:
    if ( v17 != v19
      && v12 >= *(_DWORD *)(v19 + 32)
      && (v36 = v32,
          v33 = *(_QWORD *)(v15 + 240) + 12LL * *(_QWORD *)(v19 + 40),
          LOBYTE(v22) = sub_3E3CD0(v30, *(_DWORD *)(v33 + 4LL * (int)v6)),
          v14 = v36,
          v23 = v22,
          (_BYTE)v22) )
    {
      *(_WORD *)(a2 + 8) = *(_DWORD *)(v33 + 4LL * (int)v6);
    }
    else
    {
LABEL_19:
      v23 = 0;
    }
    v24 = *(_QWORD *)(a1 + 8);
    v34 = v14;
    v31 = v24 + 360;
    if ( sub_3E3CD0(v24 + 360, v14) )
    {
      v25 = *(_QWORD *)(v24 + 48 * v7 + 400);
      if ( v25 )
      {
        v26 = v31 + 48 * v7 + 32;
        do
        {
          while ( 1 )
          {
            v27 = *(_QWORD *)(v25 + 16);
            v28 = *(_QWORD *)(v25 + 24);
            if ( *(_DWORD *)(v25 + 32) < v34 )
              break;
            v26 = v25;
            v25 = *(_QWORD *)(v25 + 16);
            if ( !v27 )
              goto LABEL_26;
          }
          v25 = *(_QWORD *)(v25 + 24);
        }
        while ( v28 );
LABEL_26:
        if ( v26 != v31 + 48 * v7 + 32 && v34 >= *(_DWORD *)(v26 + 32) )
        {
          v29 = *(_QWORD *)(v24 + 360) + 12LL * *(_QWORD *)(v26 + 40);
          if ( sub_3E3CD0(v31, *(_DWORD *)(v29 + 4 * v6)) )
          {
            v4 = v23;
            *(_WORD *)(a2 + 10) = *(_DWORD *)(v29 + 4 * v6);
          }
        }
      }
    }
    return v4;
  }
  return 1;
}

