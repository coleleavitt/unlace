unsigned __int64 __fastcall sub_735050(__int64 a1, unsigned int a2, __int64 (*a3)(void))
{
  _QWORD *v4; // rbp
  __int64 v5; // r14
  int v6; // ebx
  unsigned __int64 result; // rax
  _WORD *v8; // rsi
  int v9; // r8d
  __int64 v10; // rdi
  int v11; // edx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int16 **v17; // rdx
  int v18; // eax
  unsigned __int16 *v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int16 *v23; // r12
  int v24; // r13d
  __int64 v25; // rdx
  unsigned __int16 *v26; // rsi
  unsigned __int16 *v27; // r14
  int v28; // r13d
  __int64 v29; // rdx
  unsigned __int16 *v30; // rbx
  __int64 v31; // rdx
  unsigned __int16 *v32; // rsi

  v4 = *(_QWORD **)(*(_QWORD *)(a1 + 2664) + 8LL);
  if ( !v4 && *(__int16 *)(a1 + 1634) > 0 )
  {
    v30 = (unsigned __int16 *)(a1 + 1640);
    do
    {
      v31 = *v30;
      v32 = v30;
      LODWORD(v4) = (_DWORD)v4 + 1;
      v30 += 16;
      sub_737D90(a1, v32, v31);
    }
    while ( (int)v4 < *(__int16 *)(a1 + 1634) );
    v4 = *(_QWORD **)(*(_QWORD *)(a1 + 2664) + 8LL);
  }
  v5 = *v4;
  if ( *(_WORD *)*v4 )
  {
    result = sub_736DE0(*v4, a2);
  }
  else
  {
    v6 = sub_737600(*v4, a2);
    result = v6 | (unsigned int)sub_736DE0(v5, a2);
  }
  v8 = (_WORD *)*v4;
  v9 = 4 * (*(__int16 *)(*v4 + 2LL) + 4) + 4;
  v10 = (unsigned int)*(unsigned __int16 *)(*v4 + 4LL * *(__int16 *)(*v4 + 2LL) + 6) - v9;
  *((_WORD *)v4 + 4) = *(_WORD *)(*v4 + 4LL * *(__int16 *)(*v4 + 2LL) + 6) - v9;
  if ( (_BYTE)result )
  {
    *((_DWORD *)v4 + 8) = -1;
    v10 = a1;
    result = sub_7340D0(a1, (__int64)v4);
    v8 = (_WORD *)*v4;
    if ( a3 )
    {
      v11 = (__int16)v8[1];
      dword_2CCC4C4 += v11;
      v10 = (unsigned int)dword_2CCC4C4;
      result = (unsigned int)(10000 * (dword_2CCC4C4 / 10000));
      if ( v11 > dword_2CCC4C4 % 10000 )
      {
        result = a3();
        v8 = (_WORD *)*v4;
      }
    }
  }
  if ( *v8 )
  {
    v12 = 0;
    do
    {
      v13 = *(_QWORD *)(a1 + 2664);
      v14 = *(_QWORD *)(v13 + 8);
      if ( !v14 && *(__int16 *)(a1 + 1634) > 0 )
      {
        v23 = (unsigned __int16 *)(a1 + 1640);
        v24 = 0;
        do
        {
          v25 = *v23;
          v26 = v23;
          v10 = a1;
          ++v24;
          v23 += 16;
          sub_737D90(a1, v26, v25);
        }
        while ( v24 < *(__int16 *)(a1 + 1634) );
        v13 = *(_QWORD *)(a1 + 2664);
        v14 = *(_QWORD *)(v13 + 8);
      }
      v15 = *(__int16 *)(*(_QWORD *)v14 + 2LL);
      if ( v12 == 0x80000000 || v12 >= v15 && (_DWORD)v15 != (_DWORD)v12 )
      {
        if ( !under_debugger )
          interr(835);
        BUG();
      }
      *(_DWORD *)(v13 + 24) = v12;
      *(_WORD *)(v13 + 28) = 0;
      v16 = *(_QWORD *)(a1 + 2664);
      v17 = *(unsigned __int16 ***)(v16 + 8);
      if ( !v17 && *(__int16 *)(a1 + 1634) > 0 )
      {
        v27 = (unsigned __int16 *)(a1 + 1640);
        v28 = 0;
        do
        {
          v29 = *v27;
          v15 = (unsigned __int64)v27;
          v10 = a1;
          ++v28;
          v27 += 16;
          sub_737D90(a1, v15, v29);
        }
        while ( v28 < *(__int16 *)(a1 + 1634) );
        v16 = *(_QWORD *)(a1 + 2664);
        v17 = *(unsigned __int16 ***)(v16 + 8);
      }
      v18 = *(_DWORD *)(v16 + 24);
      v19 = *v17;
      if ( v18 )
        v20 = v19[2 * v18];
      else
        v20 = *v19;
      if ( !(_WORD)v20 )
        sub_737820(v10, v15, v20);
      v21 = *(__int16 *)(a1 + 1634);
      if ( v21 > 0x1E )
        sub_7377F0(24, 0);
      ++v12;
      ++*(_WORD *)(a1 + 1634);
      v22 = a1 + 32 * v21 + 1640;
      *(_QWORD *)(a1 + 2664) = v22;
      sub_737D90(a1, v22, v20);
      sub_735050(a1, a2, a3);
      v10 = a1;
      sub_737E40(a1, (unsigned int)(__int16)(*(_WORD *)(a1 + 1634) - 1));
      result = *(__int16 *)(*v4 + 2LL);
    }
    while ( result >= v12 );
  }
  return result;
}
