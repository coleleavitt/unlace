__int64 __fastcall sub_40DDF0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 result; // rax
  unsigned int i; // r14d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-58h]
  __int64 v16; // [rsp+8h] [rbp-50h]
  _QWORD v17[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 )
  {
    v11 = a1[31];
    v17[0] = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    sub_407600((unsigned int **)(a4 + 8), v17);
    v12 = a1[30];
    if ( v12 )
    {
      v13 = *(unsigned int *)(v12 - 4);
      if ( (_DWORD)v13 )
      {
        v16 = a1[1];
        v14 = sub_15EC240(a1[29], v13);
        v15 = v14;
        if ( v14 )
        {
          *(_DWORD *)(v14 + 8) += 2;
          v17[0] = v14;
        }
        else
        {
          v17[0] = 0;
        }
        sub_407600((unsigned int **)(a4 + 8), v17);
        sub_3FCDF0(v15, v16);
      }
    }
  }
  else
  {
    v7 = a1[33];
    v17[0] = v7;
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    sub_407600((unsigned int **)(a4 + 8), v17);
  }
  result = a1[14];
  for ( i = 0; result; result = a1[14] )
  {
    if ( i >= *(_DWORD *)(result - 4) )
      break;
    v10 = *(_QWORD *)(result + 8LL * i++);
    sub_40DC70(a1, a2, a3, v10, a4);
  }
  return result;
}

