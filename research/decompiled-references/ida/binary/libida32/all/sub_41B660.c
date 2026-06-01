__int64 __fastcall sub_41B660(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r12
  __int64 result; // rax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax

  v4 = *(_QWORD *)(a2 + 544);
  result = sub_79B370(a2, v4 + 104);
  if ( (_BYTE)result )
  {
    v6 = sub_614FB0(**(_QWORD **)(a2 + 1480), 19);
    v7 = ea2node(v6);
    v8 = netnode_supnext(*(unsigned int *)(v4 + 104), v7, 0);
    result = node2ea(v8);
    v9 = result;
    if ( (_DWORD)result != -1 )
    {
      netnode_charval(*(unsigned int *)(v4 + 104), (unsigned int)result, 256);
      v10 = a3[1];
      v11 = *a3;
      if ( a3[2] < (unsigned __int64)(v10 + 1) )
      {
        v15 = qvector_reserve(a3, v11, v10 + 1, 24);
        v10 = a3[1];
        *a3 = v15;
        v11 = v15;
      }
      v12 = v11 + 24 * v10;
      *(_QWORD *)v12 = 0;
      *(_OWORD *)(v12 + 8) = 0;
      ++a3[1];
      sub_3573A0((char **)v12);
      v13 = ea2node(v9);
      v14 = netnode_supnext(*(unsigned int *)(v4 + 104), v13, 0);
      return node2ea(v14);
    }
  }
  return result;
}

