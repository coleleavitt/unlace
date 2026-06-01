__int64 __fastcall sub_5194D0(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // r9
  unsigned __int64 *v9; // r12
  unsigned __int64 v10; // r13
  unsigned int v11; // r12d
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  unsigned __int64 *v15; // rax
  unsigned __int64 *v16; // rax
  unsigned __int64 *v17; // r9
  unsigned __int64 *v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 1768LL);
  if ( !*(_BYTE *)(v3 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v5 = (int)(a3 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL));
  if ( v5 >= *(_QWORD *)(v3 + 40) )
    sub_5144F0(a1, a2);
  v6 = v5 << 6;
  *(_DWORD *)(*(_QWORD *)(v3 + 32) + v6 + 56) = a3;
  v7 = *(_QWORD *)(v3 + 32) + v6;
  v9 = sub_5168B0((unsigned __int64 **)v7, a2);
  if ( v9 != (unsigned __int64 *)(*(_QWORD *)v7 + 33LL * *(_QWORD *)(v7 + 8))
    && (v10 = *v9, a2 >= *v9)
    && a2 < v9[1]
    && v9
    && a2 == v10
    && *sub_505D70(v8 + 1624, *v9) != v10
    && (v13 = v9[1], v11 = sub_516950(v7, v10), (_BYTE)v11) )
  {
    v14 = v10 - 1;
    v15 = sub_5168B0((unsigned __int64 **)v7, v10 - 1);
    if ( v15 != (unsigned __int64 *)(*(_QWORD *)v7 + 33LL * *(_QWORD *)(v7 + 8)) && v14 >= *v15 && v14 < v15[1] )
    {
      if ( v15 )
      {
        v16 = sub_5168B0((unsigned __int64 **)v7, v14);
        v18 = v16;
        if ( v17 != v16 )
        {
          v19 = *v16;
          if ( v14 >= v19 )
          {
            v20 = v18[1];
            if ( v14 < v20
              && v19 < v13
              && (v20 >= v13
               || v17 == (unsigned __int64 *)((char *)v18 + 33)
               || *(unsigned __int64 *)((char *)v18 + 33) >= v13) )
            {
              sub_5154D0(*(unsigned int *)(v7 + 56), v19, v20, v13);
              v18[1] = v13;
              *((_BYTE *)v18 + 32) = 1;
            }
          }
        }
      }
    }
    sub_39ADA0(0x3Eu, v10, v13, a3);
  }
  else
  {
    return 0;
  }
  return v11;
}
