__int64 __fastcall sub_14850(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 **v9; // rax
  __int64 *v10; // rbp
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(v5 + 504);
  if ( v6 )
    v4 = *(_QWORD *)(*(_QWORD *)v6 + 8LL);
  v7 = sub_143C0(*(_QWORD *)(a1 + 16), a2, a3, a4);
  v8 = *(_QWORD *)(v5 + 504);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 8) = 0;
    v9 = *(__int64 ***)(v5 + 504);
    v10 = *v9;
    if ( (_BYTE)v7 )
    {
      v11 = *(unsigned __int16 *)(a2 + 26);
      if ( v11 < v10[1] && v10 )
        v10[1] = v11;
    }
    else if ( v10 )
    {
      v13 = v10[1];
      if ( v13 < v4 )
      {
        v14 = *v10;
        if ( v10[2] < v4 )
        {
          v15 = qvector_reserve(*v9, v14, v4, 1);
          v13 = v10[1];
          *v10 = v15;
          v14 = v15;
        }
        memset((void *)(v14 + v13), 0, v4 - v13);
        v10[1] = v4;
      }
      else if ( v4 != v13 )
      {
        v10[1] = v4;
      }
    }
  }
  return v7;
}
