__int64 __fastcall sub_1AF2E40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = *(_QWORD *)(a1 + 8);
  v6 = 103;
  v7 = *(unsigned int *)(v4 + 344);
  if ( (_DWORD)v7 )
  {
    a4 = *(_QWORD *)(v4 + 336) + 6776 * v7 - 6776;
    if ( *(_QWORD *)(a4 + 6768) == *(_QWORD *)(v4 + 328) )
    {
      v16 = *(unsigned int *)(a4 + 8);
      v4 = *(unsigned int *)(v4 + 27504);
      if ( (unsigned int)v16 > (unsigned int)v4 )
      {
        v17 = v16 - v4;
        if ( v17 )
        {
          v18 = *(_QWORD *)a4 + 1688 * (v17 - 1);
          if ( v18 )
            v6 = *(unsigned int *)(v18 + 976);
        }
      }
    }
  }
  result = sub_FFEF70(v6, a2, v4, a4);
  if ( (_BYTE)result )
  {
    v9 = *(_QWORD *)(a1 + 8);
    result = 0;
    v10 = *(unsigned int *)(v9 + 344);
    if ( (_DWORD)v10 )
    {
      v11 = *(_QWORD *)(v9 + 336) + 6776 * v10 - 6776;
      if ( *(_QWORD *)(v11 + 6768) == *(_QWORD *)(v9 + 328) )
      {
        v12 = *(unsigned int *)(v11 + 8);
        v13 = *(unsigned int *)(v9 + 27504);
        if ( (unsigned int)v12 > (unsigned int)v13 )
        {
          v14 = v12 - v13;
          if ( v14 )
          {
            v15 = *(_QWORD *)v11 + 1688 * (v14 - 1);
            if ( v15 )
              return *(unsigned __int8 *)(v15 + 1105);
          }
        }
      }
    }
  }
  return result;
}
