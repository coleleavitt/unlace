_BYTE *__fastcall sub_E8C200(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rdx
  _BYTE *result; // rax
  __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // rdi
  __int64 *v15; // rbx
  __int64 v16; // rdi
  _WORD *v17; // rdx
  _QWORD *v18; // rdx

  v3 = *a1;
  v4 = *(_DWORD **)(v3 + 32);
  result = (_BYTE *)(*(_QWORD *)(v3 + 24) - (_QWORD)v4);
  if ( (unsigned __int64)result > 3 )
  {
    *v4 = 1953063287;
    *(_QWORD *)(v3 + 32) += 4LL;
  }
  else
  {
    result = (_BYTE *)sub_22581D0(v3, "wait", 4);
  }
  if ( *(_DWORD *)(a2 + 20) )
  {
    v6 = *a1;
    v7 = *(_BYTE **)(*a1 + 32LL);
    if ( *(_BYTE **)(*a1 + 24LL) == v7 )
    {
      sub_22581D0(v6, "(", 1);
    }
    else
    {
      *v7 = 40;
      ++*(_QWORD *)(v6 + 32);
    }
    v8 = *a1;
    if ( **(_QWORD **)(a2 + 24) )
    {
      v9 = *(_QWORD **)(v8 + 32);
      if ( *(_QWORD *)(v8 + 24) - (_QWORD)v9 > 7u )
      {
        *v9 = 0x203A6D756E766564LL;
        *(_QWORD *)(v8 + 32) += 8LL;
      }
      else
      {
        sub_22581D0(*a1, "devnum: ", 8);
      }
      sub_EE3EC0(**(_QWORD **)(a2 + 24), *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
      v10 = *a1;
      v11 = *(_QWORD *)(*a1 + 32LL);
      if ( (unsigned __int64)(*(_QWORD *)(*a1 + 24LL) - v11) > 2 )
      {
        *(_BYTE *)(v11 + 2) = 32;
        *(_WORD *)v11 = 14880;
        *(_QWORD *)(v10 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(v10, " : ", 3);
      }
      v8 = *a1;
    }
    if ( *(_DWORD *)(a2 + 40) )
    {
      v18 = *(_QWORD **)(v8 + 32);
      if ( *(_QWORD *)(v8 + 24) - (_QWORD)v18 > 7u )
      {
        *v18 = 0x203A736575657571LL;
        *(_QWORD *)(v8 + 32) += 8LL;
      }
      else
      {
        sub_22581D0(v8, "queues: ", 8);
      }
      v8 = *a1;
    }
    v12 = *(_QWORD *)(a2 + 24);
    v13 = (__int64 *)(v12 + 8LL * *(_QWORD *)(a2 + 32));
    if ( (__int64 *)(v12 + 8) != v13 )
    {
      v14 = *(_QWORD *)(v12 + 8);
      v15 = (__int64 *)(v12 + 16);
      sub_EE3EC0(v14, v8, 0, a1[1], 0, 0, (__int64)"\n", 1);
      while ( v13 != v15 )
      {
        v17 = *(_WORD **)(v8 + 32);
        if ( *(_QWORD *)(v8 + 24) - (_QWORD)v17 > 1u )
        {
          *v17 = 8236;
          *(_QWORD *)(v8 + 32) += 2LL;
        }
        else
        {
          sub_22581D0(v8, ", ", 2);
        }
        v16 = *v15++;
        sub_EE3EC0(v16, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
      }
      v8 = *a1;
    }
    result = *(_BYTE **)(v8 + 32);
    if ( result == *(_BYTE **)(v8 + 24) )
    {
      return (_BYTE *)sub_22581D0(v8, ")", 1);
    }
    else
    {
      *result = 41;
      ++*(_QWORD *)(v8 + 32);
    }
  }
  return result;
}

