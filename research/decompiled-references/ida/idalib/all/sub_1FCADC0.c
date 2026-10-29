__int64 __fastcall sub_1FCADC0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // r14

  v3 = a1 + 32;
  sub_1FC2690(a1, a2);
  v5 = *(_QWORD *)(a2 + 48);
  v6 = a1 + 32;
  v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v5 & 4) == 0 )
    v7 = 0;
  sub_183F100(v6, v7);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 40), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 44), *(_QWORD *)(a1 + 24));
  v8 = (*(__int64 *)(a2 + 56) >> 1) & 1;
  sub_9B9C90(*(_QWORD *)(a1 + 24), !((*(__int64 *)(a2 + 56) >> 1) & 1));
  v9 = *(_QWORD *)(a2 + 56);
  v10 = 0;
  if ( v8 )
  {
    if ( v9 && (v9 & 2) != 0 )
      v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
    sub_1F92A90(*(_QWORD *)(a1 + 16), v10, *(_QWORD *)(a1 + 24));
  }
  else
  {
    if ( v9 )
    {
      v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v9 & 2) != 0 )
        v10 = 0;
    }
    sub_183F100(v3, v10);
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_DWORD *)a2 >> 19) & 1);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (unsigned int)((__int64)(*(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16)) >> 3));
  if ( v8 )
  {
    result = *(_QWORD *)(a2 + 16);
    v18 = (*(_QWORD *)(a2 + 24) - result) >> 3;
    if ( (_DWORD)v18 )
    {
      v19 = 0;
      v20 = 8LL * (unsigned int)(v18 - 1);
      while ( 1 )
      {
        result = sub_183F100(v3, *(_QWORD *)(result + v19));
        if ( v20 == v19 )
          break;
        result = *(_QWORD *)(a2 + 16);
        v19 += 8;
      }
    }
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 56);
    v12 = 0;
    if ( v11 && (v11 & 2) == 0 )
      v12 = v11 & 0xFFFFFFFFFFFFFFFCLL;
    result = *(_QWORD *)(a2 + 16);
    v14 = (*(_QWORD *)(a2 + 24) - result) >> 3;
    if ( (_DWORD)v14 )
    {
      v15 = 0;
      v16 = 8LL * (unsigned int)(v14 - 1);
      while ( 1 )
      {
        v17 = *(_QWORD *)(result + v15);
        if ( v12 == v17 )
        {
          result = sub_183F100(v3, 0);
          if ( v15 == v16 )
            break;
        }
        else
        {
          result = sub_183F100(v3, v17);
          if ( v15 == v16 )
            break;
        }
        result = *(_QWORD *)(a2 + 16);
        v15 += 8;
      }
    }
  }
  *(_DWORD *)(a1 + 224) = 195;
  return result;
}
